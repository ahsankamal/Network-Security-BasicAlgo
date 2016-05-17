#include<bits/stdc++.h>
using namespace std;
/*
Useful when N is very large, otherwise sieve method can be used to find actual no of primes
used to find approximate No of primes less than N
lower limit given by Lagrange: N/log(N) 
upper limit given by Gauss: N/(log(N) - 1.08366)
eg
N=1000000
72383< Pn <78543
Actual no of primes less than 1000000 : 78498
*/
int main()
{
int n;
cout<<"Enter an integer\n";
cin>>n;
cout<<"approximate number of primes less than n are\n";
cout<<n/log(n)<<" < "<<"P(n)"<<" < "<<n/(log(n)-1.08366)<<endl;

	return 0;
}