/* SafeBuffer.h --- 
 * 
 * Filename: SafeBuffer.h
 * Author: Ailish Kavanagh, C00206130
 * Description: Set the methods and shared variabes for SafeBuffer.cpp
*/
/* Code: */

#pragma once
#include "Event.h"
#include "Semaphore.h"
#include <vector>

class SafeBuffer{
    private:
        std::vector<Event> theData;
        std::shared_ptr<Semaphore> theMutex;
        std::shared_ptr<Semaphore> theSemaphore;

    public:
        SafeBuffer();
        int push(Event);
        Event pop();
};


/* SafeBuffer.h ends here */
