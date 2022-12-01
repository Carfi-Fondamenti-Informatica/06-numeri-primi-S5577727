#include "lib.h"

bool funzione (int n, int i){
    for ( i; i<n; i++ ){
        if (n%i == 0){
            return false;
            break;
        }
    }
    return true;
}
