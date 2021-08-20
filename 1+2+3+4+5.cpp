#include <stdio.h>
#include <stdlib.h>


// Function Declarations
int option;
int menu(void);
int small(int u, int w, int x, int y, int z);
int large(int u, int w, int x, int y, int z);
int sum(int u, int w, int x, int y, int z);
int avg(int u, int w, int x, int y, int z);


int a;
int b;


int one;
int two;
int three;
int four;
int five;


int main(void)
{


	// Statements
	option = menu();
	printf("\n Please enter 5 integers:");
	scanf("%d %d %d %d %d", &one, &two, &three, &four, &five);

	switch (option)
	{
	case 1: small(one, two, three, four, five);
		break;
	case 2: large(one, two, three, four, five);
		break;
	case 3: sum(one, two, three, four, five);
		break;
	case 4: avg(one, two, three, four, five);
	}
	return 0;
}   // main


	// Functions
int menu(void)
{
	// Local Declarations
	int option;
	// Statements
	printf("\t*********");
	printf("\n\t*        MENU          ");
	printf("\n\t*                     *");
	printf("\n\t*   1. SMALLEST       *");
	printf("\n\t*   2. LARGEST        *");
	printf("\n\t*   3. SUM            *");
	printf("\n\t*   4. AVERAGE        *");
	printf("\n\t)********");
	printf("\n Please type your choice: ");
	scanf("%d", &option);
	if (option>4)
	{
		printf("INVALID CHOICE");
		exit(0);
	}
	return option;
}


int small(int u, int w, int x, int y, int z)
{
	// Statements
	if (one < two && one < three && one < four && one < five)
		printf("%i", one);


	else if (two<one && two<three && two<four && two<five)
		printf("%i", two);


	else if (three<one && three<two && three<four && three<five)
		printf("%i", three);


	else if (four<one && four<two && four<three && four<five)
		printf("%i", four);


	else
		printf("%i", five);
	int  small = 0;
	return 0;
}


int large(int u, int w, int x, int y, int z)
{
	//Statements
	if (one > two && one > three && one > four && one > five)
		printf("%i", one);


	else if (two > one && two > three && two > four && two > five)
		printf("%i", two);


	else if (three > one && three > two && three > four && three > five)
		printf("%i", three);


	else if (four > one && four > two && four > three && four > five)
		printf("%i", four);


	else
		printf("%i", five);
	return 0;
}


int sum(int u, int w, int x, int y, int z)
{
	// Statements
	int a = one + two + three + four + five;
	printf("%i", a);
	return 0;
}


int avg(int u, int w, int x, int y, int z)
{
	// Statements
	int b = (one + two + three + four + five) /  5;
	printf("%i", b);
	return(0);
	system("pause");
}
