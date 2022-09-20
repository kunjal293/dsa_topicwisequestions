#include<iostream>
#include<map>
using namespace std;
int main ()
{
    map <int ,int>mp;
   mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 5, 50 });

    cout << "The map before using find() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    //finding the element
   auto it= mp.find(2);
   if(it==mp.end())
   {
       cout<<"NO VALUE"<<endl;
   }
 for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    return 0;
}
