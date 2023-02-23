#include<stdio.h>

int main(){
	int a;
	
	x:
	printf("\nCheck a number is even or odd\n");
	printf("Enter value : ");
	scanf("%d",&a);
 
    ( a % 2 == 0)?printf("%d is even Number",a):printf("%d is odd Number");

    goto x;
	return 0;
}
