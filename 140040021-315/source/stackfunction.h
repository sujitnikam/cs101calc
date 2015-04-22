int top=0;
    vector <string> postexpr,stack,str;
    int degree=1;

bool isNumeric(string s) //bool function
{       int k,a=0;

        for(k=0;k<s.length();k++)
        {
        if(!isdigit(s[k])&&(s[k]!='.'))
        return false;

        if(s[k]=='.')
        a=a+1;
        }

        if(a<2)
        {
        return true;
        }
        else
        return false;




}
void push ( string c )
{
        top++;
        stack.push_back(c);
}
string pop( )
{
    if ( top == -1 )
    {
        cout << "\nStack is empty\n" ;
        return "-1" ;
    }
    else
    {
        string item = stack[stack.size()-1]; ;
        stack.pop_back();
        top--;
        return item ;
    }
}
int priority ( string c )
{
    if (c.compare("^")==0||c.compare("^2")==0||c.compare("^3")==0||c.compare("^-1")==0||c.compare("sin")==0||
    c.compare("cos")==0||c.compare("tan")==0||c.compare("!")==0||c.compare("P")==0||c.compare("C")==0||
    c.compare("log")==0||c.compare("ln")==0||c.compare("tan")==0||c.compare("cos^(-1)")==0||c.compare("sin^(-1)")==0||
    c.compare("tan^(-1)")==0)
    return 3;
    if ( c.compare("*") ==0 || c.compare("/") ==0||c.compare("%") ==0)
        return 2 ;
    else
    {
        if (  c.compare("+") ==0 || c.compare("-") ==0)
            return 1 ;
        else if (  c.compare("(") ==0 || c.compare(")") ==0)
            return 0 ;
        else
            return -1;
    }
}
void postfix()
{
    int i;
    string ch,opr;
    for(i=0;i<str.size();i++){

        ch=str[i];
        if(isNumeric(ch)){
            postexpr.push_back(ch);
        }
        else if(ch=="("){

            push(ch);
        }
        else if(ch==")"){
            opr = pop() ;
            while ((opr) != "(" )
            {

                postexpr.push_back(opr);
                opr =  pop() ;
            }
        }
        else{
                opr = pop() ;
                while ( priority ( opr ) >= priority (ch) )

                {

                    postexpr.push_back(opr);
                    opr = pop() ;
                }
                push(opr) ;
                push(ch);
            }
        }
    while ( top != 0 )
    {
        opr = pop() ;
        postexpr.push_back(opr);
    }
}



long double performOperation(string op)
{   string opr;
    long double ans,num1,num2;
        if (op.compare("+")==0){
            opr=pop();
            num1=stold(opr);
            opr=pop();
            num2=stold(opr);

            ans =addition(num1,num2);}
        else if (op.compare("-")==0)
        {
            opr=pop();
            num1=stold(opr);
            opr=pop();
            if(isNumeric(opr))
            {num2=stold(opr);

            ans =substraction(num1,num2);}
            else
            {
                push(opr);
                ans=num1*-1;

            }

        }

        else if (op.compare("*")==0)
        {
        opr=pop();
            num1=stold(opr);
            opr=pop();
            num2=stold(opr);

            ans =multiplication(num1,num2);
        }


       else if (op.compare("/")==0)
        {
        opr=pop();
            num1=stold(opr);
            opr=pop();
            num2=stold(opr);

            ans =division(num1,num2);
        }

        else if (op.compare("^2")==0) //square
        {
            opr=pop();
            num1=stold(opr);
            ans = square(num1);
        }
         else if (op.compare("^3")==0) //cube
        {
            opr=pop();
            num1=stold(opr);
            ans = cube(num1);

        }
          else if (op.compare("^")==0)//power
        {
        opr=pop();
            num1=stold(opr);
            opr=pop();
            num2=stold(opr);

            ans =pow(num2,num1);
        }
        else if (op.compare("!")==0) //factorial
        {
            opr=pop();
            num1=stold(opr);
            ans = factorial(num1);

        }
        else if (op.compare("log")==0) //log
        {
            opr=pop();
            num1=stold(opr);
            ans = logarithm(num1);

        }
        else if (op.compare("ln")==0) //ln
        {
            opr=pop();
            num1=stold(opr);
            ans = natural_log(num1);

        }
        else if (op.compare("P")==0)//permutation
        {
        opr=pop();
            num1=stold(opr);
            opr=pop();
            num2=stold(opr);

            ans =permutation(num2,num1);
        }
           else if (op.compare("C")==0)//combination
        {
        opr=pop();
            num1=stold(opr);
            opr=pop();
            num2=stold(opr);

            ans =combination(num2,num1);
        }
        else if (op.compare("^-1")==0) //inverse
        {
            opr=pop();
            num1=stold(opr);
            ans = inverse(num1);
        }

        else if (op.compare("sin")==0) //sin
        {
            opr=pop();
            num1=stold(opr);
            double c;
                if(degree==1)
                    c=3.14/180;
                if(degree==0)
                    c=1;
                ans = sin(num1*c);
        }
          else if (op.compare("cos^(-1)")==0) //arccos
        {
            opr=pop();
            num1=stold(opr);

                ans = arccosine(num1);
        }

         else if (op.compare("sin^(-1)")==0) //arccos
        {
            opr=pop();
            num1=stold(opr);

                ans = arcsine(num1);
        }

         else if (op.compare("tan^(-1)")==0) //arccos
        {
            opr=pop();
            num1=stold(opr);

                ans = arctangent(num1);
        }


        else if (op.compare("cos")==0) //tan
        {
            opr=pop();
            num1=stold(opr);
            double c;
                if(degree==1)
                    c=3.14/180;
                if(degree==0)
                    c=1;
                ans = cos(num1*c);
        }
        else if (op.compare("tan")==0) //tan
        {
            opr=pop();
            num1=stold(opr);
            double c;
                if(degree==1)
                    c=3.14/180;
                if(degree==0)
                    c=1;
                ans = tan(num1*c);
        }

    return ans;
}


long double posteval(){
    int i;
    string ch,opr;
    long double output;

    for(i=0;i<postexpr.size();i++){
        ch=postexpr[i];
        if(isNumeric(ch)){
            push(ch);
        }
        else{
                        output=performOperation(ch);
            push(to_string(output));

        }
 }
        return output;

}
