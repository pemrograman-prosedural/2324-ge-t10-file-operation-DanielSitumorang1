#include "gender.h"
#include "student.h"
#include "dorm.h"
#include "repository.h"


char *gender_to_text(enum gender_t _gender)
{
    const char *gender;
    switch (_gender)
    {
        case GENDER_MALE:
            gender = "male";
            break;
        case GENDER_FEMALE:
            gender = "female";
            break;
    }

    return gender;
}
/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */
