#include<stdlib.h>
#include<stdio.h>

//MERGESORT
void merge(int arr[], int l, int m, int r, int *ops)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int Left[n1], Right[n2];

    for (int i = 0; i < n1; i++)
        Left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        Right[j] = arr[m + 1 + j];

    int i=0,j=0,k=l;

    while (i < n1 && j < n2) {
        if (Left[i] <= Right[j]) {
            arr[k] = Left[i];
            i++;
        }
        else {
            arr[k] = Right[j];
            j++;
        }
        k++;
        (*ops)++;
    }

    while (i < n1) {
        arr[k] = Left[i];
        i++;
        k++;
        (*ops)++;
    }

    while (j < n2) {
        arr[k] = Right[j];
        j++;
        k++;
        (*ops)++;
    }
}

void mergeSort(int arr[], int l, int r, int *ops)
{
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m,ops);
    mergeSort(arr,m+1,r,ops);
    merge(arr,l,m,r,ops);
}


int binarySearch(int arr[], int l, int r, int x,int *a)
{
    while (l <= r) {
        *a=*a+1;
        int m = l + (r - l) / 2;
        if (arr[m] == x) return m;
        if (arr[m] < x) l = m + 1;
        else r = m - 1;
    }

    return -1;
}


void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
    printf("%d ", A[i]);
    printf("\n");
}



int main(){

    int arr[] = {20,15,12,34,56,23,78,90,67,43,98,3,53,55,65,90};
    int arr_copy[] = {20,15,12,34,56,23,78,90,67,43,98,3,53,55,65,90};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int ops=0,actions=0;

    printf("Input Array \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1,&ops);

    printf("\nOutput Array Merge \n");
    printArray(arr, arr_size-1);
    printf("Number of Merge ops %d\n",ops);

    int target[4]={43,20,90,9};
    for(int i=0;i<4;i++){
        int idx=binarySearch(arr,0,arr_size-1,target[i],&actions);
        printf("\nWe are searching for %d in the array \n",target[i]);
        printf("Element is present at index:- %d\n",idx);
        printf("Operations :- %d\n",actions);
    }


    return 0;
}