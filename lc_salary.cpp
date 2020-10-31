int max_e=INT_MIN;
    int min_e=INT_MAX, n;

    double sum=0.0;

    for(int i=0;i<salary.size();i++)
    {
        max_e=max(max_e,salary[i]);
        min_e=min(min_e,salary[i]);
        sum+=salary[i];
    }

    sum=sum-max_e-min_e;
    n=salary.size()-2;

    return (double)sum/n;
