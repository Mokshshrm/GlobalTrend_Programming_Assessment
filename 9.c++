int maxDiff(int arr[], int n)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i : arr)
    {
        mini = min(i, mini);
        maxi = max(i, maxi);
    }
    return (maxi - mini);
}
