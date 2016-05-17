#include<bits/stdc++.h>
using namespace std;
/*
Linear Diophantine Eq of 2 variable : ax + by = c
can be solved using extended euclidean algo
let d = gcd(a,b)
if (d|c) d divides c : infinite solution exist otherwise no soln.

 1. divide both side of eq by d; a/d *x + b/d *y = c/d 
 								 a1*x + b1*y =c1
 2. solve for s and t using extended euclidean algo; a1*s + b1*y = 1
 3. particular soln; x0 = c/d *s,  y0 = c/d *t
 4. general soln ; x = x0 + k* b/d, y = y0 - k* a/d ; k is an integer

*/
int gcd(int, int);
int a,b,c,d;
void extended_Euclidean(int a1, int b1)
{
	//a1*s + b1*t = gcd(a1,b1)
int q,r1=max(a1,b1),r2=min(a1,b1),r,s1=1,s2=0,s,t1=0,t2=1,t;
	cout<<"q r1 r2 r s1 s2 s t1 t2 t\n";
	while(r2>0)
	{
		q=r1/r2;
		cout<<q<<" "<<r1<<" "<<r2<<" ";
		r = r1 - q*r2;
		r1 = r2;
		r2 = r;

		cout<<r<<" "<<s1<<" "<<s2<<" ";
		s = s1-q*s2;
		s1 = s2;
		s2 = s;

		cout<<s<<" "<<t1<<" "<<t2<<" ";
		t = t1 - q*t2;
		t1 = t2;
		t2 = t;
		cout<<t<<endl;
	}
//particular solution
	int x0 = (c/d)*s1;
	int y0 = (c/d)*t1;
cout<<"General Soln\n";
//general soln
	for(int k=0;k<3;k++)
	{
		cout<<"("<<x0+ k*(b/d)<<", "<<y0- k*(a/d)<<")  ";
	}
cout<<endl;


}
int main()
{
cout<<"Enter 3 space seperated integers (a b c)\nDiophantine Eq : a*x + b*y = c\n";
cin>>a>>b>>c;
d=gcd(a,b);

		if(c%d!=0)
		{
			cout<<"No solution exist\n";
			return 0;
		}
		else
		extended_Euclidean(a/d,b/d);
	
	return 0;
}
int gcd(int a, int b)
{	
	if(b==0)
		return a;
	else
		return gcd(b,a%b);		  

}
