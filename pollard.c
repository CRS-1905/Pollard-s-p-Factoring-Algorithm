 #include<stdio.h>
#include<time.h>

long int gcd(long int,long int);

int main()
{
	long int n,x1,x2,x,p;
	printf("Enter The Interger :\t");
	scanf("%lu",&n);
	
	x1=1;
	x=x1;
	x2=((x*x)+1)%n;
	
	p=gcd(x-x2,n);

	while(p ==1)
	{
		x=(x*x +1)%n;
		printf("x=%lu\t",x);
		x2=(x2*x2 +1)%n;
		printf("x2=%lu\t",x2);
		x2=(x2*x2 +1)%n;
		printf("x2=%lu\t",x2);
		p=gcd(x-x2,n);
		printf("p=%lu\n",p);
	}

	if(p == n)
		printf("Failure:\n");
	else
		printf("The factor is p=%lu\n",p);
}

long int gcd(long int a,long int n)
{
	long int q,r;
	
	if(n == 0)
		return a;

	while(a<0)
		a=a+n;

	while(n!=0){
		q=a/n;
		r=a%n;
		a=n;
		n=r;
	}

	return a;
}
