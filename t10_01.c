// 12S23028 - Daniel Situmorang
// 12S23007 - Joy Valeda Silalahi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/repository.h"

int main(int _argc, char **_argv)
{
    FILE *dormsrepository;
    FILE *studentsrepository;

    struct dorm_t *dorms = malloc(sizeof(struct dorm_t) * 100);
    struct student_t *students = malloc(sizeof(struct student_t) * 100);

    dormsrepository = fopen("./storage/dorm-repository.txt", "r");
    studentsrepository = fopen("./storage/student-repository.txt", "r");
    
    char input[100];
    int i = 0;

    while (1) {
        fgets(input, sizeof(input), stdin);

        if (strcmp(input, "---\n") == 0) {
            break;
        }

        int pos_cr = strcspn(input, "\n");
        input[pos_cr] = '\0';

        char *token = strtok(input, "|");
        token = strtok(NULL, "|");
        strcpy(dorms[i].name, token);
        token = strtok(NULL, "|");
        dorms[i].capacity = atoi(token);
        token = strtok(NULL, "|");
        if (strcmp(token, "male") == 0) {
                students[i].gender = GENDER_MALE;
            } else {
                students[i].gender = GENDER_FEMALE;
            }
        i++;
        token = strtok(NULL, "|");
        dorms[i].residents_num = 0;

        if (strcmp(input, "dorm-print-all-detail")){
            dorm_print_all_detail(struct dorm_t *dorms, int i);
        }
        token = strtok(NULL, "|");
        strcpy(students[i].id, token);
        token = strtok(NULL, "|");
        strcpy(students[i].name, token);
        token = strtok(NULL, "|");
        strcpy(students[i].year, token);
        token = strtok(NULL, "|");
        if (strcmp(token, "female\n") == 0) {
                students[i].gender = GENDER_FEMALE;
            } else if(strcmp(token, "male\n") == 0) {
                students[i].gender = GENDER_MALE;
            }
        students[i].dorm = NULL;
        i++;
        
        if (strcmp(input, "student-print-all-detail")){
            student_print_all_detail(struct student_t students);
        }
    }



    return 0;
}
