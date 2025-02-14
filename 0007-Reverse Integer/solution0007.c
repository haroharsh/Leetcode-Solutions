int reverse(int x) {
    long int revert = 0;
    
    while (x != 0) {
        revert = revert * 10 + x % 10;
        x = x / 10;
    }
    if (revert > 2147483647 || revert < -2147483648){
            return 0;
    }
    return (int)revert;
}