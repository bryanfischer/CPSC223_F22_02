/**
 * @file bubbleSort.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "sort.h"

class BubbleSort : public Sort{

    public:
        BubbleSort(){
            name = "Bubble Sort";
        }

        void doSort(std::vector<int> &vec) {
            
            for (std::size_t i = 0; i < vec.size() - 1; i++)
                for (std::size_t j = 0; j < vec.size() - i - 1; j++)
                    if (vec.at(j) > vec.at(j + 1))
                        std::swap(vec.at(j), vec.at(j + 1));
        }

        void doSwap(int &a, int &b){
            // TODO

        }

        //Feel Free to add additional functions as needed



};