#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t *student_create(char *id, char *name, char *year, int gender) // Add missing parameters
{
    struct student_t *students = malloc(sizeof(struct student_t));
    strcpy(students->id, id); // Use -> instead of .
    strcpy(students->name, name);
    strcpy(students->year, year);
    students->gender = gender;
    students->dorm = NULL;
    return students;
}

void student_print_all(struct student_t *students, int x) 
{
    for (int j = 0; j < x; j++)
    {
        printf("%s|%s|%s|%s\n", students[j].id, students[j].name, students[j].year, gender_to_text(students[j].gender));
    }
}

void student_print_all_detail(struct student_t *students, int x)
{
    for (short j = 0; j < x; j++)
    {
        if (students[j].dorm == NULL)
        {
            printf("%s|%s|%s|%s|unassigned\n", students[j].id, students[j].name, students[j].year, gender_to_text(students[j].gender)); 
        } else {
            printf("%s|%s|%s|%s|%s\n", students[j].id, students[j].name, students[j].year, gender_to_text(students[j].gender), students[j].dorm->name);
        }  
    }
}
/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */
