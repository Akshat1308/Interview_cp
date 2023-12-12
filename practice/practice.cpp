class Solution
{
public:
	int subarraySum(vector<int> &nums, int k)
	{
		map<int, int> presum;
		int sum = 0;
		int s, e;

		for (int i = 0; i < nums.size(); i++)
		{
			sum += nums[i];
			int rem = sum - k;
			if (sum == k)
				cout << i << endl;

			if (presum.find(rem) != presum.end())
			{
				s = presum[rem];
				e = i;
				cout << s << " " << e << endl;
				return 0;
			}
			presum[sum] = i;
		}
		return 0;
	}
};

///// using map optimised vala solution