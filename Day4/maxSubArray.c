int maxSubArray(int* nums, int numsSize){
    int sum=0;
    int maxSum=nums[0];
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
        if(sum>maxSum)
            maxSum=sum;
        if(sum<0)
            sum=0;
    }
    return maxSum;

}
