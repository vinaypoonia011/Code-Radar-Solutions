#include<stdio.h>
int main(){
    char Name[100],char Hobby[100],int Age;
    scanf("%s %d %s",&Name,&Age,&Hobby);
    printf("Name: %s\n",Name);
    printf("Hobby: %d\n",Age);
    printf("Age: %s\n",Hobby);
    return 0;
}