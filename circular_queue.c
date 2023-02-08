#include <stdio.h>
#define n 5
int i;
int f = -1;
int r = -1;
int insert(int val, int a[])
{
    if (r >= n - 1)
    {
        (r+1)%n==f;
        printf("circular is full....");
    }
    else if (r < 0)
    {
        r=(r+1);
        a[r] = val;
    }
    else
    {
        a[r] = val;
    }
}
int delete(int a[])
{
    // if (f < 0)
    // {
    //     printf("circular queue is empty....");
    // }
    // else if (f == r)
    // {
    //     f = r = -1;
    // }
    // else
    // {
    //     ++f;


    do
    {
        printf("%d",a[i]);
        i=(i+1)%n;
    }
    while(i!=(r+1)%n)
}
int display(int [a])
{
    for(i=r;i<=f;i++)
    {
        printf("%d\t",a[i]);
    }

}
int main()
{
    int a[n];
    insert(10,a);
    insert(20,a);
    insert(30,a);
    insert(40,a);
    display(a);
    delete(a);
    display(a);
    delete(a);
    
    display(a);
    delete(a);
    
    display(a);
    delete(a);
    
    display(a);
    delete(a);
    


}



// ========================circular queue ===============switch cash==============================================================================

#include <stdio.h>
#define n 5
int r = -1;
int f = -1;
int a[n];
int i, val;
int insert()
{
    printf("\n enter value for insert:");
    scanf("%d", &val);
    if ((r + 1) % n == f)
        printf("\n array is full:");
    else if (f == -1)
    {
        f = r = 0;
        a[r] = val;
    }
    else
    {
        r = (r + 1) % n;
        a[r] = val;
    }
}

int delete()
{
    if (f < 0)
    {
        printf("array is empty");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1) % n;
    }
}

int display()
{
    printf("\n");
    i = f;
    if (f < 0)
    {
        printf("\n array is empty");
    }
    else
    {
        do
        {
            printf(" \n %d", a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n 1.insert \n 2.delete \n 3.display \n 0.Exit");
        printf("\n Enter YOur Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 0:
            break;
        default:
            printf("\n Wrong Choice");
        }

    } while (ch != 0);
}