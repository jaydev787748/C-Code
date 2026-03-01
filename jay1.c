#include <stdio.h>
#include <string.h>

struct student {
    char name[34];
    int roll;
    float marks;
};



int main(){
   struct student s1 = {"jay", 34, 89.83};
   struct student *ptr;
   ptr = &s1;
 
    printf("Name: %s\n", ptr->name);

   return 0;

}