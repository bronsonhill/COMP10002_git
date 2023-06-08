/* Bronson Hill, 2023
implementation of iterative and recursive binary search
*/

#include <stdio.h>

/* constant definitions */
#define NOT_FOUND -1

/* prototypes */
int binary_search_itr(int array[], int start, int end, int item);
int binary_search_rec(int array[], int start, int end, int item);

int main(int argc, char const *argv[]){
    

}


int binary_search_itr(int array[], int start, int end, int item) {
    // TODO: Implement this function
    int mid;

    while (start < end){
        mid = (end + start)/2;
        if (array[mid] == item){
            return mid;
        } else if (array[mid] < item){
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return NOT_FOUND;
    
    
}

int binary_search_rec(int array[], int start, int end, int item) {
    static int recurses = 0; /* Prove to the marker that this is recursive */
    printf("binary_search_rec: recurse #%d.\n", ++recurses);
    
    // base case
    if (start >= end) {
        return NOT_FOUND;
    }
    
    int mid = (start + end)/2;
    if (array[mid]==item){
        return mid;
    } else if (array[mid] > item){
        return binary_search_rec(array, start, mid, item);
    } else if (array[mid] < item){
        return binary_search_rec(array, mid + 1, end, item);
    }

    return NOT_FOUND;
}