//Anirudh Sathish 
// CSES solution to Trailing zeros 

#include<iostream>
#include<math.h>


using namespace std ;

int main()
{
	long long int n ; 
	cin>>n ;
	long long int sum , value  ; 
	sum = 0 ;
	
	for(int i = 5 ; i <= n ; i= i*5 )
	{
		value = n/i ;
		sum += value ;
	}
	cout<<sum<<endl ;
}
