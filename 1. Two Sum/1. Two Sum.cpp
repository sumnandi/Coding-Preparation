// 1. Two Sum.cpp : Leetcode Question Link: https://leetcode.com/problems/two-sum/
//

#include <iostream>
#include <vector>
#include <bits-stdc++.h>

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> map;
        int index1 = -1, index2 = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (map.find(target - nums[i]) != map.end())
            {
                index1 = i;
                index2 = map[target - nums[i]];
            }
            map[nums[i]] = i;
        }
        return { index1,index2 };
    }
};
