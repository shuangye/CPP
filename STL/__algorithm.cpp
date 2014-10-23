#include <algorithm>

template <class RandomAccessIterator, class URNG> void shuffle (RandomAccessIterator first, RandomAccessIterator last, URNG&& g);
This function works with standard generators as those defined in <random>. To shuffle the elements of the range without such a generator, see random_shuffle instead.
