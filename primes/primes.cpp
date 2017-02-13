#include<bits/stdc++.h>

using namespace std;

bool isPrime( int ); 
int main()
{
		int n;
		cout<<"Enter any number"<<endl;
		cin>>n;
		if( isPrime(n) ){
		cout<<"The number isPrime";
        }
		else
		{
				cout<<"The number is not prime";
		}
}
bool isPrime( int n )
{
		if( n==1 ) return false;

		if( n==2 ) return true;

		for( int i = 2; i*i <= n; i++)
				if ( n%i == 0 ) return false;

		return true;
}
