#include <iostream> 
using namespace std;

int main(){
    int x = 5;
    x++ ; //postfix :  
    cout << x++ << endl; // 6
    ++x ; //prefix
    cout << ++x << endl; // 9   
    // diff in printing when i print x++ it will print x before incrementing it while ++x it increments it first then print 

    // the second case is when assigning value to another variable
    int y = x++; // y = x then x++
    cout << y << endl; //9
    y = ++x;
    cout << y << endl; //11

    return 0;
}
