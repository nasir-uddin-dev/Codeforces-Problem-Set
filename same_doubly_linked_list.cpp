#include<bits/stdc++.h>
using namespace std ;

class Node
{
    public :
    int val;
    Node* prev;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print_doubly_forward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
}
void print_doubly_backward(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->prev;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1)
    {
        cin >> val;
        if(val == -1)
        break;
        insert_at_tail(head, tail, val);
    }

    //print_doubly_forward(head);
    print_doubly_backward(tail);
    return 0;
}