class Solution {
public:
    double myPow(double x, int n) {
            if (n == INT_MIN) {
                x = 1 / x;
                return x * myPow(x, INT_MAX);  // Handle INT_MIN separately
            }
        else if (n < 0) {
             x = 1 / x;
            n = -n;
        }
        return power(x, n);
    }

private:
    double power(double x, int n) {
        if (n == 0) {
            return 1.0;
        }

        double halfPower = power(x, n / 2);

        if (n % 2 == 0) {
            // If n is even
            return halfPower * halfPower;
        } else {
            // If n is odd
            return x * halfPower * halfPower;
        }
    }
        
  
};