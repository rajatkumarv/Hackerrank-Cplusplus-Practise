#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, c =0, s=0;
    while (c<3)
    {
        cin>>x;
        s+=x;
        c++;
    }
    cout<<s;
    return 0;
}
