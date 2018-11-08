---
title: "unary_negate Class"
ms.date: "11/04/2016"
f1_keywords: ["xfunctional/std::unary_negate"]
helpviewer_keywords: ["unary_negate class"]
ms.assetid: e3b86eec-3205-49b9-ab83-f55225af4e0c
---
# unary_negate Class

A template class providing a member function that negates the return value of a specified unary function.

## Syntax

```cpp
template <class Predicate>
class unary_negate
    : public unaryFunction<typename Predicate::argument_type, bool>
{
public:
    explicit unary_negate(const Predicate& Func);
    bool operator()(const typename Predicate::argument_type& left) const;
};
```

### Parameters

*Func*<br/>
The unary function to be negated.

*left*<br/>
The operand of the unary function to be negated.

## Return Value

The negation of the unary function.

## Remarks

The template class stores a copy of a unary function object *\_Func*. It defines its member function `operator()` as returning `!_Func(left)`.

The constructor of `unary_negate` is rarely used directly. The helper function [not1](../standard-library/functional-functions.md#not1) provides an easier way to declare and use the **unary_negator** adaptor predicate.

## Example

```cpp
// functional_unary_negate.cpp
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
    for (i = 0; i <= 7; i++)
    {
        v1.push_back(5 * i);
    }

    cout << "The vector v1 = ( ";
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    vector<int>::iterator::difference_type result1;
    // Count the elements greater than 10
    result1 = count_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 10));
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;

    vector<int>::iterator::difference_type result2;
    // Use the negator to count the elements less than or equal to 10
    result2 = count_if(v1.begin(), v1.end(),
        unary_negate<binder2nd <greater<int> > >(bind2nd(greater<int>(),10)));

    // The following helper function not1 also works for the above line
    // not1(bind2nd(greater<int>(), 10)));

    cout << "The number of elements in v1 not greater than 10 is: "
         << result2 << "." << endl;
}
/* Output:
The vector v1 = ( 0 5 10 15 20 25 30 35 )
The number of elements in v1 greater than 10 is: 5.
The number of elements in v1 not greater than 10 is: 3.
*/
```

## Requirements

**Header:** \<functional>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
