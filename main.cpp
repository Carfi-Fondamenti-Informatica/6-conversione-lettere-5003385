#include <iostream>
#include "lib.h"
using namespace std;
int main() {

    char a;
    cin >> a;

    if (lib(a)== true){
        cout << a << endl;
    } else {
        cout << "errore" << endl;
    }
    return 0;
}
