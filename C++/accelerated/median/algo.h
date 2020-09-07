#ifndef ALGO_H
#define ALGO_H

#include <vector>
using std::vector;

template <class T, class P>
bool myequal(T beg, T en, const P& d);

#include <algorithm>
#include <string>
#include <vector>

using std::vector;

template <class T, class P>
bool myequal(T beg, T en, const P& d)
{
    typename P::const_iterator iter = d.begin();

    while (beg != en && *beg == *iter){
        beg++;
        iter++;
    }

    return (beg == en) 
}

template <class In, class X>
In find(In begin, In end, const X& x)
{
    while (begin != end && *begin != x){
        ++begin;
    }
    return begin;
}

template <class InputIt, class OutputIt, class UnaryOperation>
OutputIt transform(InputIt first1, InputIt last1, OutputIt d_first,
                   UnaryOperation unary_op) {
  while (first1 != last1) {
    *d_first++ = unary_op(*first1++);
  }
  return d_first;
}


#endif