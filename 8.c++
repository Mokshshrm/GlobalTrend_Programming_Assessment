int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return a > b ? gcd(a % b, b) : gcd(b % a, a);
}
