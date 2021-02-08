#include <bits/stdc++.h>
using namespace std;


int Array1(int arr[], int min, int max, int a, int b)
{
    if (max >= min) {
        int median = min + (max - min) / 2;
        if ((median == 0 || a > arr[median - 1]) && arr[median] == a)
            return median;
        if (a > arr[median])
            return Array1(arr, (median + 1), max, a, b);
        return Array1(arr, min, (median - 1), a, b);
    }
    return -1;
}


int main()
{
    int A1[] = { 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 };
    int A2[] = { 2, 1, 8, 3 };
    int x = sizeof(A1) / sizeof(A1[0]);
    int b = sizeof(A2) / sizeof(A2[0]);
    cout << "Sorted array is \n";

        int temp[x], visited[x];
    for (int i = 0; i < x; i++) {
        temp[i] = A1[i];
        visited[i] = 0;
    }
    sort(temp, temp + x);
    int ind = 0;
    for (int i = 0; i < b; i++) {
        int f = Array1(temp, 0, x - 1, A2[i], x);
        if (f == -1) continue;
        for (int j = f; (j < x && temp[j] == A2[i]); j++) {
            A1[ind++] = temp[j];
            visited[j] = 1;
        }
    }
    for (int i = 0; i < x; i++)
        if (visited[i] == 0)
            A1[ind++] = temp[i];

    for (int i = 0; i < b; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
