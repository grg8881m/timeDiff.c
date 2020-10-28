#include<stdio.h>
#include<time.h>
//ejemplo de como puedes tomar la diferencia de tiempo entre un punto y otro
//para saber cuanto se demoro tu codio en ejecutarse
//cuanto se tardó tu programa en hacer una tarea 

time_t begin, end;


int main()
{
    //declarar mi auxiliar 
    long i;

    //tiempo a la fecha es cuando cojo time(NULL)
    begin =  time(NULL); // Esto lo que nos va servir es para saber en que momento el nuestro programa empezó a ejecturarse
    //creo un ciclo for el cual va ser mi consumidor de recursos
    for (i = 0; i < 600000000; i++);
    end =  time(NULL);

    printf("El tiempo que duro nuestro for es: %f \n", difftime(end, begin));
    return 0;
}