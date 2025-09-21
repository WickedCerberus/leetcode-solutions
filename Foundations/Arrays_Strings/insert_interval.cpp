class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals,
                               vector<int> &newInterval)
    {

        vector<vector<int>> merged;
        int start = newInterval[0], end = newInterval[1];

        for (const auto &interval : intervals)
        {
            if (end < interval[0])
            {
                merged.push_back({start, end});
                start = interval[0];
                end = interval[1];
            }
            else if (start > interval[1])
            {
                merged.push_back(interval);
            }
            else
            {
                start = min(start, interval[0]);
                end = max(end, interval[1]);
            }
        }

        merged.push_back({start, end});
        return merged;
    }
};