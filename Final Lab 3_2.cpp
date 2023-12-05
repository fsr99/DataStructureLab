#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void addafter(Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL" << endl;
        return;
    }

    Node* new_node = new Node();
    new_node->data = new_data;

    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}
void deleteNode(Node** head_ref, Node* del) {
    if (*head_ref == NULL || del == NULL)
        return;

    if (*head_ref == del)
        *head_ref = del->next;

    if (del->next != NULL)
        del->next->prev = del->prev;

    if (del->prev != NULL)
        del->prev->next = del->next;

    delete del;
}
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    head = new Node();
    head->data = 11;
    head->prev = NULL;
    head->next = NULL;

    addafter(head, 23);
    addafter(head->next, 17);
    cout << "Original Linked List: ";
    printList(head);
    cout << "Deleting the second node (23): ";
    deleteNode(&head, head->next);
    printList(head);

    return 0;
}
