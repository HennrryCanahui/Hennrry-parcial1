#include <iostream>
using namespace std;
int main() {
    int c;
    for (int i=1; i <=50; i++) {
        c = i % 2;
        if (c == 0) {
            cout << "a:" <<i<<endl;
        }else{
            cout << "b:" <<i<<endl;
        }
    }
    int contador= 0;
    int Stop =0;
    while (contador <=30){
        contador +=3;
        Stop = contador % 2;
       if (contador > 30 &&  Stop == 1) {
            cout << contador;
        }
    }


    return 0;
}
