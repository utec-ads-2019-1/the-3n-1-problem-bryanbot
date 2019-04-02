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
		int low_print = low;
		while (low <= high){
			int count = 1;
			unsigned int n = low;
			while (n != 1){
				count++;
				n = (n % 2 == 0)? n = n /2 : n = 3 * n+1;
			}
			if (count >= maxCycle){
				maxCycle = count;
			}
		low++;
	}
	printf("%d %d %d\n", low_print, high, maxCycle);
	}
	return 0;
}