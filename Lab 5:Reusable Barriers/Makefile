#Ailish Kavanagh, C00206130
#MakeFile to compile main.cpp
#for Lab 5: Reusable Barriers
#Renamed exe as mutualExclusion
#compile with Semaphore.cpp, Barrier.cpp and main.cpp


CC=g++
CFLAGS= -std=c++11 -pthread -O0

#This rule says that each .o file depends on a .cpp file of the same name
%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(DEBUGFLAGS)

ALL: main.o
	$(CC) -o lab5 Semaphore.cpp Barrier.cpp main.cpp $(CFLAGS) $(DEBUGFLAGS)

DEBUG: DEBUGFLAGS = -DDEBUG
DEBUG: ALL

#deletes all .o files
CLEAN:
	rm *.o
