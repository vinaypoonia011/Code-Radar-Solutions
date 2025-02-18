#include<stdio.h>
int main(){
    char Name[100],char Hobby[100],int Age;
    scanf("%s %d %s",&Name,&Hobby,&Age);
    printf("Name: %c\n",Name);
    printf("Hobby: %s\n",Hobby);
    printf("Age: %d\n",Age);
    return 0;
}