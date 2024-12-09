#include <iostream> 
using namespace std;

int main(){

    // for(int i=0; i<10; i++){  // print 1 only cause i break after it or i could us if statements to handle when to break
    //     cout << i << endl;
    //     break;
    // }

    // i could use label to name a loop 
    ali:
    for(int i=0; i<10; i++){  
        cout << i << endl; 
        if(i==6) goto mul;
       
    }
    
    mul:
    for (int i = 1; i <= 10; i++)
    {
        if (i==5) continue; // skip 5
        for (int y=1; y<=10; y++){
            cout << i << " * " << y << " = " << i*y << endl;
        }
    }
    
   
   
}
