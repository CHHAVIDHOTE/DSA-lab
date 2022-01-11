#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {1, 6, 3, 7, 5};     
    //Calculate length of array    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf(" First Element of given array: \n");    
       printf("%d ", arr[0]);     
        
     
    return 0;    
}
