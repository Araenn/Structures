/* This programme is responsible for the grades in one subject of the students in a class.
For this purpose, a structure is defined which allows a student to be represented by his or her surname, first name and the grade obtained in the subject. 
The variables responsible for memorising the surname and first name will be defined as float tables with 20 cells.
You are asked to define the new student type that will represent this structure using the instruction
typedef. All the marks will be stored in a student-type table of 100 cells (number
maximum number of students). */

#include <stdio.h>

typedef struct{

    char name[20];
    char forname[20];
    int mark;

} students ;

main(){

    students s[100];
    int n;
    printf("Type the number of students (max. 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Type the name, forname and mark of the student number %d : ", i + 1 );
        scanf("%s %s %d", s[i].name, s[i].forname, &s[i].mark);
    }

    for (int i = 0; i < n; i++){

        if (s[i].mark >= 10){
            printf("%s", s[i].name);
        }
        else{
            printf("All of your students are bad !");
        }
    }
    return 0;
}
