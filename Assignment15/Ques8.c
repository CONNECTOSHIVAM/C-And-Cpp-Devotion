// Q8. write a function to print the PASCAL Traingle.
#include <stdio.h>
void pascal(int n);
int main()
{
    int a;
    printf("Enter the size of the pascal traingle: ");
    scanf("%d", &a);

    pascal(a);
    return 0;
}
void pascal(int n)
{

    int arr[n * 2][n * 2];
    for (int i = 0; i <= n; i++)
    {
        // for center alignment
        for(int space=0;space < n-i-1;space++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}