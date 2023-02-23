#include<stdio.h>

float main(){
	float a,b,c,d;
	x:
	printf("\nFind maximum number : \n");
	printf("Enter first value : ");
	scanf("%f",&a);
	printf("Enter second value : ");
	scanf("%f",&b);
	printf("Enter third value : ");
	scanf("%f",&c);
	printf("Enter fourth value : ");
	scanf("%f",&d);
	if(a>b){
		if(a>c){
			if(a>d){
				printf("%f is maximum number",a);
			}
			else{
			    printf("%f is maximum number",d);
			}
		}
		else{
			if(c>d){
				 printf("%f is maximum number",c);
			}
			else{
				 printf("%f is maximum number",d);
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				 printf("%f is maximum number",b);
			}
			else{
				 printf("%f is maximum number",d);
			}
		}
		else{
			if(c>d){
				 printf("%f is maximum number",c);
			}
			else{
				 printf("%f is maximum number",d);
			}
			
		}
	}
	goto x;
		return 0;
}
