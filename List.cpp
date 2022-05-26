#include <iostream>
using namespace std;

class Node
{
public:
    int value = 0;
    Node *Left;
    Node *Right;
     Node(int data)
    {
        value = data;
        
    }
};

class List
{

public:
    Node* first;
    Node* last;
    int length = 0;
    void insert(int value)
    {
        if (length == 0)
        {
            Node* newNode = new Node(value);
            first = newNode;
          
            last = first;
        }
        else
        {
          
            Node* newNode = new Node(value);
            
          
            last->Right = newNode;
            last->Right->Left = last;
            last = last->Right;
            
            last->Right = NULL;
        }
        length++;
    }
    void printList()
    {
        Node* curr = first;

        int i = 0;
        while (i < length)
        {

            cout << curr->value;
            cout << "\n-------\n";
            curr = curr->Right;
            i++;
        };
    }

    void printLast() {
         Node* curr = last;

        int i = 0;
        while (i < length)
        {

            cout << curr->value;
            cout << "\n-------\n";
            curr = curr->Left;
            i++;
        };

    }
};