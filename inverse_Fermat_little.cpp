#include<bits/stdc++.h>
using namespace std;
/*

1. if p is prime and a is an int such that p does not divide a, then a^(p-1) = 1 mod p
2. no condition on a: a^p = a mod p

*3. property 1 can be used for finding Multiplicative inverse
	a` = inverse of a
	a` mod p = a^(p-2) mod p
*/
int fast_power(int,int,int);
int gcd(int,int);
int Multiplicative_inverse(int a,int p)
{
	return fast_power(a,p-2,p);
}	
int main()
{
cout<<"inverse(a) mod p :\nEnter 2 space seperated integers (a p) "<<endl;
int inv_a,a,p;
cin>>a>>p;

	if(gcd(a,p)!=1)
	{
		cout<<"a and p must be coprime \n";
		return 0;
	}
	else
	{
		inv_a = Multiplicative_inverse(a,p);
		cout<<"Inv("<<a<<") : "<<inv_a<<endl;
	}

	return 0;
}

int fast_power(int a,int n,int mod)
{

int y=1;
	while(n>0)//virtually traversing all bits from left to right
	{
		if(n%2==1)//means bit 1
			y=(a*y)%mod;
		
		a=(a*a)%mod;
		n=n/2;
	}
return y;

}
int gcd(int a, int b)
{	
	if(b==0)
		return a;//rule1
	else
		return gcd(b,a%b);//rule2		  

}