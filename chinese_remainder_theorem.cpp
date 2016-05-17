#include<bits/stdc++.h>
using namespace std;
/*
CRT can be used to solve a set of congruent ens with on var but different mod which are relatively prime
x=a1 mod m1
x=a2 mod m2
.
.
x=ak mod mk

1. M=m1*m2*m3...mk //common modulus MOD
2. M1=M/m1, M2=M/m2 ....
3. find inverse of M!,M2...Mk
4. x = (a1*M1*inv(M1) + a21*M2*inv(M2) +....) mod M
*/
int extended_euclidean(int,int);
int main()
{

int a[100],m[100],M[100],inv_M[100],MOD=1,n;
cout<<"Enter an integer denoting no of eqns\n";
cin>>n;
cout<<"Enter coef of eqns ( a  m )\n";
for(int i=1;i<=n;i++)
{
	cout<<"a"<<i<<" m"<<i<<" : ";
	cin>>a[i]>>m[i];
	MOD*=m[i];
}


int soln=0;
	for(int i=1;i<=n;i++)
		{
			M[i]=MOD/m[i];
			inv_M[i]=extended_euclidean(M[i],m[i]);
			soln+=(a[i]*M[i]*inv_M[i])%MOD;
			if(soln<0)
				soln+=MOD;
		}

cout<<"Solution of the eqn : "<<soln%MOD<<endl;


	return 0;
}
int extended_euclidean(int a, int n)
{
int q,r1=n,r2=a,r,t1=0,t2=1,t;
	while(r2>0)
	{
		q=r1/r2;
		r = r1 - q*r2;
		r1 = r2;
		r2 = r;

		t = t1 - q*t2;
		t1 = t2;
		t2 = t;
	}

if(r1==1)//gcd(a,n) = 1, inverse exist
	return t1;//inverse a`
else
	return 0;

}