#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int find_duplicates(vector<int>v)
{
    unordered_map<int,int>duplictes;
    for(int i =0;i<v.size();i++)
    {
        duplictes[v[i]]++;
    }
    for(auto p:duplictes)
    {
        if(p.second>1)
        {
            cout<<p.first<<" ";
        }
    }

}
int main ()
{
    vector<int>v={1,9,9,0,3};
    cout<<"number that has maximum frequency is :"<<" ";
    find_duplicates(v);
    return 0;
}
