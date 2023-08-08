#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

struct filter;

typedef struct {
    void (*filter)(struct filter);
    void (*set)(struct filter);
    int (*get)(struct filter);
} filtering_different_conditions;

typedef struct filter
{
    int choose_number;
    filtering_different_conditions *vtable;
} filter;

void filter_constructor(filter *this);
void filter_set(filter *this);
int filter_get(filter *this);

filtering_different_conditions filter_vtable = {
    filter_constructor,
    filter_set,
    filter_get
};
void filter_constructor(filter *this) {

}

int filter_set(filter *this) {
    printf("Choose your way of filtration: \n");
    printf(" 1-numbers more 5\t 2-only even numbers\n");
    int choose_number;
    printf("Write your number: ");
    scanf("%d",&choose_number);
    return choose_number;
}

int filter_get(filter *this) {
    int filtering_element;
    for (int i = 0; i < list->length; i++)
    {
        switch (this->choose_number)
        {
        case 1:
            if (list->array[i] > 5){
                filtering_element = list->array[i];
            }
            return filtering_element;
        case 2:
            if (list->array[i] % 2 == 0){
                filtering_element = list->array[i];
            }
        }
    }
    return filtering_element;
}