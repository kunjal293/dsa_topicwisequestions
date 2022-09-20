#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
bool isomorphic(string s,string t)
{
    vector<int>ms;
    vector<int>mt;
    for(int i =0;i<s.size();i++)
    {
        if(ms[s[i]]!=mt[t[i]])
        {
            return false;
        }
        ms[s[i]]=i+1;
        mt[t[i]]=i+1;

    }
    return true;

}




int main()
{
    string s;
    string t;
    cin>>s>>t;
   int ans=isomorphic(s,t);
  if(ans)
  {
      cout<<"true";
  }
  else
  {
      cout<<"false";
  }
    return 0;
}
