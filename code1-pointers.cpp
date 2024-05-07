#include <iostream>
using namespace std;
int main(){
    int a=20;
    int *ptr;
    ptr=&a;

    cout <<ptr<<endl;
    ptr++;
    // *ptr=200;
    cout<<ptr<<endl;
}