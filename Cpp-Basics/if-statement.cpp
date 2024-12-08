#include <iostream>
using namespace std;

int main (){

    int x ;
    cout << "Enter a number: ";
    cin >> x;
     
     if(x== 5) cout << "The number is 5" << endl;
        
        else if (x== 10) cout << "The number is 10" << endl;
        
        else cout << "The number is not 5 or 10" << endl;
     
     // i could use the ternary operator here 
        cout << (x > 0 ? "The number is Positive" : "The number is Negative") << endl;

}
