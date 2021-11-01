#include <iostream>
using namespace std;

int main() {

    int n[2],temp,i;

for (i = 0; i<2; i++)
		{
        cout << "Enter number " <<i+1 <<" : ";
        cin >> n[i];
		}

    while(true)
		{
	        if(n[2] == 0) break;
	        temp = n[0]%n[1];
	        n[0] = n[1];
	        n[1] = temp;
	    }

    cout<<"B.M.M : "<<n[0];

    return 0;
