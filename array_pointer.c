#include <stdio.h>
int main() {
int abc[5];
	for(int i = 0; i < 5; i++ ) {
	printf("enter array value %d : " ,i+1);
	scanf("%d",&abc[i]);
	printf("\n");
	}
		for(int j=0;j<5;j++) {
		printf("Your elements are %d \n",*(abc+j));
		}
			}