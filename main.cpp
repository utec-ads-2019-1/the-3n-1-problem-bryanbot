#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
	int high, low;
	int swap;

	while (cin >> high >> low){
		if ( low > high){
			swap = high;
			high = low;
			low = swap;
		}
		int maxCycle = 0;
		int low_print = low;
		while (low <= high){
			int count = 1;
			unsigned int n = low;
			while (n != 1){
				count++;
				if (n % 2 == 0){
					n = n/2;
				}
				else {
					n = 3*n + 1;
				}
			}
			if (count >= maxCycle){
				maxCycle = count;
			}
		low++;
	}
	printf("%d %d %d\n", low_print, high, maxCycle);
	}	
}