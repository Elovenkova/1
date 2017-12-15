int main()
{
    double a, b;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    while ((b-a) > 0.0000000001)
    {
        if (tan((b+a)/2) - ((b+a)/2)>0)
        {
            b = (b+a)/2;
        }
        else if (tan((b+a)/2) - ((b+a)/2)<0)
        {
            a = (b+a)/2;
        }
        else
        {
            printf("%f", (b+a)/2);
            break;
        }
    }
    printf("%f", (b+a)/2);
}
