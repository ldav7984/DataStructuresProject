//
//  Timer.hpp
//  TimerProject
//
//  Created by Davis, Lauren on 2/5/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
    
};

#endif /* Timer_hpp */
