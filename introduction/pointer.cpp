#include <stdio.h>
#include <cstdlib>

//declare (update) function
void update(int *firstNum,int *secondNum);

int main() {
    //declare variables
    int firstNum, secondNum;
    
    //pointers
    int *pFirstNum = &firstNum, *pSecondNum = &secondNum;
    
    scanf("%d %d", &firstNum, &secondNum);
    update(pFirstNum, pSecondNum);
    printf("%d\n%d", firstNum, secondNum);

    return 0;
}


void update(int *firstNum,int *secondNum) {
    /*a constant array for holding the values
    of the two variables*/
    const int arr [2] ={*firstNum,*secondNum} ;
    
    //sum up the variables
    *firstNum=arr[0] +arr[1]; 
    
    //get the absolute difference between the variables
    *secondNum = std::abs(arr[0] -arr[1]);
}
