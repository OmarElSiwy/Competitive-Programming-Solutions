#include <iostream>
#include <unordered_map>
#include <string.h>

using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	string storage[n];

	unordered_map<string, string> temp;

	string a;

	for (int i = 0; i < n; i++) {cin >> storage[i]; temp.insert({storage[i], ""});}
	for (int i = 0; i < n; i++) cin >> temp.at(storage[i]);
	
	auto it = temp.begin();
	for (; it != temp.end(); it++) {
		if (!(temp.count(it->second) && temp.at(it->second) == it->first && it->first != it->second)) {
			cout << "bad";
			return 0;
		} 
	}
	cout << "good";
}