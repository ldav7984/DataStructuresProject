//
//  Controller.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 1/28/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Testers/LinkedListTester.hpp"
#include "../Testers/GraphTester.hpp"
#include "../Testers/BinaryTreeTester.hpp"
#include "FileController.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
    void testLinkedList();
    void testGraph();
    void testBinaryTree();
public:
    void start();
    void testFiles();
};

#endif /* Controller_hpp */
