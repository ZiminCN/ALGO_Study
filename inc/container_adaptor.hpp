#pragma once
#ifndef __CONTAINER_ADAPTOR_HPP
#define __CONTAINER_ADAPTOR_HPP

#include <algorithm>
#include <atomic>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <thread>
#include <vector>

namespace my_container_adaptor
{
        class MyContainerAdaptor
        {
        public:
                MyContainerAdaptor() = default;
                ~MyContainerAdaptor() = default;

                void test_vector();
                void test_list();

                void test_stack_LIFO(); // last in first out
                void test_queue_FIFO(); // first in first out
                // void test_priority_queue(); // priority queue
                void test_bitset(); // bitset

        private:
                std::vector<int> vec_i;
                int test_ary[5] = {1, 2, 3, 4, 5};

                std::stack<std::vector<int>> s_vec; // stack based on vector
                std::queue<std::string> q_str;      // queue based on string
                // std::priority_queue<int> pq_int;    // priority queue based on int
                std::bitset<10> bset; // bitset default value is 0
        };
}

#endif // __CONTAINER_ADAPTOR_HPP