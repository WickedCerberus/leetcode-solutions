class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> spiral;

        int firstRow = 0, lastRow = matrix.size() - 1;
        int firstCol = 0, lastCol = matrix[0].size() - 1;

        while (firstRow <= lastRow && firstCol <= lastCol)
        {
            for (int i = firstCol; i <= lastCol; i++)
            {
                spiral.push_back(matrix[firstRow][i]);
            }
            firstRow++;

            for (int i = firstRow; i <= lastRow; i++)
            {
                spiral.push_back(matrix[i][lastCol]);
            }
            lastCol--;

            if (firstRow <= lastRow)
            {
                for (int i = lastCol; i >= firstCol; i--)
                {
                    spiral.push_back(matrix[lastRow][i]);
                }
                lastRow--;
            }

            if (firstCol <= lastCol)
            {
                for (int i = lastRow; i >= firstRow; i--)
                {
                    spiral.push_back(matrix[i][firstCol]);
                }
                firstCol++;
            }
        }
        return spiral;
    }
};
