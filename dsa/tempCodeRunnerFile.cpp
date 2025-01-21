
int firstoccurence(int arr[],int k, int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return ans;
}
