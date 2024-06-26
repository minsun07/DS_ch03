#include <stdio.h>

int n;

void preOrder(char a[], int node_num) {
	if (node_num < n && a[node_num] != '\0') {
		printf("%c  ", a[node_num]);
		preOrder(a, node_num * 2);
		preOrder(a, node_num * 2 + 1);
	}
}

void inOrder(char a[], int node_num) {
	if (node_num < n && a[node_num] != '\0') {
		inOrder(a, node_num * 2);
		printf("%c  ", a[node_num]);
		inOrder(a, node_num * 2 + 1);
	}
}

void postOrder(char a[], int node_num) {
	if (node_num < n && a[node_num] != '\0') {
		postOrder(a, node_num * 2);
		postOrder(a, node_num * 2 + 1);
		printf("%c  ", a[node_num]);
	}
}

int main(void) {
	char a[] = { '\0', 'A', 'B', 'C', 'D', 'E', '\0', 'F', '\0', '\0', 'G', '\0', '\0', '\0', 'H', 'I', '\0', '\0', '\0', '\0', '\0', 'J' };

	n = sizeof(a) / sizeof(char);

	preOrder(a, 1);
	printf("\n");
	inOrder(a, 1);
	printf("\n");
	postOrder(a, 1);
	printf("\n");

	return 0;
}