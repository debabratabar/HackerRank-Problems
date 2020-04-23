#include <stdio.h>

void update(int *a,int *b) {
    //Complete this function 
     int sum, sub;
     //int *sump,*subp;
     sum = *a+*b;
     sub=   *a-*b;
     *a=sum;
     if(sub<0)
      sub=-sub;
     *b=(sub);

     //printf("%d",*a+*b);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

