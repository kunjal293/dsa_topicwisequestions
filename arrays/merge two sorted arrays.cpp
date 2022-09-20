#include<iostream>
using namespace std;
int main ()
{
    int a[] = {1, 4, 5};
	int m = sizeof(a) / sizeof(int);

	int b[] = {2, 3, 6, 7};
	int n = sizeof(b) / sizeof(int);

	int c[100];
	int i=0;
	int j=0;
	int k=0;

	while(i<m&&j<n)
    {
        if(a[i]>b[j])
        {
            a[i]=c[k];
            i++;

            k++;
        }
        else
        {
            b[j]=c[k];

            j++;
            k++;
        }

    }
    while(i < m) {
		c[k] = a[i];
		i++;
		k++;
	}

	while(j < n) {
		c[k] = b[j];
		j++;
		k++;
	}

	for(int i=0;i<=m+n;i++)
    {
        cout<<c[i]<<endl;

    }
    cout<<endl;
    return 0;
}
