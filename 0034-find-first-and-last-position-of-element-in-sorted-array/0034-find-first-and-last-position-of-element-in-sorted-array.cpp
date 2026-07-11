class Solution {
public:
int firstocc(vector<int>&arr,int nums, int target)
{
    int s,e,a=-1;
    s=0;
    e=nums-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            a=mid;
            e=mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return a;
}
int lastocc(vector<int>&arr,int nums, int target)
{
    int s,e,a=-1;
    s=0;
    e=nums-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            a=mid;
            s=mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return a;
}
    vector<int> searchRange(vector<int>& arr, int target) {
        int nums=arr.size();
        vector<int>p(2);
        p[0]=firstocc(arr, nums, target);
        p[1]=lastocc(arr,nums, target);
        return p;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna