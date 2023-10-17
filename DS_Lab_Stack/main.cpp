#include <iostream>
using namespace std;
int stack[5], n=5, top=-1;
void push(int value) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=value;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Elements of stack are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Empty stack";
}
int main() {
   int x, value;
   cout<<"1) Stack push"<<endl;
   cout<<"2) Stack pop"<<endl;
   cout<<"3) Stack Display"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>x;
      switch(x) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>value;
            push(value);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(x!=4);

   return 0;
}
