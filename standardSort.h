/**
 * @file standardSort.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-13
 * 
 */

#include "sort.h"

class StandardSort : public Sort{

    public:
        StandardSort(){
            name = "Std::sort";
        }

        void doSort(std::vector<int> &vec) {
            std::sort(vec.begin(), vec.end());
        }

};