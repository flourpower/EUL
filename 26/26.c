#include <stdio.h>
#include <stdlib.h>

#include "util.h"

/*
The length of the period of 1/p if p is a prime is the 
order of 10 mod p.
The length of the period of 1/d if d is an integer is
just the order of 10 mod p where p is the prime dividing
p that maximizes the order of 10 mod p
thus, it suffices to find the prime p less than one thousand
maximizing (order of 10 mod p)
*/

int main(int argc, char* argv[]){
	
	long answer, i;
	answer = 0;
	for(i = 2; i < 1000; i++){
		if(isPrime(i)){
			if (order(10, i) > answer){
				answer = i;
			}
		}
	}
	printf("Answer:  %ld\n", answer);
	return 0;
}