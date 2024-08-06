#include "container_adaptor.hpp"
#include "linked_list.hpp"
#include "my_iterator.hpp"
#include "sort.hpp"
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
        (void)argc;
        (void)argv;
        std::cout << "load -- sort \r\n     -- linked_list \r\n     -- container_adaptor \r\n     -- my_iterator \r\n"
                  << std::endl;
        std::shared_ptr<my_srot::MySort> my_sort_api = std::make_shared<my_srot::MySort>();
        std::shared_ptr<my_container_adaptor::MyContainerAdaptor> my_container_adaptor_api = std::make_shared<my_container_adaptor::MyContainerAdaptor>();
        std::shared_ptr<my_iterator::MyIterator> my_iterator_api = std::make_shared<my_iterator::MyIterator>();

        // Sort
        std::vector<int> nums = {3, 3, 2, 1, 3, 4, 3456, 6, 7, 867, 45, 3245, 2, 123, 0};

        my_sort_api->bubbleSort(nums);

        for (int i = 0; i < nums.size(); i++)
        {
                std::cout << i << ":    " << nums[i] << std::endl;
        }

        std::cout << "---------------------" << std::endl;

        my_sort_api->my_bubbleSort(nums);
        for (int i = 0; i < nums.size(); i++)
        {
                std::cout << i << ":    " << nums[i] << std::endl;
        }

        // Linked List
        std::shared_ptr<my_linked_list::MyLinkedList> my_linked_list_api = std::make_shared<my_linked_list::MyLinkedList>();

        std::shared_ptr<my_linked_list::list_node_t> test_list_node_0 = std::make_shared<my_linked_list::list_node_t>(1);

        std::shared_ptr<my_linked_list::list_node_t> test_list_node_1 = std::make_shared<my_linked_list::list_node_t>(2);

        std::shared_ptr<my_linked_list::list_node_t> test_list_node_2 = std::make_shared<my_linked_list::list_node_t>(3);

        std::shared_ptr<my_linked_list::list_node_t> test_list_node_3 = std::make_shared<my_linked_list::list_node_t>(4);

        std::shared_ptr<my_linked_list::list_node_t> test_list_node_4 = std::make_shared<my_linked_list::list_node_t>(10);

        test_list_node_0->next_ptr = &test_list_node_1;
        test_list_node_1->next_ptr = &test_list_node_2;
        test_list_node_2->next_ptr = &test_list_node_3;

        std::cout << "Linked List: " << test_list_node_0->val << "->" << test_list_node_0->next_ptr->get()->val
                  << "->" << test_list_node_0->next_ptr->get()->next_ptr->get()->val << "->" << test_list_node_0->next_ptr->get()->next_ptr->get()->next_ptr->get()->val << std::endl;

        my_linked_list_api->instert_list_node(test_list_node_1, test_list_node_4);

        std::cout << "Linked List: " << test_list_node_0->val << "->" << test_list_node_0->next_ptr->get()->val
                  << "->" << test_list_node_0->next_ptr->get()->next_ptr->get()->val
                  << "->" << test_list_node_0->next_ptr->get()->next_ptr->get()->next_ptr->get()->val
                  << "->" << test_list_node_0->next_ptr->get()->next_ptr->get()->next_ptr->get()->next_ptr->get()->val << std::endl;

        std::cout << "---------------------" << std::endl;

        my_container_adaptor_api->test_stack_LIFO();
        my_container_adaptor_api->test_queue_FIFO();
        my_container_adaptor_api->test_bitset();
        my_container_adaptor_api->test_vector();

        my_iterator_api->test_istream_iterator();
        my_iterator_api->test_ostream_iterator();
}