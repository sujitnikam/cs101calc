int integration()
{
 int in;
cout<<"\t\t\t WELCOME TO INTEGRATION \n\n";
integ :
    cout<<"\n\t\t\t\tOperations \n\n\n";
cout<<"\t\t 1.A                       10.Atanx\n"
    <<"\t\t 2.Ax^n (n!= -1)           11.Acotx\n"
    <<"\t\t 3.A/x                     12.Ae^x\n"
    <<"\t\t 4.Asinx                   13.Ak^x\n"
    <<"\t\t 5.Acosx                   14.A/(k^2-x^2)^1/2\n"
    <<"\t\t 6.Asec^2(x)               15.A/(k^2+x^2)\n"
    <<"\t\t 7.Acosec^2(x)             16.A/x*(x^2-k^2)^(1/2)\n"
    <<"\t\t 8.Asecx*tanx              17.A/(x^2-k^2)\n"
    <<"\t\t 9.Acosecx*cotx            18.Aln(x)\n\n\n"
    <<"(ALL INTEGRATIONS ARE WITH RESPECT TO dx)\n\n"
    <<"(PLEASE NOTE THAT THE PROGRAM WILL TERMINATE FOR INPUT OTHER THAN 1-18)\n\n";

    cout<<"\n Enter the function you need to integrate : ";
    cin>>in;

    if(in==1)
    {
        cout<<"\n Integration is : Ax";
        double A,x1,x2;
        int a;
func1I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            cout<<" Integration evaluates to  "<<A*(x2-x1)<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func1I;
        }

    }

    if(in==2)
    {
        cout<<"\n Integration is : A[x^(n+1)]/(n+1)";
        double A,x1,x2;
        int a;
func2I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {   double n;
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of n : ";
            cin>>n;
            cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            double value=A*(pow(x2,n+1)-pow(x1,n+1))/(n+1);
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func2I;
        }

    }

    if(in==3)
    {
        cout<<"\n Integration is : A*lnx";
        double A,x1,x2;
        int a;
func3I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            cout<<" Integration evaluates to  "<<A*(log(x2)-log(x1))<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func3I;
        }

    }

    if(in==4)
    {
        cout<<"\n Integration is : -Acosx";
        double A,x1,x2;
        int a;
func4I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x(in degrees) : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x(in degrees) : ";
            cin>>x2;
            x1=x1*PI/180;
            x2=x2*PI/180;
            double value=(-1)*A*(cos(x2)-cos(x1));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func4I;
        }

    }
    if(in==5)
    {
        cout<<"\n Integration is : Asinx";
        double A,x1,x2;
        int a;
func5I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x(in degrees) : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x(in degrees) : ";
            cin>>x2;
            x1=x1*PI/180;
            x2=x2*PI/180;
            double value=A*(sin(x2)-sin(x1));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func5I;
        }

    }

    if(in==6)
    {
        cout<<"\n Integration is : Atanx";
        double A,x1,x2;
        int a;
func6I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x(in degrees) : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x(in degrees) : ";
            cin>>x2;
            x1=x1*PI/180;
            x2=x2*PI/180;
            double value=A*(tan(x2)-tan(x1));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func6I;
        }

    }

    if(in==7)
    {
        cout<<"\n Integration is : -Acotx";
        double A,x1,x2;
        int a;
func7I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x(in degrees) : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x(in degrees) : ";
            cin>>x2;
            x1=x1*PI/180;
            x2=x2*PI/180;
            double value=(-1)*A*(1/tan(x2)-1/tan(x1));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func7I;
        }

    }

    if(in==8)
    {
        cout<<"\n Integration is : Asecx";
        double A,x1,x2;
        int a;
func8I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x(in degrees) : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x(in degrees) : ";
            cin>>x2;
            x1=x1*PI/180;
            x2=x2*PI/180;
            double value=A*(1/cos(x2)-1/cos(x1));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func8I;
        }

    }

    if(in==9)
    {
        cout<<"\n Integration is : -Acosecx";
        double A,x1,x2;
        int a;
func9I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x(in degrees) : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x(in degrees) : ";
            cin>>x2;
            x1=x1*PI/180;
            x2=x2*PI/180;
            double value=(-1)*A*(1/sin(x2)-1/sin(x1));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func9I;
        }

    }

    if(in==10)
    {
        cout<<"\n Integration is : Aln(secx)";
        double A,x1,x2;
        int a;
func10I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x(in degrees) : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x(in degrees) : ";
            cin>>x2;
            x1=x1*PI/180;
            x2=x2*PI/180;
            double value=(-1)*A*(log(cos(x2))-log(cos(x1)));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func10I;
        }

    }

    if(in==11)
    {
        cout<<"\n Integration is : -Aln(cosecx)";
        double A,x1,x2;
        int a;
func11I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x(in degrees) : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x(in degrees) : ";
            cin>>x2;
            x1=x1*PI/180;
            x2=x2*PI/180;
            double value=A*(log(sin(x2))-log(sin(x1)));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func11I;
        }

    }

    if(in==12)
    {
        cout<<"\n Integration is : Ae^x";
        double A,x1,x2;
        int a;
func12I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            double value=A*(pow(2.718281,x2)-pow(2.718281,x1));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func12I;
        }

    }

    if(in==13)
    {
        cout<<"\n Integration is : A(k^x)/ln(k)";
        double A,x1,x2,k;
        int a;
func13I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
inputk:     cout<<" Enter the value of k : ";
            cin>>k;
            if(k<0)
            {
            cout<<"Invalid Input.Please try again \n";
            goto inputk;
            }
            cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            double value=A*(pow(k,x2)-pow(k,x1))/log(k);
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func13I;
        }

    }


    if(in==14)
    {
        cout<<"\n Integration is : Asin^(-1)(x/k)";
        double A,x1,x2,k;
        int a;
func14I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of k : ";
            cin>>k;
lowlimit14I:   cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            if((x1/k)>1)
            {
            cout<<"Invalid input.Ratio of lower limit/k exceeded 1\nPlease type again\n "<<endl;
            goto lowlimit14I;
            }
upplimit14I:   cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            if((x2/k)>1)
            {
            cout<<"Invalid input.Ratio of upper limit/k exceeded 1\nPlease type again\n "<<endl;
            goto upplimit14I;
            }
            double value=A*(arcsine(x2/k)-arcsine(x1/k));
            cout<<" Integration evaluates to(in degrees)  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func14I;
        }

    }

    if(in==15)
    {
        cout<<"\n Integration is : (A/k)*tan^(-1)(x/k)";
        double A,x1,x2,k;
        int a;
func15I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of k : ";
            cin>>k;
            cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            double value=(A/k)*(arctangent(x2/k)-arctangent(x1/k));
            cout<<" Integration evaluates to(in degrees)  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func15I;
        }

    }

    if(in==16)
    {
        cout<<"\n Integration is : (A/k)sec^(-1)(x/k)";
        double A,x1,x2,k;
        int a;
func16I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of k : ";
            cin>>k;
lowlimit16I:   cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            if((k/x1)>1)
            {
            cout<<"Invalid input.Ratio of lower limit/k does not exceed 1\nPlease type again\n "<<endl;
            goto lowlimit16I;
            }
upplimit16I:   cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            if((k/x2)>1)
            {
            cout<<"Invalid input.Ratio of upper limit/k does not exceed 1\nPlease type again\n "<<endl;
            goto upplimit16I;
            }
            double value=(A/k)*(arccosine(k/x2)-arccosine(k/x1));
            cout<<" Integration evaluates to(in degrees)  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func16I;
        }

    }

    if(in==17)
    {
        cout<<"\n Integration is : (A/2k)(ln(x-k)-ln(x+k))";
        double A,x1,x2,k;
        int a;
func17I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of k : ";
            cin>>k;
lowlimit17I: cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            if((x1-k)<0 && (x1+k)<0)
            {
            cout<<"Invalid input.Please type again\n "<<endl;
            goto lowlimit17I;
            }
upplimit17I: cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            if((x2-k)<0 && (x2+k)<0)
            {
            cout<<"Invalid input.Please type again\n "<<endl;
            goto upplimit17I;
            }
            double value=(A/(2*k))*((log(x2-k)-log(x2+k))-(log(x1-k)-log(x1+k)));
            cout<<" Integration evaluates to(in degrees)  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func17I;
        }

    }

    if(in==18)
    {
        cout<<"\n Integration is : Ax(ln(x)-1)";
        double A,x1,x2;
        int a;
func18I:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
lowlimit18I:   cout<<" Enter the lower limit value of x : ";
            cin>>x1;
            if(x1<0)
            {
            cout<<"Invalid Input.Please try again";
            goto lowlimit18I;
            }
upplimit18I:   cout<<" Enter the upper limit value of x : ";
            cin>>x2;
            if(x2<0)
            {
            cout<<"Invalid Input.Please try again";
            goto upplimit18I;
            }double value=A*((x2*log(x2)-x2)-(x1*log(x1)-x1));
            cout<<" Integration evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with integration(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto integ;
            else
                return 0;
        }
        else if(a==0)
        {
            goto integ;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func18I;
        }

    }

    else
    return 0;


}
