#include <stdio.h>
#include <stdlib.h>

void search(int array[], int n, int x){ // x is being searched for, n is the array size
    int i;
    for( i = 0 ; i < n  ; i++ ){
        if(array[i] == x){
        printf("your element is at index %d\n", i);
        break;
        }
    }
    if (array[i] != x)
        printf("element not found\n");

}

int main()
{
    int array[] = {6,34,52,12,33,10,123};
    int x = 10;
    int n = (sizeof(array)) / (sizeof(array[0]));  // to get array size

    search(array, n, x);


    return 0;
}
