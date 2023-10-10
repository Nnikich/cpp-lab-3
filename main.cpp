#include <iostream>
#include <cmath>
using namespace std;
int n, a[32];
int rec(int t1, int t2, int ind) {
    if (ind == n) return abs(t1 - t2);    
    return min(rec(t1 + a[ind], t2, ind + 1), rec(t1, t2 + a[ind], ind + 1));
}
int main(){
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    cout << rec(0, 0, 0);
    return 0;
}
