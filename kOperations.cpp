#include<iostream>
using namespace std;
int main() {

	long N;
	int K;
	cin >> N >> K;

	for(int i=0;i<K;i++) {
		if(N%200==0)
			N/=200;
		else {
			N*=1000;
			N+=200;
		}

	}

	cout << N;

	return 0;
}
