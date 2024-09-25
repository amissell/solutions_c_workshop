#include <stdio.h>


int main()
{
	char last_name[400];
	char first_name[400];
	int age;
	char gender[10];
	char email_address[400];

	printf("enter your first name: \n");
	scanf(" %s", first_name);
	printf("enter your last name: \n")l;
	scanf(" %s", last_name);
	printf("enter your age: \n");
	scanf(" %d", &age);
	printf("enter your gender: \n");
	scanf(" %s", gender);
	printf("enter youre email address: \n");
	scanf(" %s", email_address);

	return (0);
}