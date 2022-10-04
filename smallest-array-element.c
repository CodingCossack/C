// Create a program to find the smallest element of the array

#include <stdio.h>

int findSmallest(int array[5]) {
    int smallest = array[0];
    
    for (int i=1; i<5; i++){
        if (smallest > array[i]){
            smallest = array[i];
        }
    }


    return smallest;
}

int main() {

    int numbers[5] = {55, 64, 75, 80, 65};

    int smallest = findSmallest(numbers);
    printf("%d", smallest);

    return 0;
}