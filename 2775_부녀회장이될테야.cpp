#include <iostream>
#include <vector>
using namespace std;

int func(int k, int n)
{
	if (k == 0)
		return n;
	if (n == 1)
		return 1;
	return func(k - 1, n) + func(k, n - 1);
}

int main()
{
	int T;
	cin >> T;
	vector<int> h;
	vector<int> w;
	int k, n;
	for (int i = 0; i < T; ++i)
	{
		cin >> k >> n;
		h.push_back(k);
		w.push_back(n);
	}
	for (int i = 0; i < T; ++i)
	{
		cout << func(h[i], w[i]) << endl;
	}
}