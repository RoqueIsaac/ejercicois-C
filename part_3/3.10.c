/*
10.- World population has grown considerably over the centuries. Continued growth could eventually challenge the limits of breathable air,
drinkable water, arable cropland and other limited resources. There is evidence that growth has been slowing in recent years and that world
population could peak some time this century, then start to decline. For this exercise, research world population growth issues online. Be
sure to investigate various viewpoints. Get estimates for the current world population and its growth rate (the percentage by which it’s likely
to increase this year). Write a program that calculates world population growth each year for the next 75 years, using the simplifying
assumption that the current growth rate will stay constant. Print the results in a table. The first column should display the year from year 1 to
year 75. The second column should display the anticipated world population at the end of that year. The third column should display the
numerical increase in the world population that would occur that year. Using your results, determine the year in which the population would
be double what it is today, if this year’s growth rate were to persist.
*/

#include<stdio.h>

void main(){

    int año, j, k=0, db=0;
    long int people=7900, dif, estimate; 
    //tasa de crecimiento 1.1 % = 0.011
    //poblacion en 2022=7900 millones

    printf("año \t poblacion(millones) \t incremento\n", año, people, dif);
    for(j=1; j<=75; j++){
        estimate=people*1.011;
        dif=estimate-people;

        printf("%3d \t %14ld \t %8ld", j, estimate, dif);
        people=estimate;
        printf("\n");
        if(k==0 && estimate>=7900*2){
            k=1;
            db=j;
        }
    }
    printf("\n");
    if(db==0) printf("no se ha duplicado la poblacion");
    else printf("En el año %d se duplico la poblacion",db);
    printf("\n");
}