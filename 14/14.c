#include <stdio.h>

long collatz(long n){
	long length = 1;
	while(n != 1){
		if((n % 2) == 0){
			n = n / 2;
			length++;
		}
		else{
			n = (3 * n) + 1;
			length++;
		}
	}
	return length;
}


int main(int argc, char* argv){
	long answer,i, maxy;
	maxy = 0;
	for(i = 1; i < 1000000; i++){
		if(collatz(i) > maxy){
			answer = i;
			maxy = collatz(i);
		}
	}
	printf("Answer: %ld\n", answer);
}