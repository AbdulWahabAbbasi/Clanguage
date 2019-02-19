#include <stdio.h>
int gcd(int a,int b);
int main() {
	int first,second;
	printf("Enter First Number:");
	scanf("%d",&first);
	printf( "\nEnter Secon Numver:" );
	scanf("%d",&second);
	gcd(first,second);
		return 0;
}
int gcd(int a,int b)
{
	int i,result;
	for(i=1; i <= a && i <= b; ++i)
	{
        if(a%i==0 && b%i==0)
            result = i;
    }
    printf("G.C.D of %d and %d is: %d", a, b, result);
}
