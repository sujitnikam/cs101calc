int statisticsoutput()
{
cout<<"\t\t\t WELCOME TO STATISTICS\n";
            while(1)
            { // various commands
                cout<<"\n\n\t\t\t TYPE\n";
                cout<<"\n \t\t\t 1: MEAN\n"
                    <<" \t\t\t 2: MEDIAN\n"
                    <<" \t\t\t 3: MODE\n"
                    <<" \t\t\t 4: VARIANCE\n"
                    <<" \t\t\t 5: STANDARD DEVIATION\n"
                    <<" \t\t\t 6: ROOT MEAN SQUARE VALUE\n"
                    <<"\n\n (PRESS ANY OTHER KEY TO RETURN TO CALCULATOR)";


                int a;
                cout<<"\n\nPlease choose your operation:";
                cin>>a;
                while(1)
                { //for calculating mean
                    if(a==1)
                    {
                        int n;
                        cout<<"\nEnter the total numbers : ";
                        cin>>n;
                        double num[n];
                        cout<<"Start entering inputs"<<endl;
                        for(int i=0; i<n; i++)

                        {
                            cin>>num[i];
                        }
                        cout << "Mean = " << Mean(num, n) << endl;
                        break;
                    }
                    if(a==2)
                    { //for calculating median
                        int n;
                        cout<<"\nEnter the total numbers : ";
                        cin>>n;
                        double num[n];
                        cout<<"Start entering inputs"<<endl;
                        for(int i=0; i<n; i++)

                        {
                            cin>>num[i];
                        }
                        cout << "Median = " << Median(num, n) << endl;
                        break;

                    }
                    if(a==3)
                    {  //for calculating mode
                        int n;
                        cout<<"\nEnter the total numbers : ";
                        cin>>n;
                        double num[n];
                        cout<<"Start entering inputs"<<endl;
                        for(int i=0; i<n; i++)

                        {
                            cin>>num[i];
                        }
                        cout << "Mode = " << Mode(num, n) << endl;

                        break;
                    }

                     if(a==4)
                    { //for calculating variance
                        int n;
                        cout<<"\nEnter the total numbers : ";
                        cin>>n;
                        double num[n];
                        cout<<"Start entering inputs"<<endl;
                        for(int i=0; i<n; i++)

                        {
                            cin>>num[i];
                        }
                        cout << "Variance = " << Variance(num, n) << endl;

                        break;
                    }
                      if(a==5)
                    { //for calculating Standard Deviation
                        int n;
                        cout<<"\nEnter the total numbers : ";
                        cin>>n;
                        double num[n];
                        cout<<"Start entering inputs"<<endl;
                        for(int i=0; i<n; i++)

                        {
                            cin>>num[i];
                        }
                        cout << "Standard Deviation = " << StandardDeviation(num, n) << endl;

                        break;
                    }

                    if(a==6)
                    { //for calculating Root Mean Square
                        int n;
                        cout<<"\nEnter the total numbers : ";
                        cin>>n;
                        double num[n];
                        cout<<"Start entering inputs"<<endl;
                        for(int i=0; i<n; i++)

                        {
                            cin>>num[i];
                        }
                        cout << "Root Mean Square = " << Rootmeansquare(num, n) << endl;

                        break;
                    }



                    else return 0;
                }


            }

            }
