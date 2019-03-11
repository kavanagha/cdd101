/* Event.cpp --- 
 * 
 * Filename: Event.cpp
 * Author: Ailish Kavanagh, C00206130
 *     Update #: 1
 * Description : Create a char variable to be produced and its upper case version to be consumed
 */

/* Code: */
#include "Event.h"
#include <iostream>
#include <stdlib.h>

//Output a random alphabetic character in lower case
//the produced variable
Event::Event(){
  theChar = 'a'+rand()%26;
  std::cout << theChar;
}

//output a particular character in upper case
//the consumed variable
bool Event::consume(){
    char upperChar = theChar-32;    
    std::cout << upperChar;
}


