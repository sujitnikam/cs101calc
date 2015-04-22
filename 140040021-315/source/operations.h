long double addition(long double num1,long double num2)
{
    return num1+num2;
}
long double substraction(long double num1,long double num2)
{
    return num2-num1;
}

long double multiplication(long double num1,long double num2)
{
    return num1*num2;
}

long double division(long double num1,long double num2)
{
    return num2/num1;
}
long double square(long double num1)
{
    return num1*num1;
}

long double cube(long double num1)
{
    return num1*num1*num1;
}

long double inverse(long double num1)
{
    return 1/num1;
}

 long double factorial(long double num1)
{
    if(num1==0) return 1;
    if(num1==1) return 1;
    if(num1>1) return num1*factorial(num1-1);
}

long double power(long double num1,long double num2)
{
    long double  num3=1;
    for(int i=1; i<=num2; i++)
    {
        num3=num3*num1;
    }

    return num3;
}
long double permutation(long double num1, long double num2)
{
    return factorial(num1)/factorial(num1-num2);
}

long double combination(long double num1, long double num2)
{
    return factorial(num1)/(factorial(num1-num2)*factorial(num2));
}
long double logarithm(long double num1)
{
return log(num1)/2.302585;
}

long double natural_log(long double num1)
{

    return log(num1);
}


