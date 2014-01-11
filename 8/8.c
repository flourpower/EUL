#include <stdlib.h>
#include <stdio.h>

#include "util.h"

int main(int argc, char* argv){
	int k,answer;
	int a,b,c,d,e;
	a = b = c = d = e = 0;
	k = getchar();
	while(k != EOF){
	    a = b;
		b = c;
		c = d;
		d = e;
		e = k - '0';
		if (a*b*c*d*e > answer)
			answer = a*b*c*d*e;
	    k = getchar();
	}
	printf("The answer is %d\n",answer);
}