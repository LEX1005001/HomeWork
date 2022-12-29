#include <iostream>
using namespace std;
int main() {
	float v = 0;
	float t = 0;
	float a = 0;

	cout << "v:";
	cin >> v;
	cout << "t:";
	cin >> t;
	cout << "a:";
	cin >> a;

	cout << "S=" << v * t + (a * (t * t)) / 2 << " m";

}
