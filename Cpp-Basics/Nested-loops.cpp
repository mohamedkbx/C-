#include <iostream> 
using namespace std;

int main(){
 // nested loop with while 
    int x=1;
    while (x<=10){
        int y=1;
        while (y<=10){
            cout << x << " * " << y << " = " << x*y << endl;
            y++;
        }
    x++;
    }
   
   
}
