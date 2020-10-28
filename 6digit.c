//sum of first and last digits of 6digit number
int main()
{
    int n,last,first,r1,r2,r3,sum;
    printf("enter 6 digit number");
    scanf("%d",&n);
    last=n%10;
    n=n/10;
    r1=n%10;
    n=n/10;
    r2=n%10;
    n=n/10;
    r3=n%10;
    n=n/10;
    first=n%10;
    n=n/10;
    sum=n+last;
    printf("sum=%d",sum);
}
