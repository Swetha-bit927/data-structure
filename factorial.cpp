#include<stdio.h>                            // place this '<' & '>' instead of '(' & ')' before stdio.h
#include<conio.h>
int fact( int);                                        // function declaration
int main( )
{
int no,result;
printf("Enter the required number:");
scanf("%d", &no);
result = fact( no);
printf("\n %d Factorial is : %d", no, result);
getch( );
return 0;
}
