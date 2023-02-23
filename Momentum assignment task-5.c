#include<stdio.h>

int main(){
	
    float unit,amount, totalamount, surcharge;
	printf("Enter total units consumed: ");
    scanf("%f", &unit);
	
	if(unit<=50){
		amount=unit*0.5;
	}
	else if(unit<=150){
		amount=((unit-50)*.75)+25;
	}
	else if(unit<=250){
		amount=((unit-150)*1.2)+100;
	}
	else{
		amount=((unit-250)*1.5)+220;	
	}
	
	surcharge=amount*.20;
	totalamount=amount + surcharge;
	printf("total electricity bill is %f",totalamount);
	
	return 0;
}
