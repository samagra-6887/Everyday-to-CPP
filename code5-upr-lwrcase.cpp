#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    //upper to lower or lower to upper case creation

    string str="jnSNCNEbsibvwb"; //every alpha is lower 
//uppercase conversion
    // for(int i=0; i<str.size(); i++){
    //     if(str[i]>='a' && str[i]<='z')
    //     str[i]-=32;
    // }
    // cout<<str<<endl;

//lowercase conversion

    // for(int i=0; i<str.size(); i++){
    //     if(str[i]>='A' && str[i]<='Z')
    //     str[i]+=32;
    // }
    // cout<<str;

    //by use of function of transform

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str;

    return 0;
}
