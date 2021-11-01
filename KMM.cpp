#include <iostream>
using namespace std;

int main() {

    int n[2],c[3],t,i;

for (i = 0; i<2; i++){

        cout << "Enter number " <<i+1 <<" : ";
        cin >> n[i];}
        c[0] = n[0];
        c[1] = n[1];

    while(true){

        if(n[1] == 0) break;
        temp = n[0]%n[1];
        n[0] = n[1];
        n[1] = t;
    }

    c[2] = (c[0]*c[1] / n[0]);

    cout<<"K.M.M = "<<c[2];

    return 0;
}
