#include "lib.h"

bool funzione (int n){
    for (int i=2; i<n;i++){
        if (n%i == 0){
            return false;
            break;
        }
    }
    return true;
}
