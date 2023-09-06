#include <stdio.h>
int main() {
	
	int x=5;
	int y=7;
	
	int *py;
	int *px;
	
	px=&x;
	py=&y;
	
		printf("address of x = %d \n" , x);
		printf("address of x = %d \n" , &x);
		printf("value of x = %d \n" , *px);
		printf("address of x = %d \n" , px);
			
			return 0;
					}