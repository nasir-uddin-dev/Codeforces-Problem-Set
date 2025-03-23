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

void insert_at_tail_2(Node *&head, Node *&tail, int val)
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

bool isEqual(Node *head, Node *head_2)
{
    Node *tmp = head;
    Node *tmp_2 = head_2;
    while (tmp != NULL && tmp_2 != NULL)
    {
        if (tmp->val != tmp_2->val)
            return false;
        tmp = tmp->next;
        tmp_2 = tmp_2->next;
    }

    if (tmp != NULL || tmp_2 != NULL)
        return false;
    return true;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val_1;
    while (1)
    {
        cin >> val_1;
        if (val_1 == -1)
            break;

        insert_at_tail(head, tail, val_1);
    }

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val_2;
    while (1)
    {
        cin >> val_2;
        if (val_2 == -1)
            break;
        insert_at_tail_2(head_2, tail_2, val_2);
    }

    if (isEqual(head, head_2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}