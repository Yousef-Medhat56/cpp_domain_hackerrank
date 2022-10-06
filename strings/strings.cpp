#include <iostream>
using namespace std;

int main() {
	//Declare variables
    string firstStr,secondStr;
    
    // get the input from the user
    cin >>firstStr>>secondStr;
    
    // string size
    int firstSize,secondSize;
    firstSize = firstStr.size();
    secondSize = secondStr.size();
    
    //concatenate strings
    string concatenated = firstStr + secondStr;
    
    //Accessing specific character
    char firstStrChar = firstStr[0];
    char secondStrChar = secondStr[0];
    
    firstStr[0] = secondStrChar;
    secondStr[0] = firstStrChar;
    
    //Output 
    cout <<firstSize<<" "<<secondSize<<'\n';
    cout <<concatenated<<'\n';
    cout <<firstStr<<" "<<secondStr<<endl;
    return 0;
}
