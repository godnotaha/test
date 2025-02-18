






#include <iostream>
#include <vector>
using namespace std;

//---------------------------- возведение в степень
//int bp(int a, int n) {
//	if (n == 0) return 1;
//	if (n % 2 == 0) {
//		int h = bp(a, n / 2);
//		return h * h;
//
//	}
//	else return bp(a, n - 1) * a;
//}

int main() {
	int n;
	cin >> n;

	//----------------------------- простое число 
	//for (int i = 2; i * i <= n; i++) {
	//	if (n % i == 0) {
	//		cout << n << " непростое\n";

	//	}

	//}


	//----------------------------- простые числа
	//vector <int> primes;
	//for (int i = 2; i <= n; i++)
	//{
	//	
	//	char b = true;
	//	
	//	for ( int j : primes) {
	//		
	//		if (j * j > i) break;
	//		if (i % j==0) {
	//			b = false;
	//			break;

	//		}
	//	}
	//	if (b) primes.push_back(i);
	//}


	//for (int i : primes) {
	//	
	//	cout << i<<"\n";
	//}
	

}

