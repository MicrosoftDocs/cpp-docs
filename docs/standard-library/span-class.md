---
title: "span Class (C++ Standard Library)| Microsoft Docs"
ms.date: "05/10/2020"
f1_keywords: ["span/std::span", "span/std::span::const_pointer", "span/std::span::const_reference", "span/std::span::difference_type", "span/std::span::element_type", "span/std::span::iterator", "span/std::span::pointer", "span/std::span::reference", "span/std::span::reverse_iterator", "span/std::span::size_type", "span/std::span::value_type", "span/std::span::at", "span/std::span::assign", "span/std::span::back", "span/std::span::begin", "span/std::span::data", "span/std::span::empty", "span/std::span::end", "span/std::span::front", "span/std::span::rbegin", "span/std::span::rend",
"span/std::span::size", "span/std::span::size_bytes", "span/std::span::operator=", "span/std::span::operator[]"]
helpviewer_keywords: ["std::span [C++]", "std::span [C++], const_pointer", "std::span [C++], const_reference", "std::span [C++], difference_type", "std::span [C++], element_type", "std::span [C++], iterator", "std::span [C++], pointer", "std::span [C++], reference", "std::span [C++], reverse_iterator", "std::span [C++], size_type", "std::span [C++], value_type", "std::span [C++], assign", "std::span [C++], at", "std::span [C++], back", "std::span [C++], begin", "std::span [C++], data", "std::span [C++], empty", "std::span [C++], end", "std::span [C++], front", "std::span [C++], rbegin", "std::span [C++], rend", "std::span [C++], size", "std::span [C++], size_bytes"]
---
# span Class (C++ Standard Library)

Provides a lightweight view over a contiguous sequence of objects. A span provides a safe way to iterate over, and index into, objects that are arranged back-to-back in memory (for example, objects stored in a built-in array, `std::array`, or `std::vector`).

If you typically access a sequence of back-to-back objects using a pointer and an index, span is a safer, lightweight alternative.

A span's size is determined at compile time by specifying it as a template argument, or at runtime by specifying `dynamic_extent`.

## Syntax

```cpp
template<class T, size_t Extent = dynamic_extent>
class span;
```

### Template parameters

|Parameter|Description|
|-|-|
|`T`| The type of the elements in the span. |
|`Extent`| The number of elements in the span if specified at compile time. Otherwise  `std::dynamic_extent` if the number of elements will be specified at run-time. |

[Deduction guide](#deduction_guides)

## Members

| **Type Definitions** | **Description** |
|-|-|
| [const_pointer](#pointer) | The type of a pointer to a `const` element. |
| [const_reference](#reference) | The type of a reference to a `const` element. |
| [difference_type](#difference_type) | The type of a signed distance between two elements. |
| [element_type](#element_type) | The type of a span element. |
| [iterator](#iterator) | The type of an iterator for a span. |
| [pointer](#pointer) | The type of a pointer to an element. |
| [reference](#reference) | The type of a reference to an element. |
| [reverse_iterator](#reverse_iterator) | The type of a reverse iterator for a span. |
| [size_type](#size_type) | The type for the result of the unsigned distance between two elements in the span. |
| [value_type](#value_type) | The type of an element without `const` or `volatile` qualifications. |
| **Constructors** | **Description** |
|[span](#span)| Constructs a `span`.|
| **Iterator support** | **Description** |
|[begin](#begin) | Returns an iterator pointing to the first element in the span.|
|[end](#end) | Returns an iterator pointing to the end of the span. |
|[rbegin](#rbegin) | Returns a reverse iterator pointing to the last element of the span; that is, the beginning of the reversed span.|
|[rend](#rend) | Returns a reverse iterator pointing to the front  of the span; that is, the end of the reversed span.|
| **Access elements**| **Description** |
|[back](#back) | Get the last element in the span.|
|[data](#data) | Get the address of the first element in the span.|
|[front](#front) | Get the first element in the span.|
|[operator\[\]](#op_at) | Access an element at a specified position.|
| **Observers** | **Description** |
|[empty](#empty)| Tests whether the span is empty.|
|[size](#size) | Returns the number of elements in the span.|
|[size_bytes](#size_bytes) | Returns the size of the span in bytes.|
| **Subviews** | **Description**|
| [first](#first_view) | Get a subspan from the front of the span.|
| [last](#last_view) | Get a subspan from the back of the span.|
| [subspan](#sub_view) | Gets a subspan from anywhere in the span.|
| **Operators** | **Description** |
|[span::operator=](#op_eq)| Replaces the span.|
|[span::operator\[\]](#op_at)| Access an element at a specified position. |

## Remarks

All `span` member functions have constant time complexity.

Unlike `array` or `vector`, a span doesn't "own" the elements inside it. A span doesn't free any storage for the items inside it because it doesn't own the storage for those objects.

## Requirements

**Header:** \<span>

**Namespace:** std

**Compiler Option:** /std:c++latest

## <a name="back"></a> `span::back`

Returns the last element in the span.

```cpp
constexpr reference back() const noexcept;
```

### Return Value

A reference to the last element in the span.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    cout << mySpan.back();
}
```

```Output
2
```

## <a name="begin"></a> `span::begin`

Returns an iterator pointing at the first element in the span.

```cpp
constexpr iterator begin() const noexcept;
```

### Return value

An iterator that starts with the first element in the span.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    auto i = mySpan.begin();
    cout << *i;
}
```

```Output
0
```

## <a name="data"></a> `span::data`

Returns a pointer to the beginning of the span data.

```cpp
constexpr pointer data() const noexcept;
```

### Return Value

A pointer to the first item stored in the span.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    auto i = mySpan.data();
    cout << *i;
}
```

```Output
0
```

## <a name="difference_type"></a> `span::difference_type`

This type represents the number of elements between two elements in a span.

```cpp
using difference_type = std::ptrdiff_t;
```

### Example

```cpp
#include <span>
#include <iostream>

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::difference_type distance = mySpan.end() - mySpan.begin();
    cout << distance << std::endl;
}
```

```Output
3
```

## <a name="element_type"></a> `span::element_type`

The type of the elements in the span.

```cpp
using element_type = T;
```

### Remarks

The type is taken from the template parameter `T` when a span is created.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::element_type et = mySpan[2];
    cout << et << endl;
}
```

```Output
2
```

## <a name="empty"></a> `span::empty`

Whether the span contains elements.

```cpp
constexpr bool empty() const noexcept;
```

### Return Value

Returns `true` if `this->size() == 0`. Otherwise `false`.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    bool isEmpty = mySpan.empty(); // isEmpty == false
}
```

## <a name="end"></a> `span::end`

Returns an iterator to the end of the span.

```cpp
constexpr iterator end() const noexcept;
```

### Return Value

An iterator to just beyond the end of the span.

### Remarks

`end` is used to test whether an iterator has passed the end of its range.

Don't dereference the value returned by the iterator. Use it to identify whether the iterator has reached beyond the last element in the span.

### Example

```cpp
// Iteration
for (auto it = s1.begin(); it != s1.end(); ++it)
{
    cout << *it;
}
```

## <a name="first_view"></a> `span::first`

Get a subspan, taken from the front of this span.

```cpp
constexpr auto first(size_type count) const noexcept;
template <size_t count> constexpr auto first() const noexcept;
```

### Parameters

*count*\
The number of elements from the front of this span to put in the subspan.  
The number of elements is specified as a parameter to the template, or to the function, as illustrated below.

### Return Value

A span that contains `count` elements from the front of this span.

### Remarks

A template version of this function can be used to validate the count at compile time, and to preserve info about the span by returning a span of fixed extent when possible.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    
    auto first2 = mySpan.first(2);
    cout << "mySpan.first(2): ";
    for (auto& i : first2)
    {
        cout << i;
    }
    
    cout << "\nmySpan.first<2>: ";
    auto viewSpan = mySpan.first<2>();
    for (auto& i : viewSpan)
    {
        cout << i;
    }
}
```

```Output
mySpan.first(2): 01
mySpan.first<2>: 01
```

## <a name="front"></a> `span::front`

Returns the first element in the span.

```cpp
constexpr reference front() const noexcept;
```

### Return Value

A reference to the first element in the span.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    auto i = mySpan.front();
    cout << i;
}
```

```Output
0
```

## <a name="iterator"></a> `span::iterator`

The type of an iterator over span elements.

```cpp
using iterator = implementation-defined-iterator-type;
```

### Remarks

This type serves as an iterator over the elements in a span.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::iterator it = mySpan.begin();
    cout << *it++ << *it++ << *it;
}
```

```Output
012
```

## <a name="last_view"></a> `span::last`

Get a subspan, taken from the end of this span.

```cpp
constexpr span<element_type, dynamic_extent> last(const size_type count) const noexcept;
template <size_t count> constexpr span<element_type, count> last() const noexcept;
```

### Parameters

*count*\
The number of elements from the end this span to put in the subspan.
The number can be specified as a parameter to the template, or to the function, as illustrated below.

### Return value

A span containing the last `count` elements from this span.

### Remarks

A template version of this function can be used instead to check the count at compile time. The template version also preserves info about the span by returning a span of fixed extent, when possible.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    
    auto first2 = mySpan.last(2);
    cout << "mySpan.last(2): ";
    for (auto& i : last2)
    {
        cout << i;
    }
    
    cout << "\nmySpan.last<2>: ";
    auto viewSpan = mySpan.last<2>();
    for (auto& i : viewSpan)
    {
        cout << i;
    }
}
```

```Output
mySpan.last(2): 12
mySpan.last<2>: 12
```

## <a name="op_at"></a> `span::operator[]`

Access an element in the span at a specified position.

```cpp
constexpr reference operator[](size_type offset) const;
```

### Parameters

*offset*\
Zero-based element in the span to access.

### Return Value

A reference to the element at position *offset*. If the position is invalid, the behavior is undefined.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    cout << mySpan[1];
}
```

```Output
1
```

## <a name="op_eq"></a> `span::operator=`

Assign another span to this one.

```cpp
constexpr span& operator=(const span& other) noexcept = default;
```

### Parameters

*other*\
The span to assign to this one.

### Return Value

`*this`

### Remarks

Assignment does a shallow copy of the data pointer and the size. A shallow copy is safe because spans don't allocate memory for the elements they contain.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    span<int> mySpan2;
    mySpan2 = mySpan;
    for (auto &i : mySpan2)
    {
        cout << it;
    }
}
```

```Output
012
```

## <a name="pointer"></a> `span::pointer`

The types for a pointer and `const` pointer to a span element.

```cpp
using pointer = T*;
using const_pointer = const T*;
```

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    // pointer
    span<int>::pointer ptr = &mySpan[2];
    *ptr = 9;
    cout << mySpan[2];
    
    // const pointer
    span<int>::const_pointer cPtr = &mySpan[0];
    // *cPtr = 9; error - const
    cout << *cPtr;
}
```

```Output
90
```

## <a name="rbegin"></a> `span::rbegin`

Get a reverse iterator pointing to the last element of this span.

```cpp
constexpr reverse_iterator rbegin() const noexcept;
```

### Return Value

An iterator pointing to the beginning of the reversed span.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    for (auto rIt = s1.rbegin(); rIt != s1.rend(); ++rIt)
    {
        cout << *rIt;
    }
}
```

```Output
210
```

## <a name="reference"></a> `span::reference`

The types for a reference, and a `const` reference, to a span element.

```cpp
using reference = T&;
using const_reference = const T&;
```

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    // reference
    span<int>::reference ref = mySpan[0];
    ref = 9;
    cout << mySpan[0];
    // const reference
    span<int>::const_reference cRef = mySpan[1];
    // cRef = 9; error because const
    cout << cRef;
}
```

```Output
91
```

## <a name="rend"></a> `span::rend`

Get a random-access iterator to just beyond the end of the reversed span.

```cpp
constexpr reverse_iterator rend() const noexcept;
```

### Return Value

A reverse iterator to the placeholder following the last element in the reversed span; that is, the placeholder before the first element in the unreversed span.

### Remarks

`rend` is used with a reversed span just as [span::end](#end) is used with a span. Use it to test to whether a reverse iterator has reached the end of its span.

The value returned by `rend` shouldn't be dereferenced.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    for (auto rIt = s1.rbegin(); rIt != s1.rend(); ++rIt)
    {
        cout << *rIt;
    }
}
```

## <a name="reverse_iterator"></a> `span::reverse_iterator`

The type of a reverse iterator for a span.

```cpp
using reverse_iterator = std::reverse_iterator<iterator>;
```

### Example

```cpp
#include <span>
#include <iostream>

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::reverse_iterator rIt = mySpan.rbegin();
    cout << *rIt++ << *rIt++ << *rIt;
}
```

```Output
210
```

## <a name="size"></a> `span::size`

Get the number of elements in the span.

```cpp
constexpr size_t size() const noexcept;
```

### Return value

The number of elements in the span.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    cout << mySpan.size();
}
```

```Output
3
```

## <a name="size_bytes"></a> `span::size_bytes`

Get the size of the elements in the span in bytes.

```cpp
constexpr size_type size_bytes() const noexcept;
```

### Return Value

The number of bytes that all of the elements in the span take up; that is, `sizeof(element_type)` multiplied by the number of elements in the span.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    cout << mySpan.size_bytes(); // 3 elements * 4 (size of an int)
}
```

```Output
12
```

## <a name="size_type"></a> `span::size_type`

An unsigned type, suitable for storing the number of elements in a span.

```cpp
using size_type = size_t;
```

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::size_type szType = mySpan.size();
    cout << szType;
}
```

```Output
3
```

## <a name="span"></a> `span::span`

`span` constructors.

```cpp
constexpr span() noexcept
requires (Extent == 0 || Extent == dynamic_extent) = default;

template <class It>
constexpr explicit(Extent != dynamic_extent)
span(It first, size_type count) noexcept

template <class It, class End>
constexpr explicit(Extent != dynamic_extent)
span(It first, End last) noexcept(noexcept(last - first))

template <class T, size_t N>
requires (Extent == dynamic_extent || Extent == N) && is_convertible_v<T (*)[], T (*)[]>
constexpr span(array<T, N>& arr) noexcept

template <class T, size_t N>
requires (Extent == dynamic_extent || Extent == N) && is_convertible_v<const T (*)[], T (*)[]>
constexpr span(const array<T, N>& arr) noexcept

template <size_t N>
requires (Extent == dynamic_extent || Extent == N)
constexpr span(type_identity_t<T> (&arr)[N]) noexcept

template <class R>
constexpr explicit(Extent != dynamic_extent)
span(R&& r)

// default copy ctor
constexpr span(const span& other) noexcept = default;

// converting  ctor
template <class T, size_t OtherExtent>
requires (Extent == dynamic_extent || OtherExtent == dynamic_extent ||
              Extent == OtherExtent) && is_convertible_v<T (*)[], T (*)[]>
constexpr explicit(Extent != dynamic_extent && OtherExtent == dynamic_extent)
span(const span<T, OtherExtent>& other) noexcept
```

### Parameters

*arr*\
Construct a span from this array.

*count*\
Number of elements that will be in the span.

*first*\
Iterator to the first element in the span.

*last*\
Iterator to just past the last element in the span.

*N*\
The number of elements that will be in the span.

*other*\
Copy from this span.

*r*\
Construct a span from this range.

### Remarks

A span doesn't free storage for items in the span because it doesn't own the storage of the objects within it.

|Constructor  | Description  |
|---------|---------|
|`span()` | Constructs an empty span. Only considered during overload resolution when the template parameter `Extent` is `0` or `dynamic_extent`.|
|`span(It first, size_type count)` | Constructs a span from the first `count` elements from iterator `first`.  Only considered during overload resolution when template parameter `Extent` isn't `dynamic_extent`. |
|`span(It first, End last)` | Constructs a span from the elements in iterator `first` until the end `last` is reached. Only considered during overload resolution when template parameter `Extent` isn't `dynamic_extent`. `It` must be a `contiguous_iterator`.  |
|`span(array<T, N>& arr) noexcept;`<br /><br />`span(const array<T, N>& arr) noexcept;`<br /><br />`span(type_identity_t<element_type> (&arr)[N]) noexcept;` |  Constructs a span from `N` elements of the specified array. Only considered during overload resolution when template parameter `Extent` is `dynamic_extent` or equals `N`. |
|`span(R&& r)` |  Constructs a span from a range. Only participates in overload resolution if template parameter `Extent` isn't `dynamic_extent`.|
|`span(const span& other)` |  The compiler-generated copy constructor. A shallow copy of the data pointer is safe because the span doesn't allocate the memory to hold the elements. |
|`span(const span<OtherElementType, OtherExtent>& s) noexcept;` | Converting constructor: constructs a span from another span. Only participates in overload resolution if template parameter `Extent` is `dynamic_extent`, or `N` is `dynamic_extent` or  equals `Extent`.|

### Example

```cpp
#include <span>

using namespace std;

int main()
{
    const int MAX=10;
    
    int x[MAX];
    for (int i = 0; i < MAX; i++)
    {
        x[i] = i;
    }
    
    span<int, MAX> span1{ x }; // fixed-size span: compiler error if size of x doesn't match template argument MAX
    span<int> span2{ x }; // size is inferred from x
    span<const int> span3 = span2; // converting constructor
    span<int> span4( span2 ); // copy constructor
}
```

## <a name="sub_view"></a> `span::subspan`

Get a subspan of this span.

```cpp
constexpr auto subspan(size_type offset, size_type count = dynamic_extent) const noexcept;

template <size_t offset, size_t count = dynamic_extent>
constexpr auto subspan() const noexcept
```

### Parameters

*count*\
The number of elements to put in the subspan. If `count` is `dynamic_extent` (the default value), then gets the subspan from `offset` to the end of this span.

*offset*\
The location in this span to start the subspan.

### Return Value

A span starting at `offset` in this span, containing `count` elements.

### Remarks

A template version of this function is available that checks the count at compile time, and that preserves information about the span by returning a span of fixed extent, when possible.

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    
    cout << "mySpan.subspan(1,2): ";
    for (auto& i : mySpan.subspan(1,2))
    {
        cout << i;
    }
    cout << "\nmySpan.subspan<1,2>: ";
    for (auto& i : mySpan.subspan<1,2>())
    {
        cout << i;
    }
    cout << "\nmySpan.subspan<1>: ";
    for (auto& i : mySpan.subspan<1>)
    {
        cout << i;
    }
}
```

```Output
mySpan.subspan(1,2): 12
mySpan.subspan<1,2>: 12
mySpan.subspan<1>: 12
```

## <a name="value_type"></a> `span::value_type`

The type of the element in the span but without any `const` or `volatile` qualifications.

```cpp
using value_type = std::remove_cv_t<T>;
```

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::value_type vType = mySpan[2];
    cout << vType;
}
```

```Output
2
```

## <a name="deduction_guides"></a> Deduction guides

The following deduction guides are provided for span.

```cpp
// Allows the extent to be deduced from std::array and C++ built-in arrays

template <class T, size_t Extent>
span(_Ty (&)[Extent]) -> span<T, Extent>;

template <class T, size_t Size>
span(array<T, Size>&) -> span<T, Size>;

template <class T, size_t Size>
span(const array<T, Size>&) -> span<const T, Size>;

// Allows the element type to be deduced from the iterator and the end of the span.
// The iterator must be contiguous

template <contiguous_iterator It, class End>
span(It, End) -> span<remove_reference_t<iter_reference_t<It>>>;

// Allows the element type to be deduced from a range.
// The range must be contiguous

template <ranges::contiguous_range Rng>
span(Rng &&) -> span<remove_reference_t<ranges::range_reference_t<Rng>>>;
```

## See also

[\<span>](../standard-library/span.md)  
[How to use class template argument deduction](https://devblogs.microsoft.com/cppblog/how-to-use-class-template-argument-deduction/)
