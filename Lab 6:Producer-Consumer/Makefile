#Ailish Kavanagh, C00206130
#MakeFile to compile main.cpp
#for Lab 6: Producer-Consumer problem
#Renamed exe as mutualExclusion
#compile with Semaphore.cpp, SafeBuffer.cpp, Event.cpp and main.cpp


CC=g++
CFLAGS= -std=c++11 -pthread -O0

#This rule says that each .o file depends on a .cpp file of the same name
%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(DEBUGFLAGS)

ALL: main.o
	$(CC) -o lab6 Semaphore.cpp SafeBuffer.cpp Event.cpp main.cpp $(CFLAGS) $(DEBUGFLAGS)

DEBUG: DEBUGFLAGS = -DDEBUG
DEBUG: ALL

#deletes all .o files
CLEAN:
	rm *.o
