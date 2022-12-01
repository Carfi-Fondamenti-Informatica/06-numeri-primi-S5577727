#include "lib.h"

bool funzione (int n, int i)
{
    if (n<=1)
    {
        return false;
    }
    else 
    {
        for ( i=2; i<n; i++ )
        {
            if (n%i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
