#include <iostream>
#include <lib.h>
using namespace std;

int main(){
    int n=0,i=2;
    cin >> n;
    int numeroprimo = funzione (n,i);
    if (numeroprimo == true) {
        cout << "numero primo";
    }
    else{
        cout << "numero non primo";
    }
    return 0;
}
