#include <stdio.h>
int main()
{
	int T = 0;
	int n;
	scanf("%d",&n);
	while(n!=1){
		if(n%2)
			n =( n*3+1)/2;
		else 
			n /= 2;
		T++;
	}
	printf("%d\n",T);
	return 0;
}
