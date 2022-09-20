#include<iostream>
using namespace std;
int reverse(string & str,int i ,int j)
{
    if(i>j)
    {
        return 0;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    //recursive call
    reverse(str,i,j);
}
int main ()
{
    string name="coding";
    cout<<reverse(name,0,name.length()-1);
    cout<<name;


    return 0;
}


