// Anirudh Sathish 
// CSES solution for wierd Algorithm 

#include<iostream>

using namespace std ;

int main()
{
	// necesary for computing the larger numbers 
	long long int input ;
	
	// Take in a positive integer as input 
	cin>>input ;
	
	cout<<input<<" ";
	while(input != 1)
	{
		// Checks if number is even 
		if(input%2 == 0 )
		{
			input = input/2;
		}
		else // number is odd 
		{
			input = 3*input + 1;
		}
		
		cout<<input<<" ";
	}
	
	return 0 ;
}
