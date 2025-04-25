#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd, n, i=0;
    scanf("%i", &qtd);

    while(qtd>i){
        scanf("%i", &n);
        i++;

        if(n==0){
            printf("NULL\n");
        }
        else if(n>0 && n%2==0){
            printf("EVEN POSITIVE\n");
        }
        else if(n<0 && n%2==0){
            printf("EVEN NEGATIVE\n");
        }
        else if(n>0 && n%2!=0){
            printf("ODD POSITIVE\n");
        }
        else if(n<0 && n%2!=0){
            printf("ODD NEGATIVE\n");
        }
    }

    system("pause");
    return 0;
}
