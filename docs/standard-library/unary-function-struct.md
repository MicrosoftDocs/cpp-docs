---
description: "Learn more about: unary_function Struct"
title: "unary_function Struct"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::unary"]
helpviewer_keywords: ["unary_function class"]
ms.assetid: 04c2fbdc-c1f6-48ed-b6cc-292a6d484627
---
# unary_function Struct

An empty base struct that defines types that may be inherited by derived classes that provides a unary function object.

## Syntax

```cpp
struct unary_function
{
   typedef Arg argument_type;
   typedef Result result_type;
};
```

## Remarks

The template struct serves as a base for classes that define a member function of the form `result_type operator()( constargument_type& ) const`.

All such derived unary functions can refer to their sole argument type as **argument_type** and their return type as **result_type**.

## Example

```cpp
// functional_unary_function.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

// Creation of a user-defined function object
// that inherits from the unary_function base class
class greaterthan10: unary_function<int, bool>
{
public:
    result_type operator()(argument_type i)
    {
        return (result_type)(i > 10);
    }
};

int main()
{
    vector<int> v1;
    vector<int>::iterator Iter;

    int i;
    for (i = 0; i <= 5; i++)
    {
        v1.push_back(5 * i);
    }

    cout << "The vector v1 = ( " ;
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    vector<int>::iterator::difference_type result1;
    result1 = count_if(v1.begin(), v1.end(), greaterthan10());
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;
}
```

```Output
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
```
