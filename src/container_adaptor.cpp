#include "container_adaptor.hpp"

namespace my_container_adaptor
{

        void MyContainerAdaptor::test_vector()
        {
                vec_i.resize(5);
                for (int i = 0; i < 5; i++)
                {
                        vec_i.push_back(i + 1); // inserts at the vector end
                }

                for (auto i : vec_i)
                {
                        std::cout << i << " ";
                }

                std::cout << std::endl;

                for (int i = 0; i < 5; i++)
                {
                        vec_i.pop_back(); // removes the last element
                }

                for (auto i : vec_i)
                {
                        std::cout << i << " ";
                }

                std::cout << std::endl;

                std::vector<int>::iterator it = vec_i.begin();
                while (it != vec_i.end())
                {
                        vec_i.pop_back();
                }

                if (vec_i.empty())
                {
                        std::cout << "vector is empty" << std::endl;
                }
                std::cout << "---------------------" << std::endl;
        }

        void MyContainerAdaptor::test_stack_LIFO()
        {
                std::vector<int> v1(2), v2(3), v3(4);
                iota(v1.begin(), v1.end(), 2); // fill the v1 with increase value
                iota(v2.begin(), v2.end(), 4); // fill the v1 with increase value
                iota(v3.begin(), v3.end(), 7); // fill the v1 with increase value

                s_vec.push(v1);
                s_vec.push(v2);
                s_vec.push(v3); // it wiil be the top element of the stack

                std::cout << "s_vec.size(): " << s_vec.size() << std::endl;

                std::vector<int> top = s_vec.top();

                std::cout << "Top element of the stack is: " << std::endl;
                std::vector<int>::iterator it = top.begin();
                for (; it != top.end(); it++)
                {
                        std::cout << *it << std::endl;
                }

                s_vec.pop();
                s_vec.pop();

                std::cout << "Last element of the stack is: " << std::endl;
                top = s_vec.top();
                it = top.begin();
                for (; it != top.end(); it++)
                {
                        std::cout << *it << std::endl;
                }

                while (!s_vec.empty())
                {
                        s_vec.pop();
                }

                std::cout << "s_vec.size(): " << s_vec.size() << std::endl;
                std::cout << "s_vec is empty! " << std::endl;
                std::cout << "---------------------" << std::endl;
        }

        void MyContainerAdaptor::test_queue_FIFO()
        {
                std::string s1 = "first";
                std::string s2 = "second";
                std::string s3 = "third";

                q_str.push(s1); // it wiil be the front element of the queue
                q_str.push(s2);
                q_str.push(s3); // it wiil be the rear element of the queue

                std::cout << "q_str.size(): " << q_str.size() << std::endl;

                std::string front = q_str.front();
                std::string rear = q_str.back();

                std::cout << "Front element of the queue is: " << front << std::endl;
                std::cout << "Rear element of the queue is: " << rear << std::endl;

                q_str.pop();
                front = q_str.front();
                std::cout << "Front element of the queue is: " << front << std::endl;

                q_str.pop();
                front = q_str.front();
                std::cout << "Front element of the queue is: " << front << std::endl;

                while (!q_str.empty())
                {
                        q_str.pop();
                }

                std::cout << "q_str.size(): " << q_str.size() << std::endl;
                std::cout << "q_str is empty! " << std::endl;
                std::cout << "---------------------" << std::endl;
        }

        void MyContainerAdaptor::test_bitset()
        {
                std::cout << "default bset value is:" << bset << std::endl;

                bset = 11;
                std::cout << "set bset value as 11(int), and the bit value is: " << bset << std::endl;

                std::string tmp_str = bset.to_string();
                std::cout << "bset is: " << tmp_str << std::endl;
                std::cout << "bset size is: " << bset.size() << std::endl;
                std::cout << "bset count is: " << bset.count() << std::endl;
                std::cout << "bset zero bit is: " << bset.set(0) << std::endl;

                std::cout << "---------------------" << std::endl;
        }
}