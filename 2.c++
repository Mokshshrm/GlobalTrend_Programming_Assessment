int longestSubstrDistinctChars(string s)
{
    int i = 0;
    int n = s.size();
    int j = 0;
    int arr[26] = {0};
    int res = 0;
    while (j < n)
    {
        while (i < j && arr[s[j] - 'a'] + 1 >= 2)
        {
            arr[s[i] - 'a']--;
            i++;
        }
        res = max(res, j - i + 1);
        arr[s[j] - 'a']++;
        j++;
    }

    return res;
}
