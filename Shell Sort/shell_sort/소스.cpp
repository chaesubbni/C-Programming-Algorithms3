// shell sort�� gap��ŭ ������ �ֵ鳢�� ���ϰ� insert sort ����
#include <stdio.h>

void shell_sort(int nums[], int sz) {
	// 1. gap-> ���� �ٿ�����. �ʱⰪ�� sz/2�� �����ؼ� 1�� �ɶ����� �ݾ� ���δ�.
	int gap = 0;
	int i = 0;
	int k = 0;
	for (gap = sz / 2; gap > 0; gap = gap / 2) {
		for (i = 0; i < gap; i++) {
			for (k = i + gap; k < sz; k = k + gap) {

				int me = nums[k];
				int d = 0;
				for (d = k - gap; d >= 0 && nums[d] > me; d = d - gap) {
					nums[d+gap] = nums[d];
				}
				nums[d + gap] = me;
			}
		}
	}
}



int main(void) {
	int nums[] = { 87,32,34,100,23,65,2,90,21,1,3 };
	int sz = sizeof(nums) / sizeof(nums[0]);

	printf("sz is %d\n", sz);

	printf("-----sell sort--------\n");

	shell_sort(nums, sz);

	for (int i = 0; i < sz; i++) {
		printf("%d\n", nums[i]);
	}

	return 0;
}