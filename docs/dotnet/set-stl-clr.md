---
description: "Learn more about: set (STL/CLR)"
title: "set (STL/CLR)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["cliext::set", "cliext::set::begin", "cliext::set::clear", "cliext::set::const_iterator", "cliext::set::const_reference", "cliext::set::const_reverse_iterator", "cliext::set::count", "cliext::set::difference_type", "cliext::set::empty", "cliext::set::end", "cliext::set::equal_range", "cliext::set::erase", "cliext::set::find", "cliext::set::generic_container", "cliext::set::generic_iterator", "cliext::set::generic_reverse_iterator", "cliext::set::generic_value", "cliext::set::insert", "cliext::set::iterator", "cliext::set::key_comp", "cliext::set::key_compare", "cliext::set::key_type", "cliext::set::lower_bound", "cliext::set::make_value", "cliext::set::operator=", "cliext::set::rbegin", "cliext::set::reference", "cliext::set::rend", "cliext::set::reverse_iterator", "cliext::set::set", "cliext::set::size", "cliext::set::size_type", "cliext::set::swap", "cliext::set::to_array", "cliext::set::upper_bound", "cliext::set::value_comp", "cliext::set::value_compare", "cliext::set::value_type"]
helpviewer_keywords: ["<cliext/set> header [STL/CLR]", "<set> header [STL/CLR]", "set class [STL/CLR]", "operator!= (set) member [STL/CLR]", "operator< (set) member [STL/CLR]", "operator<= (set) member [STL/CLR]", "operator== (set) member [STL/CLR]", "operator> (set) member [STL/CLR]", "operator>= (set) member [STL/CLR]", "begin member [STL/CLR]", "clear member [STL/CLR]", "const_iterator member [STL/CLR]", "const_reference member [STL/CLR]", "const_reverse_iterator member [STL/CLR]", "count member [STL/CLR]", "difference_type member [STL/CLR]", "empty member [STL/CLR]", "end member [STL/CLR]", "equal_range member [STL/CLR]", "erase member [STL/CLR]", "find member [STL/CLR]", "generic_container member [STL/CLR]", "generic_iterator member [STL/CLR]", "generic_reverse_iterator member [STL/CLR]", "generic_value member [STL/CLR]", "insert member [STL/CLR]", "iterator member [STL/CLR]", "key_comp member [STL/CLR]", "key_compare member [STL/CLR]", "key_type member [STL/CLR]", "lower_bound member [STL/CLR]", "make_value member [STL/CLR]", "operator= member [STL/CLR]", "rbegin member [STL/CLR]", "reference member [STL/CLR]", "rend member [STL/CLR]", "reverse_iterator member [STL/CLR]", "set member [STL/CLR]", "size member [STL/CLR]", "size_type member [STL/CLR]", "swap member [STL/CLR]", "to_array member [STL/CLR]", "upper_bound member [STL/CLR]", "value_comp member [STL/CLR]", "value_compare member [STL/CLR]", "value_type member [STL/CLR]"]
ms.assetid: 27d3628c-741a-43a7-bef1-5085536f679e
---
# set (STL/CLR)

The template class describes an object that controls a varying-length sequence of elements that has bidirectional access. You use the container `set` to manage a sequence of elements as a (nearly) balanced ordered tree of nodes, each storing one element.

In the description below, `GValue` is the same as `GKey`, which in turn is the same as *Key* unless the latter is a ref type, in which case it is `Key^`.

## Syntax

```cpp
template<typename Key>
    ref class set
        :   public
        System::ICloneable,
        System::Collections::IEnumerable,
        System::Collections::ICollection,
        System::Collections::Generic::IEnumerable<GValue>,
        System::Collections::Generic::ICollection<GValue>,
        System::Collections::Generic::IList<GValue>,
        Microsoft::VisualC::StlClr::ITree<Gkey, GValue>
    { ..... };
```

### Parameters

*Key*<br/>
The type of the key component of an element in the controlled sequence.

## Requirements

**Header:** \<cliext/set>

**Namespace:** cliext

## Declarations

|Type Definition|Description|
|---------------------|-----------------|
|[set::const_iterator (STL/CLR)](#const_iterator)|The type of a constant iterator for the controlled sequence.|
|[set::const_reference (STL/CLR)](#const_reference)|The type of a constant reference to an element.|
|[set::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|The type of a constant reverse iterator for the controlled sequence.|
|[set::difference_type (STL/CLR)](#difference_type)|The type of a (possibly signed) distance between two elements.|
|[set::generic_container (STL/CLR)](#generic_container)|The type of the generic interface for the container.|
|[set::generic_iterator (STL/CLR)](#generic_iterator)|The type of an iterator for the generic interface for the container.|
|[set::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|The type of a reverse iterator for the generic interface for the container.|
|[set::generic_value (STL/CLR)](#generic_value)|The type of an element for the generic interface for the container.|
|[set::iterator (STL/CLR)](#iterator)|The type of an iterator for the controlled sequence.|
|[set::key_compare (STL/CLR)](#key_compare)|The ordering delegate for two keys.|
|[set::key_type (STL/CLR)](#key_type)|The type of an ordering key.|
|[set::reference (STL/CLR)](#reference)|The type of a reference to an element.|
|[set::reverse_iterator (STL/CLR)](#reverse_iterator)|The type of a reverse iterator for the controlled sequence.|
|[set::size_type (STL/CLR)](#size_type)|The type of a (non-negative) distance between two elements.|
|[set::value_compare (STL/CLR)](#value_compare)|The ordering delegate for two element values.|
|[set::value_type (STL/CLR)](#value_type)|The type of an element.|

|Member Function|Description|
|---------------------|-----------------|
|[set::begin (STL/CLR)](#begin)|Designates the beginning of the controlled sequence.|
|[set::clear (STL/CLR)](#clear)|Removes all elements.|
|[set::count (STL/CLR)](#count)|Counts elements matching a specified key.|
|[set::empty (STL/CLR)](#empty)|Tests whether no elements are present.|
|[set::end (STL/CLR)](#end)|Designates the end of the controlled sequence.|
|[set::equal_range (STL/CLR)](#equal_range)|Finds range that matches a specified key.|
|[set::erase (STL/CLR)](#erase)|Removes elements at specified positions.|
|[set::find (STL/CLR)](#find)|Finds an element that matches a specified key.|
|[set::insert (STL/CLR)](#insert)|Adds elements.|
|[set::key_comp (STL/CLR)](#key_comp)|Copies the ordering delegate for two keys.|
|[set::lower_bound (STL/CLR)](#lower_bound)|Finds beginning of range that matches a specified key.|
|[set::make_value (STL/CLR)](#make_value)|Constructs a value object.|
|[set::rbegin (STL/CLR)](#rbegin)|Designates the beginning of the reversed controlled sequence.|
|[set::rend (STL/CLR)](#rend)|Designates the end of the reversed controlled sequence.|
|[set::set (STL/CLR)](#set)|Constructs a container object.|
|[set::size (STL/CLR)](#size)|Counts the number of elements.|
|[set::swap (STL/CLR)](#swap)|Swaps the contents of two containers.|
|[set::to_array (STL/CLR)](#to_array)|Copies the controlled sequence to a new array.|
|[set::upper_bound (STL/CLR)](#upper_bound)|Finds end of range that matches a specified key.|
|[set::value_comp (STL/CLR)](#value_comp)|Copies the ordering delegate for two element values.|

|Operator|Description|
|--------------|-----------------|
|[set::operator= (STL/CLR)](#op_as)|Replaces the controlled sequence.|
|[operator!= (set) (STL/CLR)](#op_neq)|Determines if a `set` object is not equal to another `set` object.|
|[operator< (set) (STL/CLR)](#op_lt)|Determines if a `set` object is less than another `set` object.|
|[operator<= (set) (STL/CLR)](#op_lteq)|Determines if a `set` object is less than or equal to another `set` object.|
|[operator== (set) (STL/CLR)](#op_eq)|Determines if a `set` object is equal to another `set` object.|
|[operator> (set) (STL/CLR)](#op_gt)|Determines if a `set` object is greater than another `set` object.|
|[operator>= (set) (STL/CLR)](#op_gteq)|Determines if a `set` object is greater than or equal to another `set` object.|

## Interfaces

|Interface|Description|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicate an object.|
|<xref:System.Collections.IEnumerable>|Sequence through elements.|
|<xref:System.Collections.ICollection>|Maintain group of elements.|
|<xref:System.Collections.Generic.IEnumerable%601>|Sequence through typed elements.|
|<xref:System.Collections.Generic.ICollection%601>|Maintain group of typed elements.|
|ITree\<Key, Value>|Maintain generic container.|

## Remarks

The object allocates and frees storage for the sequence it controls as individual nodes. It inserts elements into a (nearly) balanced tree that it keeps ordered by altering the links between nodes, never by copying the contents of one node to another. That means you can insert and remove elements freely without disturbing remaining elements.

The object orders the sequence it controls by calling a stored delegate object of type [set::key_compare (STL/CLR)](#key_compare). You can specify the stored delegate object when you construct the set; if you specify no delegate object, the default is the comparison `operator<(key_type, key_type)`. You access this stored object by calling the member function [set::key_comp (STL/CLR)](#key_comp)`()`.

Such a delegate object must impose a strict weak ordering on keys of type [set::key_type (STL/CLR)](#key_type). That means, for any two keys `X` and `Y`:

`key_comp()(X, Y)` returns the same Boolean result on every call.

If `key_comp()(X, Y)` is true, then `key_comp()(Y, X)` must be false.

If `key_comp()(X, Y)` is true, then `X` is said to be ordered before `Y`.

If `!key_comp()(X, Y) && !key_comp()(Y, X)` is true, then `X` and `Y` are said to have equivalent ordering.

For any element `X` that precedes `Y` in the controlled sequence, `key_comp()(Y, X)` is false. (For the default delegate object, keys never decrease in value.) Unlike template class [set](../dotnet/set-stl-clr.md), an object of template class `set` does not require that keys for all elements are unique. (Two or more keys can have equivalent ordering.)

Each element serves as both a ey and a value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations proportional to the logarithm of the number of elements in the sequence (logarithmic time). Moreover, inserting an element invalidates no iterators, and removing an element invalidates only those iterators which point at the removed element.

A set supports bidirectional iterators, which means you can step to adjacent elements given an iterator that designates an element in the controlled sequence. A special head node corresponds to the iterator returned by [set::end (STL/CLR)](#end)`()`. You can decrement this iterator to reach the last element in the controlled sequence, if present. You can increment a set iterator to reach the head node, and it will then compare equal to `end()`. But you cannot dereference the iterator returned by `end()`.

Note that you cannot refer to a set element directly given its numerical position -- that requires a random-access iterator.

A set iterator stores a handle to its associated set node, which in turn stores a handle to its associated container. You can use iterators only with their associated container objects. A set iterator remains valid so long as its associated set node is associated with some set. Moreover, a valid iterator is dereferencable -- you can use it to access or alter the element value it designates -- so long as it is not equal to `end()`.

Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does *not* destroy its elements.

## Members

## <a name="begin"></a> set::begin (STL/CLR)

Designates the beginning of the controlled sequence.

### Syntax

```cpp
iterator begin();
```

### Remarks

The member function returns a bidirectional iterator that designates the first element of the controlled sequence, or just beyond the end of an empty sequence. You use it to obtain an iterator that designates the `current` beginning of the controlled sequence, but its status can change if the length of the controlled sequence changes.

### Example

```cpp
// cliext_set_begin.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items
    Myset::iterator it = c1.begin();
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

## <a name="clear"></a> set::clear (STL/CLR)

Removes all elements.

### Syntax

```cpp
void clear();
```

### Remarks

The member function effectively calls [set::erase (STL/CLR)](#erase)`(` [set::begin (STL/CLR)](#begin)`(),` [set::end (STL/CLR)](#end)`())`. You use it to ensure that the controlled sequence is empty.

### Example

```cpp
// cliext_set_clear.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());

// add elements and clear again
    c1.insert(L'a');
    c1.insert(L'b');

    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());
    return (0);
    }
```

```Output
a b c
size() = 0
a b
size() = 0
```

## <a name="const_iterator"></a> set::const_iterator (STL/CLR)

The type of a constant iterator for the controlled sequence.

### Syntax

```cpp
typedef T2 const_iterator;
```

### Remarks

The type describes an object of unspecified type `T2` that can serve as a constant bidirectional iterator for the controlled sequence.

### Example

```cpp
// cliext_set_const_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    Myset::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        System::Console::Write("{0} ", *cit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="const_reference"></a> set::const_reference (STL/CLR)

The type of a constant reference to an element.

### Syntax

```cpp
typedef value_type% const_reference;
```

### Remarks

The type describes a constant reference to an element.

### Example

```cpp
// cliext_set_const_reference.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    Myset::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        {   // get a const reference to an element
        Myset::const_reference cref = *cit;
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="const_reverse_iterator"></a> set::const_reverse_iterator (STL/CLR)

The type of a constant reverse iterator for the controlled sequence..

### Syntax

```cpp
typedef T4 const_reverse_iterator;
```

### Remarks

The type describes an object of unspecified type `T4` that can serve as a constant reverse iterator for the controlled sequence.

### Example

```cpp
// cliext_set_const_reverse_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c" reversed
    Myset::const_reverse_iterator crit = c1.rbegin();
    for (; crit != c1.rend(); ++crit)
        System::Console::Write("{0} ", *crit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="count"></a> set::count (STL/CLR)

Finds the number of elements matching a specified key.

### Syntax

```cpp
size_type count(key_type key);
```

#### Parameters

*key*<br/>
Key value to search for.

### Remarks

The member function returns the number of elements in the controlled sequence that have equivalent ordering with *key*. You use it to determine the number of elements currently in the controlled sequence that match a specified key.

### Example

```cpp
// cliext_set_count.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("count(L'A') = {0}", c1.count(L'A'));
    System::Console::WriteLine("count(L'b') = {0}", c1.count(L'b'));
    System::Console::WriteLine("count(L'C') = {0}", c1.count(L'C'));
    return (0);
    }
```

```Output
a b c
count(L'A') = 0
count(L'b') = 1
count(L'C') = 0
```

## <a name="difference_type"></a> set::difference_type (STL/CLR)

The types of a signed distance between two elements.

### Syntax

```cpp
typedef int difference_type;
```

### Remarks

The type describes a possibly negative element count.

### Example

```cpp
// cliext_set_difference_type.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    Myset::difference_type diff = 0;
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
        ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);

// compute negative difference
    diff = 0;
    for (Myset::iterator it = c1.end(); it != c1.begin(); --it)
        --diff;
    System::Console::WriteLine("begin()-end() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
begin()-end() = -3
```

## <a name="empty"></a> set::empty (STL/CLR)

Tests whether no elements are present.

### Syntax

```cpp
bool empty();
```

### Remarks

The member function returns true for an empty controlled sequence. It is equivalent to [set::size (STL/CLR)](#size)`() == 0`. You use it to test whether the set is empty.

### Example

```cpp
// cliext_set_empty.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());
    return (0);
    }
```

```Output
a b c
size() = 3
empty() = False
size() = 0
empty() = True
```

## <a name="end"></a> set::end (STL/CLR)

Designates the end of the controlled sequence.

### Syntax

```cpp
iterator end();
```

### Remarks

The member function returns a bidirectional iterator that points just beyond the end of the controlled sequence. You use it to obtain an iterator that designates the end of the controlled sequence; its status doesn not change if the length of the controlled sequence changes.

### Example

```cpp
// cliext_set_end.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last two items
    Myset::iterator it = c1.end();
    --it;
    System::Console::WriteLine("*-- --end() = {0}", *--it);
    System::Console::WriteLine("*--end() = {0}", *++it);
    return (0);
    }
```

```Output
a b c
*-- --end() = b
*--end() = c
```

## <a name="equal_range"></a> set::equal_range (STL/CLR)

Finds range that matches a specified key.

### Syntax

```cpp
cliext::pair<iterator, iterator> equal_range(key_type key);
```

#### Parameters

*key*<br/>
Key value to search for.

### Remarks

The member function returns a pair of iterators `cliext::pair<iterator, iterator>(` [set::lower_bound (STL/CLR)](#lower_bound)`(key),` [set::upper_bound (STL/CLR)](#upper_bound)`(key))`. You use it to determine the range of elements currently in the controlled sequence that match a specified key.

### Example

```cpp
// cliext_set_equal_range.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
typedef Myset::pair_iter_iter Pairii;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// display results of failed search
    Pairii pair1 = c1.equal_range(L'x');
    System::Console::WriteLine("equal_range(L'x') empty = {0}",
        pair1.first == pair1.second);

// display results of successful search
    pair1 = c1.equal_range(L'b');
    for (; pair1.first != pair1.second; ++pair1.first)
        System::Console::Write("{0} ", *pair1.first);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
equal_range(L'x') empty = True
b
```

## <a name="erase"></a> set::erase (STL/CLR)

Removes elements at specified positions.

### Syntax

```cpp
iterator erase(iterator where);
iterator erase(iterator first, iterator last);
size_type erase(key_type key)
```

#### Parameters

*first*<br/>
Beginning of range to erase.

*key*<br/>
Key value to erase.

*last*<br/>
End of range to erase.

*where*<br/>
Element to erase.

### Remarks

The first member function removes the element of the controlled sequence pointed to by *where*, and returns an iterator that designates the first element remaining beyond the element removed, or [set::end (STL/CLR)](#end)`()` if no such element exists. You use it to remove a single element.

The second member function removes the elements of the controlled sequence in the range [`first`, `last`), and returns an iterator that designates the first element remaining beyond any elements removed, or `end()` if no such element exists.. You use it to remove zero or more contiguous elements.

The third member function removes any element of the controlled sequence whose key has equivalent ordering to *key*, and returns a count of the number of elements removed. You use it to remove and count all elements that match a specified key.

Each element erasure takes time proportional to the logarithm of the number of elements in the controlled sequence.

### Example

```cpp
// cliext_set_erase.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// erase an element and reinspect
    System::Console::WriteLine("erase(begin()) = {0}",
        *c1.erase(c1.begin()));

// add elements and display " b c d e"
    c1.insert(L'd');
    c1.insert(L'e');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// erase all but end
    Myset::iterator it = c1.end();
    System::Console::WriteLine("erase(begin(), end()-1) = {0}",
        *c1.erase(c1.begin(), --it));
    System::Console::WriteLine("size() = {0}", c1.size());
    return (0);
    }
```

```Output
a b c
erase(begin()) = b
b c d e
erase(begin(), end()-1) = e
size() = 1
```

## <a name="find"></a> set::find (STL/CLR)

Finds an element that matches a specified key.

### Syntax

```cpp
iterator find(key_type key);
```

#### Parameters

*key*<br/>
Key value to search for.

### Remarks

If at least one element in the controlled sequence has equivalent ordering with *key*, the member function returns an iterator designating one of those elements; otherwise it returns [set::end (STL/CLR)](#end)`()`. You use it to locate an element currently in the controlled sequence that matches a specified key.

### Example

```cpp
// cliext_set_find.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("find {0} = {1}",
        L'A', c1.find(L'A') != c1.end());
    System::Console::WriteLine("find {0} = {1}",
        L'b', *c1.find(L'b'));
    System::Console::WriteLine("find {0} = {1}",
        L'C', c1.find(L'C') != c1.end());
    return (0);
    }
```

```Output
a b c
find A = False
find b = b
find C = False
```

## <a name="generic_container"></a> set::generic_container (STL/CLR)

The type of the generic interface for the container.

### Syntax

```cpp
typedef Microsoft::VisualC::StlClr::
    ITree<GKey, GValue>
    generic_container;
```

### Remarks

The type describes the generic interface for this template container class.

### Example

```cpp
// cliext_set_generic_container.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myset::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    gc1->insert(L'd');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify original and display generic
    c1.insert(L'e');
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a b c d
a b c d e
```

## <a name="generic_iterator"></a> set::generic_iterator (STL/CLR)

The type of an iterator for use with the generic interface for the container.

### Syntax

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ContainerBidirectionalIterator<generic_value>
    generic_iterator;
```

### Remarks

The type describes a generic iterator that can be used with the generic interface for this template container class.

### Example

```cpp
// cliext_set_generic_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myset::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// get an element and display it
    Myset::generic_iterator gcit = gc1->begin();
    Myset::generic_value gcval = *gcit;
    System::Console::WriteLine("{0} ", gcval);
    return (0);
    }
```

```Output
a b c
a b c
a
```

## <a name="generic_reverse_iterator"></a> set::generic_reverse_iterator (STL/CLR)

The type of a reverse iterator for use with the generic interface for the container.

### Syntax

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ReverseRandomAccessIterator<generic_value>
    generic_reverse_iterator;
```

### Remarks

The type describes a generic reverse iterator that can be used with the generic interface for this template container class.

### Example

```cpp
// cliext_set_generic_reverse_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myset::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// get an element and display it
    Myset::generic_reverse_iterator gcit = gc1->rbegin();
    Myset::generic_value gcval = *gcit;
    System::Console::WriteLine("{0} ", gcval);
    return (0);
    }
```

```Output
a b c
a b c
c
```

## <a name="generic_value"></a> set::generic_value (STL/CLR)

The type of an element for use with the generic interface for the container.

### Syntax

```cpp
typedef GValue generic_value;
```

### Remarks

The type describes an object of type `GValue` that describes the stored element value for use with the generic interface for this template container class.

### Example

```cpp
// cliext_set_generic_value.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myset::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// get an element and display it
    Myset::generic_iterator gcit = gc1->begin();
    Myset::generic_value gcval = *gcit;
    System::Console::WriteLine("{0} ", gcval);
    return (0);
    }
```

```Output
a b c
a b c
a
```

## <a name="insert"></a> set::insert (STL/CLR)

Adds elements.

### Syntax

```cpp
cliext::pair<iterator, bool> insert(value_type val);
iterator insert(iterator where, value_type val);
template<typename InIter>
    void insert(InIter first, InIter last);
void insert(System::Collections::Generic::IEnumerable<value_type>^ right);
```

#### Parameters

*first*<br/>
Beginning of range to insert.

*last*<br/>
End of range to insert.

*right*<br/>
Enumeration to insert.

*val*<br/>
Key value to insert.

*where*<br/>
Where in container to insert (hint only).

### Remarks

Each of the member functions inserts a sequence specified by the remaining operands.

The first member function endeavors to insert an element with value *val*, and returns a pair of values `X`. If `X.second` is true, `X.first` designates the newly inserted element; otherwise `X.first` designates an element with equivalent ordering that already exists and no new element is inserted. You use it to insert a single element.

The second member function inserts an element with value *val*, using *where* as a hint (to improve performance), and returns an iterator that designates the newly inserted element. You use it to insert a single element which might be adjacent to an element you know.

The third member function inserts the sequence [`first`, `last`). You use it to insert zero or more elements copied from another sequence.

The fourth member function inserts the sequence designated by the *right*. You use it to insert a sequence described by an enumerator.

Each element insertion takes time proportional to the logarithm of the number of elements in the controlled sequence. Insertion can occur in amortized constant time, however, given a hint that designates an element adjacent to the insertion point.

### Example

```cpp
// cliext_set_insert.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
typedef Myset::pair_iter_bool Pairib;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert a single value, unique and duplicate
    Pairib pair1 = c1.insert(L'x');
    System::Console::WriteLine("insert(L'x') = [{0} {1}]",
        *pair1.first, pair1.second);

    pair1 = c1.insert(L'b');
    System::Console::WriteLine("insert(L'b') = [{0} {1}]",
        *pair1.first, pair1.second);

    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert a single value with hint
    System::Console::WriteLine("insert(begin(), L'y') = {0}",
        *c1.insert(c1.begin(), L'y'));
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert an iterator range
    Myset c2;
    Myset::iterator it = c1.end();
    c2.insert(c1.begin(), --it);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert an enumeration
    Myset c3;
    c3.insert(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
insert(L'x') = [x True]
insert(L'b') = [b False]
a b c x
insert(begin(), L'y') = y
a b c x y
a b c x
a b c x y
```

## <a name="iterator"></a> set::iterator (STL/CLR)

The type of an iterator for the controlled sequence.

### Syntax

```cpp
typedef T1 iterator;
```

### Remarks

The type describes an object of unspecified type `T1` that can serve as a bidirectional iterator for the controlled sequence.

### Example

```cpp
// cliext_set_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    Myset::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="key_comp"></a> set::key_comp (STL/CLR)

Copies the ordering delegate for two keys.

### Syntax

```cpp
key_compare^key_comp();
```

### Remarks

The member function returns the ordering delegate used to order the controlled sequence. You use it to compare two keys.

### Example

```cpp
// cliext_set_key_comp.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    Myset::key_compare^ kcomp = c1.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();

// test a different ordering rule
    Myset c2 = cliext::greater<wchar_t>();
    kcomp = c2.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False

compare(L'a', L'a') = False
compare(L'a', L'b') = False
compare(L'b', L'a') = True
```

## <a name="key_compare"></a> set::key_compare (STL/CLR)

The ordering delegate for two keys.

### Syntax

```cpp
Microsoft::VisualC::StlClr::BinaryDelegate<GKey, GKey, bool>
    key_compare;
```

### Remarks

The type is a synonym for the delegate that determines the ordering of its key arguments.

### Example

```cpp
// cliext_set_key_compare.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    Myset::key_compare^ kcomp = c1.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();

// test a different ordering rule
    Myset c2 = cliext::greater<wchar_t>();
    kcomp = c2.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False

compare(L'a', L'a') = False
compare(L'a', L'b') = False
compare(L'b', L'a') = True
```

## <a name="key_type"></a> set::key_type (STL/CLR)

The type of an ordering key.

### Syntax

```cpp
typedef Key key_type;
```

### Remarks

The type is a synonym for the template parameter *Key*.

### Example

```cpp
// cliext_set_key_type.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c" using key_type
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
        {   // store element in key_type object
        Myset::key_type val = *it;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="lower_bound"></a> set::lower_bound (STL/CLR)

Finds beginning of range that matches a specified key.

### Syntax

```cpp
iterator lower_bound(key_type key);
```

#### Parameters

*key*<br/>
Key value to search for.

### Remarks

The member function determines the first element `X` in the controlled sequence that has equivalent ordering to *key*. If no such element exists, it returns [set::end (STL/CLR)](#end)`()`; otherwise it returns an iterator that designates `X`. You use it to locate the beginning of a sequence of elements currently in the controlled sequence that match a specified key.

### Example

```cpp
// cliext_set_lower_bound.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("lower_bound(L'x')==end() = {0}",
        c1.lower_bound(L'x') == c1.end());

    System::Console::WriteLine("*lower_bound(L'a') = {0}",
        *c1.lower_bound(L'a'));
    System::Console::WriteLine("*lower_bound(L'b') = {0}",
        *c1.lower_bound(L'b'));
    return (0);
    }
```

```Output
a b c
lower_bound(L'x')==end() = True
*lower_bound(L'a') = a
*lower_bound(L'b') = b
```

## <a name="make_value"></a> set::make_value (STL/CLR)

Constructs a value object.

### Syntax

```cpp
static value_type make_value(key_type key);
```

#### Parameters

*key*<br/>
Key value to use.

### Remarks

The member function returns a `value_type` object whose key is *key*. You use it to compose an object suitable for use with several other member functions.

### Example

```cpp
// cliext_set_make_value.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(Myset::make_value(L'a'));
    c1.insert(Myset::make_value(L'b'));
    c1.insert(Myset::make_value(L'c'));

// display contents " a b c"
    for each (Myset::value_type elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="op_as"></a> set::operator= (STL/CLR)

Replaces the controlled sequence.

### Syntax

```cpp
set<Key>% operator=(set<Key>% right);
```

#### Parameters

*right*<br/>
Container to copy.

### Remarks

The member operator copies *right* to the object, then returns **`*this`**. You use it to replace the controlled sequence with a copy of the controlled sequence in *right*.

### Example

```cpp
// cliext_set_operator_as.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (Myset::value_type elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2 = c1;
// display contents " a b c"
    for each (Myset::value_type elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
```

## <a name="rbegin"></a> set::rbegin (STL/CLR)

Designates the beginning of the reversed controlled sequence.

### Syntax

```cpp
reverse_iterator rbegin();
```

### Remarks

The member function returns a reverse iterator that designates the last element of the controlled sequence, or just beyond the beginning of an empty sequence. Hence, it designates the `beginning` of the reverse sequence. You use it to obtain an iterator that designates the `current` beginning of the controlled sequence seen in reverse order, but its status can change if the length of the controlled sequence changes.

### Example

```cpp
// cliext_set_rbegin.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items in reversed sequence
    Myset::reverse_iterator rit = c1.rbegin();
    System::Console::WriteLine("*rbegin() = {0}", *rit);
    System::Console::WriteLine("*++rbegin() = {0}", *++rit);
    return (0);
    }
```

```Output
a b c
*rbegin() = c
*++rbegin() = b
```

## <a name="reference"></a> set::reference (STL/CLR)

The type of a reference to an element.

### Syntax

```cpp
typedef value_type% reference;
```

### Remarks

The type describes a reference to an element.

### Example

```cpp
// cliext_set_reference.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    Myset::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        {   // get a reference to an element
        Myset::reference ref = *it;
        System::Console::Write("{0} ", ref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="rend"></a> set::rend (STL/CLR)

Designates the end of the reversed controlled sequence.

### Syntax

```cpp
reverse_iterator rend();
```

### Remarks

The member function returns a reverse iterator that points just beyond the beginning of the controlled sequence. Hence, it designates the `end` of the reverse sequence. You use it to obtain an iterator that designates the `current` end of the controlled sequence seen in reverse order, but its status can change if the length of the controlled sequence changes.

### Example

```cpp
// cliext_set_rend.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items
    Myset::reverse_iterator rit = c1.rend();
    --rit;
    System::Console::WriteLine("*-- --rend() = {0}", *--rit);
    System::Console::WriteLine("*--rend() = {0}", *++rit);
    return (0);
    }
```

```Output
a b c
*-- --rend() = b
*--rend() = a
```

## <a name="reverse_iterator"></a> set::reverse_iterator (STL/CLR)

The type of a reverse iterator for the controlled sequence.

### Syntax

```cpp
typedef T3 reverse_iterator;
```

### Remarks

The type describes an object of unspecified type `T3` that can serve as a reverse iterator for the controlled sequence.

### Example

```cpp
// cliext_set_reverse_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c" reversed
    Myset::reverse_iterator rit = c1.rbegin();
    for (; rit != c1.rend(); ++rit)
        System::Console::Write("{0} ", *rit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="set"></a> set::set (STL/CLR)

Constructs a container object.

### Syntax

```cpp
set();
explicit set(key_compare^ pred);
set(set<Key>% right);
set(set<Key>^ right);
template<typename InIter>
    setset(InIter first, InIter last);
template<typename InIter>
    set(InIter first, InIter last,
        key_compare^ pred);
set(System::Collections::Generic::IEnumerable<GValue>^ right);
set(System::Collections::Generic::IEnumerable<GValue>^ right,
    key_compare^ pred);
```

#### Parameters

*first*<br/>
Beginning of range to insert.

*last*<br/>
End of range to insert.

*pred*<br/>
Ordering predicate for the controlled sequence.

*right*<br/>
Object or range to insert.

### Remarks

The constructor:

`set();`

initializes the controlled sequence with no elements, with the default ordering predicate `key_compare()`. You use it to specify an empty initial controlled sequence, with the default ordering predicate.

The constructor:

`explicit set(key_compare^ pred);`

initializes the controlled sequence with no elements, with the ordering predicate *pred*. You use it to specify an empty initial controlled sequence, with the specified ordering predicate.

The constructor:

`set(set<Key>% right);`

initializes the controlled sequence with the sequence [`right.begin()`, `right.end()`), with the default ordering predicate. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the set object *right*, with the default ordering predicate.

The constructor:

`set(set<Key>^ right);`

initializes the controlled sequence with the sequence [`right->begin()`, `right->end()`), with the default ordering predicate. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the set object *right*, with the default ordering predicate.

The constructor:

`template<typename InIter> set(InIter first, InIter last);`

initializes the controlled sequence with the sequence [`first`, `last`), with the default ordering predicate. You use it to make the controlled sequence a copy of another sequence, with the default ordering predicate.

The constructor:

`template<typename InIter> set(InIter first, InIter last, key_compare^ pred);`

initializes the controlled sequence with the sequence [`first`, `last`), with the ordering predicate *pred*. You use it to make the controlled sequence a copy of another sequence, with the specified ordering predicate.

The constructor:

`set(System::Collections::Generic::IEnumerable<Key>^ right);`

initializes the controlled sequence with the sequence designated by the enumerator *right*, with the default ordering predicate. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the default ordering predicate.

The constructor:

`set(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred);`

initializes the controlled sequence with the sequence designated by the enumerator *right*, with the ordering predicate *pred*. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the specified ordering predicate.

### Example

```cpp
// cliext_set_construct.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
// construct an empty container
    Myset c1;
    System::Console::WriteLine("size() = {0}", c1.size());

    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an ordering rule
    Myset c2 = cliext::greater_equal<wchar_t>();
    System::Console::WriteLine("size() = {0}", c2.size());

    c2.insert(c1.begin(), c1.end());
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an iterator range
    Myset c3(c1.begin(), c1.end());
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an iterator range and an ordering rule
    Myset c4(c1.begin(), c1.end(),
        cliext::greater_equal<wchar_t>());
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an enumeration
    Myset c5(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);
    for each (wchar_t elem in c5)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an enumeration and an ordering rule
    Myset c6(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,
            cliext::greater_equal<wchar_t>());
    for each (wchar_t elem in c6)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct from a generic container
    Myset c7(c4);
    for each (wchar_t elem in c7)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying another container
    Myset c8(%c3);
    for each (wchar_t elem in c8)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
size() = 0
a b c
size() = 0
c b a
a b c
c b a
a b c
c b a
c b a
a b c
```

## <a name="size"></a> set::size (STL/CLR)

Counts the number of elements.

### Syntax

```cpp
size_type size();
```

### Remarks

The member function returns the length of the controlled sequence. You use it to determine the number of elements currently in the controlled sequence. If all you care about is whether the sequence has nonzero size, see [set::empty (STL/CLR)](#empty)`()`.

### Example

```cpp
// cliext_set_size.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0} after clearing", c1.size());

// add elements and clear again
    c1.insert(L'a');
    c1.insert(L'b');
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());
    return (0);
    }
```

```Output
a b c
size() = 3 starting with 3
size() = 0 after clearing
size() = 2 after adding 2
```

## <a name="size_type"></a> set::size_type (STL/CLR)

The type of a signed distance between two element.

### Syntax

```cpp
typedef int size_type;
```

### Remarks

The type describes a non-negative element count.

### Example

```cpp
// cliext_set_size_type.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    Myset::size_type diff = 0;
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
        ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
```

## <a name="swap"></a> set::swap (STL/CLR)

Swaps the contents of two containers.

### Syntax

```cpp
void swap(set<Key>% right);
```

#### Parameters

*right*<br/>
Container to swap contents with.

### Remarks

The member function swaps the controlled sequences between **`this`** and *right*. It does so in constant time and it throws no exceptions. You use it as a quick way to exchange the contents of two containers.

### Example

```cpp
// cliext_set_swap.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct another container with repetition of values
    Myset c2;
    c2.insert(L'd');
    c2.insert(L'e');
    c2.insert(L'f');
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
d e f
d e f
a b c
```

## <a name="to_array"></a> set::to_array (STL/CLR)

Copies the controlled sequence to a new array.

### Syntax

```cpp
cli::array<value_type>^ to_array();
```

### Remarks

The member function returns an array containing the controlled sequence. You use it to obtain a copy of the controlled sequence in array form.

### Example

```cpp
// cliext_set_to_array.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// copy the container and modify it
    cli::array<wchar_t>^ a1 = c1.to_array();

    c1.insert(L'd');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// display the earlier array copy
    for each (wchar_t elem in a1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c d
a b c
```

## <a name="upper_bound"></a> set::upper_bound (STL/CLR)

Finds end of range that matches a specified key.

### Syntax

```cpp
iterator upper_bound(key_type key);
```

#### Parameters

*key*<br/>
Key value to search for.

### Remarks

The member function determines the last element `X` in the controlled sequence that has equivalent ordering to *key*. If no such element exists, or if `X` is the last element in the controlled sequence, it returns [set::end (STL/CLR)](#end)`()`; otherwise it returns an iterator that designates the first element beyond `X`. You use it to locate the end of a sequence of elements currently in the controlled sequence that match a specified key.

### Example

```cpp
// cliext_set_upper_bound.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("upper_bound(L'x')==end() = {0}",
        c1.upper_bound(L'x') == c1.end());

    System::Console::WriteLine("*upper_bound(L'a') = {0}",
        *c1.upper_bound(L'a'));
    System::Console::WriteLine("*upper_bound(L'b') = {0}",
        *c1.upper_bound(L'b'));
    return (0);
    }
```

```Output
a b c
upper_bound(L'x')==end() = True
*upper_bound(L'a') = b
*upper_bound(L'b') = c
```

## <a name="value_comp"></a> set::value_comp (STL/CLR)

Copies the ordering delegate for two element values.

### Syntax

```cpp
value_compare^ value_comp();
```

### Remarks

The member function returns the ordering delegate used to order the controlled sequence. You use it to compare two element values.

### Example

```cpp
// cliext_set_value_comp.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    Myset::value_compare^ kcomp = c1.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False
```

## <a name="value_compare"></a> set::value_compare (STL/CLR)

The ordering delegate for two element values.

### Syntax

```cpp
Microsoft::VisualC::StlClr::BinaryDelegate<generic_value, generic_value, bool>
    value_compare;
```

### Remarks

The type is a synonym for the delegate that determines the ordering of its value arguments.

### Example

```cpp
// cliext_set_value_compare.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    Myset::value_compare^ kcomp = c1.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False
```

## <a name="value_type"></a> set::value_type (STL/CLR)

The type of an element.

### Syntax

```cpp
typedef generic_value value_type;
```

### Remarks

The type is a synonym for `generic_value`.

### Example

```cpp
// cliext_set_value_type.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c" using value_type
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
        {   // store element in value_type object
        Myset::value_type val = *it;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="op_neq"></a> operator!= (set) (STL/CLR)

List not equal comparison.

### Syntax

```cpp
template<typename Key>
    bool operator!=(set<Key>% left,
        set<Key>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(left == right)`. You use it to test whether *left* is not ordered the same as *right* when the two sets are compared element by element.

### Example

```cpp
// cliext_set_operator_ne.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] != [a b c] is {0}",
        c1 != c1);
    System::Console::WriteLine("[a b c] != [a b d] is {0}",
        c1 != c2);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] != [a b c] is False
[a b c] != [a b d] is True
```

## <a name="op_lt"></a> operator&lt; (set) (STL/CLR)

List less than comparison.

### Syntax

```cpp
template<typename Key>
    bool operator<(set<Key>% left,
        set<Key>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns true if, for the lowest position `i` for which `!(right[i] < left[i])` it is also true that `left[i] < right[i]`. Otherwise, it returns `left->size() < right->size()` You use it to test whether *left* is ordered before *right* when the two sets are compared element by element.

### Example

```cpp
// cliext_set_operator_lt.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] < [a b c] is {0}",
        c1 < c1);
    System::Console::WriteLine("[a b c] < [a b d] is {0}",
        c1 < c2);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] < [a b c] is False
[a b c] < [a b d] is True
```

## <a name="op_lteq"></a> operator&lt;= (set) (STL/CLR)

List less than or equal comparison.

### Syntax

```cpp
template<typename Key>
    bool operator<=(set<Key>% left,
        set<Key>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(right < left)`. You use it to test whether *left* is not ordered after *right* when the two sets are compared element by element.

### Example

```cpp
// cliext_set_operator_le.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] <= [a b c] is {0}",
        c1 <= c1);
    System::Console::WriteLine("[a b d] <= [a b c] is {0}",
        c2 <= c1);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] <= [a b c] is True
[a b d] <= [a b c] is False
```

## <a name="op_eq"></a> operator== (set) (STL/CLR)

List equal comparison.

### Syntax

```cpp
template<typename Key>
    bool operator==(set<Key>% left,
        set<Key>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns true only if the sequences controlled by *left* and *right* have the same length and, for each position `i`, `left[i] ==` `right[i]`. You use it to test whether *left* is ordered the same as *right* when the two sets are compared element by element.

### Example

```cpp
// cliext_set_operator_eq.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] == [a b c] is {0}",
        c1 == c1);
    System::Console::WriteLine("[a b c] == [a b d] is {0}",
        c1 == c2);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] == [a b c] is True
[a b c] == [a b d] is False
```

## <a name="op_gt"></a> operator&gt; (set) (STL/CLR)

List greater than comparison.

### Syntax

```cpp
template<typename Key>
    bool operator>(set<Key>% left,
        set<Key>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `right` `<` `left`. You use it to test whether *left* is ordered after *right* when the two sets are compared element by element.

### Example

```cpp
// cliext_set_operator_gt.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] > [a b c] is {0}",
        c1 > c1);
    System::Console::WriteLine("[a b d] > [a b c] is {0}",
        c2 > c1);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] > [a b c] is False
[a b d] > [a b c] is True
```

## <a name="op_gteq"></a> operator&gt;= (set) (STL/CLR)

List greater than or equal comparison.

### Syntax

```cpp
template<typename Key>
    bool operator>=(set<Key>% left,
        set<Key>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(left < right)`. You use it to test whether *left* is not ordered before *right* when the two sets are compared element by element.

### Example

```cpp
// cliext_set_operator_ge.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] >= [a b c] is {0}",
        c1 >= c1);
    System::Console::WriteLine("[a b c] >= [a b d] is {0}",
        c1 >= c2);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] >= [a b c] is True
[a b c] >= [a b d] is False
```
