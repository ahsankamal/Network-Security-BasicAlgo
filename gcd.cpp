#include<bits/stdc++.h>
using namespace std;
//Euclidean Algo
	//2 rules
	//1. gcd(a,0) = a;
	//2. gcd(a,b) = gcd(b,r); r is remainder of a/b
int gcd(int a, int b)
{	
	if(b==0)
		return a;//rule1
	else
		return gcd(b,a%b);//rule2		  

}

int main()
{
	int a,b;
	cout<<"gcd(a,b)\nEnter 2 space seperated integers (a  b)\n";
	cin>>a>>b;
	cout<<"gcd("<<a<<", "<<b<<") : "<<gcd(a,b)<<endl;
	return 0;
}