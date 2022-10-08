#include <iostream>
using namespace std;

int main() {
    //array length
    int arrayLen;
    
   
    //get array length
    cin>>arrayLen;
   
    //declare array
    int arr[arrayLen];
    
    //push input numbers to the array
    for(int i=0;i<arrayLen;i++){
        int n;
        cin>>n;
        arr[i] =n; //push the input to the array
    }
  
   //reverse the array
    for(int i=arrayLen;i>0;i--){
        cout<<arr[i-1]<<" ";
    }
    return 0;
}
