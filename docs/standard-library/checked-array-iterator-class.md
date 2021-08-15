---
description: "Learn more about: checked_array_iterator Class"
title: "checked_array_iterator Class"
ms.date: "03/27/2019"
f1_keywords: ["iterator/checked_array_iterator", "iterator/stdext::checked_array_iterator::difference_type", "iterator/stdext::checked_array_iterator::pointer", "iterator/stdext::checked_array_iterator::reference", "iterator/stdext::checked_array_iterator::base"]
helpviewer_keywords: ["stdext::checked_array_iterator [C++], difference_type", "stdext::checked_array_iterator [C++], pointer", "stdext::checked_array_iterator [C++], reference", "stdext::checked_array_iterator [C++], base"]
ms.assetid: 7f07185e-d588-4ae3-9c4f-84ec4aa25a28
---
# checked_array_iterator Class

The `checked_array_iterator` class allows you to transform an array or pointer into a checked iterator. Use this class as a wrapper (using the [make_checked_array_iterator](../standard-library/iterator-functions.md#make_checked_array_iterator) function) for raw pointers or arrays as a targeted way to provide checking and to manage unchecked pointer warnings instead of globally silencing these warnings. If necessary, you can use the unchecked version of this class, [unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md).

> [!NOTE]
> This class is a Microsoft extension of the C++ Standard Library. Code implemented by using this function is not portable to C++ Standard build environments that do not support this Microsoft extension. For an example demonstrating how to write code that does not require the use of this class, see the second example below.

## Syntax

```cpp
template <class _Iterator>
class checked_array_iterator;
```

## Remarks

This class is defined in the [stdext](../standard-library/stdext-namespace.md) namespace.

For more information and example code on the checked iterator feature, see [Checked Iterators](../standard-library/checked-iterators.md).

## Examples

The following sample shows how to define and use a checked array iterator.

If the destination is not large enough to hold all the elements being copied, such as would be the case if you changed the line:

```cpp
copy(a, a + 5, checked_array_iterator<int*>(b, 5));
```

to

```cpp
copy(a, a + 5, checked_array_iterator<int*>(b, 4));
```

A runtime error will occur.

```cpp
// compile with: /EHsc /W4 /MTd
#include <algorithm>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[]={0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b, 5));

   cout << "(";
   for (int i = 0 ; i < 5 ; i++)
      cout << " " << b[i];
   cout << " )" << endl;

   // constructor example
   checked_array_iterator<int*> checked_out_iter(b, 5);
   copy(a, a + 5, checked_out_iter);

   cout << "(";
   for (int i = 0 ; i < 5 ; i++)
      cout << " " << b[i];
   cout << " )" << endl;
}
/* Output:
( 0 1 2 3 4 )
( 0 1 2 3 4 )
*/
```

To avoid the need for the `checked_array_iterator` class when using C++ Standard Library algorithms, consider using a `vector` instead of a dynamically allocated array. The following example demonstrates how to do this.

```cpp
// compile with: /EHsc /W4 /MTd

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> v(10);
    int *arr = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        v[i] = i;
        arr[i] = i;
    }

    // std::copy(v.begin(), v.end(), arr); will result in
    // warning C4996. To avoid this warning while using int *,
    // use the Microsoft extension checked_array_iterator.
    std::copy(v.begin(), v.end(),
              stdext::checked_array_iterator<int *>(arr, 10));

    // Instead of using stdext::checked_array_iterator and int *,
    // consider using std::vector to encapsulate the array. This will
    // result in no warnings, and the code will be portable.
    std::vector<int> arr2(10);    // Similar to int *arr = new int[10];
    std::copy(v.begin(), v.end(), arr2.begin());

    for (int j = 0; j < arr2.size(); ++j)
    {
        cout << " " << arr2[j];
    }
    cout << endl;

    return 0;
}
/* Output:
0 1 2 3 4 5 6 7 8 9
*/
```

### Constructors

|Constructor|Description|
|-|-|
|[checked_array_iterator](#checked_array_iterator)|Constructs a default `checked_array_iterator` or a `checked_array_iterator` from an underlying iterator.|

### Typedefs

|Type name|Description|
|-|-|
|[difference_type](#difference_type)|A type that provides the difference between two `checked_array_iterator`s referring to elements within the same container.|
|[pointer](#pointer)|A type that provides a pointer to an element addressed by a `checked_array_iterator`.|
|[reference](#reference)|A type that provides a reference to an element addressed by a `checked_array_iterator`.|

### Member functions

|Member function|Description|
|-|-|
|[base](#base)|Recovers the underlying iterator from its `checked_array_iterator`.|

### Operators

|Operator|Description|
|-|-|
|[operator==](#op_eq_eq)|Tests two `checked_array_iterator`s for equality.|
|[operator!=](#op_neq)|Tests two `checked_array_iterator`s for inequality.|
|[operator<](#op_lt)|Tests if the `checked_array_iterator` on the left side of the operator is less than the `checked_array_iterator` on the right side.|
|[operator>](#op_gt)|Tests if the `checked_array_iterator` on the left side of the operator is greater than the `checked_array_iterator` on the right side.|
|[operator<=](#op_lt_eq)|Tests if the `checked_array_iterator` on the left side of the operator is less than or equal to the `checked_array_iterator` on the right side.|
|[operator>=](#op_gt_eq)|Tests if the `checked_array_iterator` on the left side of the operator is greater than or equal to the `checked_array_iterator` on the right side.|
|[operator*](#op_star)|Returns the element that a `checked_array_iterator` addresses.|
|[operator->](#op_arrow)|Returns a pointer to the element addressed by the `checked_array_iterator`.|
|[operator++](#op_add_add)|Increments the `checked_array_iterator` to the next element.|
|[operator--](#operator--)|Decrements the `checked_array_iterator` to the previous element.|
|[operator+=](#op_add_eq)|Adds a specified offset to a `checked_array_iterator`.|
|[operator+](#op_add)|Adds an offset to an iterator and returns the new `checked_array_iterator` addressing the inserted element at the new offset position.|
|[operator-=](#operator-_eq)|Decrements a specified offset from a `checked_array_iterator`.|
|[operator-](#operator-)|Decrements an offset from an iterator and returns the new `checked_array_iterator` addressing the inserted element at the new offset position.|
|[operator&#91;&#93;](#op_at)|Returns a reference to an element offset from the element addressed by a `checked_array_iterator` by a specified number of positions.|

## Requirements

**Header:** \<iterator>

**Namespace:** stdext

## <a name="base"></a> checked_array_iterator::base

Recovers the underlying iterator from its `checked_array_iterator`.

```cpp
_Iterator base() const;
```

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_base.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main() {
   using namespace std;

   int V1[10];

   for (int i = 0; i < 10 ; i++)
      V1[i] = i;

   int* bpos;

   stdext::checked_array_iterator<int*> rpos(V1, 10);
   rpos++;

   bpos = rpos.base ( );
   cout << "The iterator underlying rpos is bpos & it points to: "
        << *bpos << "." << endl;
}
/* Output:
The iterator underlying rpos is bpos & it points to: 1.
*/
```

## <a name="checked_array_iterator"></a> checked_array_iterator::checked_array_iterator

Constructs a default `checked_array_iterator` or a `checked_array _iterator` from an underlying iterator.

```cpp
checked_array_iterator();

checked_array_iterator(
    ITerator ptr,
    size_t size,
    size_t index = 0);
```

### Parameters

*ptr*\
A pointer to the array.

*size*\
The size of the array.

*index*\
(Optional) An element in the array, to initialize the iterator.  By default, the iterator is initialized to the first element in the array.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_ctor.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   for (int i = 0 ; i < 5 ; i++)
      cout << b[i] << " ";
   cout << endl;

   checked_array_iterator<int*> checked_output_iterator(b,5);
   copy (a, a + 5, checked_output_iterator);
   for (int i = 0 ; i < 5 ; i++)
      cout << b[i] << " ";
   cout << endl;

   checked_array_iterator<int*> checked_output_iterator2(b,5,3);
   cout << *checked_output_iterator2 << endl;
}
/* Output:
0 1 2 3 4
0 1 2 3 4
3
*/
```

## <a name="difference_type"></a> checked_array_iterator::difference_type

A type that provides the difference between two `checked_array_iterator`s referring to elements within the same container.

```cpp
typedef typename iterator_traits<_Iterator>::difference_type difference_type;
```

### Remarks

The `checked_array_iterator` difference type is the same as the iterator difference type.

See [checked_array_iterator::operator[]](#op_at) for a code sample.

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

## <a name="op_eq_eq"></a> checked_array_iterator::operator==

Tests two `checked_array_iterator`s for equality.

```cpp
bool operator==(const checked_array_iterator<_Iterator>& right) const;
```

### Parameters

*right*\
The `checked_array_iterator` against which to check for equality.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_opeq.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*> checked_output_iterator2(b,5);

   if (checked_output_iterator2 == checked_output_iterator)
      cout << "checked_array_iterators are equal" << endl;
   else
      cout << "checked_array_iterators are not equal" << endl;

   copy (a, a + 5, checked_output_iterator);
   checked_output_iterator++;

   if (checked_output_iterator2 == checked_output_iterator)
      cout << "checked_array_iterators are equal" << endl;
   else
      cout << "checked_array_iterators are not equal" << endl;
}
/* Output:
checked_array_iterators are equal
checked_array_iterators are not equal
*/
```

## <a name="op_neq"></a> checked_array_iterator::operator!=

Tests two `checked_array_iterator`s for inequality.

```cpp
bool operator!=(const checked_array_iterator<_Iterator>& right) const;
```

### Parameters

*right*\
The `checked_array_iterator` against which to check for inequality.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_opneq.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*> checked_output_iterator2(b,5);

   if (checked_output_iterator2 != checked_output_iterator)
      cout << "checked_array_iterators are not equal" << endl;
   else
      cout << "checked_array_iterators are equal" << endl;

   copy (a, a + 5, checked_output_iterator);
   checked_output_iterator++;

   if (checked_output_iterator2 != checked_output_iterator)
      cout << "checked_array_iterators are not equal" << endl;
   else
      cout << "checked_array_iterators are equal" << endl;
}
/* Output:
checked_array_iterators are equal
checked_array_iterators are not equal
*/
```

## <a name="op_lt"></a> checked_array_iterator::operator&lt;

Tests if the `checked_array_iterator` on the left side of the operator is less than the `checked_array_iterator` on the right side.

```cpp
bool operator<(const checked_array_iterator<_Iterator>& right) const;
```

### Parameters

*right*\
The `checked_array_iterator` against which to check for inequality.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_oplt.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*> checked_output_iterator2(b,5);

   if (checked_output_iterator2 < checked_output_iterator)
      cout << "checked_output_iterator2 is less than checked_output_iterator" << endl;
   else
      cout << "checked_output_iterator2 is not less than checked_output_iterator" << endl;

   copy (a, a + 5, checked_output_iterator);
   checked_output_iterator++;

   if (checked_output_iterator2 < checked_output_iterator)
      cout << "checked_output_iterator2 is less than checked_output_iterator" << endl;
   else
      cout << "checked_output_iterator2 is not less than checked_output_iterator" << endl;
}
/* Output:
checked_output_iterator2 is not less than checked_output_iterator
checked_output_iterator2 is less than checked_output_iterator
*/
```

## <a name="op_gt"></a> checked_array_iterator::operator&gt;

Tests if the `checked_array_iterator` on the left side of the operator is greater than the `checked_array_iterator` on the right side.

```cpp
bool operator>(const checked_array_iterator<_Iterator>& right) const;
```

### Parameters

*right*\
The `checked_array_iterator` to compare against.

### Remarks

See [checked_array_iterator::operator&lt;](#op_lt) for a code sample.

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

## <a name="op_lt_eq"></a> checked_array_iterator::operator&lt;=

Tests if the `checked_array_iterator` on the left side of the operator is less than or equal to the `checked_array_iterator` on the right side.

```cpp
bool operator<=(const checked_array_iterator<_Iterator>& right) const;
```

### Parameters

*right*\
The `checked_array_iterator` to compare against.

### Remarks

See [checked_array_iterator::operator&gt;=](#op_gt_eq) for a code sample.

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

## <a name="op_gt_eq"></a> checked_array_iterator::operator&gt;=

Tests if the `checked_array_iterator` on the left side of the operator is greater than or equal to the `checked_array_iterator` on the right side.

```cpp
bool operator>=(const checked_array_iterator<_Iterator>& right) const;
```

### Parameters

*right*\
The `checked_array_iterator` to compare against.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_opgteq.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*> checked_output_iterator2(b,5);

   if (checked_output_iterator2 >= checked_output_iterator)
      cout << "checked_output_iterator2 is greater than or equal to checked_output_iterator" << endl;
   else
      cout << "checked_output_iterator2 is less than checked_output_iterator" << endl;

   copy (a, a + 5, checked_output_iterator);
   checked_output_iterator++;

   if (checked_output_iterator2 >= checked_output_iterator)
      cout << "checked_output_iterator2 is greater than or equal to checked_output_iterator" << endl;
   else
      cout << "checked_output_iterator2 is less than checked_output_iterator" << endl;
}
/* Output:
checked_output_iterator2 is greater than or equal to checked_output_iterator
checked_output_iterator2 is less than checked_output_iterator
*/
```

## <a name="op_star"></a> checked_array_iterator::operator*

Returns the element that a `checked_array_iterator` addresses.

```cpp
reference operator*() const;
```

### Return Value

The value of the element addressed by the `checked_array_iterator`.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterator_pointer.cpp
// compile with: /EHsc
#include <iterator>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   pair<int, int> c[1];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   for (int i = 0 ; i < 5 ; i++)
      cout << b[i] << endl;

    c[0].first = 10;
    c[0].second = 20;

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*>::pointer p = &(*checked_output_iterator);
   checked_array_iterator<pair<int, int>*> chk_c(c, 1);
   checked_array_iterator<pair<int, int>*>::pointer p_c = &(*chk_c);

   cout << "b[0] = " << *p << endl;
   cout << "c[0].first = " << p_c->first << endl;
}
/* Output:
0
1
2
3
4
b[0] = 0
c[0].first = 10
*/
```

## <a name="op_arrow"></a> checked_array_iterator::operator-&gt;

Returns a pointer to the element addressed by the `checked_array_iterator`.

```cpp
pointer operator->() const;
```

### Return Value

A pointer to the element addressed by the `checked_array_iterator`.

### Remarks

See [checked_array_iterator::pointer](#pointer) for a code sample.

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

## <a name="op_add_add"></a> checked_array_iterator::operator++

Increments the `checked_array_iterator` to the next element.

```cpp
checked_array_iterator& operator++();

checked_array_iterator<_Iterator> operator++(int);
```

### Return Value

The first operator returns the preincremented `checked_array_iterator` and the second, the postincrement operator, returns a copy of the incremented `checked_array_iterator`.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_op_plus_plus.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   cout << *checked_output_iterator << endl;
   ++checked_output_iterator;
   cout << *checked_output_iterator << endl;
   checked_output_iterator++;
   cout << *checked_output_iterator << endl;
}
/* Output:
6
3
77
*/
```

## <a name="operator--"></a> checked_array_iterator::operator--

Decrements the `checked_array_iterator` to the previous element.

```cpp
checked_array_iterator<_Iterator>& operator--();

checked_array_iterator<_Iterator> operator--(int);
```

### Return Value

The first operator returns the predecremented `checked_array_iterator` and the second, the postdecrement operator, returns a copy of the decremented `checked_array_iterator`.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_op_minus_minus.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   cout << *checked_output_iterator << endl;
   checked_output_iterator++;
   cout << *checked_output_iterator << endl;
   checked_output_iterator--;
   cout << *checked_output_iterator << endl;
}
/* Output:
6
3
6
*/
```

## <a name="op_add_eq"></a> checked_array_iterator::operator+=

Adds a specified offset to a `checked_array_iterator`.

```cpp
checked_array_iterator<_Iterator>& operator+=(difference_type _Off);
```

### Parameters

*_Off*\
The offset by which to increment the iterator.

### Return Value

A reference to the element addressed by the `checked_array_iterator`.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_op_plus_eq.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   cout << *checked_output_iterator << endl;
   checked_output_iterator += 3;
   cout << *checked_output_iterator << endl;
}
/* Output:
6
199
*/
```

## <a name="op_add"></a> checked_array_iterator::operator+

Adds an offset to an iterator and returns the new `checked_array_iterator` addressing the inserted element at the new offset position.

```cpp
checked_array_iterator<_Iterator> operator+(difference_type _Off) const;
```

### Parameters

*_Off*\
The offset to be added to the `checked_array_iterator`.

### Return Value

A `checked_array_iterator` addressing the offset element.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_op_plus.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   cout << *checked_output_iterator << endl;
   checked_output_iterator = checked_output_iterator + 3;
   cout << *checked_output_iterator << endl;
}
/* Output:
6
199
*/
```

## <a name="operator-_eq"></a> checked_array_iterator::operator-=

Decrements a specified offset from a `checked_array_iterator`.

```cpp
checked_array_iterator<_Iterator>& operator-=(difference_type _Off);
```

### Parameters

*_Off*\
The offset by which to increment the iterator.

### Return Value

A reference to the element addressed by the `checked_array_iterator`.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_op_minus_eq.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   checked_output_iterator += 3;
   cout << *checked_output_iterator << endl;
   checked_output_iterator -= 2;
   cout << *checked_output_iterator << endl;
}
/* Output:
199
3
*/
```

## <a name="operator-"></a> checked_array_iterator::operator-

Decrements an offset from an iterator and returns the new `checked_array_iterator` addressing the inserted element at the new offset position.

```cpp
checked_array_iterator<_Iterator> operator-(difference_type _Off) const;

difference_type operator-(const checked_array_iterator& right) const;
```

### Parameters

*_Off*\
The offset to be decremented from the `checked_array_iterator`.

### Return Value

A `checked_array_iterator` addressing the offset element.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

## <a name="op_at"></a> checked_array_iterator::operator[]

Returns a reference to an element offset from the element addressed by a `checked_array_iterator` by a specified number of positions.

```cpp
reference operator[](difference_type _Off) const;
```

### Parameters

*_Off*\
The offset from the `checked_array_iterator` address.

### Return Value

The reference to the element offset.

### Remarks

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// checked_array_iterators_op_diff.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace std;
   int V1[10];

   for (int i = 0; i < 10 ; i++)
      V1[i] = i;

   // Declare a difference type for a parameter
   stdext::checked_array_iterator<int*>::difference_type diff = 2;

   stdext::checked_array_iterator<int*> VChkIter(V1, 10);

   stdext::checked_array_iterator<int*>::reference refrpos = VChkIter [diff];

   cout << refrpos + 1 << endl;
}
/* Output:
3
*/
```

## <a name="pointer"></a> checked_array_iterator::pointer

A type that provides a pointer to an element addressed by a `checked_array_iterator`.

```cpp
typedef typename iterator_traits<_Iterator>::pointer pointer;
```

### Remarks

See [checked_array_iterator::operator*](#op_star) for a code sample.

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

## <a name="reference"></a> checked_array_iterator::reference

A type that provides a reference to an element addressed by a `checked_array_iterator`.

```cpp
typedef typename iterator_traits<_Iterator>::reference reference;
```

### Remarks

See [checked_array_iterator::operator[]](#op_at) for a code sample.

For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

## See also

[\<iterator>](../standard-library/iterator.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
