#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void addfront(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
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
    addfront(&head, 27);
    addfront(&head, 53);
    addfront(&head, 74);

    cout << "Original Linked List: ";
    printList(head);

    cout << "Deleting the second node (53): ";
    deleteNode(&head, head->next);
    printList(head);

    return 0;
}

