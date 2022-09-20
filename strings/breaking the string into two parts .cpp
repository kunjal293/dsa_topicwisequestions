#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
   string my_string = "Hello,World,India,Earth,London";
   stringstream ss(my_string); //convert my_string into string stream

   vector<string> tokens;
   string temp_str;

   while(getline(ss, temp_str, ',')){ //use comma as delim for cutting string
      tokens.push_back(temp_str);
   }
   for(int i = 0; i < tokens.size(); i++) {
      cout << tokens[i] << endl;
   }
}
