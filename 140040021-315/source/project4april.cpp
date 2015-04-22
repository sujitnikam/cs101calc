#include<simplecpp>
#include<iostream>
#include<cstring>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include"operations.h"
#include"unitconversion.h"
#include"statistics.h"
#include"complexnumbers.h"
#include"integration.h"
#include"differentiation.h"
#include"complexnumber.h"
#include"matrixsolver.h"
#include"statisticsoutput.h"
#include"unitconversionoutput.h"
#include"stackfunction.h"


using namespace std;

int i=1;//created for the purpose of point
long double num1=0,num2=0;
short int digit=0;
const float e=2.7183;
const float pi=3.14159265359;
int on=1;

//graph start
void xsquare()
{
    Circle c(595,0,2);
    c.penDown();
    int a=-5;
    repeat(11)
    {
        a=a+1;
        c.moveTo(645+a*10,270-(a)*(a)*10);

    }

}
void xcube()
{

    Circle c(595,540,2);
    c.penDown();
    int a=-5;
    repeat(11)
    {
        a=a+1;
        c.moveTo(645+a*10,270-(a)*(a)*a*10);

    }

}
void X()
{
    Line lx(430,540,860,0);
    lx.imprint();

}
void sinx()
{
    Circle s(215-180+430,270,1);
    s.penDown();
    int a=10;
    repeat(72)
    {
        int x=10;
        s.move(x*0.5,-50*(sine(a)-sine(a-10)));
        a+=10;
    }

}
void cosx()
{
    Circle s(215-180+430,220,1);
    s.penDown();
    int a=10;
    repeat(72)
    {
        int x=10;
        s.move(x*0.5,-50*(cosine(a)-cosine(a-10)));
        a+=10;
    }

}
void tanx()
{
    Circle s(215-90+430,270,1);
    s.penDown();
    int a=10;
    repeat(72)
    {
        int x=10;
        a+=10;
        s.move(x*0.5,-50*(tangent(a)-tangent(a-10)));
    }

}
void log()
{
    Circle s(217+430,540,1);
    s.penDown();
    int a=10;
    repeat(72)
    {
        int x=10;
        a+=10;
        s.move(x,-150*(log(a)-log(a-10)));
    }

}
void ln()
{
    Circle s(217+430,540,1);
    s.penDown();
    int a=10;
    repeat(72)
    {
        int x=10;
        a+=10;
        s.move(x,-200*(log(a)-log(a-10)));
    }

}
void exponential()
{
    Circle c(430,266,2);
    c.penDown();
    int a=-4.3;
    repeat(10)
    {
        a=a+1;
        c.moveTo(215+430+a*70,270-pow(2.718281,a)*50);

    }

}
void inversetanx()
{
    Circle c(430,274,2);
    c.penDown();
    int a=-5;
    repeat(12)
    {

        c.moveTo(215+430+a*43,270-atan(a)*50);
        a=a+1;
    }

}
void inversesinx()
{
    Circle c(430+215-50,270+45,2);
    c.penDown();
    float a=-1;
    repeat(200)
    {

        c.moveTo(430+215+a*50,270-arcsine(a)/2);
        a=a+0.01;
    }
}
void inversecosx()
{
    Circle c(430+215-50,270-90,2);
    c.penDown();
    float a=-1;
    repeat(200)
    {

        c.moveTo(430+215+a*50,270-arccosine(a)/2);
        a=a+0.01;
    }
}
//graph end

bool isthere(int x, int y, int a, int b, int c, int d)
{
    if(x<a+(c/2)&&x>a-(c/2)&&y<b+(d/2)&&y>b-(d/2))
        return 1;
    return 0;
}




// CLASS FORMATION FOR UNIT CONVERSION

// FUNCTION FOR STATISTICS

// FUNCTION FOR COMPLEX NUMBERS



main_program
{
    stack.push_back("#");
calci:

    initCanvas("MULTIPURPOSE SCIENTIFIC CALCULATOR WITH GRAPH PLOTTER",1000,600);
    beginFrame();
    Rectangle R1(500,250,980,480);
    R1.setFill(true);
    R1.setColor(COLOR("grey"));

    Rectangle R2(70,45,100,50);
    R2.setFill(true);
    R2.setColor(COLOR("red"));
    Text T2(70,45,"OFF");

    Rectangle R3(180,45,100,50);
    R3.setFill(true);
    R3.setColor(COLOR("GREEN"));
    Text T3(180,45,"ON");

    Rectangle R4(610,45,740,50);
    R4.setFill(true);
    R4.setColor(COLOR("white"));

    Rectangle R5(500,540,980,100);
    R5.setFill(true);
    R5.setColor(COLOR("grey"));

    Rectangle S1(95,515,156,40);
    S1.setFill(true);
    S1.setColor(COLOR("yellow"));
    Text tS1(95,515,"Matrix Solver");

    Rectangle S2(257,515,154,40);
    S2.setFill(true);
    S2.setColor(COLOR("yellow"));
    Text tS2(257,515,"Unit Conversion");

    Rectangle S3(419,515,154,40);
    S3.setFill(true);
    S3.setColor(COLOR("yellow"));
    Text tS3(419,515,"Statistics");

    Rectangle S4(581,515,154,40);
    S4.setFill(true);
    S4.setColor(COLOR("yellow"));
    Text tS4(581,515,"Differentiation");

    Rectangle S5(743,515,154,40);
    S5.setFill(true);
    S5.setColor(COLOR("yellow"));
    Text tS5(743,515,"Integration");

    Rectangle S6(905,515,154,40);
    S6.setFill(true);
    S6.setColor(COLOR("yellow"));
    Text tS6(905,515,"Complex Numbers");

    Rectangle S7(500,560,966,40);
    S7.setFill(true);
    S7.setColor(COLOR("purple"));
    Text tS7(500,560,"SWITCH TO GRAPH PLOTTER");


    Line L01(125,10,125,80);
    Line L02(235,10,235,80);
    Line L1(10,10,990,10);
    Line L2(10,80,990,80);
    Line L3(10,490,990,490);
    Line L4(10,10,10,590);
    Line L5(990,10,990,590);
    Line L6(10,590,990,590);

    Rectangle r11add(50,120,60,60);
    Text tr11add(50,120,"+");

    Rectangle r12sub(50,190,60,60);
    Text tr12add(50,190,"-");

    Rectangle r13mul(50,260,60,60);
    Text tr13mul(50,260,"*");

    Rectangle r14div(50,330,60,60);
    Text tr14div(50,330,"/");

    Rectangle r15modulus(50,400,60,60);
    Text tr15modulus(50,400,"("); //to be filled

    Rectangle r16func(210,460,350,30);
    r16func.setFill(true);
    r16func.setColor(COLOR("pink"));
    Text tfunc(210,460,"Misc Functions");



    Rectangle r21square(130,120,60,60);
    Text tr21square(130,120,"x^2");

    Rectangle r22cube(130,190,60,60);
    Text tr22cube(130,190,"x^3");

    Rectangle r23inverse(130,260,60,60);
    Text tr23inverse(130,260,"x^-1");

    Rectangle r24power(130,330,60,60);
    Text tr24power(130,330,"x^n");

    Rectangle r25pi(130,400,60,60);
    Text trpi(130,400,"π(pi)");


    Rectangle r31sin(210,120,60,60);
    Text tr31sin(210,120,"sin");

    Rectangle r32sininverse(210,190,60,60);
    Text tr32sininverse(210,190,"sin^-1");

    Rectangle r33factorial(210,260,60,60);
    Text tr33factorial(210,260,"!(fact)");

    Rectangle r34exponential(210,330,60,60);
    Text tr34exponential(210,330,"e");

    Rectangle r35(210,400,60,60);
    Text tr35exponent(210,400,")");


    Rectangle r41cos(290,120,60,60);
    Text tr41cos(290,120,"cos");

    Rectangle r42cosinverse(290,190,60,60);
    Text tr42cosinverse(290,190,"cos^-1");

    Rectangle r43permutation(290,260,60,60);
    Text tr43permutation(290,260,"nPr");

    Rectangle r44logbase10(290,330,60,60);
    Text tr44logbase10(290,330,"log(10)");

    Rectangle r45degree(290,400,60,60);
    r45degree.setFill(true);
    r45degree.setColor(COLOR("blue"));
    Text tr45degree(290,400,"deg");



    Rectangle r51tan(370,120,60,60);
    Text tr51tan(370,120,"tan");

    Rectangle r52taninverse(370,190,60,60);
    Text tr52taninverse(370,190,"tan^-1");

    Rectangle r53combination(370,260,60,60);
    Text tr53combination(370,260,"nCr");

    Rectangle r54logbasee(370,330,60,60);
    Text tr54logbasee(370,330,"log(e)");

    Rectangle r55radian(370,400,60,60);
    Text tr55radian(370,400,"rad");



    Rectangle display(500,450,980,40);
    display.setFill(true);
    display.setColor(COLOR("orange"));
    display.hide();

    Rectangle r9(470,140,100,100);
    Text t9(470,140,"9");
    Rectangle r8(590,140,100,100);
    Text t8(590,140,"8");
    Rectangle r7(710,140,100,100);
    Text t7(710,140,"7");
    Rectangle r6(470,260,100,100);
    Text t6(470,260,"6");
    Rectangle r5(590,260,100,100);
    Text t5(590,260,"5");
    Rectangle r4(710,260,100,100);
    Text t4(710,260,"4");
    Rectangle r3(470,380,100,100);
    Text t3(470,380,"3");
    Rectangle r2(590,380,100,100);
    Text t2(590,380,"2");
    Rectangle r1(710,380,100,100);
    Text t1(710,380,"1");
    Rectangle r0(830,140,100,100);
    Text t0(830,140,"0");
    Rectangle rpoint(830,260,100,100);
    Text tpoint(830,260,".");
    Rectangle rAC(935,140,90,100);
    Text tAC(935,140,"AC");
    Rectangle rdelete(935,260,90,100);
    Text tdelete(935,260,"DELETE");
    Rectangle requal(875,380,210,100);
    Text tequal(875,380,"EQUAL TO =");
    endFrame();

    //graph plotter graphics



    //graph plotter ends


    string string_no="";
    string number="";
    string lastelement;


    while(on)
    {

        Text n1(850,45,string_no);
        int x,y;
        int start=getClick();
        x=start/65536;
        y=start%65536;
        if(x>20&&x<120&&y>20&&y<70)
            on=0;
        if(isthere(x,y,470,140,100,100))//for 9
        {
            string_no+="9";
            number.append("9");

        }

        if(isthere(x,y,590,140,100,100))//for 8
        {
            string_no+="8";
            number.append("8");

        }

        if(isthere(x,y,710,140,100,100))//for 7
        {
            string_no+="7";
            number.append("7");



        }
        if(isthere(x,y,470,260,100,100))//for 6
        {
            string_no+="6";
            number.append("6");
        }
        if(isthere(x,y,590,260,100,100))//for 5
        {
            string_no+="5";
            number.append("5");
        }
        if(isthere(x,y,710,260,100,100))//for 4
        {
            string_no+="4";
            number.append("4");
        }
        if(isthere(x,y,470,380,100,100))//for 3
        {
            string_no+="3";
            number.append("3");
        }
        if(isthere(x,y,590,380,100,100))//for 2
        {
            string_no+="2";
            number.append("2");
        }
        if(isthere(x,y,710,380,100,100))//for 1
        {
            string_no+="1";
            number.append("1");
        }
        if(isthere(x,y,830,140,100,100))//for 0
        {
            string_no+="0";
            number.append("0");
        }
        if(isthere(x,y,830,260,100,100))//for point
        {
            string_no+=".";
            number.append(".");
        }
        if(isthere(x,y,210,330,60,60))//for exponential      to be modified
        {
            string_no+="e";
            number="2.718281";

        }
        if(isthere(x,y,130,400,60,60))//for pi
        {

            string_no+="(pi)";
            number="3.141592";

        }
        if(isthere(x,y,935,200,90,220))//for delete
        {

        }
        if(isthere(x,y,50,120,60,60))//for addition
        {

            string_no+="+";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";
            str.push_back("+");



        }
        if(isthere(x,y,50,190,60,60))//for subtrction
        {

            string_no+="-";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";
            str.push_back("-"); //vector

        }
        if(isthere(x,y,50,260,60,60))//for mulyiplication
        {

            string_no+="*";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";
            str.push_back("*"); //vector

        }
        if(isthere(x,y,50,330,60,60))//for division
        {

            string_no+="/";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";
            str.push_back("/"); //vector

        }
        if(isthere(x,y,130,120,60,60))//for suqare of num1ber
        {

            string_no+="^2";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("^2"); //vector

        }

        if(isthere(x,y,130,190,60,60))//for cube of a num1ber
        {

            string_no+="^3";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("^3"); //vector

        }
        if(isthere(x,y,130,260,60,60))//for inverse of a num1ber
        {

            string_no+="^-1";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";


            str.push_back("^-1"); //vector

        }
        if(isthere(x,y,130,330,60,60))//for power of a num1ber
        {

            string_no+="^";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("^"); //vector

        }
        if(isthere(x,y,210,120,60,60))//for sin of
        {
            string_no+="sin";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";



            str.push_back("sin"); //vector

        }
        if(isthere(x,y,210,190,60,60))//for sin inverse
        {
            string_no+="sin^(-1)";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("sin^(-1)"); //vector
        }
        if(isthere(x,y,210,260,60,60))//for factorial
        {

            string_no+="!";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("!"); //vector

        }


        if(isthere(x,y,290,120,60,60))//for cos
        {
            string_no+="cos";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("cos"); //vector

        }
        if(isthere(x,y,290,190,60,60))//for cos inverse
        {

            string_no+="cos^(-1)";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("cos^(-1)"); //vector

        }
        if(isthere(x,y,290,260,60,60))//for permutation
        {

            string_no+="P";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("P"); //vector

        }
        if(isthere(x,y,290,330,60,60))//for logbase10
        {


            string_no+="log";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("log"); //vector

        }
        if(isthere(x,y,370,120,60,60))//for tan
        {
            string_no+="tan";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";
            str.push_back("tan"); //vector

        }
        if(isthere(x,y,370,190,60,60))//for tan inverse
        {
            string_no+="tan^(-1)";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("tan^(-1)"); //vector
        }
        if(isthere(x,y,370,260,60,60))//for combination (prmutation combination)
        {

            string_no+="C";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("C"); //vector

        }
        if(isthere(x,y,370,330,60,60))//for logbase e
        {

            string_no+="ln";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("ln"); //vector

        }
        if(isthere(x,y,935,140,90,100))//for AC
        {
            string_no="";
            top=0;
            stack.clear();
            postexpr.clear();
            stack.push_back("#");
            str.clear();
        }
        if(isthere(x,y,50,400,60,60))//for log of any base
        {

        }
        if(isthere(x,y,50,400,60,60))//for (
        {
            string_no+="(";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back("("); //vector


        }
        if(isthere(x,y,210,400,60,60))//for )
        {
            string_no+=")";
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            str.push_back(")"); //vector

        }


        if(isthere(x,y,905,515,154,40)) // for complex number

        {
            complexnumber();
        }


        if(isthere(x,y,95,515,156,40))//for matrix solver
        {
            while(on)

            {
                matrixsolver();
            }

        }

        if(isthere(x,y,257,515,154,40))//for unit conversion
        {
            if(unitconversionoutput()==0)
            goto calci;

        }

        if(isthere(x,y,419,515,154,40)) // for statistics
        {
            if(statisticsoutput()==0)
            goto calci;
        }
        if(isthere(x,y,581,515,154,40))//for differentiation
        {

            if(differentiation()==0)
                goto calci;


        }
        if(isthere(x,y,743,515,154,40))//for integration
        {
            if(integration()==0)
                goto calci;

        }
        if(isthere(x,y,210,460,350,30))//for misc functions
        { int choice;
         cout<<"1.GIF"<<endl;
         cout<<"2.INTEREST"<<endl;
         cout<<"ENTER THE CHOICE"<<endl;
         cin>>choice;
         switch(choice)
        { case 1:
         long double num;
        int ans;
        cout<<"Enter the no : ";
        cin>>num;
        if(num>=0)
        ans=num/1;
        else
        ans=(num/1)-1;
        cout<<"The greatest integer function of the given input is : "<<ans<<endl;
        break;
        case 2:
        cout<<"Enter the option"<<endl;
        cout<<"1.SIMPLE INTEREST"<<endl;
        cout<<"2.COMPOUND INTEREST"<<endl;
        int option;
        cout<<"Enter the option"<<endl;
        cin>>option;
        switch(option)
        {case 1:
        float p, r,t, si;
        cout<< "Give the value of principle amount in rupees: Rs ";
        cin>> p;
        cout<<"give the rate of interest : ";
        cin>> r;
        cout<< "Enter time period in year : " ;
        cin>> t;
        si= p*r*t/100;
        cout<<"Your required simple interest is :"<< si<<endl;

        break;
        case 2:
        float p1, r1,t1, ci;
        cout<< "Give the value of principle amount in rupees: Rs ";
        cin>> p1;
        cout<<"give the rate of interest : ";
        cin>> r1;
        cout<< "Enter time period in year : " ;
        cin>> t1;
        ci = p1*pow((1 + r1/100),t1);
        cout<< "Your required compound interest is :"<<ci<<endl;;

        break;

         }
         break;
        }
        }
        if(isthere(x,y,500,560,966,40))
        {
            //graph starts
            closeCanvas();
            initCanvas("GRAPH PLOTTER",860,540);
            beginFrame();
            Line L1(430,0,430,540);

            Rectangle r24xsquare(40,150,60,60);
            Text tr24xsquare(40,150,"x^2");

            Rectangle r25xcube(40,290,60,60);
            Text trxcube(40,290,"x^3");

            Rectangle r31sin(150,150,60,60);
            Text tr31sin(150,150,"sinx");

            Rectangle r32sininverse(270,150,60,60);
            Text tr32sininverse(270,150,"sin^-1(x)");

            Rectangle r34exponential(390,150,60,60);
            Text tr34exponential(390,150,"e^x");

            Rectangle r41cos(150,290,60,60);
            Text tr41cos(150,290,"cos(x)");

            Rectangle r42cosinverse(270,290,60,60);
            Text tr42cosinverse(270,290,"cos^-1(x)");

            Rectangle r44logbase10(390,290,60,60);
            Text tr44logbase10(390,290,"log(10)x");

            Rectangle r51tan(150,430,60,60);
            Text tr51tan(150,430,"tan(x)");

            Rectangle r52taninverse(270,430,60,60);
            Text tr52taninverse(270,430,"tan^-1(x)");

            Rectangle r54logbasee(390,430,60,60);
            Text tr54logbasee(390,430,"log(e)x");

            Rectangle rAC(40,500,60,60);
            Text tAC(40,500,"AC");

            Rectangle rx(40,430,60,60);
            Text tx(40,430,"x");

            Rectangle requal(250,500,340,60);
            Text tequal(250,500,"BACK TO CALCULATOR!");

            Line xaxis(430,270,860,270);

            Line yaxis(430+215,0,430+215,540);

            Line mtwop(465,272,465,268);
            Text mtwop1(465,275,"-2PI");

            Line p(510,272,510,268);
            Text p1(510,275,"-3PI/2");

            Line mp(555,272,555,268);
            Text mp1(555,275,"-PI");

            Line p2(600,272,600,268);
            Text p12(600,275,"-PI/2");

            Line pi(690,272,690,268);
            Text pi1(690,275,"PI/2");

            Line pp(735,272,735,268);
            Text pp1(735,275,"PI");

            Line pp2(780,272,780,268);
            Text pp12(780,275,"3PI/2");

            Line twop(825,272,825,268);
            Text twop1(825,275,"2PI");

            Line y1(643,220,647,220);
            Text ty1(652,224,"1");

            Line ym1(643,320,647,320);
            Text tym1(652,324,"-1");

            Line y2(643,170,647,170);
            Text ty2(652,224-50,"2");

            Line ym2(643,370,647,370);
            Text tmy2(652,374,"-2");


            endFrame();

            Rectangle rdisplay(215,60,410,60);
            Text y(40,60,"y=f(x)=");

            while(1)
            {
                int x,y;
                int start=getClick();
                x=start/65536;
                y=start%65536;
                if(isthere(x,y,40,430,60,60))//for x
                {
                    Text T(400,60,"x");
                    X();
                }

                if(isthere(x,y,40,150,60,60))//for x^2
                {
                    Text T(400,60,"x^2");
                    xsquare();
                }
                if(isthere(x,y,40,290,60,60))//for x^3
                {
                    Text T(400,60,"x^3");
                    xcube();
                }

                if(isthere(x,y,150,150,60,60))//for sinx
                {
                    Text T(400,60,"sin(x)");
                    sinx();
                }
                if(isthere(x,y,150,290,60,60))//for cosx
                {
                    Text T(400,60,"cos(x)");
                    cosx();
                }
                if(isthere(x,y,150,430,60,60))//for tanx
                {
                    Text T(400,60,"tan(x)");
                    tanx();
                }

                if(isthere(x,y,390,290,60,60))//for log
                {
                    Text T(400,60,"log(x)");
                    log();
                }
                if(isthere(x,y,390,430,60,60))//for ln
                {
                    Text T(400,60,"ln(x)");
                    ln();
                }
                if(isthere(x,y,390,150,60,60))//for e^x
                {
                    Text T(400,60,"e^x");
                    exponential();
                }
                if(isthere(x,y,270,150,60,60))
                {
                    Text T(400-10,60,"arcsin(x)");
                    inversesinx();
                }
                if(isthere(x,y,270,290,60,60))
                {
                    Text T(400-10,60,"arccos(x)");
                    inversecosx();
                }
                if(isthere(x,y,270,430,60,60))//for tan inverse x
                {
                    Text T(400,60,"arctan(x)");
                    inversetanx();
                }
                if(isthere(x,y,250,500,340,60))//for back to calculator
                {
                    goto calci;

                }
                if(isthere(x,y,40,500,60,60))
                {
                    Rectangle Rplot(430+215,270,430,540);
                    Rplot.setColor(COLOR(255,255,255));
                    Rplot.setFill(true);
                    Rplot.imprint();
                    Rectangle rdisplay1(215,60,410,60);
                    rdisplay1.setColor(COLOR(255,255,255));
                    rdisplay1.setFill(true);
                    rdisplay1.imprint();
                }

            }

        }
//graph ends

        if(isthere(x,y,875,380,210,100))//for =
        {
            if(number!="")
            {
                str.push_back(number);
            }
            number="";

            postfix();






            stack.clear();
            top=0;
            stack.push_back("#");

            {
                long double answer=posteval();
                string_no=to_string(answer);
            }
        }//is equal to ends here


        if(isthere(x,y,290,400,60,60))//for degree
        {
            degree=1;
            r45degree.setFill(true);
            r45degree.setColor(COLOR("blue"));
            Text tr45degree(290,400,"degree");
            r55radian.setFill(false);
            r55radian.setColor(COLOR("black"));
            Text tr55radian(290,400,"radian");
        }
        if(isthere(x,y,370,400,60,60))//for radian
        {
            degree=0;
            r55radian.setFill(true);
            r55radian.setColor(COLOR("blue"));
            Text tr55radian(290,400,"radian");
            r45degree.setFill(false);
            r45degree.setColor(COLOR("black"));
            Text tr45degree(290,400,"degree");
        }

    }



}


