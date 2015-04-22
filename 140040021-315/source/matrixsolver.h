// DEFINITION OF FUNCTIONS USED IN MATRIX SOLVER
int numvar;
void rowop(double matrix[50][51], int row1, int row2, double multiple);
void rowmult(double matrix[50][51], int row, double multiple);
void rowswap(double  matrix[50][51] ,int row1, int row2 );
void permutation( double matrix[50][51], int row, int column);
void eqprint(double matrix[50][51]);

int matrixsolver()
{

                cout<<"Enter the no. of equations(=variables) : ";
                cin>>numvar;
                if(numvar>50||numvar<=0)
                {
                    cout<<"Not Allowed(Max-50)";
                    return 0;
                }
                cout<<"Equation Solver ("<<numvar<<" equations and "<<numvar<<" variables)\n";
                double matrix[50][51];
                for(int i =0 ; i<numvar; i++)
                {
                    cout<<"Enter the equation "<<i+1<<" coefficients: \nCoeff. of:\n";
                    for(int j=0; j<=numvar; j++)
                    {
                        if(j==numvar) cout<<"constant: ";
                        else cout<<"x"<<j+1<<"\t  ";
                        cin>>matrix[i][j];
                    }
                }
                cout<<"The entered equations are: \n\n";
                eqprint(matrix);
                cout<<"After Gaussian Elimination :\n\n";
                for( int i =0 ; i<numvar ; i++)
                {
                    permutation(matrix, i, i);
                    if( matrix[i][i]==0) continue;
                    rowmult(matrix, i, 1.0/matrix[i][i]);
                    for( int j = i+1; j<numvar; j++)
                        rowop( matrix, j, i, -matrix[j][i]);
                }
                if((matrix[numvar-1][numvar-1]==0&&matrix[numvar-1][numvar]==0)||(matrix[numvar-1][numvar-1]==0&&matrix[numvar-1][numvar]==0&&matrix[numvar-2][numvar-2]==0&&matrix[numvar-2][numvar]==0)||(matrix[numvar-1][numvar-1]==0&&matrix[numvar-1][numvar]==0&&matrix[numvar-2][numvar-2]==0&&matrix[numvar-2][numvar]==0)&&matrix[numvar-3][numvar-3]==0&&matrix[numvar-3][numvar]==0)
                    cout<<"The matrix is consistent and singular.";
                else if(matrix[numvar-1][numvar-1]==0&&matrix[numvar-1][numvar]!=0)
                    cout<<"The matrix is singular and inconsistent.";
                else
                {
                    for( int i =numvar-1 ; i>=0 ; i--)
                    {
                        for( int j = i-1; j>=0; j--)
                            rowop( matrix, j, i, -matrix[j][i]);
                    }
                    eqprint(matrix);
                    cout<<"The solution is :\n";
                    for(int i=0 ; i<numvar ; i++)
                    {

                        cout<<"x"<<i+1<<" ";
                        cout<<"="<<matrix[i][numvar]<<endl;;
                    }
                }
}

void rowop(double matrix[50][51], int row1, int row2, double multiple)
{
    for(int i =0; i<=numvar ; i++)
    {
        matrix[row1][i]=matrix[row1][i]+multiple*matrix[row2][i];
    }
}
void rowmult(double matrix[50][51], int row, double multiple)
{
    for(int i =0 ; i<=numvar; i++)
    {
        matrix[row][i]=multiple*matrix[row][i];
    }
}
void rowswap(double  matrix[50][51] ,int row1, int row2 )
{
    for(int i =0 ; i<=numvar; i++)
    {
        double _swap=matrix[row1][i];
        matrix[row1][i]=matrix[row2][i];
        matrix[row2][i]=_swap;
    }

}
void permutation( double matrix[50][51], int row, int column)
{
    if(matrix[row][column]==0)
    {
        for(int i = row+1; i<numvar; i++)
        {
            if(matrix[i][column]!=0)
            {
                rowswap(matrix, row, i);
                break;
            }
        }
    }
}
void eqprint(double matrix[50][51])
{
    for( int i =0; i<numvar; i++)
    {

        for(int j =0; j<=numvar ; j++)
        {
            if(j==numvar)
            {
                cout<<"=";
                cout<<matrix[i][j];
            }
            else cout<<"("<<matrix[i][j]<<")"<<"x"<<j+1<<" ";

        }
        cout<<endl;
    }
}
