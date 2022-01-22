//Anirudh Sathish 
// CSES solution to Bit Strings 

#include<iostream>
#include<math.h>
using namespace std ;



long long int find_modulo(long long int n )
{
	long long int ans ;
	ans = 1 ; 
	long long int val = 1e9+7;
	for(int i = 0 ; i <n ; i++)
	{
		ans = 2*ans ;
		ans = ans % val ;
	}
	return ans ;
}
int main()
{
	long long int n ; 
	cin>>n ; 
	
	long long int res ;
	res = find_modulo(n) ;
	
	cout<<res<<endl ;
	return 0 ;
}
