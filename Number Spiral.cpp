// Anirudh Sathish 
// CSES solution to Number spiral 

#include<iostream>

using namespace std ;

int main()
{
	int testNo ;
	cin>>testNo;
	
	for (int i = 0 ; i <testNo ; i++)
	{
		long long int x , y ;
		long long int val ; 
		cin>>x ;
		cin>>y;
		
		if(y>x && y%2 == 1)
		{
		    val = y*y - (x-1);	
		}
		else if (y>x && y%2 == 0 )
		{
			val = y*y-(2*y-x-1);
		}
		else if (y< x && x%2 == 1)
		{
			val = x*x - (2*x-y-1);
		}
		else if (y< x && x%2 == 0 )
		{
			val = x*x - (y-1) ;
		}
		else if ( y == x)
		{
			val = x*x -(y-1);
		}
		cout<<val<<endl ;
	}
	return 0 ;
}
