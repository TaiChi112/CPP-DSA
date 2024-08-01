#include <iostream>

using namespace std;

struct Node
{
      int data;
      Node *next;
      Node() {}
      Node(int value) : data(value), next(nullptr) {}
};
class Stack
{
private:
      Node *top;

public:
      Stack() : top(nullptr) {}

      void push(int value)
      {
            Node *newNode = new Node(value);
            if (top == nullptr)
            {
                  top = newNode;
            }
            else
            {
                  newNode->next = top;
                  top = newNode;
            }
            cout << "Pushed : " << value << endl;
      }
      void pop()
      {
            while (top != nullptr)
            {
                  cout << top->data << endl;
                  top = top->next;
            }

      }
      void update(int oldVal, int newVal)
      {
            Node *temp = top;
            while (temp != nullptr)
            {
                  if (temp->data == oldVal)
                  {
                        temp->data = newVal;
                        cout << "Updated value " << oldVal << " to " << newVal << ".\n";
                        return;
                  }
                  temp = temp->next;
            }
            cout << "Value " << oldVal << " not found in the stack.\n";
      }
};
int main()
{
      Stack stack;
      stack.push(10);
      stack.push(20);
      stack.push(30);

      stack.pop();

      stack.update(20, 50);
      stack.update(40, 50);

      stack.pop();
      return 0;
}