
#include <stdio.h>
void print_array(int *A, int n) {
	int i;
	for (i = 0 ; i < n ; i++)
		printf("%d ", A[i]);
}

int bol(int * A, int ilk, int son) {

	int i = ilk;
	int j = son;
	int v = A[ilk];
	int tmp;

	while (1) {
		while ( A[i] <= v && i <= son)
			i++;

		while ( A[j] > v)
			j--;

		if ( i >= j )
			break;

		tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
	}


	tmp = A[ilk];
	A[ilk] = A[j];
	A[j] = tmp;

	return j;
}

void quick_sort(int * A, int ilk, int son) {
	if (son <= ilk)
		return;

	int j = bol(A, ilk, son);

	quick_sort(A, ilk, j-1);
	quick_sort(A, j+1, son);
}

int main() {

	int A[8] = {8, 4, 9, 3, 1, 2, 5, 6};

	printf("sirasiz: ");
	print_array(A, 8);
	printf("\n");

	quick_sort(A, 0, 7);

	printf("\nsiralanmis: ");
	print_array(A, 8);
	printf("\n");

	return 0;
}
