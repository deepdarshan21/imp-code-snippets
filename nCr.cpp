int p = 1e9+7; //prime number
// use this when needed to multiply multiplicative inverse and then find modulo

long inv(long a) {
    if (a == 1) return 1;
    return (p - p / a) * inv(p % a) % p;
}

int nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    int res = 1;
    For(i, 1, r + 1, 1) {
        res = (res * (n - r + i)) % p;
        res = (res * inv(i)) % p;
    }
    return res;
}
