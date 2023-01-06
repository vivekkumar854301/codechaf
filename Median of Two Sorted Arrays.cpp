class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        int array[n];
        int i=0,j=0,k=0;
        int count=0,curr;
        while(count<n){
            if(i<nums1.size() and j<nums2.size()){
                if(nums1[i]<=nums2[j]){
                    curr=nums1[i];
                    i++;
                    
                }
                else{
                    curr=nums2[j];
                    j++;
                }
            }
            else if(i<nums1.size()){
                curr=nums1[i];
                i++;
            }
            else{
                curr=nums2[j];
                j++;
            }
            array[k]=curr;
            k++;
            count++;
        }
        double median;
        int mid =n/2;
        if(n%2==0){
            median=array[mid]+array[mid-1];
            median=median/2;
        }
        else{
            median=array[mid];
        }
        return median;


        
        
    }
};