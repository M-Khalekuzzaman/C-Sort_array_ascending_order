#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter your array number : ");
    scanf("%d",&n);
    int number[n];
    printf("Enter your array value : ");
    for( i = 0 ; i<n ; i++)
    {
        scanf("%d",&number[i]);
    }
    for(i = 0; i<n; i++)
    {

        for(j =i+1; j<n; j++)
        {
            if(number[i]<number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }

    }
    printf("Descending order is : ");
    for(int k =0 ; k<n ; k++)
    {
        printf("%d  ",number[k]);
    }
    getch();
}
