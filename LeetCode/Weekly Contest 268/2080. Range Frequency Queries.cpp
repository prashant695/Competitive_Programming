class RangeFreqQuery
{
public:
    RangeFreqQuery(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
            v[arr[i]].push_back(i + 1);
    }

    int query(int left, int right, int val)
    {
        int a, b;
        left++, right++;
        a = lower_bound(v[val].begin(), v[val].end(), left) - v[val].begin();
        b = upper_bound(v[val].begin(), v[val].end(), right) - v[val].begin();

        return b - a;
    }

private:
    map<int, vector<int>> v;
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
