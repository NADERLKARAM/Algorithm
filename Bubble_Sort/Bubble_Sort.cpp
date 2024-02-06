
#include <iostream>
#include<algorithm>
using namespace std;


void selectionSort(int arr[],int n) {

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; i++) {

            if (arr[j] < arr[min]) {
                j = min;

                swap(arr[min], arr[j]);

            }
        }
    }
}

int main()
{
    int arr[] = {80,10,70,90,-8,2,64,8,2};
    int n = sizeof(arr) / sizeof(arr[0]);//6*4=24  /  4
     
    selectionSort(arr, n);



}
