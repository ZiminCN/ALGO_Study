#include <iostream>
#include <map>
#include <vector>

namespace my_linked_list
{
        typedef struct ListNode_T
        {
                int val;
                std::shared_ptr<ListNode_T> *next_ptr;
                //  std::shared_ptr<ListNode_T> next_ptr;
                ListNode_T(int x) : val(x), next_ptr(nullptr) {} // init
        } list_node_t;

        class MyLinkedList
        {
        public:
                MyLinkedList() = default;
                ~MyLinkedList() = default;

                void instert_list_node(std::shared_ptr<ListNode_T> ahead_ptr, std::shared_ptr<ListNode_T> new_node_ptr);

        private:
        };
}