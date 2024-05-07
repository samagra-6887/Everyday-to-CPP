#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Insertion at head
void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Insertion at tail
void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

// Insertion at any position between linked list
void insertAtPosition(Node* &head, int d, int position) {
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* newNode = new Node(d);
    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp != nullptr) {
        temp = temp->next;
        cnt++;
    }

    if (temp == nullptr) {
        cout << "Invalid position. Position exceeds the length of the list." << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    Node* tail = head;
    print(head);

    insertAtTail(tail, 50);
    print(head);
    insertAtTail(tail, 100);
    print(head);
    insertAtPosition(head, 25, 2);
    print(head);

    return 0;
}
