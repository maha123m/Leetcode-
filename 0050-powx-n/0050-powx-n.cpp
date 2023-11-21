class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }

        if (x == 1) {
            return 1.0;
        }

        if (x == -1) {
            return (n % 2 == 0) ? 1.0 : -1.0;
        }

        if (n == INT_MIN) {
            x = 1 / x;
            n = INT_MAX;  // Handle the case when n is INT_MIN to avoid overflow
        } else if (n < 0) {
            n = -n;
            x = 1 / x;
        }

        double ans = 1.0;
        while (n > 0) {
            if (n % 2 == 1) {
                ans *= x;
            }
            x *= x;
            n /= 2;
        }

        return ans;
    }
};
