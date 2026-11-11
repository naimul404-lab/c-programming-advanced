#include <stdio.h>
void merge(int a[], int left, int mid, int right) {
    int temp[1000], i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) temp[k++] = (a[i] <= a[j]) ? a[i++] : a[j++];
    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];
    for (i = left, k = 0; i <= right; i++, k++) a[i] = temp[k];
}
void sort(int a[], int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    sort(a, left, mid); sort(a, mid + 1, right); merge(a, left, mid, right);
}
int main(void) {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = (int)(sizeof a / sizeof a[0]);
    sort(a, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    putchar('\n');
    return 0;
}
