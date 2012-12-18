#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "util.h"

//find the largest prime factor of 600851475143

int main(int argc, char* argv[]){
	long i,n;
	n = 600851475143;
	for(i = ceil(sqrt(n) + 1); i >= 1; i--){
		if(isPrime(i)){
			if((n % i) == 0){
				printf("answer: %ld\n", i);
				return 0;
			}
		}
		if(i == 1){
			printf("answer: %ld\n", i);
			return 0;
		}
	}
	
}
