#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> Y[i];
    }

    for (int i = 0; i < N; i++) 
    {
        int P = Y[i]; 
        vector<pair<int, int>> L;

        for (int j = 0; j < N; j++) 
        {
            L.push_back(make_pair(abs(X[j] - P), X[j]));
        }

        sort(L.begin(), L.end());

        vector<int> abc(N);
        for (int j = 0; j < N; j++)
        {
            abc[j] = L[j].second;
        }

        if (abc == Y) {
            cout << (find(X.begin(), X.end(), P) - X.begin() + 1) << "\n"; 
            return;
        }
    }

    cout << "-1"<<endl; 
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
