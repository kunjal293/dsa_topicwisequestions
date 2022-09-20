#include<iostream>
#include<cstring>
using namespace std;
int largest_nstrings(char*str1,char *str2)
{
    int i=0;
    int j=0;
    int n1=strlen(str1);
    int n2=strlen(str2);
    while(i<n1&& j<n2)
    {
        if(str1[i]>str2[j])
        {
            return 1;
        }
        else if (str1[i]<str2[j])
        {
            return -1;
        }
        i++;
        j++;
    }
    if(i<n1)
    {
        return 1;
    }
    else if(j<n2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main() {

	int n;
	cout << "Enter the no. of strings : ";
	cin >> n;

	char inp[100];
	cin >> inp; // remember, it terminates at white-space

	char lar[100]; // to keep track of the largest string
	strcpy(lar, inp);

	int i = 1;
	while(i < n) {


		cout << "Largest so far : " << lar << endl;

		// read the next string
		cin >> inp;

		int res = strcmp(inp, lar);

		if(res > 0) { // or res == 1
			strcpy(lar, inp);
		}

		i++;

	}

	cout << "Largest String : " << lar << endl;

	return 0;
}
