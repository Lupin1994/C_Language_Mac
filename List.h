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

int list_get_length(TList *list);

