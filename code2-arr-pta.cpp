#include <iostream>
using namespace std;
int main(){
    int arr[]={10, 20, 30, 40 ,50, 60, 70, 80, 90, 100};
    cout<<*arr<<endl; // print out the first element of the array

    int *ptr=arr;
    for(int i=0; i<10;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}