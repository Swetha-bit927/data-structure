#include<stdio.h>
#include<string.h>
#include<conio.h>
 
int main()
{
char str[100],str1[30];
char *index;
 
//Entering the main string
printf("\nEnter the main first string: ");
gets(str);
 
//Entering the string whose position or index to be displayed
printf("\nEnter the string to be searched: ");
gets(str1);
 
//Searching string str1 in string str using strstr() function of C
index=strstr(str,str1);
if(index)
printf("Sub String is found in the Main String at %d position.\n",index-str+1);
else
printf("\nSub string not found");
getch();
}
