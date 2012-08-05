# Makefile for SoulCatcher
# DSH

all: SST_main

CC = g++ 

INCLUDE = .

CPPFLAGS = -frepo -Wall

LIBS = 

SST_main: SST_call.o 
	$(CC) -o  SST $(LIBS) -I$(INCLUDE) SST_call.cpp 

SST_call: SST_call.cpp
	$(CC) -I$(INCLUDE) $(CPPFLAGS) -c SST_call.cpp

clean:
	rm *.o *.rpo SST -f
