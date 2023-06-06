#include <stdio.h>

#define MAX_VALS 100

// prototypes
int input_array(int arr[], int max_vals);
void print_array(int arr[], int n);
int int_swap(int *p1, int *p2);

int bubble_sort(int arr[], int n);
int insertion_sort(int arr[], int n);
int selection_sort(int arr[], int n, int fe);
int quick_sort(int arr[], int n, int fe, int le);


int main(int argc, char **argv){
    // get array
    int arr[MAX_VALS];
    int n = input_array(arr, MAX_VALS);
    
    printf("This is your new array of length %d:\n", n);
    print_array(arr, n);

    // sort array
    // bubble_sort(arr, n);
    //insertion_sort(arr, n);
    quick_sort(arr, n, 0, n-1);

    // print array
    printf("This is your sorted array of length %d:\n", n);
    print_array(arr, n);
 return 0;
}


int input_array(int arr[], int max_vals){
    int count = 0, elem;
    printf("Enter integers: ");
    while (count < max_vals && (scanf("%d", &elem)!=EOF)){
        arr[count] = elem;
        count ++;
    }
    return count;
}

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int int_swap(int *p1, int *p2){
    int hold_value = *p2;
    *p2 = *p1;
    *p1 = hold_value;
    return 0;
}

/* 
worst case: 
average case: 
*/
int bubble_sort(int arr[], int n){
    int sort_count = 1;

    while (sort_count){
        sort_count = 0;
        for (int i = 1; i < n; i++){
            if (arr[i-1]>arr[i]){
                int_swap(&arr[i-1], &arr[i]);
                sort_count ++;
            }
        }
    }
    return 0;
}

/* 
worst case: 
average case: 
*/
int insertion_sort(int arr[], int n){
    
    // test elems and switch
    for (int i=1; i<n; i++){
        if (arr[i-1]>arr[i]){
            int_swap(&arr[i-1], &arr[i]);
            // switch elems prior to it
            for (int j=i-1; j>1; j--){
                if (arr[j-1]>arr[j]){
                    int_swap(&arr[j-1], &arr[j]);
                }
            }
        }
    }

    return 0;
}

/* 
worst case: 
average case: 
*/
int selection_sort(int arr[], int n, int fe){
    // scan array for largest element
    // swap element with element at end index - iterations
    // recursive
    return 0;
}

/* 
worst case:     recurses n times if the pivot gives one partition
                within each partition, will sort n elementsthin
average case:   recurses log2(n) times if the pivot on average partitions evenly
                within each partition, will sort n elements
*/
int quick_sort(int arr[], int n, int fe, int le){
    // pick random pivot
    int pivot_i = 0;
    // base case
    if ((le - fe) < 2){
        return 0;
    } else { 
        // partition
        for (int i = fe; i < le; i++){
            if (arr[i]>arr[pivot_i]){
                int_swap(&arr[le], &arr[i]);
                le --;
            } else if (arr[i]<arr[pivot_i]){
                int_swap(&arr[le], &arr[i]);
            }
        }
        printf("recurse");
        // recurse for each partition
        quick_sort(arr, n, fe, pivot_i);
        quick_sort(arr, n, pivot_i, le);
    }
    return 0;
}

int partition(){
    return 0;
}