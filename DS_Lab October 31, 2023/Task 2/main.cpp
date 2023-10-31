#include <iostream>
using namespace std;


int findMin(int stack[], int top) {
    int min_val = stack[0];
    for(int i = 1; i <= top; i++) {
        if(stack[i] < min_val)
            min_val = stack[i];
    }
    return min_val;
}

void removeElement(int stack[], int &top, int elem) {
    int i;
    for(i = 0; i <= top; i++) {
        if(stack[i] == elem)
            break;
    }

    while(i < top) {
        stack[i] = stack[i+1];
        i++;
    }
    top--;
}

void printStack(int stack[], int top) {
    cout << "Stack elements are: ";
    for(int i = 0; i <= top; i++)
        cout << stack[i] << " ";
    cout << endl;
}

int main() {
    int stack[100], top = -1;

    stack[++top] = 5;
    stack[++top] = 2;
    stack[++top] = 4;
    stack[++top] = 7;
    printStack(stack, top);

    int min_val = findMin(stack, top);
    removeElement(stack, top, min_val);
    printStack(stack, top);


    stack[++top] = 2;
    stack[++top] = -1;
    printStack(stack, top);


    min_val = findMin(stack, top);
    removeElement(stack, top, min_val);
    printStack(stack, top);

    return 0;
}
