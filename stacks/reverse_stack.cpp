#include<iostream>

#include<stack>
using namespace std;
void print(stack<int>s)
{
	if(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<endl;
}
void insert_at_bottom(stack<int>&s,int value)
{
	if(s.empty())
	{
		s.push(value);
		return ;
	}
	int x=s.top();
	s.pop();
	insert_at_bottom(s,value);
	s.push();
}
void reverse (stack<int>&s)
{
	if(s.empty())
	{
		return ;
	}
	int x=s.top();
	s.pop();
	reverse(s);
	insert_at_bottom(s,x);

}
int main ()
{

	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	print(s);

	reverse(s);

	print(s);

	return 0;
}
