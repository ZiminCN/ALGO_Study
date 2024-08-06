#include "linked_list.hpp"

namespace my_linked_list
{
        void MyLinkedList::instert_list_node(std::shared_ptr<ListNode_T> ahead_ptr, std::shared_ptr<ListNode_T> new_node_ptr)
        {
                std::shared_ptr<ListNode_T> *temp_ptr = ahead_ptr->next_ptr;
                ahead_ptr->next_ptr = &new_node_ptr;
                new_node_ptr->next_ptr = temp_ptr;
        }
}
