#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(NULL) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }


    void remove(int value) {
        Node* current = head;
        Node* prev = NULL;

        if (current != NULL && current->data == value) {
            head = current->next;
            delete current;
            return;
        }


        while (current != NULL && current->data != value) {
            prev = current;
            current = current->next;
        }


        if (current == NULL) {
            cout << "Value not found in the list" << endl;
            return;
        }


        prev->next = current->next;
        delete current;
    }


    bool find(int value) {
        Node* current = head;
        while (current != NULL) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }


    void display() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList myList;


    myList.insert(57);
    myList.insert(30);
    myList.insert(38);
    myList.insert(62);


    cout << "Initial linked list:" << endl;
    myList.display();


    cout << "\nSearching for value 30: " << boolalpha << myList.find(30) << endl;
    cout << "Searching for value 99: " << boolalpha << myList.find(99) << endl;


    myList.remove(38);


    cout << "\nLinked list after deleting 38:" << endl;
    myList.display();

    return 0;
}
