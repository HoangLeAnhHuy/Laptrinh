#include <iostream>
#include <math.h>

using namespace std; 



int main () {
    int n;
    cin>> n; 
    for (int i=2; i<sqrt(n) ;i++){
        if (n%i==0) {
            cout<<n<<" khong la so nguyen to\n";
            return 0;

        }
        else {
            cout <<n<<" la so nguyen to\n" ;
            return 0;

        }
    }
return 0;
}