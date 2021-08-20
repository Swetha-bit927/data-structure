#include<stdio.h>
int main()
{
	int EM,PPS,AP;
	float sum,per;
	printf("Enter 3 subjects marks(<100)");
	scanf("%d%d%d" ,&EM,&PPS,&AP);
	per=(sum/300)*100;
	printf("The percentage is %f,per");
	if(per>=90)
	printf("The grade is A+");
	else if(per>=80)
	printf("The grade is A");
	else if(per>=60)
	printf("The grade is B");
	else if(per>=35)
	printf("The grade is C");
	else
	printf("Failed");
}

