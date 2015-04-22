int differentiation()
{
double in;
    cout<<"\t\t\t WELCOME TO DIFFERENTIATION \n\n";
diff : // functions that are used for differentiation
    cout<<"\n\n\t\t\t\tOperations \n\n\n";
cout<<"\t\t 1.Asinx                   10.Acot^(-1)(kx)\n"
    <<"\t\t 2.Acosx                   11.Asec^(-1)(kx)\n"
    <<"\t\t 3.Atanx                   12.Acosec^(-1)(kx)\n"
    <<"\t\t 4.Acotx                   13.Ax\n"
    <<"\t\t 5.Asecx                   14.Ax^n\n"
    <<"\t\t 6.Acosecx                 15.Ae^x\n"
    <<"\t\t 7.Asin^(-1)(kx)           16.Ae^(kx)\n"
    <<"\t\t 8.Acos^(-1)(kx)           17.Ak^x\n"
    <<"\t\t 9.Atan^(-1)(kx)           18.Aln(x)\n\n\n"
    <<"(PLEASE NOTE THAT THE PROGRAM WILL TERMINATE FOR INPUT OTHER THAN 1-18)\n\n";

    cout<<"\n Enter the function you need to differentiate : ";
    cin>>in;
    if(in==1)
    { // for differentiation of Asinx
        cout<<"\n Differentiation is : Acosx";
        double A,x;
        int a;
func1:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of x(in degrees) : ";
            cin>>x;
            cout<<" Differentiation evaluates to  "<<A*cos(x*PI/180)<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func1;
        }

    }
    if(in==2)
    { // for differentiation of Acosx
        cout<<"\n Differentiation is : -Asinx";
        double A,x;
        int a;
func2:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"\n Enter the value of x(in degrees) : ";
            cin>>x;
            cout<<"\n Differentiation evaluates to  "<<(-1)*A*sin(x*PI/180)<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func2;
        }
    }

    if(in==3)
    { // for differentiation of Atanx
        cout<<"\n Differentiation is : A(secx)^2";
        double A,x;
        int a;
func3:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of x(in degrees) : ";
            cin>>x;
            cout<<"\n Differentiation evaluates to  "<<A*1/(cos(x*PI/180)*cos(x*PI/180))<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func3;

        }
    }
    if(in==4)
    { // for differentiation of Acotx
        cout<<"\n Differentiation is : -A(cosecx)^2";
        double A,x;
        int a;
func4:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of x(in degrees) : ";
            cin>>x;
            cout<<"\n Differentiation evaluates to  "<<(-1)*A*1/(sin(x*PI/180)*sin(x*PI/180))<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func4;
        }
    }
    if(in==5)
    { // for differentiation of secx
        cout<<"\n Differentiation is : A*secx*tanx";
        double A,x;
        int a;
func5:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of x(in degrees) : ";
            cin>>x;
            cout<<"\n Differentiation evaluates to  "<<A*sin(x*PI/180)/(cos(x*PI/180)*cos(x*PI/180))<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func5;
        }
    }
    if(in==6)
    { // for differentiation of Acosecx
        cout<<"\n Differentiation is : -A*cosecx*cotx";
        double A,x;
        int a;
func6:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of x(in degrees) : ";
            cin>>x;
            cout<<"\n Differentiation evaluates to  "<<A*cos(x*PI/180)/(sin(x*PI/180)*sin(x*PI/180))<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func6;
        }
    }
    if(in==7)
    { // for differentiation of Asin^(-1)(kx)
        cout<<"\n Differentiation is : A*k/(1-(k*x)^2)^(1/2)";
        double A,x;
        int a,k;
func7:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of k:";
            cin>>k;
com7:
            cout<<"Enter the value of x(between -1 and 1) : ";
            cin>>x;
            if(x>1 || x<(-1))
            {
                cout<<"Not a valid input \n";
                cout<<"Please input again \n ";
                goto com7;
            }
            double value=A*k/sqrt(1-(k*x*k*x));
            cout<<"\n Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func7;
        }
    }
    if(in==8)
    { // for differentiation of Acos^(-1)(kx)
        cout<<"\n Differentiation is : -A*k/(1-(k*x)^2)^2";
        double A;
        int a;
        double x,k;
func8:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of k: ";
            cin>>k;
com8:
            cout<<"Enter the value of x(between -1 and 1) : ";
            cin>>x;
            if(x>1 || x<(-1))
            {
                cout<<"Not a valid input \n";
                cout<<"Please input again \n ";
                goto com8;
            }
            double value=(-1)*A*k/sqrt(1-(k*x*k*x));
            cout<<"\n Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func8;
        }
    }
    if(in==9)
    { // for differentiation of Atan^(-1)(kx)
        cout<<"\n Differentiation is : A*k/(1+(k*x*k*x))";
        double A,x;
        int a,k;
func9:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of k:";
            cin>>k;
            cout<<"Enter the value of x : ";
            cin>>x;
            double value=A*k/(1+(k*x*k*x));
            cout<<"\n Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func9;
        }
    }
    if(in==10)
    { // for differentiation of Acot^(-1)(kx)
        cout<<"\n Differentiation is : -A*k/(1+(k*x)^2)";
        double A,x;
        int a,k;
func10:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of k:";
            cin>>k;
            cout<<"Enter the value of x : ";
            cin>>x;
            double value=(-1)*A*k/(1+(k*x*k*x));
            cout<<"\n Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func10;
        }
    }
    if(in==11)
    { // for differentiation of Asec^(-1)(kx)
        cout<<"\n Differentiation is : A*k/(k*x*((k*x)^2-1)^(1/2))";
        double A,x;
        int a,k;
func11:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of k:";
            cin>>k;
com11:
            cout<<"Enter the value of x : ";
            cin>>x;
            if(x<1 || x>(-1))
            {
                cout<<"Not a valid input \n";
                cout<<"Please input again \n ";
                goto com11;
            }
            double value=A*k/(k*x*sqrt((k*x*k*x-1)));
            cout<<"\n Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func11;
        }
    }
    if(in==12)
    { // for differentiation of Acosec^(-1)(kx)
        cout<<"\n Differentiation is : -A*k/(k*x*((k*x)^2-1)^(1/2))";
        double A,x;
        int a,k;
func12:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<"Enter the value of A:";
            cin>>A;
            cout<<"Enter the value of k:";
            cin>>k;
com12:
            cout<<"Enter the value of x : ";
            cin>>x;
            if(x<1 && x>-1)
            {
                cout<<"Not a valid input \n";
                cout<<"Please input again \n ";
                goto com12;
            }
            double value=(-1)*A*k/(k*x*sqrt(k*x*k*x-1));
            cout<<"\n Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func12;
        }
    }
    if(in==13)
    { // for differentiation of Ax
        cout<<"\n Differentiation is : A";
        double A,x;
        int a;
func13:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of x : ";
            cin>>x;
            cout<<" Differentiation evaluates to  "<<A<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func13;
        }
    }
    if(in==14)
    { // for differentiation of X^n
        cout<<"\n Differentiation is : Anx^(n-1)";
        double A,x,n;
        int a;
func14:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of x : ";
            cin>>x;
            cout<<" Enter the value of n : ";
            cin>>n;
            double value=A*n*pow(x,n-1);
            cout<<" Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func14;
        }
    }
    if(in==15)
    { // for differentiation of Ae^x
        cout<<"\n Differentiation is : Ae^x";
        double A,x;
        int a;
func15:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of x : ";
            cin>>x;
            double value=A*pow(2.718281,x);
            cout<<" Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func15;
        }
    }
    if(in==16)
    { // for differentiation of Ae^(kx)
        cout<<"\n Differentiation is : Ake^(kx)";
        double A,x,k;
        int a;
func16:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of x : ";
            cin>>x;
            cout<<" Enter the value of k : ";
            cin>>k;
            double value=A*k*pow(2.718281,k*x);
            cout<<" Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func16;
        }
    }
    if(in==17)
    { // for differentiation of Ak^x
        cout<<"\n Differentiation is : Ak^x(ln(k))";
        double A,x,k;
        int a;
func17:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of x : ";
            cin>>x;
            cout<<" Enter the value of k: ";
            cin>>k;
            double value=A*pow(k,x)*log(k);
            cout<<" Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func17;
        }
    }
    if(in==18)
    { // for differentiation of Alnx
        cout<<"\n Differentiation is : A/x";
        double A,x;
        int a;
func18:
        cout<<"\n Do you wish to evaluate on a particular value?(1/0) : ";
        cin>>a;
        if(a==1)
        {
            cout<<" Enter the value of A : ";
            cin>>A;
            cout<<" Enter the value of x : ";
            cin>>x;
            double value=A/x;
            cout<<" Differentiation evaluates to  "<<value<<endl<<endl;
            cout<<"Do you wish to continue with differentiation(1/0) : ";
            int b;
            cin>>b;
            if(b==1)
                goto diff;
            else
                return 0;
        }
        else if(a==0)
        {
            goto diff;
        }
        else
        {
            cout<<"Invalid input. Please type again.\n";
            goto func18;
        }
    }
    else
    return 0;
}
