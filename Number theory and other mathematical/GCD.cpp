#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
    int i,gcd;
	 for(i=1;i<=a && i<=b;i++)
		 if(a%i==0 && b%i==0)
			gcd=i;
		
	cout<<"GCD is"<<gcd<<endl;
	return 0;
	
}