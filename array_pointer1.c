#include <stdio.h>
int main() {
int arr[100],n;
int constant = 5;
	printf("Enter array size : " );
	scanf("%d",&n);
	
	for(int i=0;i<n;i++) {
	printf("enter element : %d\n",i+1);
	scanf("%d",&arr[i]);
		arr[i] = *(arr + i) + constant;
		}
			for(int j=0;j<n;j++) {
			printf("\n%d",*(arr + j) );
			}
				}