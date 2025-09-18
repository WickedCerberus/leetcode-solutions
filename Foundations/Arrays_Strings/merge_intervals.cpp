class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        //==============================================================
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> mergeArray;
        int start = intervals[0][0], end = intervals[0][1];

        for (const auto &interval : intervals)
        {
            if (end >= interval[0])
            {
                end = max(end, interval[1]);
            }
            else
            {
                mergeArray.push_back({start, end});
                start = interval[0];
                end = interval[1];
            }
        }
        mergeArray.push_back({start, end});

        return mergeArray;
        //===============================================================

        //========================More Consice===========================
        // sort(intervals.begin(), intervals.end());

        // vector<vector<int>> merged;
        // merged.push_back(intervals[0]);

        // for (const auto& interval : intervals) {
        //     if (interval[0] <= merged.back()[1]) {
        //         // overlap → extend the end of the last merged interval
        //         merged.back()[1] = max(merged.back()[1], interval[1]);
        //     } else {
        //         // no overlap → just push
        //         merged.push_back(interval);
        //     }
        // }
        // return merged;
        //============================================================================
    }
};