#include<bits/stdc++.h>
using namespace std;
/*
Square and Multiply method
main idea is to treat the exponent as binary number of nb bits
22 = (10110)   nb=5
22 = 1*2^4 + 0*2^3  + 1*2^2 + 1*2^1 + 0*2^0
*/
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
int main()
{
int a,n,m;
cout<<"a^n mod m: \nEnter 3 space seperated integer (a n m)\n";
cin>>a>>n>>m;
int ans = fast_power(a,n,m);
cout<<a<<"^"<<n<<" mod "<<m<<" : "<<ans<<endl;

	return 0;
}