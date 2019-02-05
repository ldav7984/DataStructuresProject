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
    usingNodes();
    testFiles();
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

void testFiles()
{
    for(int index = 234; index == 255; index ++)
    {
        cout << index << ": contents are: " << crimeVector[index] << endl;
    }
    for(int index = 234; index == 255; index++)
    {
        cout << index << ": contents are: " << musicVector[index] << endl;
    }

}
