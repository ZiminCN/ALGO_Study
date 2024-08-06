#pragma once
#ifndef __MY_ITERATOR_HPP
#define __MY_ITERATOR_HPP
#include <algorithm>
#include <atomic>
#include <functional>
#include <iostream>
#include <iterator>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <thread>
#include <vector>

namespace my_iterator
{
        class MyIterator
        {
        public:
                void test_istream_iterator();
                void test_ostream_iterator();

        private:
                std::istream_iterator<double> eos;
        };
}

#endif // __MY_ITERATOR_HPP