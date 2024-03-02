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


    return 0;
}
