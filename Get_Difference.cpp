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

int maximum(Node *head)
{
    int mx = INT_MIN;

    Node *tmp = head;
    while (tmp != NULL)
    {
        mx = max(mx, tmp->val);
        tmp = tmp->next;
    }
    return mx;
}

int minimum(Node *head)
{
    int mn = INT_MAX;

    Node *tmp = head;
    while (tmp != NULL)
    {
        mn = min(mn, tmp->val);
        tmp = tmp->next;
    }
    return mn;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head, tail, val);
    }

    int mx = maximum(head);
    int mn = minimum(head);

    int difference = mx - mn;
    cout << difference << endl;
    return 0;
}