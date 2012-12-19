#include <stdlib.h>
#include <stdio.h>

#include "util.h"

int main(int argc, char* argv){
	long primeCount = 0;
	long i;
	long answer = 2;
	for(i = 2; primeCount < 10001; i++){
		if(isPrime(i)){
			answer = i;
			primeCount++;
		}
	}
	printf("Answer: %ld\n",answer);
}