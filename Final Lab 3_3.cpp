#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};
void addend(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        new_node->prev = NULL;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
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
    addend(&head, 89);
    addend(&head, 44);
    addend(&head, 35);

    cout << "Original Linked List: ";
    printList(head);
    cout << "Deleting the second node (44): ";
    deleteNode(&head, head->next);
    printList(head);

    return 0;
}

