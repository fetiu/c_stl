#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main() {
    array* arr = new_array(sizeof(int));
    int elem = 10;
    int* res;
    array_set(arr, 0, &elem);
    array_set(arr, 130, &elem);
    
    res = (int *)array_get(arr, 131);
    if (res == NULL) { // 130 까지 있는데 131번째 원소를 가져와서 NULL
        puts("NULL");
    }
    
    array_set(arr, 129, &elem);
    res = (int *) array_get(arr, 130);
    if (res == NULL) {
        puts("NULL"); return 1;
    }
    printf("%d", *res);
}
