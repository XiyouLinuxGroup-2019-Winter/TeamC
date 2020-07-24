#include <stdio.h>

    int main(int argc, char *argv[]) 
    {
        int nums[6] = { 6, 3, 2, 4, 5, 1 };
        for (int i = 0; i < 6; i++) 
        {
            for (int j = i; j < 6; j++) 
            {
                if (nums[i] > nums[j]) 
                {
                    int c = nums[i];
                    nums[i] = nums[j];
                    nums[j] = c;
                }
            }
        }
        return 0;
    }
//选择排序

