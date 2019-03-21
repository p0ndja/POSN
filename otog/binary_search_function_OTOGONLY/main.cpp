#include <iostream>
#include "binary_search.h"

using namespace std;

main(){
    int l = 0, mid, less;
    int r= get_n();
    while(1){
        mid = (l+r)/2;
        //found answer
        if(is_equal(mid)==1){answer(mid);}
        if(less==1||less==0){
            if(less==1){
                l++;r = --mid;
            }else{
                l = ++mid;r--;
            }
        }
        else if(is_less(mid)==1){
            less = 1;
        }else less = 0;
     }
}
