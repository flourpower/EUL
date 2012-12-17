//Project Euler Problem 1
//Find the sum of all multiples of 3 or 5 below 1000

#include <stdio.h>

int main(int argc, char* argv[]){
	int i,j; 
	for(i = 1; i < 1000; i ++){
		if((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}
	printf("%d\n", j);
	return 0;
}