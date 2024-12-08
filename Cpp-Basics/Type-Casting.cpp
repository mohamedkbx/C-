    #include <iostream>
    using namespace std;

    int main(){
        float c = 5.5;
            cout << int(c); // first way to convert 
            cout << (int) c +5; // second way to convert 
            cout << static_cast <int>(c); // Third way to convert 
           
        return 0;
    }