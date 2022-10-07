#include <iostream>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int integersArr[4] = {a,b,c,d};
    //array length
    int integersArrLen = sizeof(integersArr)/sizeof(int); 
  
    //maximum number in the array
    int maxNum = *std::max_element(integersArr,integersArr+integersArrLen);
    return maxNum;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
