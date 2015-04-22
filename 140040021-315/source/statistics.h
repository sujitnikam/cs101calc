double Median(double Array[], int Size)
{
// sorting of array
    double* Sort = new double[Size];
    for (int i = 0; i < Size; i++)
    {
        Sort[i] = Array[i];
    }
    for (int i = Size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; ++j)
        {
            if (Sort[j] > Sort[j+1])
            {
                double temp = Sort[j];
                Sort[j] = Sort[j+1];
                Sort[j+1] = temp;
            }
        }
    }

    // Finding Median
    double Median = 0.0;
    if ((Size % 2) == 0)
    {
        Median = (Sort[Size/2] + Sort[(Size/2) - 1])/2.0;
    }
    else
    {
        Median = Sort[Size/2];
    }
    delete [] Sort;
    return Median;
}
// Finding Mode
double Mode(double Array[], int Size)
{

    int* Count = new int[Size];
    for (int i = 0; i < Size; i++)
    {
        Count[i] = 0;
        int j = 0;
        while ((j < i) && (Array[i] != Array[j]))
        {
            if (Array[i] != Array[j])
            {
                ++j;
            }
        }
        (Count[j])++;
    }
    int maxCount = 0;
    for (int i = 1; i < Size; i++)
    {
        if (Count[i] > Count[maxCount])
        {
            maxCount = i;
        }
    }
    delete [] Count;
    return Array[maxCount];
}
// Finding Mean
double Mean(double Array[], int Size)
{
    double Sum = Array[0];
    for (int i = 1; i < Size; i++)
    {
        Sum += Array[i];
    }
    return Sum/Size;

}

// finding variance

 double Variance(double Array[], int Size)
    {
        double mean = Mean(Array,Size);

        double temp = 0;
        for(int i = 0; i < Size; i++)
        {
             temp += (Array[i] - mean) * (Array[i] - mean) ;
        }
        return temp / Size;
    }

    double StandardDeviation(double Array[], int Size)
    {
        return sqrt(Variance(Array,Size));
    }

    double Rootmeansquare(double Array[], int Size)
    {

        double temp = 0;
        for(int i = 0; i < Size; i++)
        {
             temp += (Array[i]) * (Array[i]) ;
        }
        return sqrt(temp / Size);
    }
