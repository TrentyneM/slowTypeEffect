// Slow Type Terminal Effect (Header)

#include <iostream>		// Standard C++ Input/Output Library

/* 
C++ Multithreading Library 

A thread of execution is a sequence of instructions that can be executed concurrently with 
other such sequences in multithreading environments, while sharing a same address space.
We use this library to maniuplate this thread so we can slow down our text string to write out.
*/
#include <thread>

// C++ Time Functions Library, different than C's <ctime.h>
#include <chrono>

// Our Slow Type Function (string takes a string and you can set an adjustable time delay) but the default is 500.
int slowTyper(std::string string, int timeDelay = 500){
	
	// Our string we want to write out slowly
    std::string s = "Hello!";

	/* Our range based for loop, auto for each character to flush to the screen and, 
	string as our "list" of characters */
    for (const auto c : string) {
    	
    	// For each iteration, flush a character to the screen
        std::cout << c << std::flush;
        
        // Delay for the specified milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(timeDelay));
    }
    
    // End the line
    std::cout << std::endl;
}

// Main
int main(){
	
	// Type "This is a long string" with a 600 millisecond delay between letters
	slowTyper("This is a long string!", 50);
	
}


