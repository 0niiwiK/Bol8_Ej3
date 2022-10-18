#include <stdio.h>
float calcular_porcentaje (int numero, int porcentaje);
int leer_precio();
int leer_porcentaje();
int main() {
    int num,porcentaje;
    num=leer_precio();
    porcentaje=leer_porcentaje();
    printf("El precio tras el descuento es: %.2f Euros",calcular_porcentaje(num,porcentaje));
}

int leer_precio(){
    int num;
    printf("Introduce el precio antes del descuento: ");
    scanf("%d",&num);
    return num;
}
float calcular_porcentaje (int numero, int porcentaje){
    float calculo;
    calculo=(float)numero*(1-(float)porcentaje/100);
    return calculo;
}
int leer_porcentaje(){
    int porcentajes;
    printf("Introduce el porcentaje de descuento: ");
    scanf("%d",&porcentajes);
    return porcentajes;
}

