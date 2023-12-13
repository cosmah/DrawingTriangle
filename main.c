#include <stdio.h>
#include <stdlib.h>


void draw(int n);
int main()
{
    int height;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);
    draw(height);
    return 0;
}

void draw(int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i + 1; j++)
        {
           printf("#");
        }
        printf("\n");
    }

}
