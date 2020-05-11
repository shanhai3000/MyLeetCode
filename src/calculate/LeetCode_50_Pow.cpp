//
// Created by shanhai on 2020/5/11.
//

#include "../include/ac_header.h"

class Solution_50 {
public:
    double quickMulti(double x, long long n){
        if( n == 0){
            return 1;
        }
        double ans(1);double _x(x);
        while(n > 0){
            if(n % 2 == 1){
                ans*=_x;
            }
            _x*=_x;
            n/=2;
        }
        return ans;
    }
    double myPow(double x, int n) {
        long long _n = n;
        return _n >= 0? quickMulti(x, n):1/quickMulti(x, -n);
    }

};