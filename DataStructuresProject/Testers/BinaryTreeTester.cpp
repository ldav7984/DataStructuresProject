//
//  BinaryTreeTester.cpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 4/16/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(6);
    testTree.insert(12);
    testTree.insert(37);
    testTree.insert(101);
    testTree.insert(1200);
    testTree.insert(567);
    testTree.insert(2);
    testTree.insert(1000);
    testTree.insert(87);
    
    testTree.inOrderTraversal();
    //testTree.preOrderTraversal();
    //testTree.postOrderTraversal();
    
    wordTree.insert("Hi");
    wordTree.insert("Yeet");
    wordTree.insert("Fish");
    wordTree.insert("Alphabet");
    wordTree.insert("zebra");
    wordTree.insert("Food");
    wordTree.insert("Pizza");
    
    wordTree.inOrderTraversal();
    //wordTree.preOrderTraveresal();
    //wordTree.postOrderTraversal();
}
