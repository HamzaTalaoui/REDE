#include<stdio.h>
int main(){ 
    float temperature,celsuis,kelvin;
printf("entre la temperature en celsuis:");
scanf("%f",&celsuis);
kelvin = celsuis+273.15;
printf("la temperature en celsuis est : %.2f",kelvin);
return 0;
}