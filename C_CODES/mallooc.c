//malloc(n*sizeof(tere marzi)) isme garbage value aati hai
//calloc(n, sizeof(tere marzi)) isme comma hai kyuki isme garbage nai hai 0 initialze hota  

#include <stdio.h>
#include <stdlib.h>

enum Grade{
    FAIL,
    PASS,
    TOPPER
};

struct Student
{
    /* data */

    int id;
    double marks;
    enum Grade grade;
    int level;

};

int main(){
    int n=2;
    struct Student *arr= (struct Student*) malloc(n*sizeof(struct Student));
    arr[0].id = 1;
    arr[0].marks = 45.5;
    arr[0].grade = FAIL;

    arr[1].id = 2;
    arr[1].marks = 78.0;
    arr[1].grade = PASS;

n=3;
     struct Student *temp =
        realloc(arr, n * sizeof(struct Student));

    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        free(arr);
        return 0;
    }

    arr = temp;

    arr[2].id = 3;
    arr[2].marks = 95.2;
    arr[2].grade = TOPPER;

        for (int i = 0; i < n; i++) {
        printf("ID: %d | Marks: %f | Grade: %d\n",
               arr[i].id,
               arr[i].marks,
               arr[i].grade);
    }

    /* free heap memory */
    free(arr);
    arr = NULL;

    return 0;
}
