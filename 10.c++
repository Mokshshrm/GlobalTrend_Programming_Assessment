bool AlphabaticString(string s, int n)
{
    for (char ch : s)
    {
        if ((ch <= 'z' && ch >= 'a') || (ch >= 'A' && ch <= 'Z'))
        {
            continue;
        }
        else
            return false;
    }
    return true;
}
