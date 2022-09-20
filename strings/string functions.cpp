#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;

    string str1="hello";
    string str2="world";
     str1.append(str2);
     str1=str1+str2;
     cout<<str1<<endl;
}
