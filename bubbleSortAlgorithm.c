//bubble sort : time complexity O(n^2)
//              space complexity O(1)  
#include<stdio.h>

int main(){
    int array[] = {12, 2, 5, 3, 10};
    int i, j, size = 5,temp;
    int swap, counter = 0;
    for (i = 0; i < size-1; i++){
        //for (j = 0; j < size - 1 - i ; j++)
        swap = 0;
        for (j = 0; j < size - 1; j++){
            counter++;
            if(array[j]>array[j+1]){
                //swap teo numbers
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap = 1;
            }
        }
        if(swap == 0){
            break;
        }
    }
    printf("After sorting:\n");
    for (i = 0; i < size - 1; i++){
        printf("%d ", array[i]);
    }
    printf("\n %d count :\n" , counter );
    return 0;
}