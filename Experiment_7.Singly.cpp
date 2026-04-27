#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertBegin(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void deleteBegin() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
}

void display() {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    insertBegin(10);
    insertBegin(5);
    insertEnd(20);
    insertEnd(30);

    display();

    deleteBegin();
    deleteEnd();

    display();

    return 0;
}