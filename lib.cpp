
#include"lib.h"

bool numeroPrimo(int a){
    bool primo = true;
    for (int b=2; b>a; b++){
        int risultato=a%b;
        if (risultato==0 && b<a){
            primo=false;
            break;
        }
    }return primo;
}
