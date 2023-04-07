vector<int> bucketSort(vector<int> nums) {
    int maxEle = *max_element(nums.begin(), nums.end());
    int bucketSize = 10, maxPass = log10(maxEle) + 1;
    vector<vector<int>> buckets(bucketSize);
    vector<int> tmpNum(nums.size());
    int currPass = 0;
    while (currPass < maxPass) {
        for (auto num : nums) {
            int tmp = (num % (int)(pow(10, currPass + 1))) / pow(10, currPass);
            buckets[tmp].push_back(num);
        }
        int i = 0;
        for (auto bucket : buckets) {
            for (int num : bucket) {
                nums[i++] = num;
            }
        }
        for (int i = 0; i < 10; i++) buckets[i] = {};
        currPass++;
    }
    return nums;
}
