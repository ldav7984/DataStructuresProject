//
//  Array.hpp
//  DataStructuresProject
//
//  Created by Davis, Lauren on 1/30/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h> //validating user supplied data
#include <iostream> //tracing and debugging

using namespace std; //keyword access

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Constructor
    Array<Type>(int size);
    //Copy Constructor
    Array<Type<(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type< & operator = (const Array<Type< & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};
    
    //Template definitions//
    
    //Constructor
    template <class Type>
    Array<Type> :: Array(int size)
    {
        assert(size > 0);
        this->size = size;
        
        internalArray = new Type[size];
    }

    //Copy constructor
    template <class Type>
    Array<Type> :: Array(const Array<Type> & toCopy)
    {
        this->size = toCopy.getSize();
        
        internalArray = new Type[size];
        
        for(int index = 0; index < size; index++)
        {
            internalArray[index] = toCopy[index];
        }
    }
    
    //Destructor
    template <class Type>
    Array<Type> :: ~Array()
    {
        delete [] internalArray;
    }
    
    
#endif /* Array_hpp */
