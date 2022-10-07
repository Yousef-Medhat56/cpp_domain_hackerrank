#include <iostream>
using namespace std;

int main() {
    // declare variables
    int firstInput,secondInput;
    
    //English words for integers from 1 to 9
    const string integersArr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    //get input from the user
    cin>>firstInput>>secondInput;
    
    for(int i=firstInput;i<=secondInput;i++){
        
        // if the integer is between 1 and 9
        if(i>=1 && i<=9){
            //print the English word corresponding to the integer 
            cout << integersArr[i-1]<<'\n';
        }
        // if the integer is odd
        else if(i%2){
             cout<<"odd"<<'\n';
         }
        // if the integer is even
        else{
            cout<<"even"<<'\n';
        }
    }
    return 0;
}
