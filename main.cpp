#include <iostream>
#include "genetic_algorithm.h"

using namespace ga;

int main()
{
    run_ga(Population{15, 3, 10},
           fit::fitness<bool>,
           Goal{50},
           Selection<Roulette>{},
           Mutation{50},
           Crossover{1});

    for( auto x : Statistics<int>::get().fitness_values)
    {
        std::cout << x << " ";
    }
    std::cout << '\n';

}
