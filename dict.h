
// type definitions
typedef struct node node_t;
typedef int data_t;

struct node {
    data_t data;
    node_t *next;
};

typedef struct{
    node_t *head;
    node_t *foot;
} list_t;


// prototypes
list_t *make_llist();
int read_int_arr(int *arr);
int read_char_arr(char *arr);
void print_char_arr(char *arr, int n);