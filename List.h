typedef struct List TList; // Определение нового типа

struct List // Создание структуры входного массива
{
    int length;

    int array_size;
    int *array;
};



void list_print(TList *list);
TList* list_create();
void list_add(TList *list, int item);

int list_get_length(TList *list);


TList* creat_listoutput_with_filtering_elements(TList *list, bool (*predicate)(int));

bool predicate_filter_more_5(int element);
bool predicate_filter_even_number(int element);

void remove_element_in_list(TList *entry_list);


