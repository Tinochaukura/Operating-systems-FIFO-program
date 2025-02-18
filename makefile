prog: fifo.o lab15.o main.o
	g++ fifo.o main.o lab15.o -lpthread -o prog

fifo.o: fifo.cpp fifo.h 
	g++ -c fifo.cpp 
	
lab15.o: lab15.cpp fifo.h monitor.h 
	g++ -c lab15.cpp 
	
main.o: main.cpp lab15.h 
	g++ -c main.cpp 
