//Anirudh Sathish 
// CSES solution for Increasing Array 

#include<iostream>

using namespace std ;

int main()
{
	long long int n ;
	cin>>n;
	int array[n];
	long long int  prev ;
	
	// Taking the input 
	for(int i = 0 ; i <n ; i++)
	{
		cin>>array[i];
	}
	prev = array[0];
	long long int value ;
	long long int steps = 0 ;
	
	for (int i = 1 ; i < n ; i++)
	{
		if(array[i] - prev>= 0)
		{
			prev = array[i];
		}
		else
		{
			value = prev - array[i] ;
			steps += value ; 
		}
	}
	cout<<steps<<endl ;
}






