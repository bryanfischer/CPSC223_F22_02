/**
 * @file selectionsort.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "sort.h"

class SelectionSort : public Sort{

    public:
        SelectionSort(){
            name = "Selection Sort";
        }

        void doSort(std::vector<int> &vec) {
            // TODO: Implement selection sort
            std::cout << "SelectionSort not implemented!" << std::endl;

        }
    

};

#endif