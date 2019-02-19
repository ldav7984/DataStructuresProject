//
//  LinkedListTester.cpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 2/19/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include "LinkedListTester.hpp"

void LinkedListTester :: testListBasics()
{
    cout << "Working with ints!" << endl;
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " is at the end of the list and should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " is at the end of the list and should be 0" << endl;
    
    numbers.addAtIndex(1,2);
    numbers.add(324);
    
    cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData() << " is at the end of the list and should be 324" << endl;
    
    cout << "This loop should print 4 lines" << endl;
    for (int index = 0; index < numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0,2312);
    
    cout << numbers.getFront()->getData() << " is at the front of the list and should be 2312" << endl;
    cout << numbers.getEnd()->getData() << " is at the end of the list and should be 32567" << endl;
    
    
    
    
    cout << "Working with strings!" << endl;
    LinkedList<string> words;
    words.add("McNaldo's! I like the it");
    cout << words.getFront()->getData() << " is at the front of the list and should be McNaldo's" << endl;
    cout << words.getEnd()->getData() << " is at the end of the list and should be McNaldo's" << endl;
    
    words.add("Inoot-Ut Brubge!");
    cout << words.getFront()->getData() << " is at the front of the list and should be McNaldo's" << endl;
    cout << words.getEnd()->getData() << " is at the end of the list and should be Inoot-Ut Brubge" << endl;
    
    words.addAtIndex(1, "TacoBaco! Twinkle outside the binkle.");
    words.add("DonkinDunnts! Amurica Runn No Dundun");
    
    cout << words.getFront()->getData() << " is at the front of the list and should be McNaldo's" << endl;
    cout << words.getEnd()->getData() << " is at the end of the list and should be DonkinDunnts" << endl;
    
    cout << "This loop should print 4 lines" << endl;
    for (int index = 0; index < words.getSize(); index++)
    {
        cout << words.getFromIndex(index) << endl;
    }
    
    words.remove(0);
    words.add("HurgusBurgus");
    words.addAtIndex(0, "AppleBapple's Nehhborhor Grib and Bib");
    
    cout << words.getFront()->getData() << " is at the front of the list and should be AppleBapple's" << endl;
    cout << words.getEnd()->getData() << " is at the end of the list and should be HurgusBurgus" << endl;
}

void LinkedListTester :: testListWithData()
{
    Timer listTimer;
    cout << "Working with CrimeData! Yay???" << endl;
    listTimer.startTimer();
    LinkedList<CrimeData> crimes = FileController :: readDataToList("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");
    listTimer.stopTimer();
    cout << "This is how long it took to read the structure into our custom data structure" << endl;
    listTimer.displayInformation();
    
    listTimer.resetTimer();
    cout << "Here is how long it takes to access a random data value" << endl;
    listTimer.startTimer();
    int randomLocation = (rand() * rand()) % crimes.getSize();
    cout << "The random index is " << randomLocation << endl;
    double totalViolentRate = crimes.getFromIndex(randomLocation).getAllViolentRates();
    listTimer.stopTimer();
    cout << "The random crime stat is: " << totalViolentRate << ", and here is the time" << endl;
    listTimer.displayInformation();
}

//vector<Music> musicVector = FileController :: musicDataToVector("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/music.csv");
//
//vector<CrimeData> crimeVector = FileController :: readCrimeDataToVector("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");
//
//for(int index = 234; index < 256; index++)
//{
//    cout << index << ": contents are: " << crimeVector[index] << endl;
//    }
//    for(int index = 234; index < 256; index++)
//    {
//        cout << index << ": contents are: " << musicVector[index] << endl;
//        }
