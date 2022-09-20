#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main ()
{
    //creation
    unordered_map<string,int>m;



    //insertion type 10
    pair<string,int>p=make_pair("mango",3);
    m.insert(p);

    //insertion type 2
    pair<string,int>pair2("apple",2);

    //insertion type 3
    m["water melon"]=1;


    //inerttion type 4
   m["water melon"]=2;


   ///searching in hashmaps
    cout<<"searching index  : "<<m["watermelon"]<<endl;
    cout<<"searching for index "<<m.at("mango")<<endl;
///if key is not made then searching would give any value

 //  cout<<m.at("unknown fruit")<<endl;
  // cout<<m["unknown fruit"]<<endl;


  ///size of the hashmaps
   cout<<"size of hashmaps before m.erase function : "<<m.size()<<endl;

   //to check the presence in a hashmaps :
   ///syntax :m.count("string to be searched"
    //returns 1 if the string is present otherwise 0
   cout<<""<<m.count("mango")<<endl;

   //rease the value from hashmaps
   //m.erase is used
   m.erase("mango");
  cout<<"size of hashmaps after erasing : " <<m.size()<<endl;


  ///access the elements in hashmaps
  cout<<"the elements present in hashmaps : "<<endl;
  for(auto i:m)
  {
      cout<<i.first<<" "<<i.second<<endl;
  }
  ///access the elements through the iterator approch
  cout<<"elements through the iterator approch"<<endl;
  unordered_map<string,int>::iterator it =m.begin();

   while(it != m.end())
   {
       cout<<it->first<< " "<<it->second<<endl;
       it++;
   }
    return 0;
}
