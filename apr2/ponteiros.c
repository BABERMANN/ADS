#include <stdio.h>

int main(){
    int i, *p;
    int V[20];
    p = V;
    for(i=0; i<20; i++)
        *(p+i)=i*2;
    printf("1) ");
    for(i=0; i<20; i++)
        printf("%d ", V[i]);
    printf("\n");
    printf("2) ");
    for(i=0; i<20; i++)
        printf("%d ", *(V+i));
    printf("\n");
    printf("3) ");
    for(i=0; i<20; i++)
        printf("%d ", *(p+i));
    printf("\n");
    printf("4) ");
    for(i=0; i<20; i++)
        printf("%d ", *p++);
    printf("\n");
    printf("5) ");
    for(i=0; i<20; i++)
        printf("%d ", *(p+i));
    printf("\n");

    return 0;
}
--------------------------------------------------------------

  #include <stdio.h>

int main(){

int x, *px = &x;
char c, *pc = &c;
double f, *pf = &f;

*px = 12;

printf("px = %p pc = %p pf = %p \n", px, pc, pf);
printf("int : %ld bytes, char: %lb bytes\n", sizeof(x),sizeof(c));
printf("double: %ld bytes\n", sizeof(f));
px++; pc++; pf++;
printf("px = %u pc = %u pf = %u \n", px,pc,pf);
printf("x = %u", *px);
return 0;


}
----------------------------------------------------------------






  
