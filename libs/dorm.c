#include "dorm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender){
    struct dorm_t *dorms;
    strcpy(dorms->name, _name);
    dorms->capacity = _capacity;
    dorms->gender = _gender;
    dorms->residents_num = 0;
    return dorms;
}

void dorm_print_all(struct dorm_t *dorms,int i) 
{   
    for (int j = 0; j < i; j++)
    {
        printf("%s|%d|%s\n", dorms[j].name, dorms[j].capacity, gender_to_text(dorms[j].gender));
    }
}

void dorm_print_all_detail(struct dorm_t *dorms, int i)
{
    for (short j = 0; j < i; j++)
    {
        printf("%s|%d|%s|%d\n", _\dorms[j].name, dorms[j].capacity, gender_to_text(dorms[j].gender), dorms[j].residents_num);
    }
}


/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */
