#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data=data;
        this -> next= NULL;
    }
};

int main(){

    Node* node1 =new Node(100);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

}