#include <stdio.h>
int max_of_four(int a, int b, int c, int d){
    int greater1,greater2,great;
    if(a>b)//first lets find out the greater among first two numbers 
    greater1=a;
    else
    greater1=b;

    if(c>d)//now find out the greater among last  two numbers 
    greater2=c;
    else
    greater2=d;

    if(greater1>greater2)//now check two result number 
    great=greater1;
    else 
    great=greater2;

    return great;//return the greater number 

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);//calling the max_of_four Function
    printf("%d", ans);
    
    return 0;
}

