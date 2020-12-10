---
description: "Learn more about: tuple_element Class"
title: "tuple_element Class"
ms.date: "11/04/2016"
f1_keywords: ["utility/std::tuple_element"]
helpviewer_keywords: ["std::tuple_element"]
ms.assetid: 4c51a6c1-ce81-462f-8c6c-291d69f2b77c
---
# tuple_element Class

Wraps a `tuple` element. Specializations wrap `array` elements and `pair` elements.

## Syntax

```cpp
// CLASS tuple_element (find element by index)
template <size_t Index, class Tuple>
   struct tuple_element;

// tuple_element for const
template <size_t Index, class Tuple>
   struct tuple_element<Index, const Tuple>;

// tuple_element for volatile
template <size_t Index, class Tuple>
   struct tuple_element<Index, volatile Tuple>;

// tuple_element for const volatile
template <size_t Index, class Tuple>
   struct tuple_element<Index, const volatile Tuple>;

// Helper typedef
template <size_t Index, class Tuple>
   using tuple_element_t = typename tuple_element<Index, Tuple>::type;

// Specialization for arrays
template <size_t Index, class Elem, size_t Size>
   struct tuple_element<Index, array<Elem, Size>>;

// Specializations for pairs
// struct to determine type of element 0 in pair
template <class T1, class T2>
   struct tuple_element<0, pair<T1, T2>>;

// struct to determine type of element 1 in pair
template <class T1, class T2>
   struct tuple_element<1, pair<T1, T2>>;
```

### Parameters

*Index*\
The index of the designated element.

*Tuple*\
The type of the tuple.

*Elem*\
The type of an array element.

*Size*\
The size of the array.

*T1*\
The type of the first element in a pair.

*T2*\
The type of the second element in a pair.

## Remarks

The class template `tuple_element` has a nested typedef `type` that is a synonym for the type at index *Index* of the tuple type *Tuple*.

The typedef `tuple_element_t` is a convenient alias for `tuple_element<Index, Tuple>::type`.

The class template specialization for arrays provides an interface to an `array` as a tuple of `Size` elements, each of which has the same type. Each specialization has a nested typedef `type` that is a synonym for the type of the *Index* element of the `array`, with any const-volatile qualifications preserved.

The template specializations for `pair` types each provide a single member typedef, `type`, which is a synonym for the type of the element at the specified position in the pair, with any const and/or volatile qualifications preserved. The typedef `tuple_element_t` is a convenient alias for `tuple_element<N, pair<T1, T2>>::type`.

Use the [get Function &lt;utility&gt;](../standard-library/utility-functions.md#get) to return the element at a specified position, or of a specified type.

## Example: Get an element from a tuple

```cpp
#include <tuple>
#include <string>
#include <iostream>

using namespace std;
typedef tuple<int, double, string> MyTuple;

int main() {
    MyTuple c0{ 0, 1.5, "Tail" };

    tuple_element_t<0, MyTuple> val = get<0>(c0); //get by index
    tuple_element_t<1, MyTuple> val2 = get<1>(c0);
    tuple_element_t<2, MyTuple> val3 = get<string>(c0); // get by type

    cout << val << " " << val2 << " " << val3 << endl;
}
```

```Output
0 1.5 Tail
```

## Example: Get an element from an array

```cpp
#include <array>
#include <iostream>

using namespace std;
typedef array<int, 4> MyArray;

int main()
{
    MyArray c0 { 0, 1, 2, 3 };

    for (const auto& e : c0)
    {
        cout << e << " ";
    }
    cout << endl;

    // display first element "0"
    tuple_element<0, MyArray>::type val = c0.front();
    cout << val << endl;
}
```

```Output
0 1 2 3
0
```

## Example: Get an element from a pair

```cpp
#include <utility>
#include <iostream>

using namespace std;

typedef pair<int, double> MyPair;
int main() {
    MyPair c0(0, 1.333);

    // display contents "0 1"
    cout << get<0>(c0) << " ";
    cout << get<1>(c0) << endl;

    // display first element "0 " by index
    tuple_element<0, MyPair>::type val = get<0>(c0);
    cout << val << " ";

    // display second element by type
    tuple_element<1, MyPair>::type val2 = get<double>(c0);
    cout << val2 << endl;
}
```

```Output
0 1.333
0 1.333
```

## Requirements

**Header:** \<tuple>

**Header:** \<array> (for array specialization)

**Header:** \<utility> (for pair specializations)

**Namespace:** std
