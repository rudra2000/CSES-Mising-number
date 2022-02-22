#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 2, b = 4;
    a = a ^ b;
    b = b ^ a;

    a = a^b;

    cout<< a << " " << b << endl;

    // return 0;
}