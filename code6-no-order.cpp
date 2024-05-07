#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){

    string s="84435132";
    sort(s.begin(), s.end(), less<int>()); //greater and less use
    cout<<s;

    return 0;
}