/**
 * @file insertionSort.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "sort.h"

class InsertionSort : public Sort{

    public:
        InsertionSort(){
            name = "Insertion Sort";
        }

        void doSort(std::vector<int> &vec) {
            // TODO: Implement insertion sort
            std::cout << "InsertionSort not implemented!" << std::endl;

        }

    //feel free to add additional functions as needed
};

#endif