#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int findduplicate(vector<int>v)
{
    unordered_map<int,int>maxfreq;
    for(int i =0;i<v.size();i++)
    {
        maxfreq[v[i]]++;
    }
    //for each loop to access the lements in hashmaps
    for(auto p:maxfreq)
    {
        if(p.second>1)
        {
            cout<<p.first<<" ";
        }
    }
}
int main ()
{
    vector<int>v={1,4,6,7,4,7,2,2};
    cout<<"the number with maximum frequency ";
    findduplicate(v);

    return 0;
}
