#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int n=0;
    cin >> n;
    if (funzione (n,2) == true) {
        cout << "numero primo";
    }
    else{
        cout << "numero non primo";
    }
    return 0;
}
