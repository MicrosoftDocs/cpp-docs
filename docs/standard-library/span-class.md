---
title: "span Class (C++ Standard Library)| Microsoft Docs"
ms.date: "04/23/2020"
f1_keywords: ["span/std::span", "span/std::span::const_iterator", "span/std::span::const_pointer", "span/std::span::const_reference", "span/std::span::const_reverse_iterator", "span/std::span::difference_type", "span/std::span::iterator", "span/std::span::pointer", "span/std::span::reference", "span/std::span::reverse_iterator", "span/std::span::size_type", "span/std::span::value_type", "span/std::span::at", "span/std::span::back", "span/std::span::begin", "span/std::span::data", "span/std::span::empty", "span/std::span::end", "span/std::span::front", "span/std::span::rbegin", "span/std::span::rend",
"span/std::span::size", "span/std::span::size_bytes", "span/std::span::operator=", "span/std::span::operator[]"]
helpviewer_keywords: ["std::span [C++]", "std::span [C++], const_iterator", "std::span [C++], const_pointer", "std::span [C++], const_reference", "std::span [C++], const_reverse_iterator", "std::span [C++], difference_type", "std::span [C++], iterator", "std::span [C++], pointer", "std::span [C++], reference", "std::span [C++], reverse_iterator", "std::span [C++], size_type", "std::span [C++], value_type", "std::span [C++], assign", "std::span [C++], at", "std::span [C++], back", "std::span [C++], begin", "std::span [C++], data", "std::span [C++], empty", "std::span [C++], end", "std::span [C++], front", "std::span [C++], rbegin", "std::span [C++], rend", 
"std::span [C++], size", "std::span [C++], size_bytes", "std::span [C++], const_pointer", "std::span [C++], const_reference", "std::span [C++], difference_type", "std::span [C++], iterator", "std::span [C++], pointer", "std::span [C++], reference", "std::span [C++], size_type", "std::span [C++], value_type", "std::span [C++], assign", "std::span [C++], at", "std::span [C++], back", "std::span [C++], begin", "std::span [C++], data", "std::span [C++], empty", "std::span [C++], end", "std::span [C++], front", "std::span [C++], rbegin", "std::span [C++], rend", "std::span [C++], size"]
---
# span Class (C++ Standard Library)

Provides a lightweight, single-dimension, view over a contiguous sequence of objects. A span provides a typesafe way to iterate over, and index into, objects that are arranged back-to-back in memory. 

If you would have typically accessed a sequence of back-to-back objects using a pointer indexed by the size of the objects, span is a safer, lightweight alternative.

A span can be static-size (determined at compile time) or dynamic-size (determined at runtime).

Unlike array or vector, span doesn't "own” the elements placed inside it. A span never frees any storage for items in the span because it doesn't own the storage of the objects in the span.

## Syntax

```cpp
template<class T, size_t Extent = dynamic_extent>
class span;
```

### Template parameters

|Parameter|Description|
|-|-|
|`T`| The type for span elements. |
|`Extent`| The number of elements in the span if specified at compile time, or `std::dynamic_extent` if the number of elements will be specified at run-time. |

## Members

| Type Definitions | Description |
|-|-|
| [const_pointer](#const_pointer) | The type of a const pointer to a span element.|
| [const_reference](#const_reference) | The type of a const reference to an element. |
| [difference_type](#difference_type) | The type of a signed distance between two elements. |
| [element_type](#element_type) | The type of a span element. |
| [iterator](#iterator) | The type of an iterator for a span. |
| [pointer](#pointer) | The type of a pointer to an element. |
| [reference](#reference) | The type of a reference to an element. |
| [reverse_iterator](#reverse_iterator) | The type of a reverse iterator for a span. |
| [size_type](#size_type) | The type of an unsigned distance between two elements in the span. |
| [value_type](#value_type) | The type of an element without `const` or `volatile` qualifications. |

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
|[span::operator=](#op_eq)|Replaces the span.|
|[span::operator\[\]](#op_at)|Access an element at a specified position.|
|[span::operator*](#op_star)|Replaces the span.|
| **Member constants** | **Description** |
| [extent](#const_extent) | The extent of a static span, or `dynamic_extent`) |
| **Nonmember constants** | **Description** |
| [dynamic_extent](#const_dynamicextent) | Indicates that the span size is determined at runtime rather than compile time. |

## Remarks

All `span` member functions have constant time complexity.

## Requirements

**Header:** \<span>

**Namespace:** std

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

Spans don't free storage for items in the span because a span doesn't own the storage of the objects within it.

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

The compiler generated copy constructor. Memberwise copy is safe because the span itself doesn't own allocated memory. This constructor copies the size and data pointer from the specified span.

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

A pointer to the first item stored in the span.

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

## <a name="empty"></a> span::empty

Returns whether or not the span contains elements.

```cpp
constexpr bool empty() const noexcept
```

### Remarks

Returns `true` if this->size() == 0; otherwise `false`.

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

### Remarks

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

## <a name="last_view"></a> span::last

Get a subspan from the end of this span.

```cpp
constexpr span<element_type, dynamic_extent> last(const size_type count) const noexcept;
template <size_t count> constexpr span<element_type, count> last() const noexcept;
```

### Parameters

*count*\
The number of elements from the end this span to put in the subspan.

### Remarks

Returns a span that contains `count` elements from the end of this span.

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

Accesses an element at a specified position.

```cpp
constexpr reference operator[](const size_type offset)
```

### Parameters

*offset*\
Zero-based position of element in the span to access.

### Remarks

Return a reference to the element at position *offset*. If that position is invalid, the behavior is undefined.

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

## <a name="rbegin"></a> span::rbegin

Returns a reverse iterator pointing to the last element of the span, that is, the beginning of the reversed span.

```cpp
constexpr reverse_iterator rbegin() const noexcept 
```

### Remarks

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

### Remarks

Returns how many elements are in the span.

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

### Remarks

Returns how many bytes the elements in the span take up. This is `sizeof(element_type)` multiplied by the number of elements in the span.

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

## <a name="sub_view"></a> span::subspan

Gets a subspan from this span.

```cpp
constexpr span<element_type, dynamic_extent>
subspan(const size_type offset, const size_type count = dynamic_extent) const noexcept;

 template <size_t offset, size_t count = dynamic_extent>
 constexpr span<element_type,
        count != dynamic_extent ? count : (_Extent != dynamic_extent ? _Extent - _Offset : dynamic_extent)>
        subspan() const noexcept 

constexpr span<element_type, dynamic_extent>
subspan(size_t offset, size_t count = dynamic_extent) const;
```

### Parameters

*count*\
The number of elements from the end this span to put in the subspan. If span is `dyanmaic_extent` (the default value) then gets the elements from `offset` to the end of this span.

*offset*\
The location in this span to start the subspan.

### Remarks

Returns a span starting at `offset` in this span and containing `count` elements.

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

## See also

[\<span>](../standard-library/span.md)