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
bool predicate_search_equal_element(int search_element, int element_in_list);
int Map_transform_element(int element);

void list_remove_by_index(TList *entry_list, int index);
TList* list_add_elements_by_index(TList *entry_list, int element, int index_element);
void list_update_element_by_index(TList* entry_list, int element, int index_element);
int list_search_element(TList *entry_list, int element, bool (*predicate)(int, int));
void list_reverse(TList *entry_list);
TList* map(TList *entry_list, int (function(int)));
void list_update_elements(TList* entry_list, int element, int index_element);



