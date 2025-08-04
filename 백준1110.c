#include<stdio.h>
int main(void)
{
	int n,k,t=0;
	scanf("%d", &n);
	k=n;
	while(1)
	{
		if(k<10)
			k *= 11;
		else
			k =(k%10)*10 + (k/10+k%10)%10;
		t++;
		if(n==k)
			break;
	}
	printf("%d", t);
    
    return 0;
}