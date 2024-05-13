#include <iostream>

int MyPow(int soNguyen, int soMu){
	
	if(soMu == 0){
		return 1;
	} 
	int temp = MyPow(soNguyen, soMu/2);
	if(soMu % 2 == 0){
		return temp * temp;
	} else {
		return 2 * (temp * temp);
	}
}


int main() {
	int soNguyen, soMu;
	scanf("%d %d", &soNguyen ,&soMu);
	long long n = MyPow(soNguyen, soMu);
	printf("%lld", n);
	return 0;
}
