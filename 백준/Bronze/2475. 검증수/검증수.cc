#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, sum{};

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		sum += n * n;
	}

	cout << sum % 10;

	return 0;
}
