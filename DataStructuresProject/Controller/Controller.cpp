//
//  Controller.cpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 1/28/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Data Structures App" << endl;
    
    //usingNodes();
    //testFiles(); //"read from file" assignment
    //testLinear();
    //testLinkedList();
    //testGraph();
    //testBinaryTree();
    int size = 101;
    int position = simpleHash("cat") % size;
    cout << position << endl;
    position = simpleHash("Lauren") % size;
    cout << position << endl;
    position = simpleHash("Henrichsen") % size;
    cout << position << endl;
    position = simpleHash("The quick brown fox jumped over the lazy dog!") % size;
    cout << position << endl;
    
    cout << simpleHash("cat") << endl;
    cout << simpleHash("Lauren") << endl;
    cout << simpleHash("Henrichsen") << endl;
    cout << simpleHash("The quick brown fox jumped over the lazy dog!") << endl;
}

long Controller :: simpleHash(string word)
{
    long hash = 0;
    for (int index = 0; index < word.length(); index++)
    {
        hash += (int)(word[index]);
    }
    return hash;
}


void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    Node<string> wordHolder("Woooords can be stoooored tooooo");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
    
    
}

void Controller :: testLinear()
{
    LinearTester lookitThis;
    //lookitThis.testVsSTL();
    //lookitThis.testVsStack();
    //lookitThis.testVsQueue();
    lookitThis.testVsDouble();
}

void Controller :: testGraph()
{
    GraphTester lookie;
    lookie.testGraphs();
}

void Controller :: testBinaryTree()
{
    BinaryTreeTester tree;
    tree.doTreeStuff();
}

void Controller :: testLinkedList()
{
    LinkedListTester lookieHere;
    lookieHere.testListBasics();
    lookieHere.testListWithData();
}

//Test that the import works by using the FileController to
//import the CrimeData as a C++ Vector and print it to the screen (with a loop)
void Controller :: testFiles()
{
    vector<Music> musicVector = FileController :: musicDataToVector("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/music.csv");

    vector<CrimeData> crimeVector = FileController :: readCrimeDataToVector("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");

    for(int index = 234; index < 256; index++)
    {
        cout << index << ": contents are: " << crimeVector[index] << endl;
    }
    for(int index = 234; index < 256; index++)
    {
        cout << index << ": contents are: " << musicVector[index] << endl;
    }

}
