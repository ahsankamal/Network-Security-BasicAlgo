#include<bits/stdc++.h>
using namespace std;
int extended_euclidean(int a, int n)
{
int q,r1=n,r2=a,r,t1=0,t2=1,t;
	cout<<"q r1 r2 r t1 t2\n";
	while(r2>0)
	{
		q=r1/r2;
		cout<<q<<" "<<r1<<" "<<r2<<" ";
		r = r1 - q*r2;
		r1 = r2;
		r2 = r;

		cout<<r<<" "<<t1<<" "<<t2<<" ";
		t = t1 - q*t2;
		t1 = t2;
		t2 = t;
		cout<<t<<endl;
	}

if(r1==1)//gcd(a,n) = 1, inverse exist
	return t1;//inverse a`
else
	return 0;


}
int main()
{

cout<<"Multiplicative Inverse of a in Zn\ninverse(a) mod p :\nEnter 2 space seperated integers (a n)\n";
int a,n;
cin>>a>>n;
int ans = extended_euclidean(a,n);

//if gcd(a,n) != 1, no mul inv exist
if(ans==0)
	cout<<"No Multiplicative inverse exist of "<<a<<" in  Z"<<n<<endl;
else
	{
	if(ans<0)
		ans=ans+n;
	cout<<"Multiplicative Inverse of  "<<a<<" : "<<ans<<endl;
	//means ans*a mod n = 1
	cout<<a<<"*"<<ans<<" mod "<<n<<" = "<<1<<endl;
	}
	return 0;
}