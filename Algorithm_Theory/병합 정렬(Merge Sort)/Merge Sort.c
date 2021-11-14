#include <stdio.h>
#define number 8

int sorted[8];	//정렬 배열은 반드시 전역 변수로 선언
void merge(int a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;
	// 작은 순서대로 배열에 삽입
	while (i <= middle && j <= n)
	{
		if (a[i] <= a[j]) sorted[k++] = a[i++];
		else sorted[k++] = a[j++];
	}
	// 남은 데이터도 삽입
	if (i > middle)	//i가 먼저 종료되었을 때
		for (int t = j; t <= n; t++)
			sorted[k++] = a[t];
	else	//j가 먼저 종료되었을 때 
		for (int t = i; t <= middle; t++)
			sorted[k++] = a[t];
	// 정렬된 배열을 삽입
	for (int t = m; t <= n; t++)
		a[t] = sorted[t];
}
void mergeSort(int a[], int m, int n)
{	
	int middle = (m + n) / 2;
	//배열의 크기가 1보다 큰 경우
	if (m < n)
	{
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	}
}
int main()
{
	int array[number] = { 7, 6, 5, 8, 3, 5, 9, 1 };

	mergeSort(array, 0, number - 1);
	for (int i = 0; i < number; i++)
		printf("%d ", array[i]);

	return 0;
}