#include "insertion_sort.h"

void insertion_sort(list *list) {

    int *array = list->data;;
    for (int step = 1; step < list->length; step++) {

        int key = array[step];
        int j = step - 1;

        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            --j;
        }

        array[j + 1] = key;
    }
}