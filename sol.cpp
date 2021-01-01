#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	set<int> s;
	//find the number of distinct values except zero
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		if(a>0)
			s.insert(a);
	}
	cout << s.size() << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
