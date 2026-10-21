// WAP to search an element in linked list 
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
int search(Node* head, int key) {
    Node* temp = head;
    int position = 1;

    while (temp != NULL) {
        if (temp->data == key) {
            return position;  
        temp = temp->next;
        position++;
    }
    return -1;  

int main() {
    Node* head = NULL;

  
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = search(head, key);

    if (result != -1)
        cout << "Element found at position: " << result;
    else
        cout << "Element not found";

    return 0;
}