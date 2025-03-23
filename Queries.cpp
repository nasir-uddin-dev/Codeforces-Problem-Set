#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_at_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_tail(Node *&head, Node *&tail, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
        tmp = tmp->next;
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
}

void delete_at_any_position(Node *&head, Node *&tail, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
        tmp = tmp->next;
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int size_linked(Node *head)
{
    int sz = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int sz = size_linked(head);
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
        }
      
        else if (x == 2)
        {
            if (x == 0)
            {
                delete_at_head(head, tail);
            }
            else if (x == (sz - 1))
            {
                delete_at_tail(head, tail, x);
            }
            else
                delete_at_any_position(head, tail, x);
        }
    }
    return 0;
}