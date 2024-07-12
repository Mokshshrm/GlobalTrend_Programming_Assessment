struct Node *reverseList(struct Node *root)
{
    Node *prev = NULL;
    while (root != NULL)
    {
        Node *nxt = root->next;
        root->next = prev;
        prev = root;
        root = nxt;
    }
    return prev;
}
