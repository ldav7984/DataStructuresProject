//
//  FileController.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 2/5/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    //STL data structures
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
    //LinkedLists
    static LinkedList<CrimeData> readDataToList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    //OOP Array
    static Array<Music> musicDataToArray(string filename);
};



#endif /* FileController_hpp */
