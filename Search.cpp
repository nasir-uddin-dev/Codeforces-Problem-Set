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

int find_index(Node *&head, int x)
{
    int idx = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == x)
            return idx;
        tmp = tmp->next;
        idx++;
    }

    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
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
        
            int x;
            cin >> x;
        
            int index = find_index(head, x);
            cout << index << endl;
    }
    return 0;
}