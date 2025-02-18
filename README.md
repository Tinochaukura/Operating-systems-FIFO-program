# Operating-systems-FIFO-program


Operating Systems FIFO Multi-threaded Program 

Task Overview:
This project is a multi-threaded program that simulates a FIFO buffer with a maximum capacity of 10
numbers.

The buffer is accessed by 3 readers and 2 writers, each with specific conditions for reading and
writing.

Readers:
- readA: Reads only even numbers (1 number per operation).
- readB: Reads only odd numbers (1 number per operation).
- readC: Reads numbers divisible by 3 (1 number per operation).

Writers:
- writeA: Writes 11 consecutive numbers (1 number per operation).
- writeB: Writes 11 consecutive numbers only when the buffer has less than 2 numbers.

Synchronization:
- Semaphore-based synchronization using monitor.h (sem.p() and sem.v()).
- Critical section approach is implemented for thread safety.

Output Requirements:
- Each buffer operation prints the action performed and the current buffer state.
- Program output must display the student's name and index number.

Provided Files (No Modifications):
- makefile
- lab15.h
- monitor.h
- fifo.h
- fifo.cpp
- main.cpp

Modified File (Solution):
- lab15.cpp: Implemented readers, writers, synchronization, and buffer status printing.
Submission:
- Modified lab15.cpp (as a text file).
- Screenshot (PNG) showing program output with the student's name and index number.
How to Compile and Run:
- Place all files in the same directory.
- Open a terminal and run:
make
- Execute the program:

./lab15

Learning Outcome:
- Gained experience in multi-threaded programming, buffer management, and synchronization using
semaphores
