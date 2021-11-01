#include<iostream>
using namespace std;
int main()
{
   int number, sum = 1;
   
   cout << "Enter your number : ";
   cin >> number;
      for(int i = 1; i<number && sum < number; i++){
            sum += sum * i;
    }
    cout << endl;
    if(sum == number)
        cout<<"Yes";
    else
        cout<<"No";

	return 0;
}
