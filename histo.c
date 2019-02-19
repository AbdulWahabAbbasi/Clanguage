#include <stdio.h>
int histo(int a);
int main() {
	int num;
	printf("Enter a Number For Histogram:");
	scanf("%d",&num);
	histo(num);
		return 0;
}
int histo(int a)
{
	int i;
	for(i=0;i<=a;i++)
	{
		printf("*");
	}
}
