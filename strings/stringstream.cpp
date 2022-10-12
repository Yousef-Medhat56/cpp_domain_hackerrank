#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<string> parseInts(string str) {
	   // stringstream
    stringstream ss(str);
    
    //each token will store a number
    string token;
    
    //OUTPUT tokens
    vector<string> tokens;

    while (getline(ss,token,',')){
        tokens.push_back(token);
        }
   
    return tokens;
    
}

int main() {
    string str;
    cin >> str;
    vector<string> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
