#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto cta = int{ 0 };
	auto ctb = int{ 0 };
	while (0 < (n--)) {
		int a, b;
		cin >> a >> b;
		if (a < b) {
			++ctb;
		}
		else if (b < a) {
			++cta;
		}
	}

	cout << cta << ' ' << ctb;

	return 0;
}