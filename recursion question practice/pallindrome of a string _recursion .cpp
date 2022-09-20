#include<iostream>
using namespace std;
bool pallindrome_string(string str,int i ,int j )
{
    //base case
    if(i>j)
    {
        return true;

    }
    if(str[i]!=str[j])
    {
        return false;
    }
    else
    {
        return pallindrome_string(str,i+1,j+1);

    }
}
int main ()
{
    string name="coding ";
    bool is_pallindrome=pallindrome_string(name,0,name.length()-1);

    if(is_pallindrome)
    {
        cout<<"the entered string is not pallindrome ";

    }
    else
    {
        cout<<"the enetered string is a pallindrome";
    }
    return 0;
}
