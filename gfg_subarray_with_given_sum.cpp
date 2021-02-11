vector<int> subarraySum(int arr[], int n, int s){
    int i = 0,sum = 0,x = 0,first = 0,last = 0;
    while(i<n)
    {
        sum = sum+arr[i];
        if(sum > s) 
        {
            sum = sum-arr[x];
            x++;
        }
        if(sum == s) 
        {
            first = x;
            last = i;
        }
        if(sum < s)
        {
        	sum+=arr[i];
            i++;
            continue;
        }
    }
    vector<int> result; 
    if(first != 0 && last != 0)
    {
        result.push_back(first);
        result.push_back(last);
    }
    else result.push_back(-1);
    
    return result;
}