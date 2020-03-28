#include <stdio.h>


int find_age(int age){
	age += 30;
	printf("You will be %d years old in 2050\n", age);
	return 0;
}
int main(){
	printf("Solaris V1.2 2020\n");
	char name[30];
	int age;
	printf("Enter your name here: ");
	scanf("%s",&name);
	printf("How old are you now %s?: ", name);
	scanf("%d", &age);
	find_age(age);
	return 0;
}
