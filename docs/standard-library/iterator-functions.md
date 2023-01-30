---
description: "Learn more about: <iterator> functions"
title: "<iterator> functions"
ms.date: "11/04/2016"
f1_keywords: ["xutility/std::advance", "xutility/std::back_inserter", "xutility/std::begin", "xutility/std::cbegin", "xutility/std::cend", "xutility/std::distance", "xutility/std::end", "xutility/std::front_inserter", "xutility/std::inserter", "xutility/std::make_checked_array_iterator", "xutility/std::make_move_iterator", "xutility/std::make_unchecked_array_iterator", "xutility/std::next", "xutility/std::prev"]
helpviewer_keywords: ["std::advance [C++]", "std::back_inserter [C++]", "std::begin [C++]", "std::cbegin [C++]", "std::cend [C++]", "std::distance [C++]", "std::end [C++]", "std::front_inserter [C++]", "std::inserter [C++]", "std::make_checked_array_iterator [C++]", "std::make_move_iterator [C++]", "std::make_unchecked_array_iterator [C++]", "std::next [C++]", "std::prev [C++]"]
---
# `<iterator>` functions

## <a name="advance"></a> `advance`

Increments an iterator by a specified number of positions.

```cpp
template <class InputIterator, class Distance>
void advance(InputIterator& InIt, Distance Off);
```

### Parameters

*`InIt`*\
The iterator that is to be incremented and that must satisfy the requirements for an input iterator.

*`Off`*\
An integral type that is convertible to the iterator's difference type and that specifies the number of increments the position of the iterator is to be advanced.

### Remarks

The range must be nonsingular, where the iterators must be dereferenceable or past the end.

If the `InputIterator` satisfies the requirements for a bidirectional iterator type, then *`Off`* may be negative. If `InputIterator` is an input or forward iterator type, *`Off`* must be nonnegative.

The advance function has constant complexity when `InputIterator` satisfies the requirements for a random-access iterator; otherwise, it has linear complexity and so is potentially expensive.

### Example

```cpp
// iterator_advance.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main()
{
    using namespace std;

    list<int> L;
    for (int i = 1; i < 9; ++i)
    {
        L.push_back(i);
    }
    list<int>::iterator LPOS = L.begin();

    cout << "The list L is: ( ";
    for (auto L_Iter = L.begin(); L_Iter != L.end(); L_Iter++)
    {
        cout << *L_Iter << " ";
    }
    cout << ")." << endl;

    cout << "The iterator LPOS initially points to the first element: "
        << *LPOS << "." << endl;

    advance(LPOS, 4);
    cout << "LPOS is advanced 4 steps forward to point"
        << " to the fifth element: "
        << *LPOS << "." << endl;

    advance(LPOS, -3);
    cout << "LPOS is moved 3 steps back to point to the "
        << "2nd element: " << *LPOS << "." << endl;
}
```

```Output
The list L is: ( 1 2 3 4 5 6 7 8 ).
The iterator LPOS initially points to the first element: 1.
LPOS is advanced 4 steps forward to point to the fifth element: 5.
LPOS is moved 3 steps back to point to the 2nd element: 2.
```

## <a name="back_inserter"></a> `back_inserter`

Creates an iterator that can insert elements at the back of a specified container.

```cpp
template <class Container>
back_insert_iterator<Container> back_inserter(Container& Cont);
```

### Parameters

*`Cont`*\
The container into which the back insertion is to be executed.

### Return Value

A `back_insert_iterator` associated with the container object *`Cont`*.

### Remarks

Within the C++ Standard Library, the argument must refer to one of the three sequence containers that have the member function `push_back`: [`deque` Class](../standard-library/deque-class.md), [`list` Class](../standard-library/list-class.md), or [`vector` Class](../standard-library/vector-class.md).

### Example

```cpp
// iterator_back_inserter.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main()
{
    using namespace std;

    vector<int> vec;
    for (int i = 0; i < 3; ++i)
    {
        vec.push_back(i);
    }

    cout << "The initial vector vec is: ( ";
    for (auto vIter = vec.begin(); vIter != vec.end(); vIter++)
    {
        cout << *vIter << " ";
    }
    cout << ")." << endl;

    // Insertions can be done with template function
    back_insert_iterator<vector<int> > backiter(vec);
    *backiter = 30;
    backiter++;
    *backiter = 40;

    // Alternatively, insertions can be done with the
    // back_insert_iterator member function
    back_inserter(vec) = 500;
    back_inserter(vec) = 600;

    cout << "After the insertions, the vector vec is: ( ";
    for (auto vIter = vec.begin(); vIter != vec.end(); vIter++)
    {
        cout << *vIter << " ";
    }
    cout << ")." << endl;
}
```

```Output
The initial vector vec is: ( 0 1 2 ).
After the insertions, the vector vec is: ( 0 1 2 30 40 500 600 ).
```

## <a name="begin"></a> `begin`

Retrieves an iterator to the first element in a specified container.

```cpp
template <class Container>
auto begin(Container& cont)  `
   -> decltype(cont.begin());

template <class Container>
auto begin(const Container& cont)   `
   -> decltype(cont.begin());

template <class Ty, class Size>
Ty *begin(Ty (& array)[Size]);
```

### Parameters

*`cont`*\
A container.

*`array`*\
An array of objects of type `Ty`.

### Return Value

The first two template functions return `cont.begin()`. The first function is non-constant; the second one is constant.

The third template function returns *`array`*.

### Example

We recommend that you use this template function in place of container member `begin()` when more generic behavior is required.

```cpp
// cl.exe /EHsc /nologo /W4 /MTd
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>

template <typename C> void reverse_sort(C& c)
{
    std::sort(std::begin(c), std::end(c), std::greater<>());
}

template <typename C> void print(const C& c)
{
    for (const auto& e : c)
    {
        std::cout << e << " ";
    }
    std::cout << "\n";
}

int main() 
{
    std::vector<int> v = { 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1 };

    print(v);
    reverse_sort(v);
    print(v);

    std::cout << "--\n";

    int arr[] = { 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1 };

    print(arr);
    reverse_sort(arr);
    print(arr);
}
```

```Output
11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
52 40 34 26 20 17 16 13 11 10 8 5 4 2 1
--
23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1
160 106 80 70 53 40 35 23 20 16 10 8 5 4 2 1
```

The function `reverse_sort` supports containers of any kind, in addition to regular arrays, because it calls the non-member version of `begin()`. Coding `reverse_sort` to use the container member `begin()`:

```cpp
template <typename C>
void reverse_sort(C& c) {
    using std::begin;
    using std::end;

    std::sort(c.begin(), c.end(), std::greater<>());

}
```

Then sending an array to it, causes this compiler error:

```Output
error C2228: left of '.begin' must have class/struct/union
```

## <a name="cbegin"></a> `cbegin`

Retrieves a const (read-only) iterator to the first element in a specified container.

```cpp
template <class Container>
auto cbegin(const Container& cont)
   -> decltype(cont.begin());
```

### Parameters

*`cont`*\
A container or `initializer_list`.

### Return Value

A constant `cont.begin()`.

### Remarks

This function works with all C++ Standard Library containers and with [`initializer_list`](../standard-library/initializer-list-class.md).

You can use this member function in place of the `begin()` template function to guarantee that the return value is `const_iterator`. Typically, it's used with the [`auto`](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **`const`**) container or `initializer_list` of any kind that supports `begin()` and `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a> `cend`

Retrieves a const (read-only) iterator to the element that follows the last element in the specified container.

```cpp
template <class Container>
auto cend(const Container& cont)
   -> decltype(cont.end());
```

### Parameters

*`cont`*\
A container or `initializer_list`.

### Return Value

A constant `cont.end()`.

### Remarks

This function works with all C++ Standard Library containers and with [`initializer_list`](../standard-library/initializer-list-class.md).

You can use this member function in place of the [`end()`](../standard-library/iterator-functions.md#end) template function to guarantee that the return value is `const_iterator`. Typically, it's used with the [`auto`](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **`const`**) container or `initializer_list` of any kind that supports `end()` and `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator
```

## <a name="crbegin"></a> `crbegin`

Get a reverse read-only iterator to the elements of the container, starting at the end of the container.

```cpp
template <class C> constexpr auto crbegin(const C& c) -> decltype(std::rbegin(c));
```

### Parameters

*`C`*\
The type of the container.

*`c`*\
A container instance.

### Return value

This iterator returns the elements of the container in reverse order, starting at the end of the container.

:::image type="content" source="media/crbegin-crend-sentinel.png" alt-text="Picture of a vector containing the elements 10, 20, and 30. There's an imaginary box before the leftmost element (the leftmost element contains the number 10) that represents the sentinel. It's labeled crend(). The first element in the vector contains the number 10, and is labeled 'last element'. The rightmost element in the vector contains 30 and is labeled crbegin().":::

### Example: `crbegin`

```cpp
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{10, 20, 30};
    for (auto i = std::crbegin(v); i != std::crend(v); ++i)
    {
        std::cout << *i << ' '; // outputs 30 20 10
    }
    // v[1] = 100; // error because the iterator is const
}
```

```output
30 20 10
```

## <a name="crend"></a> `crend`

Get the sentinel at the end of a read-only reversed sequence of elements.

```cpp
template <class C> constexpr auto crend(const C& c) -> decltype(std::rend(c));
```

### Parameters

*`C`*\
The type of the container.

*`c`*\
A container instance.

### Return value

The sentinel follows the last element in a reversed view of the container.

:::image type="content" source="media/crbegin-crend-sentinel.png" alt-text="Picture of a vector containing the elements 10, 20, and 30. There's an imaginary box before the leftmost element (the leftmost element contains the number 10) that represents the sentinel. It's labeled crend(). The first element in the vector contains the number 10, and is labeled 'last element'. The rightmost element in the vector contains 30 and is labeled crbegin().":::

### `crend`example

```cpp
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{10, 20, 30};
    auto vi = std::crend(v);
    --vi; // get off the sentinel and onto the last element in the reversed range
    std::cout << *vi; // outputs 10
    // vi[0] = 300; // error because the iterator is const
}
```

```output
10
```

## <a name="data"></a> `data`

Get a pointer to the first element in the container.

```cpp
1) template <class C> constexpr auto data(C& c) -> decltype(c.data());
2) template <class C> constexpr auto data(const C& c) -> decltype(c.data());
3) template <class T, size_t N> constexpr T* data(T (&array)[N]) noexcept;
4) template <class E> constexpr const E* data(initializer_list<E> il) noexcept;
```

### Parameters

*`C`*\
The type of the container.

*`c`*\
An instance of a container.

*`E`*\
The element type of the initializer list.

*`il`*\
An initializer list.

*`N`*\
The number of elements in the array.

*`T`*\
The type of the data in the array.

### Return value

1, 2\) A pointer, based on the type of the container, to the first element. For example, if the container is a vector of integers, the type of the return value is an `int *`.

3\) A pointer to the first element as an array.

4\) A pointer to the first element of the initializer list.

### Example `data`

```cpp
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{ 10, 20, 30 };
    std::string src{ "a string" };

    const char *charPtr = std::data(src);
    int* intPtr = std::data(v);
    std::cout << charPtr << ", " << *intPtr << '\n'; // a string, 10
}
```

```output
a string, 10
```

## <a name="distance"></a> `distance`

Determines the number of increments between the positions addressed by two iterators.

```cpp
template <class InputIterator>
typename iterator_traits<InputIterator>::difference_type distance(InputIterator first, InputIterator last);
```

### Parameters

*`first`*\
The first iterator whose distance from the second is to be determined.

*`last`*\
The second iterator whose distance from the first is to be determined.

### Return Value

The number of times that *`first`* must be incremented until it equals *`last`*.

### Remarks

The distance function has constant complexity when `InputIterator` satisfies the requirements for a random-access iterator; otherwise, it has linear complexity and so is potentially expensive.

### Example

```cpp
// iterator_distance.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main()
{
    using namespace std;

    list<int> L;
    for (int i = -1; i < 9; ++i)
    {
        L.push_back(2 * i);
    }
    list <int>::iterator L_Iter, LPOS = L.begin();

    cout << "The list L is: ( ";
    for (L_Iter = L.begin(); L_Iter != L.end(); L_Iter++)
    {
        cout << *L_Iter << " ";
    }
    cout << ")." << endl;

    cout << "The iterator LPOS initially points to the first element: "
         << *LPOS << "." << endl;

    advance(LPOS, 7);
    cout << "LPOS is advanced 7 steps forward to point "
        << " to the eighth element: "
        << *LPOS << "." << endl;

    list<int>::difference_type Ldiff;
    Ldiff = distance(L.begin(), LPOS);
    cout << "The distance from L.begin( ) to LPOS is: "
        << Ldiff << "." << endl;
}
```

```Output
The list L is: ( -2 0 2 4 6 8 10 12 14 16 ).
The iterator LPOS initially points to the first element: -2.
LPOS is advanced 7 steps forward to point  to the eighth element: 12.
The distance from L.begin( ) to LPOS is: 7.
```

## <a name="empty"></a> `empty`

```cpp
template <class C> constexpr auto empty(const C& c) -> decltype(c.empty());
template <class T, size_t N> constexpr bool empty(const T (&array)[N]) noexcept;
template <class E> constexpr bool empty(initializer_list<E> il) noexcept;
```

### Parameters

*`C`*\
The type of the container.

*`c`*\
An instance of a container.

*`E`*\
The element type of the initializer list.

*`il`*\
An initializer list.

*`N`*\
The number of elements in the array.

*`T`*\
The type of the data in the array.

### Return value

Returns `true` if the container has no elements; otherwise `false.`

### Example

```cpp
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{ 10,20,30 };
    std::vector<int> v2;

    std::cout << std::boolalpha << std::empty(v); // outputs false
    std::cout << std::boolalpha << ", " << std::empty(v2); // outputs true
}
```

```output
false, true
```

## <a name="end"></a> `end`

Retrieves an iterator to the element that follows the last element in the specified container.

```cpp
template <class Container>
auto end(Container& cont)
   -> decltype(cont.end());

template <class Container>
auto end(const Container& cont)
   -> decltype(cont.end());

template <class Ty, class Size>
Ty *end(Ty (& array)[Size]);
```

### Parameters

*`cont`*\
A container.

*`array`*\
An array of objects of type `Ty`.

### Return Value

The first two template functions return `cont.end()` (the first is non-constant and the second is constant).

The third template function returns `array + Size`.

### Remarks

For a code example, see [`begin`](../standard-library/iterator-functions.md#begin).

## <a name="front_inserter"></a> `front_inserter`

Creates an iterator that can insert elements at the front of a specified container.

```cpp
template <class Container>
front_insert_iterator<Container> front_inserter(Container& Cont);
```

### Parameters

*`Cont`*\
The container object whose front is having an element inserted.

### Return Value

A `front_insert_iterator` associated with the container object *`Cont`*.

### Remarks

The member function [front_insert_iterator](../standard-library/front-insert-iterator-class.md#front_insert_iterator) of the front_insert_iterator class may also be used.

Within the C++ Standard Library, the argument must refer to one of the two sequence containers that have the member function `push_back`: [deque Class](../standard-library/deque-class.md) or "list Class".

### Example

```cpp
// iterator_front_inserter.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main()
{
    using namespace std;

    list<int> L;
    for (int i = -1; i < 9; ++i)
    {
        L.push_back(i);
    }

    cout << "The list L is:\n ( ";
    for (auto L_Iter = L.begin(); L_Iter != L.end(); L_Iter++)
    {
        cout << *L_Iter << " ";
    }
    cout << ")." << endl;

    // Using the template function to insert an element
    front_insert_iterator<list <int>> Iter(L);
    *Iter = 100;

    // Alternatively, you may use the front_insert member function
    front_inserter(L) = 200;

    cout << "After the front insertions, the list L is:\n ( ";
    for (auto L_Iter = L.begin(); L_Iter != L.end(); L_Iter++)
    {
        cout << *L_Iter << " ";
    }
    cout << ")." << endl;
}
```

```Output
The list L is:
( -1 0 1 2 3 4 5 6 7 8 ).
After the front insertions, the list L is:
( 200 100 -1 0 1 2 3 4 5 6 7 8 ).
```

## <a name="inserter"></a> `inserter`

A helper template function that lets you use `inserter(Cont, Where)` instead of `insert_iterator<Container>(Cont, Where)`.

```cpp
template <class Container>
insert_iterator<Container>
inserter(
    Container& Cont,
    typename Container::iterator Where);
```

### Parameters

*`Cont`*\
The container to which new elements are to be added.

*`Where`*\
An iterator locating the point of insertion.

### Remarks

The template function returns [`insert_iterator`](../standard-library/insert-iterator-class.md#insert_iterator)`<Container>(Cont, Where)`.

### Example

```cpp
// iterator_inserter.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main()
{
    using namespace std;

    list<int> L;
    for (int i = 2; i < 5; ++i)
    {
        L.push_back(10 * i);
    }

    cout << "The list L is:\n ( ";
    for (auto L_Iter = L.begin(); L_Iter != L.end(); L_Iter++)
    {
        cout << *L_Iter << " ";
    }
    cout << ")." << endl;

    // Using the template version to insert an element
    insert_iterator<list<int>> Iter(L, L.begin());
    *Iter = 1;

    // Alternatively, using the member function to insert an element
    inserter(L, L.end()) = 500;

    cout << "After the insertions, the list L is:\n ( ";
    for (auto L_Iter = L.begin(); L_Iter != L.end(); L_Iter++)
    {
        cout << *L_Iter << " ";
    }
    cout << ")." << endl;
}
```

```Output
The list L is:
( 20 30 40 ).
After the insertions, the list L is:
( 1 20 30 40 500 ).
```

## <a name="make_checked_array_iterator"></a> `make_checked_array_iterator`

Creates a [checked_array_iterator](../standard-library/checked-array-iterator-class.md) that can be used by other algorithms.

> [!NOTE]
> This function is a Microsoft extension of the C++ Standard Library. Code implemented by using this function is not portable to C++ Standard build environments that do not support this Microsoft extension.

```cpp
template <class Iter>
checked_array_iterator<Iter>
    make_checked_array_iterator(
Iter Ptr,
    size_t Size,
    size_t Index = 0);
```

### Parameters

*`Ptr`*\
A pointer to the destination array.

*`Size`*\
The size of the destination array.

*`Index`*\
Optional index into the array.

### Return Value

An instance of `checked_array_iterator`.

### Remarks

The `make_checked_array_iterator` function is defined in the `stdext` namespace.

This function takes a raw pointer—which would ordinarily cause concern about bounds overrun—and wraps it in a [checked_array_iterator](../standard-library/checked-array-iterator-class.md) class that does checking. Because that class is marked as checked, the C++ Standard Library doesn't warn about it. For more information and code examples, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

In the following example, a [vector](../standard-library/vector-class.md) is created and populated with 10 items. The contents of the vector are copied into an array by using the copy algorithm, and then `make_checked_array_iterator` is used to specify the destination. This is followed by an intentional violation of the bounds checking so that a debug assertion failure is triggered.

```cpp
// make_checked_array_iterator.cpp
// compile with: /EHsc /W4 /MTd

#include <algorithm>
#include <iterator> // stdext::make_checked_array_iterator
#include <memory> // std::make_unique
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename C> void print(const string& s, const C& c)
{
    cout << s;

    for (const auto& e : c) 
    {
        cout << e << " ";
    }

    cout << endl;
}

int main()
{
    const size_t dest_size = 10;
    // Old-school but not exception safe, favor make_unique<int[]>
    // int* dest = new int[dest_size];
    unique_ptr<int[]> updest = make_unique<int[]>(dest_size);
    int* dest = updest.get(); // get a raw pointer for the demo

    vector<int> v;

    for (int i = 0; i < dest_size; ++i) 
    {
        v.push_back(i);
    }
    print("vector v: ", v);

    copy(v.begin(), v.end(), stdext::make_checked_array_iterator(dest, dest_size));

    cout << "int array dest: ";
    for (int i = 0; i < dest_size; ++i)
    {
        cout << dest[i] << " ";
    }
    cout << endl;

    // Add another element to the vector to force an overrun.
    v.push_back(10);

    // ! The next line causes a debug assertion when it executes.
    copy(v.begin(), v.end(), stdext::make_checked_array_iterator(dest, dest_size));
}
```

## <a name="make_move_iterator"></a> `make_move_iterator`

Creates a `move iterator` that contains the provided iterator as the `stored` iterator.

```cpp
template <class Iterator>
move_iterator<Iterator>
make_move_iterator(const Iterator& It);
```

### Parameters

*`It`*\
The iterator stored in the new move iterator.

### Remarks

The template function returns `move_iterator` `<Iterator>(_It)`.

## <a name="make_unchecked_array_iterator"></a> `make_unchecked_array_iterator`

Creates an [unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md) that can be used by other algorithms.

> [!NOTE]
> This function is a Microsoft extension of the C++ Standard Library. Code implemented by using this function is not portable to C++ Standard build environments that do not support this Microsoft extension.

```cpp
template <class Iter>
unchecked_array_iterator<Iter>
    make_unchecked_array_iterator(Iter Ptr);
```

### Parameters

*`Ptr`*\
A pointer to the destination array.

### Return Value

An instance of `unchecked_array_iterator`.

### Remarks

The `make_unchecked_array_iterator` function is defined in the `stdext` namespace.

This function takes a raw pointer and wraps it in a class that performs no checking and therefore optimizes away to nothing, but it also silences compiler warnings such as [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Therefore, this is a targeted way to deal with unchecked-pointer warnings without globally silencing them or incurring the cost of checking. For more information and code examples, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

In the following example, a [vector](../standard-library/vector-class.md) is created and populated with 10 items. The contents of the vector are copied into an array by using the copy algorithm, and then `make_unchecked_array_iterator` is used to specify the destination.

```cpp
// make_unchecked_array_iterator.cpp
// compile with: /EHsc /W4 /MTd

#include <algorithm>
#include <iterator> // stdext::make_unchecked_array_iterator
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename C> void print(const string& s, const C& c)
{
    cout << s;

    for (const auto& e : c) 
    {
        cout << e << " ";
    }

    cout << endl;
}

int main()
{
    const size_t dest_size = 10;
    int* dest = new int[dest_size];
    vector<int> v;

    for (int i = 0; i < dest_size; ++i) 
    {
        v.push_back(i);
    }
    print("vector v: ", v);

    // COMPILER WARNING SILENCED: stdext::unchecked_array_iterator is marked as checked in debug mode
    // (it performs no checking, so an overrun will trigger undefined behavior)
    copy(v.begin(), v.end(), stdext::make_unchecked_array_iterator(dest));

    cout << "int array dest: ";
    for (int i = 0; i < dest_size; ++i)
    {
        cout << dest[i] << " ";
    }
    cout << endl;

    delete[] dest;
}
```

```output
vector v: 0 1 2 3 4 5 6 7 8 9
int array dest: 0 1 2 3 4 5 6 7 8 9
```

## <a name="next"></a> `next`

Iterates a specified number of times and returns the new iterator position.

```cpp
template <class InputIterator>
InputIterator next(
    InputIterator first,
    typename iterator_traits<InputIterator>::difference_type off = 1);
```

### Parameters

*`first`*\
The current position.

*`off`*\
The number of times to iterate.

### Return Value

Returns the new iterator position after iterating *`off`* times.

### Remarks

The template function returns `next` incremented *`off`* times

## <a name="prev"></a> `prev`

Iterates in reverse a specified number of times and returns the new iterator position.

```cpp
template <class BidirectionalIterator>
BidirectionalIterator prev(
    BidirectionalIterator first,
    typename iterator_traits<BidirectionalIterator>::difference_type off = 1);
```

### Parameters

*`first`*\
The current position.

*`off`*\
The number of times to iterate.

### Remarks

The template function returns `next` decremented `off` times.

## <a name="rbegin"></a> `rbegin`

Get an iterator, which returns the elements of the container in reverse order.

```cpp
template <class C> constexpr auto rbegin(C& c) -> decltype(c.rbegin());
template <class C> constexpr auto rbegin(const C& c) -> decltype(c.rbegin());
```

### Parameters

*`C`*\
The type of the container.

*`c`*\
A container instance.

### Return value

The returned iterator presents the elements of the container in reverse order, starting at the end of the reversed range.

:::image type="content" source="media/rbegin-rend-sentinel.png" alt-text="Picture of a vector containing the elements 10, 20, and 30. There's an imaginary box before the leftmost element (the leftmost element contains the number 10) that represents the sentinel. It's labeled rend(). The first element in the vector contains the number 10, and is labeled 'last element'. The rightmost element in the vector contains 30 and is labeled rbegin().":::

### Example `rbegin`

```cpp
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{ 10, 20, 30 };

	for (auto e = std::rbegin(v); e != std::rend(v); ++e)
	{
		std::cout << *e << ' '; // outputs 30 20 10
	}
}
```

```output
30 20 10
```

## <a name="rend"></a> `rend`

Get the sentinel at the end of a reversed sequence of elements.

```cpp
template <class C> constexpr auto rend(C& c)-> decltype(c.rend());
template <class C> constexpr auto rend(const C& c) -> decltype(c.rend());
```

### Parameters

*`C`*\
The type of the container.

*`c`*\
A container instance.

### Return value

A reverse iterator to the sentinel at the end of the container. The sentinel follows the last element in the reversed view of the container:

:::image type="content" source="media/rbegin-rend-sentinel.png" alt-text="Picture of a vector containing the elements 10, 20, and 30. There's an imaginary box before the leftmost element (the leftmost element contains the number 10) that represents the sentinel. It's labeled rend(). The first element in the vector contains the number 10, and is labeled 'last element'. The rightmost element in the vector contains 30 and is labeled rbegin().":::

### `rend`example

```cpp
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{10, 20, 30};
    auto vi = std::rend(v);
    --vi; // get off the sentinel and onto the last element in the reversed range
    std::cout << *vi; // outputs 10
}
```

```output
10
```

## <a name="size"></a> `size`

```cpp
template <class C> constexpr auto size(const C& c)
    -> decltype(c.size());
template <class T, size_t N> constexpr size_t size(const T (&array)[N]) noexcept;
```

### Parameters

*`C`*\
The type of the container.

*`c`*\
An instance of a container.

*`N`*\
The number of elements in the array.

*`T`*\
The type of the data in the array.

### Return value

The number of elements in the container as an unsigned integer-like value.

### Example `size`

```cpp
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{ 10, 20, 30 };
    size_t s = std::size(v);
    std::cout << s; // outputs 3
}
```

```output
3
```