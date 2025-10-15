#include <stdio.h>

void doswap(int nums[], int idxa, int idxb) {
	int temp = nums[idxa];
	nums[idxa] = nums[idxb];
	nums[idxb] = temp;
}


void quicksort(int nums[], int start, int end) {
	int pivot = start;
	int low = start + 1;
	int high = end;

	if (start >= end) {
		return;
	}

	while (1) {
		if (low > high) {
			doswap(nums, pivot, high);
			break;
		}
		
		while (nums[low] <= nums[pivot] && low <= end) {
			low++;
		}

		while (nums[high] >= nums[pivot] && high >= start + 1) {
			high--;
		}

		if (low < high) {
			doswap(nums, low, high);
		}

	}


	// pivot이 자기 자리를 찾아가도록 한다.
	
	quicksort(nums, pivot, high - 1);
	quicksort(nums, high+1, end);
}



int main(void) {
	int nums[] = { 23,32,34,100,87,76,23,65,2,90,21,1,3 };
	int sz = sizeof(nums)/sizeof(nums[0]); // 몇개있는지
	

	quicksort(nums, 0, sz - 1);

	for (int i = 0; i < sz; i++) {
		printf("%d --> ", nums[i]);
	}

	printf("\n");
	return 0;
}