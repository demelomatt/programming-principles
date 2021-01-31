#include <stdio.h>
int main(void)
{
    char s[6] = "Hello";
    printf("String: %s\n",s);
    printf("Address:% p\n\n",&s);

    for (int i=0;i<5;i++){
        printf("Element %d: %c\n",i,s[i]);
        printf("Address %d: %p\n\n",i,&s+i);
    }
}




