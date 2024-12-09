#include <iostream> 
using namespace std;

int main(){
  
    while(true){

         int degree ;
         cout << "Enter your degree: ";
         cin >> degree;
        //  check if valid degree
         if(degree >100 || degree <0){
            cout<<"enter valid Degree";
            break;
         }

         // we could do this with one line with ternary operator
         if (degree >=90) cout <<"Your degree is A\n";
         else if (degree >=80) cout <<"Your degree is B\n";
         else if(degree >=70) cout <<"Your degree is C\n";
         else if (degree >=60) cout <<"Your degree is D\n";
         else cout <<"Your degree is F\n";

    }

    return 0;
}
