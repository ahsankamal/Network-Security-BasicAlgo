#include<bits/stdc++.h>
using namespace std;
/*
properties
phi(primeNo)=primeNo-1
phi(m*n)=phi(m)*phi(n) if gcd(m,n)=1

for large nos use:
phi(n) = (p1^e1 - p1^e1-1)*(p2^e2 - p2^e2-1).....
240 = 2^4 * 3^1 * 5^1
phi(240)=(2^4 - 2^3)*(3^1 - 3^0)*(5^1 - 5^0)
		=64


*/
int gcd(int a, int b)
{	
	if(b==0)
		return a;
	else
		return gcd(b,a%b);		  

}
int main()
{
//euler's totient fn phi(n): number of int that are both smaller than n and relatively prime to n (gcd(a,b)=1)
cout<<"Enter an integer\n";
int n,count=0;
cin>>n;
cout<<"Relatively prime numbers less than "<<n<<" are :\n";
//brute force

for (int i=1;i<n;i++)
	if(gcd(i,n)==1)
		cout<<i<<" ",count++;

cout<<endl;	
cout<<"phi("<<n<<") : "<<count<<endl;
	

	return 0;
}