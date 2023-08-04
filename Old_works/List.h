typedef struct List TList; // Определение нового типа

struct List // Создание структуры входного массива
{
    int count_add_numbers;

    int _size_array;
    int *_start_input_array;
};

void* list_print(TList *list);
TList list_create();
void* list_add(TList *list, int item);

typedef struct List_output T_output_List; // Определение нового типа

struct List_output // Создание структуры входного массива
{
    int _output_list_size;
    int *_output_list;
};
T_output_List list_output_create();
void filter_even(TList *list, T_output_List *list_output);

void* list_output_print(T_output_List *list_output);

int list_get_length(TList *list);

