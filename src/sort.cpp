#include "sort.hpp"

namespace my_srot
{
        int MySort::bubbleSort(std::vector<int> &nums)
        {
                int count = 0; // 计数器
                // 外循环:未排序区间为 [0, i]
                for (int i = nums.size() - 1; i > 0; i--)
                {
                        // 内循环:将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
                        for (int j = 0; j < i; j++)
                        {
                                if (nums[j] > nums[j + 1])
                                {
                                        // 交换 nums[j] 与 nums[j + 1]
                                        int tmp = nums[j];
                                        nums[j] = nums[j + 1];
                                        nums[j + 1] = tmp;
                                        count += 3; // 元素交换包含 3 个单元操作
                                }
                        }
                }
                return count;
        }

        int MySort::my_bubbleSort(std::vector<int> &nums)
        {
                int count = 0;

                // outer loop
                for (int i = nums.size() - 1; i > 0; i--)
                {
                        // inner loop
                        for (int j = 0; j < i; j++)
                        {
                                if (nums[j] < nums[j + 1])
                                {
                                        int tmp_val = nums[j];
                                        nums[j] = nums[j + 1];
                                        nums[j + 1] = tmp_val;
                                        count += 3;
                                }
                        }
                }
                return count;
        }
}
