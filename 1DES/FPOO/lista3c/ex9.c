#include <stdio.h>
int main()
{
    int tabuada = 0;
    printf("Digite a tabuada que deseja:");
    scanf("%d", &tabuada);

    for(int x = 0; x<=10; ++x){
        printf("%d x %d = %d\n", tabuada, x , x * tabuada);
    }

    return 0;
}
