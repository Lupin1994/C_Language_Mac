typedef struct List TList; // Определение нового типа

struct List // Создание структуры входного массива
{
    int length;

    int array_size;
    int *array;
};

// typedef struct Menu ChooseNumber;
// struct Menu
// {
//     int choose_number;
// };


void list_print(TList *list);
TList* list_create();
void list_add(TList *list, int item);

int list_get_length(TList *list);
bool filter_predicate(int choose_number, int element);
TList* filter_even(TList *list, int number);
//TList* filter_more_5(TList *list);

