#include<bits/stdc++.h>
using namespace std;
bool sieve[100000];
int main()
{
cout<<"Enter an integer \n";
int n;
cin>>n;
for(int i=0;i<=n;i++)
	sieve[i]=true;
sieve[0]=sieve[1]=false;
	
//i^2=n
//i<sqrt(n)
//sieve logic
	for(int i=2;i*i<=n;i++)
		if(sieve[i])
			for(int j=i+i;j<=n;j=j+i)
				sieve[j]=false;
	



cout<<"All prime nos less than "<<n<<" are: \n";
for(int i=0;i<=n;i++)
	if(sieve[i])
		cout<<i<<" ";

cout<<endl;


	return 0;
}