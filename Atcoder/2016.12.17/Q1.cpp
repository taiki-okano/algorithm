#include <iostream>

int main(){
	int n, a, b;
	std::cin >> n >> a >> b;
	int ans = (a + b) - n;

	if(ans < 0){
		ans = 0;
	}

	std::cout << ans << std::endl;

	return 0;
}
