/* SafeBuffer.cpp --- 
 * 
 * Filename: SafeBuffer.cpp
 * Description: 
 * Author: Ailish Kavanagh, C00206130
 *     Update #: 1
 * Description: Make sure only one thread can access theData at at a time (locking and unlocking semaphore)
 *     Also, checking that the consumer cannot consumer any of theData before the produced has produced and added to theData
 */

/* Code: */


#include "SafeBuffer.h"
#include <iostream>
#include <stdlib.h>

SafeBuffer::SafeBuffer(){
    theMutex = std::make_shared<Semaphore>(1);
    theSemaphore = std::make_shared<Semaphore>(0);
}

//Add data to shared variable - producer
int SafeBuffer::push(Event newChar){
    theMutex->Wait();
    theData.push_back(newChar);
    int size = theData.size();
    theMutex->Signal();
    theSemaphore->Signal();
    return size;
}

//Remove data from shared variable - consumer 
Event SafeBuffer::pop(){
    theSemaphore->Wait();
    theMutex->Wait();
    Event e = theData.back();
    theData.pop_back();
    theMutex->Signal();
    return e;
}
