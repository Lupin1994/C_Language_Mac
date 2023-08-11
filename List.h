typedef struct List TList; // Определение нового типа

struct List // Создание структуры входного массива
{
    int length;

    int array_size;
    int *array;
};

// typedef struct Link Transfer_link;
// struct Link
// {
//     /* data */
// };


// typedef struct Menu ChooseNumber;
// struct Menu
// {
//     int choose_number;
// };


void list_print(TList *list);
TList* list_create();
void list_add(TList *list, int item);

int list_get_length(TList *list);

TList* creat_listoutput_with_filtering_elements(TList *list,int choose_number);
bool choose_predicate(int choose_number, int element);
bool predicate_filter_more_5(int element);
bool predicate_filter_even_number(int element);
//TList* filter_more_5(TList *list);

