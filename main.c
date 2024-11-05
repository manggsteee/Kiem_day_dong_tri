#include <stdbool.h>
#include <stdio.h>

int demDayDongTri(int arr[], int size) {
    int count = 0;
    bool flag = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            if (arr[i] == arr[i - 1]) {
                if (!flag) {
                    flag = true;
                    count++;
                }
            } else {
                flag = false;
            }
        }
    }
    return count;
}

int main(void) {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("So day con dong tri la: %d", demDayDongTri(arr, n));
    return 0;
}
