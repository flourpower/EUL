#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main(int argc, char* argv[]){
	long answer, i, j;
	answer = 0;
	for(i = 100; i < 1000; i++){
		for(j = 100; j < 1000; j++){
			if (isPal(i * j) && answer < (i * j))
				answer = i*j;
		}
	}
	printf("Answer: %ld\n", answer);
	
}