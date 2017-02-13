#include<bits/stdc++.h>

using namespace std;

void sieve_primes(int*);
int main()
{
		  int N = 1000000;
          int p[N];
		  sieve_primes(p);
		  return 0;
}

void sieve_primes(int *p)
{
		for(int i=2; i<=1000000; i++)p[i]=1;

		for(int i=2; i<=1000000; i++){
				if(p[i]){
						for(int j=2*i; j<=1000000; j+=i)
						{
								p[j] = 0;
						}
				}
		}

		p[1] = 0;
		p[0] = 0;
       for(int i=0; i<=1000000; i++)
	   {
			   cout<<i<<"\t"<<p[i]<<endl;
	   }
		return;
}
