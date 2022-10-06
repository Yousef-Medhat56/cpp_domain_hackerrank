#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    
    //English words for integers from 1 to 9
    string integersArr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    // if the integer is between 1 and 9
    if(n>=1 && n<=9){
        //print the English word corresponding to the integer 
        cout << integersArr[n-1];
    }
    else{
        cout << "Greater than 9";
    }
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
