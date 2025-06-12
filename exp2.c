#include<stdio.h>
#include<string.h>

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++) {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            arr[k] = a[i];
            i++;
        } else {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int n;
    printf("Enter the size of the string: ");
    scanf("%d", &n);

    char str[n];
    int arr[n];

    // Reading the string as characters
    printf("Enter the string: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &str[i]); // Adding a space before %c to handle newline correctly
        arr[i] = str[i];       // Copying the character to the integer array
    }

    // Sorting the integer array
    mergesort(arr, 0, n - 1);

    // Printing the sorted characters
    printf("Sorted string: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}
