#include <stdio.h>

int main()
{
    int total1;
    int total2;
    total2=0;
    int number;
    int things;
    int howmany;
    scanf("%d",&total1);
    scanf("%d",&number);
    for(int i=0; i<number; i++) {
        scanf("%d %d",&things,&howmany);
        total2=total2+(things*howmany);
    }
    if(total1==total2) {
        printf("Yes");
    }
    else printf("No");

    return 0;
}