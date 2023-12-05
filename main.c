/*
*
* BRH
*
* This program reads the content of /sys/class/thermal_zone0/temp and updates it to monitor your rapsberry pi ARM CPU temperature
* Results are displayed on your console and meant to be used on rasbpian CLI
*
* Made at DUNCHA France on the 12/05/23.
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/select.h>

int main(){
	while(1==1){
		// Load the temperature file
		FILE *filePtr;										// Create a pointer to the file
		filePtr = fopen("/sys/class/thermal/thermal_zone0/temp", "r");				// Load char reader to memory, store the address
		if(filePtr == NULL){									// Check if success (if not, we are not on a legit raspbian config)
			printf("Cannot monitor temperature on your system, files not found !");
		}

		// Read the temperature file content
		system("clear");									// Clear the console
		char* buffer = (char *) malloc(3);							// Allocate a 3 byte wide buffer to store de chars, store the address is buffer pointer
		fgets(buffer, 3, filePtr);								// Get the 3 next chars of the file, store in buffer
		printf("\nCPU Temperature : %s °C\nPress Ctrl+C to leave.\n ", buffer);								
		free(buffer);										// Free the buffer
		fclose(filePtr);									// Free the file char pointer
		sleep(1);										// Wait 1 sec before doing it again
	}

	return 0;
}
