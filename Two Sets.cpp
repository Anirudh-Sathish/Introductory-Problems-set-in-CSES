//Anirudh Sathish 
// CSES solution to two sets problem 
#include<iostream>

using namespace std ;

int main()
{
	long long int n ; 
	cin>>n ;
	long long int sum ;
	sum = (n*(n+1))/2;
	
	if(sum %2 == 0 )
	{
		if(n%4 == 3)
		{
			int array_a [n/2+1];
			int array_b[n/2];
			long long int a_val , b_val ;
			array_a[0]= 1;
			array_a[1] = 2 ;
			array_b[0] = 3 ;
			a_val = 2 ;
			b_val = 1 ;
			
			for(int i = 4 ; i <= n ;  )
			{
				array_a[a_val] = i ;
				a_val++; 
				if(i%2 == 0 )
				{
					i = i+3 ;
				}
				else
				{
					i= i+1 ;
				}
			}
			for(int i = 5 ; i <= n ;  )
			{
				array_b[b_val] = i ;
				b_val++; 
				if(i%2 == 0 )
				{
					i = i+3 ;
				}
				else
				{
					i= i+1 ;
				}
			}
			cout<<"YES"<<endl ;
			cout<<n/2+1<<endl ;
			for(int j = 0 ; j <n/2+1 ; j++)
			{
				cout<<array_a[j]<<" ";
			}
			cout<<endl ;
			cout<<n/2<<endl ;
			for(int j = 0 ; j <n/2 ; j++)
			{
				cout<<array_b[j]<<" ";
			}
		}
		else
		{
			int arr_a[n/2];
			int arr_b[n/2];
			long long int value_a ;
			long long int value_b ; 
			value_a = 0 ;
			value_b = 0 ;
			
			for(int i = 1 ; i <= n ; )
			{
				arr_a[value_a] = i;
				value_a++ ;
				if(i%2 == 1)
				{
					i= i+3 ;
				}
				else
				{
					i++;
				}
			 } 
			 for(int i = 2 ; i <= n ;)
			{
				arr_b[value_b] = i;
				value_b++ ;
				if(i %2 == 1)
				{
					i= i+3 ;
				}
				else
				{
					i++;
				}
			} 
			cout<<"YES"<<endl ;
			cout<<n/2<<endl ;
			for(int j = 0 ; j <n/2 ; j++)
			{
				cout<<arr_a[j]<<" ";
			}
			cout<<endl ;
			cout<<n/2<<endl ;
			for(int j = 0 ; j <n/2 ; j++)
			{
				cout<<arr_b[j]<<" ";
			}
			
		}
	}
	else 
	{
		cout<<"NO" <<endl ;
	}
}

