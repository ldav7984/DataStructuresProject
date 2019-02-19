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
    //testFiles(); //"read from file" assignment
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
