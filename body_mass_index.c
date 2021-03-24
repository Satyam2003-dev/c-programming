#include<stdio.h>
int main()
{
    float m,h,bmi;
    printf("enter weight(kg) and height(meter)\n");
    scanf("%f %f",&m,&h);
    bmi=m/(h*h);
    if(bmi < 15){
        printf("you are starve \t eat as many as you can\n");}
    else if(bmi > 15 && bmi <= 17.5){
      printf("you are anorexic \t eat as much you can\n");}
    else if(bmi > 17.5 && bmi <= 18.5) {
        printf("you are under weight \t eat more\n");}
    else if(bmi > 18.5 && bmi < 25) {
        printf("you are ideal \t keep it up\n");}
    else if(bmi >= 25 && bmi < 30) {
        printf("you are overweight \t eat little less untill you gain ideal bmi\n");}
    else if(bmi >= 30 && bmi < 40){
        printf("you are obese \t eat much less untill you gain ideal bmi");}
    else if(bmi >= 40){
        printf("you are morbidly obese \t you are in danger go to doctor");}
    return 0;
}
