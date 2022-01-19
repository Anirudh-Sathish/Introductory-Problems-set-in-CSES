// Anirudh Sathish 
// CSES problem repetion solution 

#include<iostream>

using namespace std ;

#define SIZE 1000001


// class for stack 
class Stack
{
	private:
		int top = -1 ;
	public:
		char array[SIZE];
		int getTop()  // returns the value of top 
		{
			return top;
		}
		void push(char c ) // pushes the character to the top of the array 
		{
			top++;
			array[top] = c ;
		}
		int pop (int value) // stack is popped and longest length of stack is returned 
		{
			int counter = 0 ;
			
			// while the array is not empty 
			while(top != -1 )
			{
				top--;
				counter++;
			}
			if(counter > value)
			{
				return counter;
			}
			else
			{
				return value ;
			}
		}
};
int main()
{
	string input ;
	long long int n  , value ;
	value = 0;
	char prev , curr ;

	cin>>input ;	
	n = input.length();
	
	Stack s;
	
	for ( int i = 0 ; i < n ; i++)
	{
		if(i == 0)
		{
			curr = input[i];
			s.push(curr);
			prev = curr ;
		}
		else
		{	
			
			curr = input[i];
			if(prev == curr)
			{
				s.push(curr);
			}
			else
			{
				value = s.pop(value);
				s.push(curr);
			}
			prev = curr ;
		}
	}
	// Checking if the stack is empty or not 
	if (s.getTop() != -1)
	{
		value = s.pop(value);
	}
	
	cout<<value<<endl ;
	return 0 ;
}
