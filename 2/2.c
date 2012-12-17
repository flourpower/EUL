//Project Euler Problem 2
//Find the sums of the even valued terms of fibonacci sequence 
//whose values don't exceed four million

#include <stdio.h>

long fib(long n, long a, long b){
	if(n == 0)
		return a;
	return fib(n-1, b, a+b);
}

int main(int argc, char* argv[]){
	long i, sum, tmp;
	sum = 0;
	for(i = 0; i < 4000000; i++ ){
		tmp = fib(i, 0, 1);
		if(tmp > 4000000)
			break;
		if((tmp % 2) == 0)
			sum += tmp;
			
	}
	printf("The sum is: %ld\n", sum);
	return 0;
}

