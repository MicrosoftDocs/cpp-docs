---
description: "Learn more about: binder1st Class"
title: "binder1st Class"
ms.date: "02/21/2019"
f1_keywords: ["functional/std::binder1st"]
helpviewer_keywords: ["binder1st class"]
ms.assetid: 6b8ee343-c82f-48f8-867d-06f9d1d324c0
---
# binder1st Class

A class template providing a constructor that converts a binary function object into a unary function object by binding the first argument of the binary function to a specified value. Deprecated in C++11 in favor of [bind](functional-functions.md#bind), and removed in C++17.

## Syntax

```cpp
template <class Operation>
class binder1st
    : public unaryFunction <typename Operation::second_argument_type,
                             typename Operation::result_type>
{
public:
    typedef typename Operation::argument_type argument_type;
    typedef typename Operation::result_type result_type;
    binder1st(
        const Operation& binary_fn,
        const typename Operation::first_argument_type& left);

    result_type operator()(const argument_type& right) const;
    result_type operator()(const argument_type& right) const;

protected:
    Operation op;
    typename Operation::first_argument_type value;
};
```

### Parameters

*binary_fn*\
The binary function object to be converted to a unary function object.

*left*\
The value to which the first argument of the binary function object is to be bound.

*right*\
The value of the argument that the adapted binary object compares to the fixed value of the second argument.

## Return Value

The unary function object that results from binding the first argument of the binary function object to the value *left*.

## Remarks

The class template stores a copy of a binary function object *binary_fn* in `op`, and a copy of *left* in `value`. It defines its member function `operator()` as returning `op(value, right)`.

If *binary_fn* is an object of type `Operation` and `c` is a constant, then `bind1st(binary_fn, c)` is a more convenient equivalent to `binder1st<Operation>(binary_fn, c)`. For more information, see [bind1st](../standard-library/functional-functions.md#bind1st).

## Example

```cpp
// functional_binder1st.cpp
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
        binder1st<less<int> >(less<int>(), 10));
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;

    // Compare use of binder2nd fixing 2nd argument:
    // count the number of integers < 10 in the vector
    vector<int>::iterator::difference_type result2;
    result2 = count_if(v1.begin(), v1.end(),
        binder2nd<less<int> >(less<int>(), 10));
    cout << "The number of elements in v1 less than 10 is: "
         << result2 << "." << endl;
}
```

```Output
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
The number of elements in v1 less than 10 is: 2.
```
