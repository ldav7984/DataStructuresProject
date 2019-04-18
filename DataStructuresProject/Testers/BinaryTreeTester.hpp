//
//  BinaryTreeTester.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 4/16/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    
    BinarySearchTree<int> testTree;
    BinarySearchTree<string> wordTree;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
