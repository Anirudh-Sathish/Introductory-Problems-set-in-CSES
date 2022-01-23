//Anirudh Sathish 
//CSES soliution for Coin piles 

#include<iostream>

using namespace std ;
	
int main()
{
	long long int trials ;
	cin>>trials ;
	long long int a , b , value;
	for(int i = 0 ; i <trials ; i++)
	{
		cin>> a ;
		cin>>b ;
		value = a +b ;
	
		if( a < b)
		{
			swap(a,b);
		}
		if( a> 2*b)
		{
			cout<<"NO"<<endl ;
		}
		else if (2*b == a )
		{
			cout<<"YES"<<endl ;
		}
		else if (value%3 == 0)
		{
			cout<<"YES"<<endl ;
		}
		else
		{
			cout<<"NO"<<endl ;
		}
	}	
	return 0 ;
}
