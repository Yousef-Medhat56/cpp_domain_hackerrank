#include <iostream>
using namespace std;

int main() {
    // declare variables
    int integer;
    long longNum;
    char character;
    float floatNum;
    double doubleNum;
    
    scanf("%d %ld %c %f %lf",&integer,&longNum,&character,&floatNum,&doubleNum);
    printf("%d \n%ld \n%c \n%f %lf",integer,longNum,character,floatNum,doubleNum);
    
    return 0;
}
