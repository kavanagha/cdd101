/* Barrier.h --- Barrier.h
 * 
 * Filename: Barrier.h
 * Description: Declare member variables and methods for Barrier.cpp
 * Author: Ailish Kavanagh, C00206130
 */

/* Code: */

#pragma once
#include "Semaphore.h"
class Barrier{
private:
  int numThreads;
  int current_count;
  std::shared_ptr<Semaphore> lock;
  std::shared_ptr<Semaphore> turnstile_one;
  std::shared_ptr<Semaphore> turnstile_two;
public:
  Barrier(int numThreads);
  virtual ~Barrier();
  void wait();
  void phase_one();
  void phase_two(); 
};


/* Barrier.h ends here */

