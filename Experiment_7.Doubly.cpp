#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insertBegin(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    head = newNode;
}

void insertEnd(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteBegin() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    delete temp;
}

void deleteEnd() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    if(temp->next == NULL) {
        delete temp;
        head = NULL;
        return;
    }

    while(temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    delete temp;
}

void display() {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " <-> ";
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