#Ailish Kavanagh, C00206130
#MakeFile to compile main.cpp
#for Lab 2:Semaphores
#Renamed exe as signal
#compile with Semaphore.cpp and main.cpp


CC=g++
CFLAGS= -std=c++11 -pthread -O0

#This rule says that each .o file depends on a .cpp file of the same name
%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(DEBUGFLAGS)

ALL: main.o
	$(CC) -o signal Semaphore.cpp main.cpp $(CFLAGS) $(DEBUGFLAGS)

DEBUG: DEBUGFLAGS = -DDEBUG
DEBUG: ALL

#this is customary and just deletes all .o files
CLEAN:
	rm *.o
