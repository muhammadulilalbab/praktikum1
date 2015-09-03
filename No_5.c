#include <stdio.h>
int max(int a, int b);
int min(int a, int b);
int main()
{
    int N,i,bilangan,pembanding, counter =1;
    char pil;
    scanf("%d\n",&N);
    scanf(" %c",&pil);
    scanf("%d",&bilangan);
    pembanding = bilangan;
    for(i=1;i<N;i++){
        scanf("%d",&bilangan);
        if(pil=='A')
        {
            if(pembanding == bilangan){
                counter++;
            }else{
                pembanding=min(pembanding, bilangan);
                if (bilangan==pembanding){
                counter =1;
                }
            }
        }else if(pil=='B'){
            if(pembanding == bilangan){
                counter++;
            }else{
                pembanding=max(pembanding, bilangan);
                if (bilangan==pembanding){
                counter =1;
                }
            }
        }
    }
    printf("%d \n",pembanding);
    printf("%d \n",counter);
    printf("\n");
    return 0;
}
int max(int a, int b){
    if(a>b){
        return a;
    }else if(a<b){
        return b;
    }
}
int min(int a, int b){
    if(a<b){
        return a;
    }else if(a>b){
        return b;
    }
}
