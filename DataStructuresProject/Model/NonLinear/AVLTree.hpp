//
//  AVLTree.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 4/30/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<TYpe> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
    
public:
    AVLTree();
    void insert(Type itemToInsert);
    void remove(Type value);
};

//Constructor
template <class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}

template <class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertNode(this->getRoot(), item); //recursive method
}

template <class Type>
void AVLTree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item); //recursive method
}

template <class Type> //recursion
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        parent = new BinaryTreeNode<Type>(inserted);
        
        if(this->getRoot() == nullptr)
        {
            this->setRoot(parent);
        }
        return parent;
    }
    else if(inserted < parent->getNodeData())
    {
        parent->setLeftChild(insertNode(parent->getLeftChild(), inserted));
        parent = balanceSubTree(parent);
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(insertNode(parent->getRightChild(), inserted));
        parent = balanceSubTree(parent);
    }
    return parent;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    
}

/*
 
 */
template <class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * node)
{
    
}

#endif /* AVLTree_hpp */
