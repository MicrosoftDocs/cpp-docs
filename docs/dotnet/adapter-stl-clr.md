---
description: "Learn more about: adapter (STL/CLR)"
title: "adapter (STL/CLR)"
ms.date: "06/15/2018"
ms.topic: "reference"
f1_keywords: ["<cliext/adapter>", "cliext::collection_adapter", "cliext::collection_adapter::base", "cliext::collection_adapter::begin", "cliext::collection_adapter::collection_adapter", "cliext::collection_adapter::difference_type", "cliext::collection_adapter::end", "cliext::collection_adapter::iterator", "cliext::collection_adapter::key_type", "cliext::collection_adapter::mapped_type", "cliext::collection_adapter::operator=", "cliext::collection_adapter::reference", "cliext::collection_adapter::size", "cliext::collection_adapter::size_type", "cliext::collection_adapter::swap", "cliext::collection_adapter::value_type", "cliext::make_collection", "cliext::range_adapter", "cliext::operator=", "cliext::range_adapter::operator=", "cliext::range_adapter::range_adapter"]
helpviewer_keywords: ["<adapter> header [STL/CLR]", "adapter [STL/CLR]", "<cliext/adapter> header [STL/CLR]", "collection_adapter class [STL/CLR]", "base member [STL/CLR]", "begin member [STL/CLR]", "collection_adapter member [STL/CLR]", "difference_type member [STL/CLR]", "end member [STL/CLR]", "iterator member [STL/CLR]", "key_type member [STL/CLR]", "mapped_type member [STL/CLR]", "operator= member [STL/CLR]", "reference member [STL/CLR]", "size member [STL/CLR]", "size_type member [STL/CLR]", "swap member [STL/CLR]", "value_type member [STL/CLR]", "make_collection function [STL/CLR]", "range_adapter class [STL/CLR]", "operator= member [STL/CLR]", "range_adapter member [STL/CLR]"]
ms.assetid: 71ce7e51-42b6-4f70-9595-303791a97677
---
# adapter (STL/CLR)

The STL/CLR header `<cliext/adapter>` specifies two template classes (`collection_adapter` and `range_adapter`), and the template function `make_collection`.

## Syntax

```cpp
#include <cliext/adapter>
```

## Requirements

**Header:** \<cliext/adapter>

**Namespace:** cliext

## Declarations

|Class|Description|
|-----------|-----------------|
|[collection_adapter (STL/CLR)](#collection_adapter)|Wraps the Base Class Library (BCL) collection as a range.|
|[range_adapter (STL/CLR)](#range_adapter)|Wraps the range as a BCL collection.|

|Function|Description|
|--------------|-----------------|
|[make_collection (STL/CLR)](#make_collection)|Creates a range adapter using an iterator pair.|

## Members

## <a name="collection_adapter"></a> collection_adapter (STL/CLR)

Wraps a .NET collection for use as an STL/CLR container. A `collection_adapter` is a template class that describes a simple STL/CLR container object. It wraps a Base Class Library (BCL) interface, and returns an iterator pair that you use to manipulate the controlled sequence.

### Syntax

```cpp
template<typename Coll>
    ref class collection_adapter;

template<>
    ref class collection_adapter<
        System::Collections::ICollection>;
template<>
    ref class collection_adapter<
        System::Collections::IEnumerable>;
template<>
    ref class collection_adapter<
        System::Collections::IList>;
template<>
    ref class collection_adapter<
        System::Collections::IDictionary>;
template<typename Value>
    ref class collection_adapter<
        System::Collections::Generic::ICollection<Value>>;
template<typename Value>
    ref class collection_adapter<
        System::Collections::Generic::IEnumerable<Value>>;
template<typename Value>
    ref class collection_adapter<
        System::Collections::Generic::IList<Value>>;
template<typename Key,
    typename Value>
    ref class collection_adapter<
        System::Collections::Generic::IDictionary<Key, Value>>;
```

#### Parameters

*Coll*<br/>
The type of the wrapped collection.

### Specializations

|Specialization|Description|
|--------------------|-----------------|
|IEnumerable|Sequences through elements.|
|ICollection|Maintains a group of elements.|
|IList|Maintains an ordered group of elements.|
|IDictionary|Maintain a set of {key, value} pairs.|
|IEnumerable\<Value>|Sequences through typed elements.|
|ICollection\<Value>|Maintains a group of typed elements.|
|IList\<Value>|Maintains an ordered group of typed elements.|
|IDictionary\<Value>|Maintains a set of typed {key, value} pairs.|

### Members

|Type Definition|Description|
|---------------------|-----------------|
|[collection_adapter::difference_type (STL/CLR)](#difference_type)|The type of a signed distance between two elements.|
|[collection_adapter::iterator (STL/CLR)](#iterator)|The type of an iterator for the controlled sequence.|
|[collection_adapter::key_type (STL/CLR)](#key_type)|The type of a dictionary key.|
|[collection_adapter::mapped_type (STL/CLR)](#mapped_type)|The type of a dictionary value.|
|[collection_adapter::reference (STL/CLR)](#reference)|The type of a reference to an element.|
|[collection_adapter::size_type (STL/CLR)](#size_type)|The type of a signed distance between two elements.|
|[collection_adapter::value_type (STL/CLR)](#value_type)|The type of an element.|

|Member Function|Description|
|---------------------|-----------------|
|[collection_adapter::base (STL/CLR)](#base)|Designates the wrapped BCL interface.|
|[collection_adapter::begin (STL/CLR)](#begin)|Designates the beginning of the controlled sequence.|
|[collection_adapter::collection_adapter (STL/CLR)](#collection_adapter_collection_adapter)|Constructs an adapter object.|
|[collection_adapter::end (STL/CLR)](#end)|Designates the end of the controlled sequence.|
|[collection_adapter::size (STL/CLR)](#size)|Counts the number of elements.|
|[collection_adapter::swap (STL/CLR)](#swap)|Swaps the contents of two containers.|

|Operator|Description|
|--------------|-----------------|
|[collection_adapter::operator= (STL/CLR)](#op_eq)|Replaces the stored BCL handle.|

### Remarks

You use this template class to manipulate a BCL container as a STL/CLR container. The `collection_adapter` stores a handle to a BCL interface, which in turn controls a sequence of elements. A `collection_adapter` object `X` returns a pair of input iterators `X.begin()` and `X.end()` that you use to visit the elements, in order. Some of the specializations also let you write `X.size()` to determine the length of the controlled sequence.

## <a name="base"></a> collection_adapter::base (STL/CLR)

Designates the wrapped BCL interface.

### Syntax

```cpp
Coll^ base();
```

### Remarks

The member function returns the stored BCL interface handle.

### Example

```cpp
// cliext_collection_adapter_base.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
    {
    cliext::deque<wchar_t> d6x(6, L'x');
    Mycoll c1(%d6x);

    // display initial contents "x x x x x x "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("base() same = {0}", c1.base() == %c1);
    return (0);
    }
```

```Output
x x x x x x
base() same = True
```

## <a name="begin"></a> collection_adapter::begin (STL/CLR)

Designates the beginning of the controlled sequence.

### Syntax

```cpp
iterator begin();
```

### Remarks

The member function returns an input iterator that designates the first element of the controlled sequence, or just beyond the end of an empty sequence.

### Example

```cpp
// cliext_collection_adapter_begin.cpp
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

    // display initial contents "a b c "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect first two items
    Mycoll::iterator it = c1.begin();
    System::Console::WriteLine("*begin() = {0}", *it);
    System::Console::WriteLine("*++begin() = {0}", *++it);
    return (0);
}
```

```Output
a b c
*begin() = a
*++begin() = b
```

## <a name="collection_adapter_collection_adapter"></a> collection_adapter::collection_adapter (STL/CLR)

Constructs an adapter object.

### Syntax

```cpp
collection_adapter();
collection_adapter(collection_adapter<Coll>% right);
collection_adapter(collection_adapter<Coll>^ right);
collection_adapter(Coll^ collection);
```

#### Parameters

*collection*<br/>
BCL handle to wrap.

*right*<br/>
Object to copy.

### Remarks

The constructor:

`collection_adapter();`

initializes the stored handle with **`nullptr`**.

The constructor:

`collection_adapter(collection_adapter<Coll>% right);`

initializes the stored handle with `right.`[collection_adapter::base (STL/CLR)](#base)`()`.

The constructor:

`collection_adapter(collection_adapter<Coll>^ right);`

initializes the stored handle with `right->`[collection_adapter::base (STL/CLR)](#base)`()`.

The constructor:

`collection_adapter(Coll^ collection);`

initializes the stored handle with `collection`.

### Example

```cpp
// cliext_collection_adapter_construct.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
{
    cliext::deque<wchar_t> d6x(6, L'x');

    // construct an empty container
    Mycoll c1;
    System::Console::WriteLine("base() null = {0}", c1.base() == nullptr);

    // construct with a handle
    Mycoll c2(%d6x);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying another container
    Mycoll c3(c2);
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying a container handle
    Mycoll c4(%c3);
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
}
```

```Output
base() null = True
x x x x x x
x x x x x x
x x x x x x
```

## <a name="difference_type"></a> collection_adapter::difference_type (STL/CLR)

The types of a signed distance between two elements.

### Syntax

```cpp
typedef int difference_type;
```

### Remarks

The type describes a signed element count.

### Example

```cpp
// cliext_collection_adapter_difference_type.cpp
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

    // display initial contents "a b c "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // compute positive difference
    Mycoll::difference_type diff = 0;
    Mycoll::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);
    return (0);
}
```

```Output
a b c
end()-begin() = 3
```

## <a name="end"></a> collection_adapter::end (STL/CLR)

Designates the end of the controlled sequence.

### Syntax

```cpp
iterator end();
```

### Remarks

The member function returns an input iterator that points just beyond the end of the controlled sequence.

### Example

```cpp
// cliext_collection_adapter_end.cpp
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

    // display initial contents "a b c "
    Mycoll::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
```

## <a name="iterator"></a> collection_adapter::iterator (STL/CLR)

The type of an iterator for the controlled sequence.

### Syntax

```cpp
typedef T1 iterator;
```

### Remarks

The type describes an object of unspecified type `T1` that can serve as an input iterator for the controlled sequence.

### Example

```cpp
// cliext_collection_adapter_iterator.cpp
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

    // display initial contents "a b c "
    Mycoll::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
```

## <a name="key_type"></a> collection_adapter::key_type (STL/CLR)

The type of a dictionary key.

### Syntax

```cpp
typedef Key key_type;
```

### Remarks

The type is a synonym for the template parameter `Key`, in a specialization for `IDictionary` or `IDictionary<Value>`; otherwise it is not defined.

### Example

```cpp
// cliext_collection_adapter_key_type.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/map>

typedef cliext::map<wchar_t, int> Mymap;
typedef cliext::collection_adapter<
    System::Collections::Generic::IDictionary<wchar_t, int>> Mycoll;
typedef System::Collections::Generic::KeyValuePair<wchar_t,int> Mypair;
int main()
{
    Mymap d1;
    d1.insert(Mymap::make_value(L'a', 1));
    d1.insert(Mymap::make_value(L'b', 2));
    d1.insert(Mymap::make_value(L'c', 3));
    Mycoll c1(%d1);

    // display contents "[a 1] [b 2] [c 3] "
    for each (Mypair elem in c1)
    {
        Mycoll::key_type key = elem.Key;
        Mycoll::mapped_type value = elem.Value;
        System::Console::Write("[{0} {1}] ", key, value);
    }
    System::Console::WriteLine();
    return (0);
}
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="mapped_type"></a> collection_adapter::mapped_type (STL/CLR)

The type of a dictionary value.

### Syntax

```cpp
typedef Value mapped_type;
```

### Remarks

The type is a synonym for the template parameter `Value`, in a specialization for `IDictionary` or `IDictionary<Value>`; otherwise it is not defined.

### Example

```cpp
// cliext_collection_adapter_mapped_type.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/map>

typedef cliext::map<wchar_t, int> Mymap;
typedef cliext::collection_adapter<
    System::Collections::Generic::IDictionary<wchar_t, int>> Mycoll;
typedef System::Collections::Generic::KeyValuePair<wchar_t,int> Mypair;
int main()
{
    Mymap d1;
    d1.insert(Mymap::make_value(L'a', 1));
    d1.insert(Mymap::make_value(L'b', 2));
    d1.insert(Mymap::make_value(L'c', 3));
    Mycoll c1(%d1);

    // display contents "[a 1] [b 2] [c 3] "
    for each (Mypair elem in c1)
    {
        Mycoll::key_type key = elem.Key;
        Mycoll::mapped_type value = elem.Value;
        System::Console::Write("[{0} {1}] ", key, value);
    }
    System::Console::WriteLine();
    return (0);
}
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="op_eq"></a> collection_adapter::operator= (STL/CLR)

Replaces the stored BCL handle.

### Syntax

```cpp
collection_adapter<Coll>% operator=(collection_adapter<Coll>% right);
```

#### Parameters

*right*<br/>
Adapter to copy.

### Remarks

The member operator copies *right* to the object, then returns **`*this`**. You use it to replace the stored BCL handle with a copy of the stored BCL handle in *right*.

### Example

```cpp
// cliext_collection_adapter_operator_as.cpp
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

    // display initial contents "a b c "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    Mycoll c2;
    c2 = c1;
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
a b c
```

## <a name="reference"></a> collection_adapter::reference (STL/CLR)

The type of a reference to an element.

### Syntax

```cpp
typedef value_type% reference;
```

### Remarks

The type describes a reference to an element.

### Example

```cpp
// cliext_collection_adapter_reference.cpp
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

    // display initial contents "a b c "
    Mycoll::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
    {   // get a reference to an element
        Mycoll::reference ref = *it;
        System::Console::Write("{0} ", ref);
    }
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
```

## <a name="size"></a> collection_adapter::size (STL/CLR)

Counts the number of elements.

### Syntax

```cpp
size_type size();
```

### Remarks

The member function returns the length of the controlled sequence. It is not defined in a specialization for `IEnumerable` or `IEnumerable<Value>`.

### Example

```cpp
// cliext_collection_adapter_size.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
{
    cliext::deque<wchar_t> d6x(6, L'x');
    Mycoll c1(%d6x);

    // display initial contents "x x x x x x "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0}", c1.size());
    return (0);
}
```

```Output
x x x x x x
size() = 6
```

## <a name="size_type"></a> collection_adapter::size_type (STL/CLR)

The type of a signed distance between two element.

### Syntax

```cpp
typedef int size_type;
```

### Remarks

The type describes a non-negative element count.

### Example

```cpp
// cliext_collection_adapter_size_type.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
{
    cliext::deque<wchar_t> d6x(6, L'x');
    Mycoll c1(%d6x);

    // display initial contents "x x x x x x"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    Mycoll::size_type size = c1.size();
    System::Console::WriteLine("size() = {0}", size);
    return (0);
}
```

```Output
x x x x x x
size() = 6
```

## <a name="swap"></a> collection_adapter::swap (STL/CLR)

Swaps the contents of two containers.

### Syntax

```cpp
void swap(collection_adapter<Coll>% right);
```

#### Parameters

*right*<br/>
Container to swap contents with.

### Remarks

The member function swaps the stored BCL handles between **`*this`** and *right*.

### Example

```cpp
// cliext_collection_adapter_swap.cpp
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

## <a name="value_type"></a> collection_adapter::value_type (STL/CLR)

The type of an element.

### Syntax

```cpp
typedef Value value_type;
```

### Remarks

The type is a synonym for the template parameter *Value*, if present in the specialization; otherwise it is a synonym for `System::Object^`.

### Example

```cpp
// cliext_collection_adapter_value_type.cpp
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

    // display contents "a b c" using value_type
    for (Mycoll::iterator it = c1.begin();
        it != c1.end(); ++it)
    {   // store element in value_type object
        Mycoll::value_type val = *it;

        System::Console::Write("{0} ", val);
    }
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
```

## <a name="make_collection"></a> make_collection (STL/CLR)

Make a `range_adapter` from an iterator pair.

### Syntax

```cpp
template<typename Iter>
    range_adapter<Iter> make_collection(Iter first, Iter last);
```

#### Parameters

*Iter*<br/>
The type of the wrapped iterators.

*first*<br/>
First iterator to wrap.

*last*<br/>
Second iterator to wrap.

### Remarks

The template function returns `gcnew range_adapter<Iter>(first, last)`. You use it to construct a `range_adapter<Iter>` object from a pair of iterators.

### Example

```cpp
// cliext_make_collection.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::deque<wchar_t> Mycont;
typedef cliext::range_adapter<Mycont::iterator> Myrange;
int main()
{
    cliext::deque<wchar_t> d1;
    d1.push_back(L'a');
    d1.push_back(L'b');
    d1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in d1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Collections::ICollection^ p1 =
        cliext::make_collection(d1.begin(), d1.end());
    System::Console::WriteLine("Count = {0}", p1->Count);
    System::Console::WriteLine("IsSynchronized = {0}",
        p1->IsSynchronized);
    System::Console::WriteLine("SyncRoot not nullptr = {0}",
        p1->SyncRoot != nullptr);

    // copy the sequence
    cli::array<System::Object^>^ a1 = gcnew cli::array<System::Object^>(5);

    a1[0] = L'|';
    p1->CopyTo(a1, 1);
    a1[4] = L'|';
    for each (wchar_t elem in a1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
}
```

```Output
a b c
Count = 3
IsSynchronized = False
SyncRoot not nullptr = True
| a b c |
```

## <a name="range_adapter"></a> range_adapter (STL/CLR)

A template class that wraps a pair of iterators that are used to implement several Base Class Library (BCL) interfaces. You use the range_adapter to manipulate an STL/CLR range as if it were a BCL collection.

### Syntax

```cpp
template<typename Iter>
    ref class range_adapter
        :   public
        System::Collections::IEnumerable,
        System::Collections::ICollection,
        System::Collections::Generic::IEnumerable<Value>,
        System::Collections::Generic::ICollection<Value>
    { ..... };
```

#### Parameters

*Iter*<br/>
The type associated with the wrapped iterators.

### Members

|Member Function|Description|
|---------------------|-----------------|
|[range_adapter::range_adapter (STL/CLR)](#range_adapter_range_adapter)|Constructs an adapter object.|

|Operator|Description|
|--------------|-----------------|
|[range_adapter::operator= (STL/CLR)](#range_adapter_op_eq)|Replaces the stored iterator pair.|

### Interfaces

|Interface|Description|
|---------------|-----------------|
|<xref:System.Collections.IEnumerable>|Iterates through elements in the collection.|
|<xref:System.Collections.ICollection>|Maintains a group of elements.|
|<xref:System.Collections.Generic.IEnumerable%601>|Iterates through typed elements in the collection..|
|<xref:System.Collections.Generic.ICollection%601>|Maintains a group of typed elements.|

### Remarks

The range_adapter stores a pair of iterators, which in turn delimit a sequence of elements. The object implements four BCL interfaces that let you iterate through the elements, in order. You use this template class to manipulate STL/CLR ranges much like BCL containers.

## <a name="range_adapter_op_eq"></a> range_adapter::operator= (STL/CLR)

Replaces the stored iterator pair.

### Syntax

```cpp
range_adapter<Iter>% operator=(range_adapter<Iter>% right);
```

#### Parameters

*right*<br/>
Adapter to copy.

### Remarks

The member operator copies *right* to the object, then returns **`*this`**. You use it to replace the stored iterator pair with a copy of the stored iterator pair in *right*.

### Example

```cpp
// cliext_range_adapter_operator_as.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::deque<wchar_t> Mycont;
typedef cliext::range_adapter<Mycont::iterator> Myrange;
int main()
{
    cliext::deque<wchar_t> d1;
    d1.push_back(L'a');
    d1.push_back(L'b');
    d1.push_back(L'c');
    Myrange c1(d1.begin(), d1.end());

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    Myrange c2;
    c2 = c1;
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
a b c
```

## <a name="range_adapter_range_adapter"></a> range_adapter::range_adapter (STL/CLR)

Constructs an adapter object.

### Syntax

```cpp
range_adapter();
range_adapter(range_adapter<Iter>% right);
range_adapter(range_adapter<Iter>^ right);
range_adapter(Iter first, Iter last);
```

#### Parameters

*first*<br/>
First iterator to wrap.

*last*<br/>
Second iterator to wrap.

*right*<br/>
Object to copy.

### Remarks

The constructor:

`range_adapter();`

initializes the stored iterator pair with default constructed iterators.

The constructor:

`range_adapter(range_adapter<Iter>% right);`

initializes the stored iterator pair by copying the pair stored in *right*.

The constructor:

`range_adapter(range_adapter<Iter>^ right);`

initializes the stored iterator pair by copying the pair stored in `*right`.

The constructor:

`range_adapter(Iter^ first, last);`

initializes the stored iterator pair with *first* and *last*.

### Example

```cpp
// cliext_range_adapter_construct.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::deque<wchar_t> Mycont;
typedef cliext::range_adapter<Mycont::iterator> Myrange;
int main()
{
    cliext::deque<wchar_t> d1;
    d1.push_back(L'a');
    d1.push_back(L'b');
    d1.push_back(L'c');

    // construct an empty adapter
    Myrange c1;

    // construct with an iterator pair
    Myrange c2(d1.begin(), d1.end());
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying another adapter
    Myrange c3(c2);
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying an adapter handle
    Myrange c4(%c3);
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
}
```

```Output
a b c
a b c
a b c
```
