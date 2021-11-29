#include<stdio.h>
int main()
{
	struct simp 
	{
		int i = 6;
		char city[] = "chennai";
	};
	struct simp s1;
	printf("%s", s1.city);
	printf("%d", s1.i);
	return 0;
}