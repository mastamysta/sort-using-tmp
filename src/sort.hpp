#pragma once

#include <concepts>
#include <type_traits>

// A callable is a comparator over type T if it takes two T's as parameters and returns bool.

template <typename ComparatorCandidate>
struct isComparator
{
    static constexpr auto value = false;
};

template<typename ParamType>
struct isComparator<bool(*)(ParamType, ParamType)>
{
    static constexpr auto value = true;
};

template <typename ComparatorCandidate>
concept IComparator = isComparator<ComparatorCandidate>::value;
