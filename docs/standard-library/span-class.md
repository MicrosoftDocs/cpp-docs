---
title: "span Class (C++ Standard Library)| Microsoft Docs"
ms.date: "05/10/2020"
f1_keywords: ["span/std::span", "span/std::span::const_iterator", "span/std::span::const_pointer", "span/std::span::const_reference", "span/std::span::const_reverse_iterator", "span/std::span::difference_type", "span/std::span::iterator", "span/std::span::pointer", "span/std::span::reference", "span/std::span::reverse_iterator", "span/std::span::size_type", "span/std::span::value_type", "span/std::span::at", "span/std::span::back", "span/std::span::begin", "span/std::span::data", "span/std::span::empty", "span/std::span::end", "span/std::span::front", "span/std::span::rbegin", "span/std::span::rend",
"span/std::span::size", "span/std::span::size_bytes", "span/std::span::operator=", "span/std::span::operator[]"]
helpviewer_keywords: ["std::span [C++]", "std::span [C++], const_iterator", "std::span [C++], const_pointer", "std::span [C++], const_reference", "std::span [C++], const_reverse_iterator", "std::span [C++], difference_type", "std::span [C++], iterator", "std::span [C++], pointer", "std::span [C++], reference", "std::span [C++], reverse_iterator", "std::span [C++], size_type", "std::span [C++], value_type", "std::span [C++], assign", "std::span [C++], at", "std::span [C++], back", "std::span [C++], begin", "std::span [C++], data", "std::span [C++], empty", "std::span [C++], end", "std::span [C++], front", "std::span [C++], rbegin", "std::span [C++], rend", 
"std::span [C++], size", "std::span [C++], size_bytes", "std::span [C++], const_pointer", "std::span [C++], const_reference", "std::span [C++], difference_type", "std::span [C++], iterator", "std::span [C++], pointer", "std::span [C++], reference", "std::span [C++], size_type", "std::span [C++], value_type", "std::span [C++], assign", "std::span [C++], at", "std::span [C++], back", "std::span [C++], begin", "std::span [C++], data", "std::span [C++], empty", "std::span [C++], end", "std::span [C++], front", "std::span [C++], rbegin", "std::span [C++], rend", "std::span [C++], size"]
---
# span Class (C++ Standard Library)

Provides a lightweight, single-dimension, view over a contiguous sequence of objects. A span provides a typesafe way to iterate over, and index into, objects that are arranged back-to-back in memory. 

If you would have typically accessed a sequence of back-to-back objects using a pointer indexed by the size of the objects, span is a safer, lightweight alternative.

A span can be static-size (determined at compile time) or dynamic-size (determined at runtime).

## Syntax

```cpp
template<class T, size_t Extent = dynamic_extent>
class span;
```

### Template parameters

|Parameter|Description|
|-|-|
|`T`| The type of span elements. |
|`Extent`| The number of elements in the span if specified at compile time, or `std::dynamic_extent` if the number of elements will be specified at run-time. |

[Deduction guides](#deduction_guides)

## Members

| **Type Definitions** | **Description** |
|-|-|
JTW | [const_pointer](#const_pointer) | The type of a const pointer to a span element |
JTW | [const_reference](#const_reference) | The type of a const reference to an element. |
JTW | [difference_type](#difference_type) | The type of a signed distance between two elements. |
JTW | [element_type](#element_type) | The type of a span element. |
JTW | [iterator](#iterator) | The type of an iterator for a span. |
JTW| [pointer](#pointer) | The type of a pointer to an element. |
JTW | [reference](#reference) | The type of a reference to an element. |
JTW | [reverse_iterator](#reverse_iterator) | The type of a reverse iterator for a span. |
JTW | [size_type](#size_type) | The type of an unsigned distance between two elements in the span. |
JTW | [value_type](#value_type) | The type of an element without `const` or `volatile` qualifications (`std::remove_cv_t<T>`). |
| **Constructors** | **Description** |
|-|-|
JTW |[span](#span)| Constructs a `span`.|
| **Iterator support** ||
JTW |[begin](#begin) | Returns an iterator pointing to the first element in the span.|
JTW |[end](#end) | Returns an iterator pointing to the end of the span. |
JTW |[rbegin](#rbegin) | Returns a reverse iterator pointing to the last element of the span, that is, the beginning of the reversed span.|
JTW |[rend](#rend) | Returns a reverse iterator pointing to the front  of the span, that is, the end of the reversed span.|
| **Access elements**||
JTW |[data](#data) | Get the address of the first element in the span.|
JTW |[back](#back) | Get the last element in the span.|
JTW |[front](#front) | Get the first element in the span.|
JTW |[operator\[\]](#op_at) | Get the element at the index.|
| **Observers** ||
JTW |[size](#size) | Returns the number of elements in the span.|
JTW |[size_bytes](#size_bytes) | Returns the size of the span in bytes.|
JTW |[empty](#empty)| Tests whether the span is empty.|
| ** Subviews ** ||
JTW | [first](#first_view) | Get a subspan from the front of the span.|
JTW | [last](#last_view) | Get a subspan from the back of the span.|
JTW | [subspan](#sub_view) | Gets a subspan from anywhere in the span.|
| **Operators** | **Description** |
JTW|[span::operator=](#op_eq)| Replaces the span.|
JTW|[span::operator\[\]](#op_at)| Access an element at a specified position.|
| **Non-member constants** | **Description** |
|-|-|
| [dynamic_extent](#const_dynamicextent) | Indicates that the span size is determined at runtime rather than compile time. |
| **Non-member functions** | **Description** |
|-|-|
JTW |[as_bytes](#as_bytes) | Get a readonly view to the object representation of the elements in the span. |
JTW |[as_writeable_bytes](#as_writable_bytes) | Get a read/write view to the object representation of the elements in the span. |

## Remarks

All `span` member functions have constant time complexity.

Unlike array or vector, span doesn't "own” the elements placed inside it. A span never frees any storage for items in the span because it doesn't own the storage of the objects in the span.

## Requirements

**Header:** \<span>

**Namespace:** std

## <a name="as_bytes"></a> as_bytes

Get a view to the raw byte representation of the elements in the span.

```cpp
template <class T, size_t Extent>
auto as_bytes(span<T, Extent> span) noexcept
```

### Return Value

A `const byte*` to the first item stored in the span. If the span is empty, returns `nullptr`.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = std::as_bytes(mySpan);
}
```

## <a name="as_writable_bytes"></a> as_writable_bytes

Get a read/write view to the raw byte representation of the elements in the span.

```cpp
template <class T, size_t Extent>
auto as_bytes(span<T, Extent> span) noexcept
```

### Return Value

A `byte*` to the first item stored in the span. If the span is empty, returns `nullptr`.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = std::as_writable_bytes(mySpan);
}
```

## <a name="back"></a> span::back

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

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    auto i = mySpan.back();
    cout << i;
}
```

```Output
2
```

## <a name="begin"></a> span::begin

Returns an iterator to the first element in the span.

```cpp
constexpr iterator begin() const noexcept
```

### Return value

An iterator that starts with the first element in the span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    auto i = mySpan.begin();
    cout << *i;
}
```

```Output
0
```

## <a name="data"></a> span::data

Returns a pointer to the beginning of the span data.

```cpp
constexpr pointer data() const noexcept;
```

### Return Value

A pointer to the first item stored in the span. If the span is empty, returns `nullptr`.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto i = mySpan.data();
    cout << *i;
}
```

```Output
0
```

 | [difference_type](#difference_type) |  |
## <a name="difference_type"></a> span::difference_type

The type of a signed distance between two elements

```cpp
using difference_type = std::ptrdiff_t;
```

### Remarks

This type can be used to get the distance, in terms of number of elements, between two elements in a span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    pan<int>::difference_type distance = mySpan[2] - mySpan[0];
    cout << distance << std::endl;
}
```

```Output
2
```

## <a name="element_type"></a> span::element_type

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

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    span<int>::element_type et = mySpan[2];
    cout << et << std::endl;
    
}
```

```Output
2
```

## <a name="empty"></a> span::empty

Returns whether or not the span contains elements.

```cpp
constexpr bool empty() const noexcept
```

### Return Value

Returns `true` if this->size() == 0. Otherwise `false`.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    bool isEmpty = mySpan.empty(); // isEmpty == false
}
```

## <a name="end"></a> span::end

Returns an iterator to a placeholder following the last element in the span.

```cpp
constexpr iterator end() const;
```

### Return Value

An iterator to the sentinel just beyond the end of the span.

### Remarks

`end` is used to test whether an iterator has passed the end of its range.

Don't dereference the value returned by the iterator. Use it to identify whether the iterator has reached the sentinal following the last element in the span.

### Example

```cpp
// Iteration
    for (auto it = s1.begin(); it != s1.end(); ++it)
    {
        cout << *it;
    }
```

## <a name="first_view"></a> span::first

Get a subspan taken from the front of this span.

```cpp
constexpr auto first(const size_type count) const noexcept;
template <size_t count> constexpr auto first() const noexcept;
```

### Parameters

*count*\
The number of elements from the front of this span to put in the subspan.

### Return Value

A span that contains `count` elements from this span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    
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

## <a name="front"></a> span::front

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

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    auto i = mySpan.first();
    cout << i;
}
```

```Output
0
```

| [iterator](#iterator) | The type of an iterator for a span. |
## <a name="iterator"></a> span::iterator

The type of an iterator over span elements.

```cpp
using iterator = _Span_iterator<T>;
```

### Remarks

This type serves as an iterator over the elements in a span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    span<int>::iterator it = mySpan.begin();
    cout << *it++ << *it++ << *it;
}
```

```Output
012
```

## <a name="last_view"></a> span::last

Get a subspan from the end of this span.

```cpp
constexpr span<element_type, dynamic_extent> last(const size_type count) const noexcept;
template <size_t count> constexpr span<element_type, count> last() const noexcept;
```

### Parameters

*count*\
The number of elements from the end this span to put in the subspan.

### Return value

Returns a span containing the last `count` elements from this span.

### Remarks

A template version of this function is available for checking the count at compile time, and for preserving information about the span by returning a span of fixed extent when possible.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    
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

## <a name="op_at"></a> span::operator[]

Access an element at a specified position.

```cpp
constexpr reference operator[](const size_type offset)
```

### Parameters

*offset*\
Zero-based position of element in the span to access.

### Return Value

A reference to the element at position *offset*. If that position is invalid, the behavior is undefined.

### Remarks

A template version of this function is available for checking the count at compile time, and for preserving information about the span by returning a span of fixed extent when possible.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto i = mySpan.begin();
    cout << mySpan[1];
}
```

```Output
1
```

## <a name="op_eq"></a> span::operator=

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

Assignment does a shallow copy of the data pointer and the size. A shallow copy is safe because spans don't allocate memory for the elements it contains.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    span <int> mySpan2 = mySpan;
    for (auto it : mySpan2)
    {
        cout << it;
    }
}
```

```Output
012
```

## <a name="pointer"></a> span::pointer
## <a name="const_pointer"></a> span::const_pointer

The types for a pointer, and a const pointer, to a span element.

```cpp
using pointer = T*;
using const_pointer = const T*;
```

### Remarks

These types serve as a pointer to an element in the span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

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

## <a name="rbegin"></a> span::rbegin

Returns a reverse iterator pointing to the last element of this span, that is, the beginning of the reversed span.

```cpp
constexpr reverse_iterator rbegin() const noexcept;
```

### Return Value

Returns an iterator pointing to the beginning of the reversed span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    for (auto rIt = s1.rbegin(); rIt != s1.rend(); ++rIt)
    {
        cout << *rIt;
    }
}
```

```Output
210
```

## <a name="reference"></a> span::reference
## <a name="const_reference"></a> span::const_reference

The types for a reference, and a const reference, to a span element.

```cpp
using reference = T&;
using const_reference = const T&;
```

### Remarks

These types serve as a reference to an element in the span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

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

## <a name="reverse_iterator"></a> span::reverse_iterator

The type of a reverse iterator for a span.

```cpp
using reverse_iterator = std::reverse_iterator<iterator>;
```

### Remarks

This type can serve as a reverse iterator over the elements in a span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    span<int>::reverse_iterator rIt = mySpan.rbegin();
    cout << *rIt++ << *rIt++ << *rIt;
}
```

```Output
210
```

## <a name="rend"></a> span::rend

Returns a reverse iterator to a placeholder following the last element in the reversed span, that is, the placeholder before the first element in the unreversed span.

```cpp
constexpr reverse_iterator rend() const;
```

### Return Value

A random-access iterator to the sentinel just beyond the end of the reversed span.

### Remarks

`rend` can be used to test to whether a reverse iterator has reached the end of its span.

`rend` is used with a reversed span just as [span::end](#end) is used with a span.

The value returned by `rend` should not be dereferenced.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    for (auto rIt = s1.rbegin(); rIt != s1.rend(); ++rIt)
    {
        cout << *rIt;
    }
}
```

## <a name="size"></a> span::size

Returns the number of elements in the span.

```cpp
constexpr size_t size() const noexcept;
```

### Return value

The number of elements in the span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    cout << mySpan.size();
}
```

```Output
3
```

## <a name="size_bytes"></a> span::size_bytes

Returns the size of the elements in the span in bytes.

```cpp
constexpr size_type size_bytes() const noexcept;
```

### Return Value

The number of bytes that the elements in the span take up. This is `sizeof(element_type)` multiplied by the number of elements in the span.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    cout << mySpan.size_bytes();
}
```

```Output
12
```

## <a name="size_type"></a> span::size_type

The size of the type of an element in the span.

```cpp
using size_type = size_t;
```

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    span<int>::size_type szType = sizeof(mySpan[0]);
    cout << szType;
}
```

```Output
4
```

## <a name="span"></a> span::span

`span` constructors.

```cpp
JTW constexpr span() noexcept
requires (Extent == 0 || Extent == dynamic_extent) = default;

JTW template<class It>
constexpr explicit(Extent != dynamic_extent) 
span(It first, size_type count);

JTW template<class It, class End>
constexpr explicit(Extent != dynamic_extent) 
span(It first, End last);

JTW template<class T, size_t N>
constexpr span(std::array<T, N>& arr) noexcept;

JTW template<class T, size_t N>
constexpr span(const std::array<T, N>& arr) noexcept;

JTW template<size_t N>
constexpr span(type_identity_t<element_type> (&arr)[N]) noexcept;

// move
JTW template<class R>
constexpr explicit(Extent != dynamic_extent) span(R&& r);

// copy ctor
JTW constexpr span(const span& other) noexcept = default;

JTW template<class OtherElementType, size_t OtherExtent>
constexpr explicit(Extent != dynamic_extent && OtherExtent == dynamic_extent)
span(const span<OtherElementType, OtherExtent>& s) noexcept;
```

### Parameters

*arr*\
Construct a span from this array.

*count*\
The number of elements that will be in the span.

*first*\
Iterator to the first element in the span.

*last*\
Iterator set just past the last element in the span.

*other*\
Copy from this span.

*r*\
Construct a span from this range.

*s*\
Convert a span from this existing span.

### Remarks

A span doesn't free storage for items in the span because a span doesn't own the storage of the objects within it.

**`span()`**  

 Constructs an empty span.
Only considered during overload resolution when the template parameter `Extent` is `0` or `dynamic_extent`.

**`span(It first, size_type count)`**

Constructs a span from the first `count` elements from iterator `first`.\  
Only considered during overload resolution when template parameter `Extent` isn't `dynamic_extent`.

**`span(It first, End last)`**

Constructs a span from the elements in iterator `first` until the sentinel `end` is reached.  
Only considered during overload resolution when template parameter `Extent` isn't `dynamic_extent`.

**`span(std::array<T, N>& arr) noexcept;`  
`span(const std::array<T, N>& arr) noexcept;`  
`span(type_identity_t<element_type> (&arr)[N]) noexcept;`**  

Constructs a span from `N` elements of the specified array.  
Only considered during overload resolution when template parameter `Extent` is `dynamic_extent` or equals `N`.

**`span(const span& other)`**

The compiler generated copy constructor. A shallow copy of the data pointer and size is safe because the span doesn't allocate the memory to hold the elements.

**`span(const span<OtherElementType, OtherExtent>& s) noexcept;`**

Copy constructor. Constructs a span from the specified span.
Only particpates in overload resolution if template parameter `Extent` is `dynamic_extent`, or `N` is `dynamic_extent` or  equals `Extent`.

**`span(R&& r)`**

Move constructor.
Only considered during overload resolution when template parameter `Extent` isn't `dynamic_extent`

### Example

```cpp
#include <span>

void main()
{
    const int MAX=10;
    
    int x[MAX];
    
    for (int i = 0; i < MAX; i++)
    {
        x[i] = i;
    }
    
    span <int,dynamic_extent> s0;
    span<int, MAX> s1{ x }; // fixed-size span: compiler error if size of x doesn't match template argument MAX
    span<int> s2{ x }; // size is inferred from x
    span<const int> s3 = s2; // a legal conversion (non const to const)
    span<int, dynamic_extent> s5 = s2; // copy constructor
    // span(const span<OtherElementType, OtherExtent>& s)
    span<int, dynamic_extent> s4(s5);
}
```

## <a name="sub_view"></a> span::subspan

Gets a subspan from this span.

```cpp
constexpr span<element_type, dynamic_extent>
subspan(size_t offset, size_t count = dynamic_extent) const noexcept;

constexpr span<element_type, dynamic_extent>
subspan(const size_type offset, const size_type count = dynamic_extent) const noexcept;

 template <size_t offset, size_t count = dynamic_extent>
 constexpr span<element_type,
        count != dynamic_extent ? count : (Extent != dynamic_extent ? Extent - _Offset : dynamic_extent)>
        subspan() const noexcept 
```

### Parameters

*count*\
The number of elements from the end this span to put in the subspan. If span is `dyanmaic_extent` (the default value) then gets the elements from `offset` to the end of this span.

*offset*\
The location in this span to start the subspan.

### Return Value

A span starting at `offset` in this span, containing `count` elements.

### Remarks

A template version of this function is available for checking the count at compile time, and for preserving information about the span by returning a span of fixed extent when possible.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    
    cout << "mySpan.subspan(1,2): ";
    for (auto& i : mySpan.subspan(1, 2))
    {
        cout << i;
    }
    cout << "\nmySpan.subspan<1,2>: ";
    for (auto& i : mySpan.subspan<1, 2>())
    {
        cout << i;
    }
    cout << "\nmySpan.subspan<1>: ";
    for (auto& i : mySpan.subspan(1))
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

| [value_type](#value_type) | The type of an element without `const` or `volatile` qualifications (`std::remove_cv_t<T>`). |
## <a name="value_type"></a> span::value_type

The type of an element without `const` or `volatile` qualifications.

```cpp
using value_type = std::remove_cv_t<_Ty>;
```

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);

    span<int>::value_type vType = mySpan[2];
    cout << vType;
}
```

```Output
2
```

## Deduction guides



## See also

[\<span>](../standard-library/span.md)
[How to use class tempalte argument deduction](https://devblogs.microsoft.com/cppblog/how-to-use-class-template-argument-deduction/)