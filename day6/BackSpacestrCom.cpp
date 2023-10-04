#include <bits/stdc++.h>
using namespace std;

string removeBackspaces(string& s)
{
	int n = s.size();


	int idx = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] != '#') {
			s[idx] = s[i];
			idx++;
		}
		else if (s[i] == '#' && idx >= 0) {
			idx--;
		}

		if (idx < 0)
			idx = 0;
	}

	return s.substr(0, idx);
}

int main()
{
	string s = "equ#ual";
	string t = "gee##eeks";

	if (removeBackspaces(s) == removeBackspaces(t))
		cout << "True";
	else
		cout << "False";

	return 0;
}
