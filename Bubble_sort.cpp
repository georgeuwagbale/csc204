//
// Created by georgeuwagbale on 5/24/22.
//

#include <iostream>
using namespace std;

int *bubble_sort(int *array, int count = 0){
    int length_of_array = sizeof(array) / sizeof(int);
    if (!array) {
        return NULL;
    }

    if (array[count] > array[count + 1]){
        int a = array[count];
        int b = array[count + 1];
        array[count] =  b;
        array[count +1] = a;
        count++;
    } else{
        count++;
    }

    if (count < length_of_array){
        bubble_sort(array, count);
    }else{
        return array;
    }

}

int main(){
    int numbers[7] = {4,3,6,8,9,0,2};

    bubble_sort(numbers);
    return 0;
}



