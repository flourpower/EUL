#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long max(long a, long b){
	if(a < b)
		return b;
	return a;
}


//this could use some testing and support for bignums
//it's also leaking memory. fix this.
long choose(long n, long k){
	long** arr = (long**)malloc(sizeof(long*)*(n+2));
	long i,j;
	for(i = 0; i < (n+2); i++){
		arr[i] = (long*)malloc(sizeof(long)*(n+2));
	}
	for(i = 0; i < n+2; i++){
		for(j = 0; j < n+2; j++){
			arr[i][j] = 0;				
		}
	}
	arr[0][0] = 1;
	for(i = 1; i < n+2; i++){
		for(j = 1; j <= i; j++){
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}
	long result = arr[n+1][k+1];
	for(i = 0; i < n; i++){
		free(arr[i]);
	}
	free(arr);
	return result;
}

struct longTuple {
	long fst;
	long snd;
};

int isPrime(long n){ //This should get used a lot
	int i;
	if(n == 2)
		return 1;
	for(i = 2; i < sqrt(n) + 1; i++){
		if ((n % i) == 0)
			return 0;
	}
	return 1;
}

long powr(long x, long n){
	long i;
	long answer = 1;
	for(i = 0; i < n;i++ ){
		answer *= x;
	}
	return answer;
}

void factor(long n, struct longTuple arr[]){
	//always pass in arr of length 2*n
	if(n == 1){
		arr[0].fst = -1;
		return;
	}
	long i,j,k,m;
	k = 0;
	for(i = 2; i <= n; i++){
		if(((n % i) == 0) && isPrime(i)){
			m = n;
			for(j = 0; (m % i) == 0; j++){
				m = m / i;
			}
			arr[k].fst = i;
			arr[k].snd = j;
			k++;
		}
	}
	arr[k].fst = -1; //so that we know we're done
}




