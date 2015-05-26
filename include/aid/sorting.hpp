#pragma once

#include <algorithm>
#include <iterator>

namespace aid {

    // worst case: n^2
    // average case: n^2
    // best case: n^2
    // space complexity: 1
    template<typename It>
    void bubble_sort(It first, It last) {
        for (auto it = std::prev(last); it != first; --it)
            for (auto it2 = first; it2 != it; ++it2)
                if (*it2 > *std::next(it2))
                    std::iter_swap(it2, std::next(it2));
    }

    // worst case: n^2
    // average case: n^2
    // best case: n
    // space complexity: 1
    template<typename It>
    void insertion_sort(It first, It last) {
        for (auto it = std::next(first); it != last; ++it)
            for (auto it2 = it; it2 != first && *std::prev(it2) > *it2; --it2)
                std::iter_swap(std::prev(it2), it2);
    }

}
