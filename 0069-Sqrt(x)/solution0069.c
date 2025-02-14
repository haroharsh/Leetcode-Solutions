int mySqrt(int x) {
    if (x <= 1)  //Sqrt of 0 and 1 is 0 & 1 respectively
        return x;
    //finding Sqrt with Newton Raphson Method
    double y = x;
    double z = (y + (x / y)) / 2;

    //iterating upto 5 decimal places for better precision
    while (abs(y - z) >= 0.00001) {
        y = z;
        z = (y + (x / y)) / 2;
    }
    return z;
}