#include "head.h"

struct point scan(){
    struct point s1;

    printf("Введите координату x: ");
    scanf("%d", &s1.x);


    printf("Введите координату y: ");
    scanf("%d", &s1.y);

    return s1;

}

struct point quarter(struct point s1){

    if(s1.x > 0 && s1.y > 0){
        printf("1 - я четверть\n");
    }else if (s1.x < 0 && s1.y > 0){
        printf("2 - я четверть\n");
    }else if (s1.x > 0 && s1.y < 0){
        printf("4 - я четверть\n");
    }else if (s1.x < 0 && s1.y < 0){
        printf("3 - я четверть\n");
    }else{
        printf("Ваша точка в нуле\n");
    }

    return s1;

}