#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int ans;
    if (a > b && a > c && a > d)
        ans = a;
    else if (b > c && b > d)
        ans = b;
    else if (c > d)
        ans = c;
    else
        ans = d;
    return ans;
    }
