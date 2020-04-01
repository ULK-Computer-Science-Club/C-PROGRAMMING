#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    FILE *age_file;

    age_file = fopen("age.txt","a+");

    if(age_file == NULL){
        printf("Error");
        exit(1);
    }
    printf("Enter Num: ");
    scanf("%d", &num);

    fprintf(age_file, "%d",num);
    fclose(age_file);

    return 0;


}