    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    long long n,m,A[2000000],B[2000000],inv_count=0;
     
     
    long long Merge(long long arr[],long long int low,long long int mid,long long int high)
    {
      long long  int n = mid - low + 1,i,j,k;
      long long  int m = high - mid;
        for (i = 0; i < n; ++i)
            A[i] = arr[low + i];
        A[n] = LLONG_MAX; 
        for (i = 0; i < m; ++i)
            B[i] = arr[mid + 1 + i];
        B[m] = LLONG_MAX;
        i = 0;
        j = 0;
        long long int inv =0;
        for (k = low; k <= high; ++k) {
        	if(A[i]>B[j])
        	inv += (mid - (low + i) + 1);
            if (A[i] <= B[j]) {
                arr[k] = A[i];
                ++i;
            }
            else {
     
                arr[k] = B[j];
                ++j;
            }
        }
        return inv;
    }
     
    long long int MergeSort(long long int arr[],long long int low,long long int high)
    {
        if (low < high) {
            long long int mid = (low + high)/2;
            MergeSort(arr, low, mid);
            MergeSort(arr, mid+1, high);
            inv_count += Merge(arr, low, mid, high);
        }
        return inv_count;
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
        	inv_count=0;
        	long long n;
        	cin>>n;
        	long long int arr[n];
        	for(long long int i=0;i<n;i++)
        	cin>>arr[i];
        	cout<<MergeSort(arr,0,n-1)<<endl;
    	}
        return 0;
    }
     
