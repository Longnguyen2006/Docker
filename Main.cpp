#include <iostream>
#include "primelist.h"
using namespace std;


int main()
{
    while(true){
        int start;
        cin>>start;
        int end;
        cin>>end;
        if(start>end){
            int a=start;
            start=end;
            end=a;
        }
        if((start>0)&&(start>0)){
            vector <int> primes = primelist_h(2, 500);
            for (int i=0;i<primes.size();i++) {
                cout<<primes[i]<<endl;
            }
        }else{
            cout<<"It must be positive"<<endl;
        }
    }

    return 0;
}






