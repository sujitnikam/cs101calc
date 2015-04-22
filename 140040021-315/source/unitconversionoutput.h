int unitconversionoutput()
{
lengthconv b;
            weight c;
            vol d;
            area e;
            temp f;
            int x,y;

            while(1)
            {
                // various definitions in the UNIT CONVERSION
                cout<<"\t\t\tWELCOME TO UNIT CONVERSION\n"<<endl;
                cout<<"\n      TYPE"<<"\n     ------";
                cout<<"\n  1: length conversion\n"
                    << "  2: Temparature conversion\n"
                    <<"  3: Weight conversion\n"
                    <<"  4: Area conversion\n"
                    <<"  5: Volume convsersion\n"
                    <<"  6: Decimal to Binary\n"
                    <<"  7: Decimal to Octal\n"
                    <<"  8: Decimal to Hexadecimal\n"
                    <<"  \n\n (PRESS ANY OTHER KEY TO RETURN TO CALCULATOR)";
                cout<<"\n\nPlease choose your Conversion Type:" ;
                cin>>x;
                if(x==1)
                {

                    cout<<"\n\n choose your unit conversion:\n";

                    cout<<"\n  1 : mm-m";
                    cout<<"\n  2 : m-mm";
                    cout<<"\n  3 : cm-m";
                    cout<<"\n  4 : m-cm";
                    cout<<"\n  5 : cm_km";
                    cout<<"\n  6 : km-cm";
                    cout<<"\n  7 : m-mile";
                    cout<<"\n  8 : mile-m";
                    cout<<"\n  9 : km-mile";
                    cout<<"\n 10 : mile-km";
                    cout<<"\n 11 : feet-m";
                    cout<<"\n 12 : m-feet";
                    cout<<"\n 13 : inch-m";
                    cout<<"\n 14 : m-inch";
                    cout<<"\n 17 : Back to The Main Menu";


                    while(1)
                    {
                        cout<<"\n\n Please Enter Your Choice= ";
                        cin>>y;

                        if (y==1)
                        {
                            b.mm_m();
                        }
                        else if(y==2)
                        {
                            b.m_mm();
                        }
                        else if (y==3)
                        {
                            b.cm_m();
                        }
                        else if (y==4)
                        {
                            b.m_cm();
                        }
                        else if (y==5)
                        {
                            b.cm_km();
                        }
                        else if (y==6)
                        {
                            b.km_cm();
                        }
                        else if (y==7)
                        {
                            b.m_mile();
                        }
                        else if (y==8)
                        {
                            b.mile_m();
                        }
                        else if (y==9)
                        {
                            b.km_mile();
                        }
                        else if (y==10)
                        {
                            b.mile_km();
                        }
                        else if (y==11)
                        {
                            b.feet_m();
                        }
                        else if (y==12)
                        {
                            b.m_feet();
                        }
                        else if (y==13)
                        {
                            b.inch_m();
                        }
                        else if(y==14)
                        {
                            b.m_inch();
                        }
                        else if (y==17)
                        {
                            break;
                        }
                    }
                }
                else if(x==2)
                {
                    cout<<"\n\n choose your unit conversion:\n";

                    cout<<"\n  1: Celsius-Fahrenheit";
                    cout<<"\n  2: Fahrenheit-Celsius";
                    cout<<"\n  3: Celsius-Kelvin";
                    cout<<"\n  4: Kelvin-Celcius";
                    cout<<"\n  5: Back to The Main Menu";
                    while(1)
                    {
                        cout<<"\n\n Please Enter Your Choice= ";
                        cin>>y;

                        if(y==1)
                        {
                            f.celsius_to_fahrenheit();
                        }
                        else if(y==2)
                        {
                            f.f_cel();
                        }
                        else if (y==3)
                        {
                            f.cel_k();
                        }
                        else if(y==4)
                        {
                            f.k_cel();
                        }
                        else if(y==5)
                        {
                            break;
                        }
                    }
                }
                else if(x==3)
                {
                    cout<<"\n\nchoose your unit conversion :\n";

                    cout<<"\n  1: Milligm-Gramm";
                    cout<<"\n  2: Gramm-milligm";
                    cout<<"\n  3: Gramm-killogram";
                    cout<<"\n  4: killoGramm-Gramm";
                    cout<<"\n  5: pound-killogramm";
                    cout<<"\n  6: killogramm-pound";
                    cout<<"\n  7: Gramm-Pound";
                    cout<<"\n  8: Pound-gramm";
                    cout<<"\n  9: killogramm-Metric ton";
                    cout<<"\n 10: Metric ton-Killogramm";
                    cout<<"\n 11: Back to The Main Menu";

                    while(1)
                    {
                        cout<<"\n\nPlease Enter Your Choice= ";
                        cin>>y;

                        if (y==1)
                        {
                            c.milligm_gm();
                        }
                        else if (y==2)
                        {
                            c.gm_milligm();
                        }
                        else if (y==3)
                        {
                            c.gm_kg();
                        }
                        else if (y==4)
                        {
                            c.kg_gm();
                        }
                        else if (y==5)
                        {
                            c.pound_kg();
                        }
                        else if (y==6)
                        {
                            c.kg_pound();
                        }
                        else if (y==7)
                        {
                            c.gm_pound();
                        }
                        else if (y==8)
                        {
                            c.pound_gm();
                        }
                        else if (y==9)
                        {
                            c.kg_mton();
                        }
                        else if (y==10)
                        {
                            c.mton_kg();
                        }
                        else if (y==11)
                        {
                            break;
                        }
                    }
                }
                else if(x==4)
                {
                    cout<<"\n\nchoose your unit conversion:\n";

                    cout<<"\n   1: Square mm-Square cm";
                    cout<<"\n   2: square cm-Square mm";
                    cout<<"\n   3: square cm-square m";
                    cout<<"\n   4: Square m-Square cm";
                    cout<<"\n   5: Square m-Square km";
                    cout<<"\n   6: Square km-Square m";
                    cout<<"\n   7: Square feet-Square m";
                    cout<<"\n   8: Square m-Square feet";
                    cout<<"\n   9: Square Yard-Square m";
                    cout<<"\n  10: Square m-Square yard";
                    cout<<"\n  11: Square mile-Square km";
                    cout<<"\n  12: Square km-Square mile";
                    cout<<"\n  13: Acre-Hectare";
                    cout<<"\n  14: Hectare-Acre";
                    cout<<"\n  15: Square km-Acre ";
                    cout<<"\n  16: Acre-Square km";
                    cout<<"\n  17: Back to The Main Menu";

                    while(1)
                    {
                        cout<<"\n\nPlease Enter Your Choice= ";
                        cin>>y;

                        if(y==1)
                        {
                            e.mmSq_cmSq();
                        }
                        else if(y==2)
                        {
                            e.cmSq_mmSq();
                        }
                        else if(y==3)
                        {
                            e.cmSq_mSq();
                        }
                        else if(y==4)
                        {
                            e.mSq_cmSq();
                        }
                        else if(y==5)
                        {
                            e.mSq_kmSq();
                        }
                        else if(y==6)
                        {
                            e.kmSq_mSq();
                        }
                        else if(y==7)
                        {
                            e.feetSq_mSq();
                        }
                        else if(y==8)
                        {
                            e.mSq_feetSq();
                        }

                        else if(y==11)
                        {
                            e.mileSq_kmSq();
                        }
                        else if(y==12)
                        {
                            e.kmSq_mileSq();
                        }
                        else if(y==13)
                        {
                            e.acre_hect();
                        }
                        else if(y==14)
                        {
                            e.hect_acre();
                        }
                        else if(y==15)
                        {
                            e.kmSq_acre();
                        }
                        else if(y==16)
                        {
                            e.acre_kmSq();
                        }
                        else if(y==17)
                        {
                            break;
                        }
                    }
                }
                else if(x==5)
                {
                    cout<<"\n\nchoose your unit conversion:\n";

                    cout<<"\n   1 : ml-Litre";
                    cout<<"\n   2 : Litre-ml";
                    cout<<"\n   3 : Cubic mm-Cubic cm";
                    cout<<"\n   4 : Cubic cm-Cubic mm";
                    cout<<"\n   5 : Cubic cm-Cubic m";
                    cout<<"\n   6 : Cubic m-Cubic cm";
                    cout<<"\n   7 : Cubic Inch-Cubic m";
                    cout<<"\n   8 : Cubic m-Cubic Inch";
                    cout<<"\n   9 : Cubic feet-Cubic m";
                    cout<<"\n  10 : Cubic m-Cubic feet";
                    cout<<"\n  11 : Cubic m-Gallon (uk)";
                    cout<<"\n  12 : Gallon-Cubic m";
                    cout<<"\n  13 : Litre-Gallon";
                    cout<<"\n  14 : Gallon-Litre";
                    cout<<"\n  15 : Back to The Main Menu";


                    while(1)
                    {
                        cout<<"\n\nPlease Enter Your Choice= ";
                        cin>>y;

                        if (y==1)
                        {
                            d.mL_L();
                        }
                        else if (y==2)
                        {
                            d.L_mL();
                        }
                        else if (y==3)
                        {
                            d.mmQ_cmQ();
                        }
                        else if (y==4)
                        {
                            d.cmQ_mmQ();
                        }
                        else if (y==5)
                        {
                            d.cmQ_mQ();
                        }
                        else if (y==6)
                        {
                            d.mQ_cmQ();
                        }
                        else if (y==7)
                        {
                            d.inchQ_mQ();
                        }
                        else if (y==8)
                        {
                            d.mQ_inchQ();
                        }
                        else if (y==9)
                        {
                            d.feetQ_mQ();
                        }
                        else if (y==10)
                        {
                            d.mQ_feetQ();
                        }
                        else if (y==11)
                        {
                            d.mQ_gallon();
                        }
                        else if (y==12)
                        {
                            d.gallon_mQ();
                        }
                        else if (y==13)
                        {
                            d.L_gallon();
                        }
                        else if(y==14)
                        {
                            d.gallon_L();
                        }
                        else if(y==15)
                        {
                            break;
                        }
                    }
                }
                else if(x==6)
                {
                int a;
                cout<<"Enter the decimal string ";
                cin>>a;
                cout<<"Binary form is :"<<DecToBin(a)<<endl;


                }

                else if(x==7)
                {
                int a;
                cout<<"Enter the decimal string ";
                cin>>a;
                cout<<"Octal form is : ";
                DecToOct(a);


                }
                else if(x==8)
                {
                toHex();

                }
                else
                {
                    return 0;
                }

            }

}
