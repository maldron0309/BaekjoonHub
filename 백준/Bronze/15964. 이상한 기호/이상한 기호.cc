#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long a, b;
	cin >> a >> b;

	cout << (a + b) * (a - b);

	return 0;
}
