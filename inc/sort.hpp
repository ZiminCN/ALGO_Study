#include <iostream>
#include <map>
#include <vector>

namespace my_srot
{
        class MySort
        {
        public:
                MySort() = default;
                ~MySort() = default;
                int bubbleSort(std::vector<int> &nums);
                int my_bubbleSort(std::vector<int> &nums);

        private:
        };
}