#include<iostream>
#include<map>
#include<string>
using namespace std;
int main ()
{
    map<int,string>m={{1,"abc"},{2,"def"},{3,"sad"}};
    m.insert({4,"kc"});
    for(auto pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}
