//Anirudh Sathish 
//CSES problem missing number solution 

#include<iostream>

using namespace std ;

int main()
{
	long long input ;
	cin>>input ;
	
	long long int expectedSum = ((input+1)*(input))/2;
	
	long long int originalSum = 0 ;
	
	int a ;
	for (int i = 0 ; i < input-1 ; i++)
	{
		cin>>a ;
		originalSum += a ;
	}
	
	long long int value ;
	
	value = expectedSum - originalSum ;
	cout<<value<<endl ;
	
	return 0 ;
}
