---
description: "Learn more about: utility (STL/CLR)"
title: "utility (STL/CLR)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["<cliext/utility>", "cliext::pair", "cliext::pair::pair", "cliext::pair::first", "cliext::pair::first_type", "cliext::pair::second", "cliext::pair::second_type", "cliext::pair::swap", "cliext::make_pair", "cliext::pair::operator=", "cliext::pair::operator==", "cliext::pair::operator>=", "cliext::pair::operator>", "cliext::pair::operator!=", "cliext::pair::operator<=", "cliext::pair::operator<"]
helpviewer_keywords: ["<utility> header [STL/CLR]", "utility header [STL/CLR]", "<cliext/utility> header [STL/CLR]", "first member [STL/CLR]", "first_type member [STL/CLR]", "second member [STL/CLR]", "second_type member [STL/CLR]", "swap member [STL/CLR]", "make_pair function [STL/CLR]", "pair class [STL/CLR]", "pair member [STL/CLR]", "operator== member [STL/CLR]", "operator= member [STL/CLR]", "operator>= member [STL/CLR]", "operator> member [STL/CLR]", "operator!= member [STL/CLR]", "operator<= member [STL/CLR]", "operator< member [STL/CLR]"]
ms.assetid: fb48cb75-d5ef-47ce-b526-bf60dc86c552
---
# utility (STL/CLR)

Include the STL/CLR header `<cliext/utility>` to define the template class `pair` and several supporting template functions.

## Syntax

```cpp
#include <utility>
```

## Requirements

**Header:** \<cliext/utility>

**Namespace:** cliext

## Declarations

|Class|Description|
|-----------|-----------------|
|[pair (STL/CLR)](#pair)|Wrap a pair of elements.|

|Operator|Description|
|--------------|-----------------|
|[operator== (pair) (STL/CLR)](#op_eq)|Pair equal comparison.|
|[operator!= (pair) (STL/CLR)](#op_neq)|Pair not equal comparison.|
|[operator< (pair) (STL/CLR)](#op_lt)|Pair less than comparison.|
|[operator\<= (pair) (STL/CLR)](#op_lteq)|Pair less than or equal comparison.|
|[operator> (pair) (STL/CLR)](#op_gt)|Pair greater than comparison.|
|[operator>= (pair) (STL/CLR)](#op_gteq)|Pair greater than or equal comparison.|

|Function|Description|
|--------------|-----------------|
|[make_pair (STL/CLR)](#make_pair)|Make a pair from a pair of values.|

## <a name="pair"></a> pair (STL/CLR)

The template class describes an object that wraps a pair of values.

### Syntax

```cpp
template<typename Value1,
    typename Value2>
    ref class pair;
```

#### Parameters

*Value1*<br/>
The type of first wrapped value.

*Value2*<br/>
The type of second wrapped value.

## Members

|Type Definition|Description|
|---------------------|-----------------|
|[pair::first_type (STL/CLR)](#first_type)|The type of the first wrapped value.|
|[pair::second_type (STL/CLR)](#second_type)|The type of the second wrapped value.|

|Member Object|Description|
|-------------------|-----------------|
|[pair::first (STL/CLR)](#first)|The first stored value.|
|[pair::second (STL/CLR)](#second)|The second stored value.|

|Member Function|Description|
|---------------------|-----------------|
|[pair::pair (STL/CLR)](#pair_pair)|Constructs a pair object.|
|[pair::swap (STL/CLR)](#swap)|Swaps the contents of two pairs.|

|Operator|Description|
|--------------|-----------------|
|[pair::operator= (STL/CLR)](#op_as)|Replaces the stored pair of values.|

## Remarks

The object stores a pair of values. You use this template class to combine two values into a single object. Also, the object `cliext::pair` (described here) stores only managed types; to store a pair of unmanaged types use `std::pair`, declared in `<utility>`.

## <a name="first"></a> pair::first (STL/CLR)

The first wrapped value.

### Syntax

```cpp
Value1 first;
```

### Remarks

The object stores the first wrapped value.

### Example

```cpp
// cliext_pair_first.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    cliext::pair<wchar_t, int>::first_type first_val = c1.first;
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);
    return (0);
    }
```

```Output
[x, 3]
```

## <a name="first_type"></a> pair::first_type (STL/CLR)

The type of the first wrapped value.

### Syntax

```cpp
typedef Value1 first_type;
```

### Remarks

The type is a synonym for the template parameter *Value1*.

### Example

```cpp
// cliext_pair_first_type.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    cliext::pair<wchar_t, int>::first_type first_val = c1.first;
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);
    return (0);
    }
```

```Output
[x, 3]
```

## <a name="op_as"></a> pair::operator= (STL/CLR)

Replaces the stored pair of values.

### Syntax

```cpp
pair<Value1, Value2>% operator=(pair<Value1, Value2>% right);
```

#### Parameters

*right*<br/>
Pair to copy.

### Remarks

The member operator copies *right* to the object, then returns **`*this`**. You use it to replace the stored pair of values with a copy of the stored pair of values in *right*.

### Example

```cpp
// cliext_pair_operator_as.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

// assign to a new pair
    cliext::pair<wchar_t, int> c2;
    c2 = c1;
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);
    return (0);
    }
```

```Output
[x, 3]
[x, 3]
```

## <a name="pair_pair"></a> pair::pair (STL/CLR)

Constructs a pair object.

### Syntax

```cpp
pair();
pair(pair<Coll>% right);
pair(pair<Coll>^ right);
pair(Value1 val1, Value2 val2);
```

#### Parameters

*right*<br/>
Pair to store.

*val1*<br/>
First value to store.

*val2*<br/>
Second value to store.

### Remarks

The constructor:

`pair();`

initializes the stored pair with default constructed values.

The constructor:

`pair(pair<Value1, Value2>% right);`

initializes the stored pair with `right.`[pair::first (STL/CLR)](#first) and `right.`[pair::second (STL/CLR)](#second).

`pair(pair<Value1, Value2>^ right);`

initializes the stored pair with `right->`[pair::first (STL/CLR)](#first) and `right>`[pair::second (STL/CLR)](#second).

The constructor:

`pair(Value1 val1, Value2 val2);`

initializes the stored pair with *val1* and *val2*.

### Example

```cpp
// cliext_pair_construct.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
// construct an empty container
    cliext::pair<wchar_t, int> c1;
    System::Console::WriteLine("[{0}, {1}]",
        c1.first == L'\0' ? "\\0" : "??", c1.second);

// construct with a pair of values
    cliext::pair<wchar_t, int> c2(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

// construct by copying another pair
    cliext::pair<wchar_t, int> c3(c2);
    System::Console::WriteLine("[{0}, {1}]", c3.first, c3.second);

// construct by copying a pair handle
    cliext::pair<wchar_t, int> c4(%c3);
    System::Console::WriteLine("[{0}, {1}]", c4.first, c4.second);

    return (0);
    }
```

```Output
[\0, 0]
[x, 3]
[x, 3]
[x, 3]
```

## <a name="second"></a> pair::second (STL/CLR)

The second wrapped value.

### Syntax

```cpp
Value2 second;
```

### Remarks

The object stores the second wrapped value.

### Example

```cpp
// cliext_pair_second.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    cliext::pair<wchar_t, int>::first_type first_val = c1.first;
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);
    return (0);
    }
```

```Output
[x, 3]
```

## <a name="second_type"></a> pair::second_type (STL/CLR)

The type of the second wrapped value.

### Syntax

```cpp
typedef Value2 second_type;
```

### Remarks

The type is a synonym for the template parameter *Value2*.

### Example

```cpp
// cliext_pair_second_type.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    cliext::pair<wchar_t, int>::first_type first_val = c1.first;
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);
    return (0);
    }
```

```Output
[x, 3]
```

## <a name="swap"></a> pair::swap (STL/CLR)

Swaps the contents of two pairs.

### Syntax

```cpp
void swap(pair<Value1, Value2>% right);
```

#### Parameters

*right*<br/>
Pair to swap contents with.

### Remarks

The member function swaps the stored pair of values between **`*this`** and *right*.

### Example

```cpp
// cliext_pair_swap.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
    {
    cliext::deque<wchar_t> d1;
    d1.push_back(L'a');
    d1.push_back(L'b');
    d1.push_back(L'c');
    Mycoll c1(%d1);

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct another container with repetition of values
    cliext::deque<wchar_t> d2(5, L'x');
    Mycoll c2(%d2);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// swap and redisplay
    c1.swap(c2);
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
x x x x x
x x x x x
a b c
```

## <a name="make_pair"></a> make_pair (STL/CLR)

Make a `pair` from a pair of values.

### Syntax

```cpp
template<typename Value1,
    typename Value2>
    pair<Value1, Value2> make_pair(Value1 first, Value2 second);
```

#### Parameters

*Value1*<br/>
The type of the first wrapped value.

*Value2*<br/>
The type of the second wrapped value.

*first*<br/>
First value to wrap.

*second*<br/>
Second value to wrap.

### Remarks

The template function returns `pair<Value1, Value2>(first, second)`. You use it to construct a `pair<Value1, Value2>` object from a pair of values.

### Example

```cpp
// cliext_make_pair.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    c1 = cliext::make_pair(L'y', 4);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    return (0);
    }
```

```Output
[x, 3]
[y, 4]
```

## <a name="op_neq"></a> operator!= (pair) (STL/CLR)

Pair not equal comparison.

### Syntax

```cpp
template<typename Value1,
    typename Value2>
    bool operator!=(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### Parameters

*left*<br/>
Left pair to compare.

*right*<br/>
Right pair to compare.

### Remarks

The operator function returns `!(left == right)`. You use it to test whether *left* is not ordered the same as *right* when the two pairs are compared element by element.

### Example

```cpp
// cliext_pair_operator_ne.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] != [x 3] is {0}",
        c1 != c1);
    System::Console::WriteLine("[x 3] != [x 4] is {0}",
        c1 != c2);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] != [x 3] is False
[x 3] != [x 4] is True
```

## <a name="op_lt"></a> operator&lt; (pair) (STL/CLR)

Pair less than comparison.

### Syntax

```cpp
template<typename Value1,
    typename Value2>
    bool operator<(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### Parameters

*left*<br/>
Left pair to compare.

*right*<br/>
Right pair to compare.

### Remarks

The operator function returns `left.first <` `right.first || !(right.first <` `left.first &&` `left.second <` `right.second`. You use it to test whether *left* is ordered the before *right* when the two pairs are compared element by element.

### Example

```cpp
// cliext_pair_operator_lt.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] < [x 3] is {0}",
        c1 < c1);
    System::Console::WriteLine("[x 3] < [x 4] is {0}",
        c1 < c2);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] < [x 3] is False
[x 3] < [x 4] is True
```

## <a name="op_lteq"></a> operator&lt;= (pair) (STL/CLR)

Pair less than or equal comparison.

### Syntax

```cpp
template<typename Value1,
    typename Value2>
    bool operator<=(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### Parameters

*left*<br/>
Left pair to compare.

*right*<br/>
Right pair to compare.

### Remarks

The operator function returns `!(right < left)`. You use it to test whether *left* is not ordered after *right* when the two pairs are compared element by element.

### Example

```cpp
// cliext_pair_operator_le.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] <= [x 3] is {0}",
        c1 <= c1);
    System::Console::WriteLine("[x 4] <= [x 3] is {0}",
        c2 <= c1);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] <= [x 3] is True
[x 4] <= [x 3] is False
```

## <a name="op_eq"></a> operator== (pair) (STL/CLR)

Pair equal comparison.

### Syntax

```cpp
template<typename Value1,
    typename Value2>
    bool operator==(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### Parameters

*left*<br/>
Left pair to compare.

*right*<br/>
Right pair to compare.

### Remarks

The operator function returns `left.first ==` `right.first &&` `left.second ==` `right.second`. You use it to test whether *left* is ordered the same as *right* when the two pairs are compared element by element.

### Example

```cpp
// cliext_pair_operator_eq.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] == [x 3] is {0}",
        c1 == c1);
    System::Console::WriteLine("[x 3] == [x 4] is {0}",
        c1 == c2);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] == [x 3] is True
[x 3] == [x 4] is False
```

## <a name="op_gt"></a> operator&gt; (pair) (STL/CLR)

Pair greater than comparison.

### Syntax

```cpp
template<typename Value1,
    typename Value2>
    bool operator>(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### Parameters

*left*<br/>
Left pair to compare.

*right*<br/>
Right pair to compare.

### Remarks

The operator function returns `right` `<` `left`. You use it to test whether *left* is ordered after *right* when the two pairs are compared element by element.

### Example

```cpp
// cliext_pair_operator_gt.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] > [x 3] is {0}",
        c1 > c1);
    System::Console::WriteLine("[x 4] > [x 3] is {0}",
        c2 > c1);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] > [x 3] is False
[x 4] > [x 3] is True
```

## <a name="op_gteq"></a> operator&gt;= (pair) (STL/CLR)

Pair greater than or equal comparison.

### Syntax

```cpp
template<typename Value1,
    typename Value2>
    bool operator>=(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### Parameters

*left*<br/>
Left pair to compare.

*right*<br/>
Right pair to compare.

### Remarks

The operator function returns `!(left < right)`. You use it to test whether *left* is not ordered before *right* when the two pairs are compared element by element.

### Example

```cpp
// cliext_pair_operator_ge.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] >= [x 3] is {0}",
        c1 >= c1);
    System::Console::WriteLine("[x 3] >= [x 4] is {0}",
        c1 >= c2);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] >= [x 3] is True
[x 3] >= [x 4] is False
```
