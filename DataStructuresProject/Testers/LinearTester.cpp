//
//  LinearTester.cpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 2/13/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include "LinearTester.hpp"

//test Standard Template Library
void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout  << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds." << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "Ths is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds." << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL random retrieval: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds." << endl;
    
    randomIndex = rand() % musicList.getSize();
    
    musicSTL.startTimer();
    tunez[randomIndex];
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "This is the STL random retrieval: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds." << endl;
}

//processing a vector<CrimeData> into a Stack
void LinearTester :: testVsStack()
{
    vector<CrimeData> crimeVector = FileController :: readCrimeDataToVector("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");

    LinkedList<CrimeData> crimeList = FileController :: readDataToList("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");
 
    Stack<CrimeData> crimeStack;
    
    for(int index = 0; index < 10; index++)
    {
        crimeStack.push(crimeVector[index]);
        cout << crimeVector[index] << endl;
    }
}

//processing a vector<Music> into a Queue
void LinearTester :: testVsQueue()
{
    vector<Music>  musicVector = FileController :: musicDataToVector("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/music.csv");
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/music.csv");
    
    Queue<Music> musicQueue;
    
    for(int index = 0; index < 10; index++)
    {
        musicQueue.add(musicVector[index]);
        cout << musicVector[index] << endl;
    }
    
}

//compare time of using double-linked list to single-linked list
void LinearTester :: testVsDouble()
{
    Timer crimeTimerSLL, crimeTimerDLL;
    
    crimeTimerSLL.startTimer();
    LinkedList<CrimeData> crimeLinkedList = FileController :: readDataToList("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");
    crimeTimerSLL.stopTimer();
    
    crimeTimerDLL.startTimer();
    CircularList<CrimeData> crimeCircular = FileController :: readDataToCircular("/Users/ldav7984/C++ Projects/DataStructuresProject/DataStructuresProject/Resources/crime.csv");
    crimeTimerDLL.stopTimer();
    
    cout << "This is the Single Linked List Read time: " << endl;
    crimeTimerSLL.displayInformation();
    cout << "This is the Doubly Linked List Read time: " << endl;
    crimeTimerDLL.displayInformation();
    cout << "A difference of: " << crimeTimerDLL.getTimeInMicroseconds() - crimeTimerSLL.getTimeInMicroseconds() << " microseconds." << endl;

    crimeTimerSLL.resetTimer();
    crimeTimerDLL.resetTimer();
    
    
    int randomIndex = rand() % crimeLinkedList.getSize();
    
    crimeTimerSLL.startTimer();
    crimeLinkedList.getFromIndex(randomIndex);
    crimeTimerSLL.stopTimer();
    
    crimeTimerDLL.startTimer();
    crimeCircular.getFromIndex(randomIndex);
    crimeTimerDLL.stopTimer();
    
    cout << "This is the Single Linked List random retrieval: " << endl;
    crimeTimerSLL.displayInformation();
    cout << "This is the Double Linked List random retrieval: " << endl;
    crimeTimerDLL.displayInformation();
    cout << "A difference of: " << crimeTimerDLL.getTimeInMicroseconds() - crimeTimerSLL.getTimeInMicroseconds() << " microseconds." << endl;
    
}
