#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int high, low;
	while ((scanf("%d %d", &high, &low))==2){
		if ( low > high){
			std::swap(high, low);
		}
		int maxCycle = 0;
		for (int i = low; i <= high; i++){
			int count = 1;
			int n = i;
			while (n != 1){
				count++;
				n = (n % 2 == 0)? n / 2 : 3 * n + 1;
			}
			if (count >= maxCycle){
				maxCycle = count;
			}
	}
	printf("%d %d %d\n", low, high, maxCycle);
	}
}