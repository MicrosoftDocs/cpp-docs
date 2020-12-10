---
description: "Learn more about: binder2nd Class"
title: "binder2nd Class"
ms.date: "02/21/2019"
f1_keywords: ["functional/std::binder2nd"]
helpviewer_keywords: ["binder2nd class"]
ms.assetid: b2a9c1d1-dfc4-4ca9-a10e-ae84e195a62d
---
# binder2nd Class

A class template providing a constructor that converts a binary function object into a unary function object by binding the second argument of the binary function to a specified value. Deprecated in C++11, removed in C++17.

## Syntax

```cpp
template <class Operation>
class binder2nd
    : public unaryFunction <typename Operation::first_argument_type,
    typename Operation::result_type>
{
    typedef typename Operation::argument_type argument_type;
    typedef typename Operation::result_type result_type;
    binder2nd(
        const Operation& func,
        const typename Operation::second_argument_type& right);

    result_type operator()(const argument_type& left) const;
    result_type operator()(argument_type& left) const;
};
```

### Parameters

*func*\
The binary function object to be converted to a unary function object.

*right*\
The value to which the second argument of the binary function object is to be bound.

*left*\
The value of the argument that the adapted binary object compares to the fixed value of the second argument.

## Return value

The unary function object that results from binding the second argument of the binary function object to the value *right*.

## Remarks

The class template stores a copy of a binary function object *func* in `op`, and a copy of *right* in `value`. It defines its member function `operator()` as returning `op(left, value)`.

If *func* is an object of type `Operation` and c is a constant, then [bind2nd](../standard-library/functional-functions.md#bind2nd)`(func, c)` is equivalent to the `binder2nd` class constructor `binder2nd<Operation>(func, c)`, and more convenient.

## Example

```cpp
// functional_binder2nd.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int>::iterator Iter;

    int i;
    for (i = 0; i <= 5; i++)
    {
        v1.push_back(5 * i);
    }

    cout << "The vector v1 = ( ";
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    // Count the number of integers > 10 in the vector
    vector<int>::iterator::difference_type result1;
    result1 = count_if(v1.begin(), v1.end(),
        binder2nd<greater<int> >(greater<int>(), 10));
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;

    // Compare using binder1st fixing 1st argument:
    // count the number of integers < 10 in the vector
    vector<int>::iterator::difference_type result2;
    result2 = count_if(v1.begin(), v1.end(),
        binder1st<greater<int> >(greater<int>(), 10));
    cout << "The number of elements in v1 less than 10 is: "
         << result2 << "." << endl;
}
```

```Output
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
The number of elements in v1 less than 10 is: 2.
```
