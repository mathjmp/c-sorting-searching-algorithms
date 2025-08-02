#include "selection_sort.h"

void selection_sort(list *list) {

    int *array = list->data;
    int lowest = 0;

    for (int i = 0; i < list->length - 1; i++) {
        int lowest = i;
        for (int j = i + 1; j < list->length; j++) {

            if (array[j] < array[lowest]) {
                lowest = j;
            }
        }

        int tmp = array[i];
        array[i] = array[lowest];
        array[lowest] = tmp;
    }
}