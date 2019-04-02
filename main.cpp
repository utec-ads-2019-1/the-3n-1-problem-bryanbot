#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int high, low;
	while ((scanf("%d %d", &high, &low))==2){
		int print_high = high;
		int print_low = low;
		if ( low > high){
			std::swap(high, low);
		}
		int maxCycle = 0;
		int cycleLength;
		for (int i = low; i <= high; i++){
			cycleLength = 1;
			unsigned long int n = i;
			while (n != 1){
				cycleLength++;
				n = (n % 2 == 0)? n / 2 : 3 * n + 1;
			}
			maxCycle = (cycleLength > maxCycle)? cycleLength:maxCycle;
	}
	printf("%d %d %d\n", print_high, print_low, maxCycle);
	}
	return 0;
}