#include <stdio.h>
#include "find.h"
#include "printArray.h"
#include "sort.h"


int arr[] = {315,153,135,12};
int len = sizeof(arr)/sizeof(arr[0]);
int catch = 153;
int myArray[3];

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {6,5,4,1,2,3};

    printArray(arr1, 6);

    int arr[] = {315,153,135,12};
    int len = sizeof(arr)/sizeof(arr[0]);
    int catch = 153;

    int index = find(arr, len, catch);
    printf("The number %d was found in the index %d \n", arr[index], index);

    
    int sortArray = sort(arr);
    printf("Program Finished\n");

}