#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int b=0;
    double a = 2;
    cin >> b;
    
    //checking negative values on b
    while(b < 0)
        cin >> b;

    cout<<"modifica 3/11"<<endl;
    
    cout << "My first time on github!  "<<'\n'<<"output a power of 2"<<pow(a,b) << endl;
    
    return 0;
}