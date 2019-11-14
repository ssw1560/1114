#include<stdio.h>

int a;
int b;
int add()
{
	return a+b;
}

int main()
{
	int answer;
	a = 5;
	b = 7;
	answer = add();
	printf("%d + %d =%d\n",a,b,answer);
	
	return 0;
	
	
	
}
