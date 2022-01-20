// Anirudh Sathish 
// Two knights problem in CSES 

#include<iostream>

using namespace std ;

int main()
{
	long long int n ;
	cin>>n ;
	
	for(long long int i = 1 ; i <= n ; i++)
	{
		long long  int value ;
		value = (i*i*(i*i-1))/2 - 4*(i-2)*(i-1);
		
		cout<<value <<endl ;
		
	}
	return 0 ;
}

