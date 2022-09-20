#include<iostream>
#include<cstring>
using namespace std;
void copy_string(char *str1,char*str2)
{
    int i=0;
    int j=0;
    while(j<=strlen(str2))
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
}

int main ()

{
    char str1[]="helllo";
    char str2[]="world";
    cout<<"before copying the string: "<<str1<<endl;
    copy_string(str1,str2);
    cout<<"after copying the string : "<<str1<<endl;
    return 0;
}
