#include<iostream>
#include<stack>
//uing stl
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
	//recursive case
	int x = s.top();
	s.pop();

	insert_at_bottom(s, value);

	s.push(x);

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

	int value = 0;

	insert_at_bottom(s, value);

	print(s);

	return 0;
}