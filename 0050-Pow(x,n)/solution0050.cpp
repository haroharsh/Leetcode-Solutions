class Solution {
    public:
        double myPow(double x, int n) {
            long long Number = n;
            //for negative power
            if (Number < 0) {
                x = 1 / x;
                Number = -Number;
            }
            // positive power
            double output = 1;
            while (Number > 0) {
                if (Number % 2 == 1) { //checking if power is odd 
                    output *= x;
                }
                x *= x; 
                Number /= 2;//Dividing the power to half to reduce time
            }
            return output;
        }
    };
    //Gyan Ki Baat : Solution likhne se pehle test cases jarur padhe..