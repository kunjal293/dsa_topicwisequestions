#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
bool array_subset(vector<int>v1,vector<int>v2)
{
    unordered_map<int,int>subset;
    for(int i =0;i<v1.size();i++)
    {
     subset[v1[i]]++;
    }
    for(int i =0;i<v1.size();i++)
    {
        if(subset[v2[i]]>0)

        {
            subset[v2[i]]--;

        }
        else
        {
            return false;
        }
    }
    return true;

}
int main ()
{
    vector<int>v1={11,1,13,21,3,7};

    vector<int>v2={11,13,7,1};
  if(array_subset)
  {
      cout<<"true";

  }
  else
  {

      cout<<"false";
  }

    return 0;
}
