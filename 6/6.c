#include <stdio.h>

/*
Find the difference between the
sum of the squares of the first 1000 natural numbers
and the square of the sum
*/
//might as well brute force...

int main(int argc, char*argv[]){
	long first = 0;
	long i;
	for(i = 1; i <= 100; i++){
		first += (i*i);
	}
	long second = 0;
	for(i = 1; i <= 100; i++){
		second += i;
	}
	second = second * second;
	printf("Answer: %ld\n", second - first);
}
