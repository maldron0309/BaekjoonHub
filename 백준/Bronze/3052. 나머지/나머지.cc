#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> count;
	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		count.insert(n % 42);
	}

	cout << count.size() << '\n';

	return 0;
}
