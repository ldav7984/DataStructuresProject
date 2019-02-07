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

LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

LinkedList<Type< :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front !=  nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}


#endif /* LinkedList_hp */
