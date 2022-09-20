#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main ()
{
    ///constructing a unordered map with input as both the strings

    unordered_map<string,string>capitalmap;
    //inserting elements into the hash map
    capitalmap.insert({"france","paris"});
    capitalmap.insert(make_pair("India", "New Delhi"));
    cout<<"size of map "<<capitalmap.size()<<endl;

    capitalmap["japan"]="tokyo";

    cout<<"size of map "<<capitalmap.size()<<endl;

    //access the elements
    //method 1: iterator method
    for(auto it=capitalmap.begin(), end=capitalmap.end(); it != end; it++) {
		pair<string, string> p = *it;
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}

  ///finding the element present in the map through method
  ///using find element
	string key = "France";
	if(capitalmap.find(key) != capitalmap.end()) {
		cout << "(" << key << ", " << capitalmap[key] << ")" << endl;
	}
	 else
        {
		cout << key << " is not found!" << endl;
	}
///using count method to find the element

    if(capitalmap.count(key)) {
		cout << "(" << key << ", " << capitalmap[key] << ")" << endl;
	}

    else
	 {
		cout << key << " is not found!" << endl;
	}
///deletion in hash map
//method 1: using m.erase

capitalmap.erase("France");
	cout << "size : " << capitalmap.size() << endl;
	if(capitalmap.find(key) != capitalmap.end())
    {
		cout << "(" << key << ", " << capitalmap[key] << ")" << endl;
	}
	else
    {
		cout << key << " is not found!" << endl;
	}

	capitalmap.clear();
	cout << "size : " << capitalmap.size() << endl;

	// build an unordered_map using the initialiser list

	unordered_map<int, int> squareMap = {
											{1, 1},
											{2, 4},
											{3, 9},
											make_pair(4, 16),
											make_pair(5, 25)
										};

	cout << "size : " << squareMap.size() << endl;

	for(auto p : squareMap) {
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}

	return 0;
}


