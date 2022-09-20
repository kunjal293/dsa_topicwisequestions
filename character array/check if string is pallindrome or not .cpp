#include<iostream>
#include<cstring>
using namespace std;
int check_pallindrome(char*str1)
{
    int i=0;
    int j=strlen(str1)-1;
    for(int i=0;i<=j;i++)
    {
        if(str1[i]=str1[j])
        {
            i++;
            j--;

        }

    }
    cout<<"the entered string is a pallindrome"<<endl;
}
int main ()
{
    char str1[]="level";
    cout<<"the string entered is :"<<str1<<endl;
   check_pallindrome(str1);
    return 0;
}

