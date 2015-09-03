#include <stdio.h>
int main()
{
    int N,i,j;
    char C1, C2;
    scanf("%d",&N);
    scanf(" %c",&C1,1);
    scanf(" %c",&C2,1);
    if(N<0||C1==C2){
        printf("Masukan tidak valid");
    }else{
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++){
                if(i==0||j==0||i==(N-1)||j==(N-1)){
                    printf("%c",C1);
                }
                else{
                    printf("%c",C2);
                }
            }
        printf("\n");
        }
    }
    printf("\n");
    return 0;
}
