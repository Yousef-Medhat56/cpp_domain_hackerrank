#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
   int n, q, k, i;
    
    //number of arrays
    cin>>n;
    //number of queries
    cin>>q;
    
    // The parent array
    vector<vector<int>> arrN(n);
    
    for (int x=0; x<n; x++)
    {
        //child array size
        cin>>k;
       for(int j=0; j<k; j++)
       {
           cin>>i;
           //push number to the child array
           arrN[x].push_back(i); 
       }
    }
    
    for (int x=0; x<q; x++)
    {
        cin>>k>>i;
        cout<<arrN[k][i]<<endl;
    }
      
    return 0;
}
