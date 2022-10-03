public int threeSumClosest(int[] nums, int target) {
        int result= nums[0]+nums[1]+nums[nums.length-1];
        Arrays.sort(nums);
        for(int i=0;i<nums.length-2;i++)
        {
            int a=i+1;
            int b=nums.length-1;
            while(a<b)
            {
                int curr=nums[i]+nums[a]+nums[b];
                if(curr>target){
                    b--;
                }
                else a++;
            
            if(Math.abs(curr-target)< Math.abs(result-target))
            {
                result=curr;
            }
        }
    }
    return result;
 }
