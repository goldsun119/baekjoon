#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int line;
	for(line= 1; n>0;++line)
		n -= line;
	--line;
	if (line % 2 == 0)
		cout << line + n << "/" << 1 - n;

	else
		cout << 1 - n << "/" << line + n;
}