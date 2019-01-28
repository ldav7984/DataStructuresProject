//
//  Node.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 1/28/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <assert.h>

template <class Type>
class Node
{
private:
    Type data;
public:
    Node(Type data);
    Type getData();
    void setData(Type data);
};

//Template definitions

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}
//controller

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}
//getter

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}
//setter


#endif /* Node_hpp */
