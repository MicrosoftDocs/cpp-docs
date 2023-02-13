---
description: "Learn more about ranges alias templates."
title: "<ranges> alias templates"
ms.date: 01/28/2023
f1_keywords: ["ranges/std::ranges::borrowed_iterator_t", "ranges/std::ranges::borrowed_subrange_t", "ranges/std::ranges::dangling", "ranges/std::ranges::iterator_t", "ranges/std::ranges::range_difference_t", "ranges/std::ranges::range_reference_t", "ranges/std::ranges::range_rvalue_reference_t", "ranges/std::ranges::range_size_t", "ranges/std::ranges::range_value_t", "ranges/std::ranges::sentinel_t"]
helpviewer_keywords: ["std::ranges [C++], ranges::borrowed_iterator_t", "std::ranges [C++], ranges::borrowed_subrange_t", "std::ranges [C++], ranges::dangling", "std::ranges [C++], ranges::iterator_t", "std::ranges [C++], ranges::range_difference_t", "std::ranges [C++], ranges::range_reference_t", "std::ranges [C++], ranges::range_rvalue_reference_t", "std::ranges [C++], ranges::range_size_t", "std::ranges [C++], ranges::range_value_t", "std::ranges [C++], ranges::sentinel_t"]
---
# `<ranges>` alias templates

An alias template is an alias for another type, which can make code more readable. For example, the following alias, `conditional_t`, is an alias for either `borrowed_range` or `dangling` range, depending on the kind of `range` that's passed in:

```cpp
// requires /std:c++20, or later

#include <iostream>
#include <list>
#include <span>
#include <algorithm>
#include <ranges>
#include <type_traits>

using namespace std;

// Define an alias template called my_iterator_t
// If the provided range R is a borrowed_range, then the 
// returned type is iterator_t<R>; otherwise, ranges::dangling
template<ranges::range R>
using my_iterator_t = conditional_t<
    ranges::borrowed_range<R>,
    ranges::iterator_t<R>, ranges::dangling>;

int main()
{
    my_iterator_t<list<int>> aDanglingRange; // list<> isn't a borrowed_range
    constexpr bool same = same_as<
        decltype(aDanglingRange),
        ranges::dangling>; // true

    my_iterator_t<span<int, 5>> anIterator_t; // span<> is a borrowed_range
    constexpr bool same2 = same_as<
        decltype(anIterator_t),
        ranges::iterator_t<span<int, 5>>>; // true

    cout << boolalpha << same << "," << same2; // outputs true, true
}
```

For more information about alias templates, see [Aliases and typedefs](../cpp/aliases-and-typedefs-cpp.md).

The `<algorithm>` header defines the following alias templates that determine the types of iterators and sentinels for a `range`:

| Alias template | Description |
|--|--|
| [`borrowed_iterator_t`](#borrowed_iterator_t)<sup>C++20</sup> | Determine if an iterator returned for a `range` refers to a range whose lifetime has ended. |
| [`borrowed_subrange_t`](#borrowed_subrange_t)<sup>C++20</sup> | Determine if a `subrange` returned for a `range` refers to a range whose lifetime has ended.|
| [`dangling`](#dangling)<sup>C++20</sup> | Indicates that the returned iterator of a `range`/`subrange` outlives the lifetime of the `range`/`subrange` it refers to. |
| [`iterator_t`](#iterator_t)<sup>C++20</sup> | Returns the iterator type for the specified range. |
| [`range_difference_t`](#range_difference_t)<sup>C++20</sup> | Returns the difference type for the specified range's iterator. |
| [`range_reference_t`](#range_reference_t)<sup>C++20</sup> | Returns the reference type for the specified range's iterator. |
| [`range_rvalue_reference_t`](#range_rvalue_reference_t)<sup>C++20</sup> | Returns the rvalue reference type for the specified range's iterator. In other words, the rvalue reference type of the range's elements. |
| [`range_size_t`](#range_size_t)<sup>C++20</sup> | Returns the type used to report the specified range's `size`. |
| [`range_value_t`](#range_value_t)<sup>C++20</sup> | Returns the value type of specified range's iterator. Or in other words, the type of the elements in the range. |
| [`sentinel_t`](#sentinel_t)<sup>C++20</sup> | Returns the sentinel type for the specified range. |

## `borrowed_iterator_t`

When an algorithm function that returns an iterator is called with an rvalue `range` argument, the range's lifetime could end following the call. That means the returned iterator could refer to elements whose lifetimes have ended. Using a dangling iterator results in undefined behavior.

This template alias returns `ranges::dangling` to indicate that this is the situation for the given range argument, or `std::ranges::iterator_t<R>` to indicate that it's safe to use the returned iterator because the range it refers to models `borrowed_range` or the range was passed as an lvalue.

```cpp
template<ranges::range R>
using borrowed_iterator_t = conditional_t<ranges::borrowed_range<R>,
    ranges::iterator_t<R>, ranges::dangling>;
```

### Parameters

*`R`*\
The range to test.

### Remarks

The lifetime of an rvalue range can end following a function call whether the range models `borrowed_range` or not. If it's a `borrowed_range`, you may be able to continue to use the iterators with well-defined behavior regardless of when the range's lifetime ends.

Cases where this isn't true are, for example, for containers like `vector` or `list` because when the container's lifetime ends, the iterators would refer to elements that have been destroyed.

You can continue to use the iterators for a `borrowed_range`, for example, for a `view` like `iota_view<int>{0, 42}` whose iterators are over set of values that aren't subject to being destroyed because they're generated on demand.

If an algorithm function is passed a range whose iterators depend on its lifetime, `ranges::dangling` is returned instead of an iterator or subrange, so potential misuse is detected at compile time.

### Example: `borrowed_iterator_t`

The following example shows how `borrowed_iterator_t` detects a dangling iterator. The function `ranges::max_element()` uses this template alias to determine the return type:

```cpp
// requires /std:c++20, or later

#include <vector>
#include <span>
#include <ranges>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Not dangling ------------------

    int a[] = {0,1,2,3};

    // not dangling even though an rvalue because span models ranges::borrowed
    auto result1 = ranges::max_element(span{a});
    cout << boolalpha << ranges::borrowed_range<decltype(span{a})> << endl; // outputs true because the temporary models ranges::borrowed
    cout << same_as<decltype(result1), ranges::dangling> << endl; // outputs false because the result isn't dangling

    vector<int> v{0,1,2,3}; // doesn't model ranges::borrowed
    auto result2 = ranges::max_element(v); // Yet not dangling because passed as an lvalue
    cout << same_as<decltype(result2), ranges::dangling> << endl; // outputs false because the result isn't dangling
    
    // Dangling ------------------

    auto result3 = ranges::max_element(vector{0,1,2,3}); // dangling because vector doesn't model ranges::borrowed and is passed as an rvalue
    cout << same_as<decltype(result3), ranges::dangling>; // outputs true because the result is dangling
}
```

```output
true
false
false
true
```

## `borrowed_subrange_t`

When an algorithm function that returns a `subrange` is called with an rvalue `range` argument, the range's lifetime could end following the call. That means the returned `subrange` could refer to elements whose lifetimes have ended. Using a dangling `subrange` results in undefined behavior.

This template alias either returns `ranges::dangling` to indicate that this could be the situation for the given range argument, or `subrange<ranges::iterator_t<R>>` to indicate that it's safe to use the returned subrange because either the range whose elements it refers to models `borrowed_range` or the range was passed as an lvalue.

```cpp
template<ranges::range R>
using borrowed_subrange_t = conditional_t<ranges::borrowed_range<R>,
    ranges::subrange<ranges::iterator_t<R>>, ranges::dangling>;
```

### Parameters

*`R`*\
The range to test.

### Remarks

The lifetime of an rvalue range can end following a function call whether the range models `borrowed_range` or not. If it's a `borrowed_range`, you may be able to continue to use the iterators with well-defined behavior regardless of when the range's lifetime ends.

Cases where this isn't true are, for example, for containers like `vector` or `list` because when the container's lifetime ends, the iterators would refer to elements that have been destroyed.

You can continue to use the iterators for a `borrowed_range`, for example, for a `view` like `iota_view<int>{0, 42}` whose iterators are over set of values that aren't subject to being destroyed because they're generated on demand.

If an algorithm function is passed a range whose iterators depend on its lifetime, `ranges::dangling` is returned instead of a subrange so that potential misuse is detected at compile time.

### Example: `borrowed_subrange_t`

The following example shows how `borrowed_subrange_t` detects a dangling iterator because `equal_range()` and `max_element` use this template alias to determine the return type:

```cpp
// requires /std:c++20, or later

#include <vector>
#include <iostream>
#include <algorithm>
#include <span>
#include <ranges>

int main()
{
    using namespace std;

    // Not dangling ------------------

    vector vec{0, 1, 1, 2};

    auto result1 = ranges::equal_range(span{vec}, 1); // not dangling even though passing as an rvalue because span models borrowed_range
    cout << boolalpha << ranges::borrowed_range<decltype(span{vec})> << endl;  // true because the temporary is a borrowed range
    cout << boolalpha << same_as<decltype(result1), ranges::dangling> << endl; // false because the result isn't dangling

    // result2 isn't dangling even though vec doesn't model ranges::borrowed because it's an lvalue
    auto result2 = ranges::max_element(vec);
    cout << boolalpha << ranges::borrowed_range<decltype(vec)> << endl;  // false because vector isn't a borrowed_range
    cout << boolalpha << same_as<decltype(result2), ranges::dangling> << endl; // false because the result isn't dangling

    // Dangling -----------------------

    // result3 is dangling because the temporary is an rvalue that doesn't model borrowed_range
    auto result3 = ranges::max_element(vector{0,1,1,2});
    cout << boolalpha << same_as<decltype(result3), ranges::dangling> << endl; // true because the result is dangling
}
```

```output
true
false
false
false
true
```

## `dangling`

If an algorithm function that returns an iterator or a `subrange` is called with an rvalue `range` argument, the range argument's lifetime could end following the call. That means the returned iterator or `subrange` could refer to elements whose lifetimes have ended. Using a dangling iterator or `subrange` results in undefined behavior.

If an algorithm function is passed a range whose iterators depend on its lifetime, `ranges::dangling` is returned instead of an iterator or subrange so that potential misuse is detected at compile time.

```cpp
1) constexpr dangling() noexcept = default;
2) template<class... Args>
constexpr dangling(Args&&...) noexcept {}
```

### Parameters

*`Args`*\
A variable number of non-`void` types. They have no effect. The arguments are a convenience so that you don't need different code paths to handle constructing the iterator type versus the `dangling` type. This is useful when the passed in value indicates that `dangling` should be returned instead of an iterator.

### Example: `dangling`

The following example shows how `max_element` detects a dangling iterator.

```cpp
// requires /std:c++20, or later

#include <vector>
#include <iostream>
#include <ranges>
#include <algorithm>

using namespace std;

int main()
{
    auto result1 = ranges::max_element(vector{1,2,3}); // dangling because vector doesn't model ranges::borrowed and is passed as an rvalue
    cout << boolalpha << same_as<decltype(result1), ranges::dangling> << endl; // outputs true because the result is dangling

    vector<int> v{3,4,5};
    auto result2 = ranges::max_element(v); // Not dangling because passed as an lvalue
    cout << same_as<decltype(result2), ranges::dangling>; // outputs false because the result isn't dangling
}
```

```output
true
false
```

## `iterator_t`

This template alias returns the iterator type used to iterate over the provided range type.

```cpp
template<class T>
using iterator_t = decltype(ranges::begin(declval<T&>()));
```

### Parameters

*`T`*\
The range type to get the iterator type for.

### Example: `iterator_t`

The following example shows how `iterator_t` can be used to declare an iterator for a vector:

```cpp
// requires /std:c++20, or later

#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    using namespace std;

    vector<int> v{1,2,3};

    ranges::iterator_t<decltype(v)> it = v.begin();
    cout << *it << "\n"; // outputs 1
    cout << typeid(it).name(); // outputs class _Vector_iterator<class _Vector_val<struct _Simple_types<int>>>
}
```

```output
1
class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >
```

## `range_difference_t`

Returns the difference type for the specified range's iterator.

```cpp
template<range R>
using range_difference_t = iter_difference_t<iterator_t<R>>;
```

### Parameters

*`R`*\
The range whose iterator will provide the difference type.

### Example: `range_difference_t`

The following example shows how `range_difference_t` is used to hold the distance between elements in a range:

```cpp
// requires /std:c++20, or later

#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    using namespace std;

    vector<int> v{1,2,3};

    auto findIt = ranges::find(v, 2);
    // type of distance is ptrdiff_t
    ranges::range_difference_t<decltype(v)> distance = ranges::distance(v.begin(), findIt);
    cout << distance << endl; // outputs 1
}
```

```output
1
```

## `range_reference_t`

Returns the reference type for the specified range's iterator. In other words, the reference type of the range's elements.

```cpp
template <range R>
using range_reference_t = iter_reference_t<ranges::iterator_t<R>>;
```

### Parameters

*`R`*\
The range for which the reference type of its iterator type is returned.

### Example: `range_reference_t`

The following example shows `range_reference_t` referring to the type of the elements in a range:

```cpp
// requires /std:c++20, or later

#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    using namespace std;

    vector<int> v{1,2,3};

    ranges::range_reference_t<decltype(v)> ref = v[0];

    cout << ref << endl; // outputs 1
    cout << typeid(ref).name() << endl; // outputs int
}
```

```output
1
int
```

## `range_rvalue_reference_t`

Returns the rvalue reference type for the specified range's iterator. In other words, the rvalue reference type of the range's elements.

```cpp
template <range R>
using range_rvalue_reference_t = iter_reference_t<ranges::iterator_t<R>>;
```

### Parameters

*`R`*\
The range to get the rvalue reference type to its iterator type.

### Example: `range_rvalue_reference_t`

The following example shows `range_rvalue_reference_t` referring to a rvalue type of the elements in a range:

```cpp
// requires /std:c++20, or later

#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    using namespace std;

    vector<int> v{1,2,3};

    ranges::range_rvalue_reference_t<decltype(v)> elementRvalueType = v[0] * 10; // elementRvalueType is int&& 

    cout << elementRvalueType << endl; // outputs 10
    cout << typeid(elementRvalueType).name() << endl; // outputs int
}
```

```output
10
int
```

## `range_size_t`

Returns the type of the `size` function for the specified [`sized_range`](range-concepts.md#sized_range).

```cpp
template <range R>
using range_size_t = iter_reference_t<ranges::iterator_t<R>>;
```

### Parameters

*`R`*\
The range to get the type of its `size` function.

### Example: `range_size_t`

The following example shows `range_size_t` referring to the number of elements in a range:

```cpp
// requires /std:c++20, or later

#include <vector>
#include <iostream>
#include <ranges>

int main()
{
    using namespace std;

    vector<int> v{1,2,3};

    ranges::range_size_t<decltype(v)> size = v.size();
    cout << size << endl; // outputs 3
    cout << typeid(size).name(); // outputs unsigned __int64
}
```

```output
3
unsigned __int64
```

## `range_value_t`

Returns the value type of specified range's iterator. Or in other words, the type of the elements in the range.

```cpp
template <ranges::range R>
using range_value_t = iter_value_t<ranges::iterator_t<R>>;
```

### Parameters

*`R`*\
The range to get the value type of its iterator.

### Example: `range_value_t`

The following example shows how `range_value_t` refers to the type of elements in a range:

```cpp
// requires /std:c++20, or later

#include <vector>
#include <ranges>
#include <iostream>

int main()
{
    using namespace std;

    vector<int> v{1,2,3};
    ranges::range_value_t<decltype(v)> elementType = v[2]; // elementType is an int 

    cout << elementType << endl; // outputs 3
    cout << typeid(elementType).name() << endl; // outputs int
}
```

```output
3
unsigned int
```

## `sentinel_t`

Returns the sentinel type for the specified range.

```cpp
template <range R>
using sentinel_t = decltype(ranges::end(declval<R&>()));
```

### Parameters

*`R`*\
The range to get the sentinel type for.

### Example: `sentinel_t`

The following example shows using `sentinel_t` to determine whether the iterator type and sentinel type are the same:

```cpp
// requires /std:c++20, or later

#include <iostream>
#include <list>
#include <ranges>

int main()
{
    using namespace std;

    list myList{1, 2, 3};
    ranges::subrange count = std::views::counted(myList.begin(), myList.size());

    ranges::iterator_t<decltype(count)> first;
    ranges::sentinel_t<decltype(count)> last;

    // The iterator type and the sentinel type of a subrange
    // obtained from views::counted are not the same
    cout << boolalpha << is_same<decltype(first), decltype(last)>::value << endl; // outputs false
    cout << "iter: " << typeid(first).name() << "\n\n end: " << typeid(last).name() << endl;
}
```

```output
false
iter: class std::counted_iterator<class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<int> > > >

 end: struct std::default_sentinel_t
```

## See also

[`<ranges>`](ranges.md)\
[Range adaptors](range-adaptors.md)\
[View classes](view-classes.md)