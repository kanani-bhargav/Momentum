#include<stdio.h>

int main(){
	char a;
	
	printf("Enter value : ");
	scanf("%c",&a);

	if((a>='a' && a<='z') || (a>='A' && a<='Z')){
		printf("%c is an alphabet.", a);
	}
	else if(a>='0' && a<='9'){
		printf("%c is an Number.", a);
	}
	else{
	printf("%c is an  special character.\n", a);
	}
	return 0;
}
