# include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,num,a,c,con;
    
    printf("press 1 for gm to kg\npress 2 for celcius to faranite\n");
    scanf("%d",&i);
    if (i==1)
    {
        printf("enter the value which you wanna change\n");
        scanf("%d",&a);
        num=(a/1000);
        printf("%d kilo grams",num);
    }
    else if (i==2)
    {
        printf("enter the value which you wanna convert\n");
        scanf("%d",&c);
        con=(c*1.8+32);
        printf("%d faranite",con);
    }
    else{
        printf("enter correct input");
    }
    
    return 0;
}


