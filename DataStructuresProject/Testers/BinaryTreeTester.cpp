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
    cout << "int in order traversal:" << endl;
    testTree.inOrderTraversal();
    cout << "int pre order traversal:" << endl;
    testTree.preOrderTraversal();
    cout << "int post order traversal:" << endl;
    testTree.postOrderTraversal();
    cout << "Height:" << endl;
    cout << testTree.getHeight() << endl;
    cout << "Is balanced:" << endl;
    cout << testTree.isBalanced() << endl;
    cout << "Is complete:" << endl;
    cout << testTree.isComplete() << endl;
    
    
    wordTree.insert("Wassup");
    wordTree.insert("Yeet");
    wordTree.insert("Fish");
    wordTree.insert("Alphabet");
    wordTree.insert("Zebra");
    wordTree.insert("Food");
    wordTree.insert("Pizza");
    cout << "string in order traversal:" << endl;
    wordTree.inOrderTraversal();
    cout << "string pre order traversal:" << endl;
    wordTree.preOrderTraversal();
    cout << "string post order traversal:" << endl;
    wordTree.postOrderTraversal();
    cout << "Height:" << endl;
    cout << wordTree.getHeight() << endl;
    cout << "Is Balanced:" << endl;
    cout << wordTree.isBalanced() << endl;
    cout << "Is Complete:" << endl;
    cout << wordTree.isComplete() << endl;
}
