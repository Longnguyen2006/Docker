#include <iostream>
#include"primelist.h"

using namespace std;

int main() 
{
    for (int i=start;i<end; i++) 
    {
        bool prime=true;
        for (int j=start; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                prime=false;
                break;    
            }
        }   
        if(prime) cout << i << " ";
    }
    return 0;
}