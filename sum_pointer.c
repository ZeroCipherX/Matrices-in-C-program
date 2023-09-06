#include <stdio.h>
int sum(int *,int *);
int main() {
	int x,y;
	int  *px;
	int *py;
	px = &x;
	py = &y;
		printf("Enter your first number : ");
		scanf("%d",&x);
		printf("Enter your second number :  ");
		scanf("%d",&y);
		int result = sum(&x,&y);
		printf("The sum is %d " ,result);
		}
		
			int sum(int *a, int *b) {
			int c;
			c = *a + *b;
			return c; 
					}