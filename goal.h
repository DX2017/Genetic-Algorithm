#ifndef GOAL_H
#define GOAL_H

#include "population.h"

namespace ga
{

template <typename T>
class Goal
{
    int desired_cost = 0;
    int calc_cost(const Population<T> & pop);
public:
    Goal(int icost = 0) : desired_cost{icost} {}
    bool operator()(const Population<T> & pop)
    {
        return desired_cost >= calc_cost(pop);
    }
};

}

#endif // GOAL_H