#include <iostream>

using namespace std;

int main(void) {
	
	int N;
	
	cin >> N;
	
	for(int i = 1; i <= N; i ++)  {
		for(int j = 0; j < i - 1; j ++) {
			printf(" ");
		}
		for(int j = 2*N - 1; j >= 2*i - 1; j --) {
			printf("*");
		}
		cout << endl;
	}
	
	return 0;
}