//
//  LinkedListTester.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 2/19/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp

#include <iostream>
#include "../Model/Linear/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Resources/CrimeData.hpp"

class LinkedListTester
{
public:
    void testListBasics();
    void testListWithData();
};

#endif /* LinkedListTester_hpp */
