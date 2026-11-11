#include <stdio.h>
void heapify(int a[], int n, int i) {
    int largest=i, l=2*i+1, r=2*i+2;
    if (l<n && a[l]>a[largest]) largest=l;
    if (r<n && a[r]>a[largest]) largest=r;
    if (largest!=i) { int t=a[i]; a[i]=a[largest]; a[largest]=t; heapify(a,n,largest); }
}
int main(void) {
    int a[] = {4, 10, 3, 5, 1}, n = 5;
    for (int i=n/2-1; i>=0; i--) heapify(a,n,i);
    printf("Max heap: ");
    for (int i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
