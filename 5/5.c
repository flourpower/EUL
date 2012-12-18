#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main(int argc, char* argv[]){
	struct longTuple arr[20][40];//this is going to be the factorings of 1-20
	long multi[20]; //holds the multiplicities
	int i,j;
	for(i = 0; i < 20; i++){
		multi[i] = 0;
	}
	for(i = 0; i < 20; i++){
		factor(i+1,arr[i]);
		for(j = 0; arr[i][j].fst != -1; j++){
			if ( (arr[i][j].snd) > multi[arr[i][j].fst - 1])
				multi[arr[i][j].fst - 1] = arr[i][j].snd;
		}
		
	}
	long answer = 1;
	for(i = 0; i < 20; i++){
		if(multi[i] > 0){
			answer *= powr(i+1, multi[i]);
		}
	}
	printf("answer: %ld\n", answer);

}
