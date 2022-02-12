#include<stdio.h>
void main()
{
	char name[100], branch[50], hobbies[100];
	int regdno;
	
	
printf("Enter name:");
gets(name);
printf("\nenter branch:");
gets(branch);
printf("\nur hobbies include");
gets(hobbies);
printf("\nenter last 3 digits of ur regd no.");
scanf("%d",&regdno);
printf("the basic details of the student are\n");
puts(name);
puts(branch);
puts(hobbies);
printf("%d",regdno);


}