int p = 1e9+7; //prime number
// use this when needed to multiply multiplicative inverse and then find modulo

long inv(long a) {
    if (a == 1) return 1;
    return (p - p / a) * inv(p % a) % p;
}
