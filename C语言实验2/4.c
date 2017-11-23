#include<stdio.h>
int main()
{
	int grade;
	printf("Enter numerical gradeL:");
	scanf("%d",&grade);
	grade=grade/10;
	switch(grade){
	case 0: case 1: case 2: case 3: case 4: case 5:
		printf("Letter grade:F\n");
		break;
	case 6:
		printf("Letter grade:D\n");
		break;
	case 7:
		printf("Letter grade:C\n");
		break;
	case 8:
		printf("Letter grade:B\n");
		break;
	case 9: case 10:
		printf("Letter grade:A\n");
		break;
	default:
		printf("you input a wrong number\n");
		break;
	}
	return 0; 
}