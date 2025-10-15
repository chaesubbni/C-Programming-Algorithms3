// sort 하는 알고리즘.
// 1. bubble sort
// 2. selection sort
// 3. insertion sort
// 4. shell sort
// 5. merge sort
// 6. quick sort


// bubble sort

//#include <stdio.h>
//#define SZ 5

/*
int main(void) {
	int sort[] = { 5,4,3,2,1 };

	for (int j = 0; j < SZ - 1; j++) {
		for (int i = 0; i < SZ - 1 - j; i++) {
			if (sort[i] > sort[i + 1]) {
				int temp = sort[i];
				sort[i] = sort[i + 1];
				sort[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < SZ; i++) {
		printf("%d ", sort[i]);
	}
	return 0;
}
*/


// selection sort
//#include <stdio.h>
//#define SZ 5

/*
int main(void) {
	int sort[SZ] = { 5,4,3,2,1 };
	
	
	for (int j = 0; j < SZ; j++) {
		int sidx = j;
		for (int i = j; i < SZ; i++) {
			if (sort[i] < sort[sidx]) {
				sidx = i;
			}
		}

		int temp = sort[sidx];
		sort[sidx] = sort[j];
		sort[j] = temp;
	}

	for (int i = 0; i < SZ; i++) {
		printf("%d ", sort[i]);
	}
	return 0;
}

*/

// insertion sort

//#include <stdio.h>
//#define SZ 5
/*
int main(void) {
	int sort[SZ] = { 5,4,3,2,1 };

	for (int i = 1; i < SZ; i++) {
		for (int j = i; j > 0; j--) {
			if (sort[j] < sort[j - 1]) {
				int temp = sort[j];
				sort[j] = sort[j - 1];
				sort[j - 1] = temp;
			}

			else {
				break;
			}
		}

	}
	for (int i = 0; i < SZ; i++) {
		printf("%d ", sort[i]);
	}
	return 0;
}

*/

//Quick sort
// pivot을 잡는다. -> pivot보다 작으면 왼쪽, 크면 오른쪽으로 정렬 -> pivot그럼 자ㅏ리가 잡힌다. -> 1개 남을 때까지 무한 반복
#include <stdio.h>
#define SZ 8

int main(void) {
	int sort[SZ] = { 4,7,3,2,5,6,9,1 };


	
		int pivot = 0;
		int l = pivot + 1;
		int r = SZ - 1;

		while (1) {


			if (sort[l] < sort[pivot]) {
				l++;
			}

			if (sort[r] > sort[pivot]) {
				r--;
			}

			if (l < r && sort[l] > sort[pivot] && sort[r] < sort[pivot]) {
				int temp = sort[l];
				sort[l] = sort[r];
				sort[r] = temp;
			}
			if (r < l) {
				int temp = sort[pivot];
				sort[pivot] = sort[r];
				sort[r] = temp;
				break;
			}

		}
	

    for (int i = 0; i < SZ; i++) {
		printf("%d ", sort[i]);
	}
	return 0;
}






