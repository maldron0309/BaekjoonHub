#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int a, n, x;
	cin >> n >> x;

	while (n--)
	{
		cin >> a;
		if (x > a) cout << a << " ";
	}

	return 0;
}
