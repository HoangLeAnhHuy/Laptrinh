#include <iostream>
#include <math.h>

using namespace std;

int tongso (int n){
    int tong =0;
    while (n) {
        tong+=n%10;
        n/=10;

    }
return tong;
}

void chia_het (int n) { 
    if (tongso(n)%6==0){
        cout<< "tong chu so cua "<<n<<" chia het cho 6"<<endl;

    }
    else  cout<< "tong chu so cua "<<n<<" khong chia het cho 6"<<endl;

}



int main ( ) {
    int n; cin>>n;
    cout<<tongso(n)<<endl;
    chia_het(n);


}