#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void concatString(char *str1,char *str2)
{
    int i=strlen(str1);
    int j=0;
    while(j<=strlen(str2))
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
}

int main() {

	char str1[100] = "hello";
	char str2[] = "world";

	cout << "Before concatenation : " << str1 << endl;

	// concatString(str1, str2);

	strcat(str1, str2);

	cout << "After concatenation : " << str1 << endl;



	return 0;
}
