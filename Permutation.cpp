// Anirudh Sathish 
// Solution to CSES Permutations problem 

#include<iostream>

using namespace std ;

int main()
{
	int n ;
	cin>>n ;

	if(n> 3)
	{
		for(int i = 1 ; i <n ; i+=2)
		{
			cout<<i+1<<" ";
		}
		for(int i = 0 ; i <n ; i+= 2)
		{
			cout<<i+1<<" ";
		}
	}
	else if (n == 1)
	{
		cout<<n<<endl ;
	}
	else
	{
		cout<<"NO SOLUTION"<<endl ;
	}
	return 0 ;
}
