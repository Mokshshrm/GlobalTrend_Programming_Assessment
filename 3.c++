int findMaxSum(Node *root, int &res)
{
    if (root == NULL)
        return 0;
    int first = max(0, f(root->left, res));
    int second = max(0, f(root->right, res));
    res = max(res, first + second + root->data);
    return (root->data + max(first, second));
}
