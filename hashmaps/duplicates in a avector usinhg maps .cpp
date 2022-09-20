#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool contains_duplicates(vector<int>v,int k)
{
    unordered_map<int,int>indexmap;
    for(int i =0;i<v.size();i++)
    {
        if(indexmap.find(v[i])!=indexmap.end())
        {
            int j =indexmap[v[i]];
            if(i-j<=k)
            {

                return true;
            }
            else{
                return false;
            }
        }
    }

}
int main ()
{
    vector<int>v={1,2,3,4,3,6};
    int k =3;
    contains_duplicates(v,k)? cout<<"true": cout<<"false";


    return 0;
}
