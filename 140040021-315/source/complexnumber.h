int complexnumber()
{
Vector2D v;
    int in;
    cout<<"\t\t\t Welcome to Complex Numbers\n\n";
comp:
    cout<<"\t\t\t Operations\n";
    cout<<"\t\t\t 1.Magnitude\n"
    <<"\t\t\t 2.Argument\n"
    <<"\t\t\t 3.Addition\n"
    <<"\t\t\t 4.Substraction\n"
    <<"\t\t\t 5.Multiplication\n"
    <<"\t\t\t 6.Conjugate\n"
    <<"\t\t\t 7.Division\n"
    <<"\t\t\t 10.Exit\n\n";
    cout<<"Enter the input : ";
    cin>>in;
    while(1)
    {
        if(in==1)
        {
            cout<<"\nEnter your complex number in the format of 'a+ib' \n";
            cout<<"Enter a : ";
            cin>>v.x;
            cout<<"Enter b : ";
            cin>>v.y;
            cout<<"Magnitude of given complex number is : ";
            cout<<v.getMagnitude()<<endl<<"\n\n";
            goto comp;

        }
        if(in==2)
        {
            cout<<"\nEnter your complex number in the format of 'a+ib' \n";
            cout<<"Enter a : ";
            cin>>v.x;
            cout<<"Enter b : ";
            cin>>v.y;
            cout<<"The Argument of given complex number is : ";
            cout<<v.getAngleX()<<endl<<"\n\n";
            goto comp;
        }
        if(in==3)
        {
            cout<<"\nEnter your complex number in the format of 'a+ib' \n";
            cout<<"Enter a : ";
            cin>>v.x;
            cout<<"Enter b : ";
            cin>>v.y;
            cout<<"Enter the complex number which you want to add( in the format of 'a+ib')\n";
            Vector2D v2;
            cout<<"Enter a2 : ";
            cin>>v2.x;
            cout<<"Enter b2 : ";
            cin>>v2.y;
            cout<<"Addition of given complex numbers is : ";
            cout<<"("<<v.add(v2).x<<")"<<"+"<<"("<<v.add(v2).y<<")"<<"i"<<endl<<"\n\n";
            goto comp;

        }
        if(in==4)
        {
            cout<<"\nEnter your complex number in the format of 'a+ib' \n";
            cout<<"Enter a : ";
            cin>>v.x;
            cout<<"Enter b : ";
            cin>>v.y;
            cout<<"Enter the complex number which you want to substract( in the format of 'a+ib')\n";
            Vector2D v2;
            cout<<"Enter a2 : ";
            cin>>v2.x;
            cout<<"Enter b2 : ";
            cin>>v2.y;
            cout<<"Addition of given complex numbers is : ";
            cout<<"("<<v.substract(v2).x<<")"<<"+"<<"("<<v.substract(v2).y<<")"<<"i"<<endl<<"\n\n";
            goto comp;

        }


        if(in==5)
        {
            cout<<"\nEnter your complex number in the format of 'a+ib' \n";
            cout<<"Enter a : ";
            cin>>v.x;
            cout<<"Enter b : ";
            cin>>v.y;
            cout<<"Enter the complex number which you want to multiply( in the format of 'a+ib')\n";
            Vector2D v2;
            cout<<"Enter a2 : ";
            cin>>v2.x;
            cout<<"Enter b2 : ";
            cin>>v2.y;
            cout<<"Multiplication of given complex numbers is : ";
            cout<<"("<<v.multiplication(v2).x<<")"<<"+"<<"("<<v.multiplication(v2).y<<")"<<"i"<<endl<<"\n\n";
            goto comp;
        }
        if(in==6)
        {
            cout<<"\nEnter your complex number in the format of 'a+ib' \n";
            cout<<"Enter a : ";
            cin>>v.x;
            cout<<"Enter b : ";
            cin>>v.y;
            cout<<"The Conjugate of given complex number is : ";
            cout<<"("<<v.conjugate().x<<")"<<"+"<<"("<<v.conjugate().y<<")"<<"i"<<endl<<"\n\n";
            goto comp;
        }
        if(in==7)
        {
            cout<<"\nEnter your complex number in the format of 'a+ib' \n";
            cout<<"Enter a : ";
            cin>>v.x;
            cout<<"Enter b : ";
            cin>>v.y;
            cout<<"Enter the complex number which you want to divide( in the format of 'a+ib')\n";
            Vector2D v2;
            cout<<"Enter a2 : ";
            cin>>v2.x;
            cout<<"Enter b2 : ";
            cin>>v2.y;
            cout<<"Division of given complex numbers is : ";
            cout<<"("<<v.division(v2).x<<")"<<"+"<<"("<<v.division(v2).y<<")"<<"i"<<endl<<"\n\n";
            goto comp;
        }


        if(in==10)
        {
         return 0;
        }


    }

}
