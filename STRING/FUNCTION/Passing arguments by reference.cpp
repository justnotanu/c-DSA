#include <iostream>
using namespace std;

int increment(int &b) {
    b++;
    return b;
}
int main() {
    int a = 10;
    int ans = increment(a);
    cout<<a<<" "<<ans;
    return 0;
}