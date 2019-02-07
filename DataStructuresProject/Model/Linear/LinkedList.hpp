//
//  LinkedList.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 2/7/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include "List.hpp"

using namespace std;

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Tpe>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList(); //virtual so it can be overriden
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure methods
    void add(Type item);
    void addAtInde(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //Type setAtIndex(int index, Type item);
    //bool contains(Type item);
};

//Constructor
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

//Destructor
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front !=  nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}


//Structure Methods//

//Adds an item
void LinkedList<Type> ::  add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0) //if first item in list just add it to the first spot
    {
        this->front = newData;
    }
    else //Else add it to the next spot
    {
        this->end->setNextNode(newData);
    }
    this->end = newData;
    
    this->size += 1;
}

//Adds item to a certain place
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size) //If it's the first item just use the add() method.
    {
        add(item);
    }
    else //Keeps track of pointers to traverse the nodes and adds the new item where needed
    {
        LinearNode<Type> * previous = nullptr;
        LinearNode<Type> * current = front;
        for (int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextNode();
        }
        previous->setNextNode(toBeAdded);
        toBeAdded->setNextNode(current);
    }
    this->size++;
}

//Returns what item is at the given index
Type LinkedList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->size); //Checks validity of parameter
    Type data;
    
    LinearNode<Type> * current = front;
    
    //find that location and retrieve the value
    for (int position = 0; position < index; position++)
    {
        current = current->getNextNode();
    }
    
    data = current->getData();
    
    return data;
}

Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->size); //Check index for validity
    
    LinearNod<Type> * current = front;
    LinearNode<Type> * toBeRemoved = nullptr;
    LinearNode<Type> * previous = nullptr;
    
    Type removedData;
    
    if(index == 0) //if it's the first LinearNode in the structure
    {
        toBeRemoved = front;
        this->front = this->front->getNextNode();
    }
    else //
    {
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextNode();
        }
        
        toBeRemoved = current;
        
        if(index == this->size -1)
        {
            previous->setNextNode(nullptr);
            end = previous;
        }
        else
        {
            current = toBeRemoved->getNextNode();
            previous->setNextNode(current);
        }
    }
    this->size -= 1;
    
    removedData = toBeRemoved->getData();
    delete toBeRemoved;
    return removedData;
}


//Helper Methods//

LinearNode<Type> * LinkedList<Type> :: getEnd()
{
    return this->end;
}

LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this->front;
}

int LinkedList<Type> :: getSize() const
{
    return this->size;
}

#endif /* LinkedList_hp */
