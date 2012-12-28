#include <stdio.h>
#include <math.h>
#include "util.h"

/*
now i think above 4750 and below 5000
closer to 5000
since Fn is about phi^n / sqrt(5),
we can just do log of 
*/

//lo of the nth fibonacci number
long fib_dig(long n){
	double phi = 0.5 * (1 + sqrt(5));
	return n*log10(phi) - log10(sqrt(5)) + 1;
}

int main(int argc, char* argv[]){
	long i;
	for(i = 1; i < 1000000; i++){
		if(fib_dig(i) == 1000){
			printf("Answer is real close to %ld\n", i);
			return 0;
		}
		
	}
}