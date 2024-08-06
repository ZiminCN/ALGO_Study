#include "my_iterator.hpp"

namespace my_iterator
{
        void MyIterator::test_istream_iterator()
        {
                double v1, v2;
                std::cout << "Enter two values: ";
                std::istream_iterator<double> iit(std::cin);
                if (iit != eos)
                {
                        v1 = *iit;
                }
                ++iit;
                if (iit != eos)
                {
                        v2 = *iit;
                }
                std::cout << "value1 + value2 is " << v1 + v2 << std::endl;
                std::cout << "---------------------" << std::endl;
        }

        void MyIterator::test_ostream_iterator()
        {
                std::vector<int> v1;
                for (int i = 1; i < 5; i++)
                {
                        v1.push_back(i);
                }

                std::ostream_iterator<int> oit(std::cout, " ");
                std::copy(v1.begin(), v1.end(), oit);
        }
}