#include <stdio.h>
#include <stdlib.h>


long max(long a, long b){
	if(a < b)
		return b;
	return a;
}


//this could use some testing and support for bignums
int choose(int n, int k){
	int** arr = malloc(sizeof(int*)*(n+2));
	int i,j;
	for(i = 0; i < (n+2); i++){
		arr[i] = malloc(sizeof(int)*(n+2));
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
	int result = arr[n+1][k+1];
	for(i = 0; i < n; i++){
		free(arr[i]);
	}
	free(arr);
	printf("%d\n",result);
	return result;
}



int main(int argc, char* argv[]){
	choose(9,0); 
	return 0;
}

