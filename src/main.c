#include <stdio.h>
#include "function.h"

int main()
{
	int arr[] = {1,5,3,5,8,9,9,8,7};
    printf("Summ recurse - %d\n", sum_array(arr, 9));
    printf("Summ interation - %d\n", summ_array_iteration(arr, 9, 0));
    printf("Febenation element - %d\n", feb(4));
    printf("Febenation element iteration - %d\n", feb_iteration(4));
    printf("Input numeric: ");
    int i;
    if(scanf("%d", &i) != 1){
        printf("Error!!!\n");
    }
    printf("String - %s\n", string(i));


    return 0;
}
