#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int X, Y, K;
    cin >> X >> Y >> K;

    int diff = abs(X - Y);
    int moves = 0;
    if(diff>=K){
    while (diff >=0) {
        if(diff==K)
        {
            cout<<moves<<endl;
            return;
        }
        diff -= 2;  
        moves++;
    }
    }
    else
    {
        while(diff<=K)
        {
            if(diff==K)
            {
                cout<<moves<<endl;
                return;
            }
            diff+=2;
            moves++;
        }
    }
    cout << -1 << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
