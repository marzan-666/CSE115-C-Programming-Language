#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int number;
    struct NODE *next;
};


void insert_node(struct NODE *list, int num);
void display_list(struct NODE *list);
void delete_node(struct NODE *list, int num);

int main(void) {
    int num=0;
    int input = 1;
    struct NODE *list;
    list = (struct NODE *) malloc(sizeof(struct NODE));
    list->number = 0;
    list->next = NULL;
    while (input != 0) {
        	printf("\n-- Menu Selection --\n");
            printf("1) Insert\n");
            printf("2) Delete\n");
            printf("3) Display\n");
            printf("4) Quit\n");
            printf("press: ");
            scanf("%d", &input);
            switch (input) {
                case 1:
                    printf("Your choice: `Insertion'\n");
                    printf("Enter the value which should be inserted: ");
                    scanf("%d", &num);
                    insert_node(list, num);
                    break;
                case 2:
                    printf("Your choice: `Deletion'\n");
                    printf("Enter the value which should be deleted: ");
                    scanf("%d", &num);
                    delete_node(list, num);
                    break;

                case 3:
                    printf("You choice: `Display': \n");
                    display_list(list);
                    break;
                case 4:
                    default:
                        printf("program is closing. . .");
                        input = 0;
                        break;

        }
    }
    free(list);
    return (0);
}

void display_list(struct NODE *list) {
    while (list->next != NULL) {
            list = list->next;
            printf("%d", list->number);
    }

}
void insert_node(struct NODE *list, int num)
{
    while (list->next != NULL)
            list = list->next;
            list->next = (struct NODE *) malloc(sizeof(struct NODE));
            list->next->number = num;
            list->next->next = NULL;
}
void delete_node(struct NODE *list, int num) {
        struct NODE *temp;
        temp = (struct NODE *) malloc(sizeof(struct NODE));
        if (list->number == num) {
                temp = list->next;
                free(list);
                list = temp;
        }
        else {
            while (list->next->number != num)
                    list = list->next;
                    temp = list->next->next;
                    free(list->next);
                    list->next = temp;
            }
}
