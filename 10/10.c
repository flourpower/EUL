#include <stdio.h>
#include "util.h"

int main(int argc, char* argv[]){
	long answer, i;
	answer = 0;
	for(i = 2; i < 2000000; i++){
		if(isPrime(i))
			answer += i;
	}
	printf("Answer: %ld\n", answer);
}