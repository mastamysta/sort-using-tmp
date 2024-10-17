#include "sort.hpp"

bool comparator_func(int lhs, int rhs)
{
    return true;
}

bool not_a_comparator_func(bool lhs, int rhs)
{
    return true;
}

void apply_comparator(IComparator auto comparator)
{
    return;
}

int main()
{
    apply_comparator(comparator_func);
    apply_comparator(not_a_comparator_func);


    return 0;
}
