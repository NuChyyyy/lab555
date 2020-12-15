#include<iostream>
using namespace std;

int main(){
    int n = 1;
    int i = 0,j = 0;

    while(n != 0){

        cout << "Enter an integer: ";
        cin >> n;
    
        if ( n != 0){
        if ( n%2 == 0){
        i++;
        }else{
        j++;
        }
        }
    }
    cout << "#Even numbers = " << i << "\n";
    cout << "#Odd numbers = " << j;
    return 0;
}
