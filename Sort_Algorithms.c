#include <stdio.h>
#include <string.h>

/*
 * Sort_Algorithms.c
 * Several elementary sorting algorithm implementations and a small
 * menu-driven main() to demonstrate them.
 *
 * This file now contains brief comments for each function and a few
 * small, safe fixes so it compiles and behaves as expected.
 */

/* Function prototypes */
void BubleSort(int arr[], int n);
void SelectionSort(int arr[], int n);
void swap(int *a, int *b);        /* swap helper (lowercase name) */
void showArr(int arr[], int n);   /* print array contents */
void InsertionSort(int arr[], int n); /* fixed insertion sort name */
int Partions(int arr[], int low, int high);
void QuickSort(int arr[], int low, int high);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

//main function
int main(void)
{
    int arr[] = {1, 5, 3, 2, 4}, n, choice;

    n = sizeof(arr) / sizeof(arr[0]);

    int copyArr[n];

    memcpy(copyArr, arr, sizeof(arr));

    printf("Choice a type of sort:\n1. Buble sort\n2. Selection sort\n3. Insertion sort\n 4. Quick sort\n5. Merge sort\n");
    scanf("%d", &choice);

    /* Print the array before sorting */
    printf("before:\n");
    showArr(arr, n);
    switch (choice)
    { case 1:
        BubleSort(copyArr, n);
    printf("after Buble sort:\n");
    showArr(copyArr, n);
        break;
      case 2:
        SelectionSort(copyArr, n);
    printf("after Selection sort:\n");
    showArr(copyArr, n);
        break;
      case 3:
        InsertionSort(copyArr, n);
    printf("after Insertion sort:\n");
    showArr(copyArr, n);
        break;
      case 4:
        QuickSort(copyArr, 0, n-1);
    printf("after Quick sort:\n");
    showArr(copyArr, n);
        break;
      case 5:
        mergeSort(copyArr, 0, n-1);
    printf("after Merge sort:\n");
    showArr(copyArr, n);
        break;
      default:
        printf("Invalid choice\n");
        break;
    }
}

//function to swap elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void showArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        /* Print each element separated by a space for readability */
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//Buble sort function
void BubleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

//Selection sort function
void SelectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }   
        /*
         * After scanning the unsorted portion, swap the smallest found
         * element into position i. Only swap when needed.
         */
        if (minIndex != i) {
            swap(&arr[minIndex], &arr[i]);
        }
    }
}

/* Insertion sort: builds the sorted array one element at a time. */
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int value = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > value)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = value;
    }
}

int Partions(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    /* Note: iterate j from low up to high-1 (inclusive) to compare with pivot */
    for (int j = low; j <= high-1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        //pi is index of partion
        int pi = Partions(arr, low, high);

        //sorting an array
        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi+1, high);
    }
}

void merge(int arr[], int l, int m, int r) 
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Creating temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merging temporary arrays
    i = 0; j = 0; k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy any remaining elements of L[] (if any) */
    while (i < n1) {
        arr[k] = L[i];
        i++; k++;
    }

    /* Copy any remaining elements of R[] (if any) */
    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Finding the middle 
        int m = l + (r - l) / 2;

        // Sort the first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge sorted subarrays
        merge(arr, l, m, r);
    }
}

