

#include "lib.h"
#include <cctype>

bool lib(char &a){

    if (isalpha(a)){

        int c=a;


        if (c<96){
            c= c+32;
            a=c;
        } else {
            c=c-32;
            a=c;
        }
        return true;

    } else if (isdigit(a)){
        return false;
    }
}
