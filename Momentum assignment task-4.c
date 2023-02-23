#include<stdio.h>

 main(){
	char a;
	
	printf("for Saturday press D or d and for Thursday press H or h\n");
	printf("Please enter First letter of day : ");

	scanf("%c",&a);
	
	switch(a){
		case 'S':
		case 's':
		printf("Sunday");
		break;
	
		case 'M':
		case 'm':
		printf("Monday");
		break;
		
		case 'T':
		case 't':
		printf("Tuesday");
		break;
		
		case 'W':
		case 'w':
		printf("Wednesday");
		break;	
		
		case 'H':
		case 'h':
		printf("Thursday");
		break;	
		
		case 'F':
		case 'f':
		printf("Friday");
		break;	
		
		case 'D':
		case 'd':
		printf("Saturday ");
		break;		
	
	    default:
	     	printf("invalid input");
	     	break;
	}

	}
	
	
	
