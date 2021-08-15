---
description: "Learn more about: vector (STL/CLR)"
title: "vector (STL/CLR)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["cliext::vector", "cliext::vector::assign", "cliext::vector::at", "cliext::vector::back", "cliext::vector::back_item", "cliext::vector::begin", "cliext::vector::capacity", "cliext::vector::clear", "cliext::vector::const_iterator", "cliext::vector::const_reference", "cliext::vector::const_reverse_iterator", "cliext::vector::difference_type", "cliext::vector::empty", "cliext::vector::end", "cliext::vector::erase", "cliext::vector::front", "cliext::vector::front_item", "cliext::vector::generic_container", "cliext::vector::generic_iterator", "cliext::vector::generic_reverse_iterator", "cliext::vector::generic_value", "cliext::vector::insert", "cliext::vector::iterator", "cliext::vector::operator=", "cliext::vector::operator", "cliext::vector::pop_back", "cliext::vector::push_back", "cliext::vector::rbegin", "cliext::vector::reference", "cliext::vector::rend", "cliext::vector::reserve", "cliext::vector::resize", "cliext::vector::reverse_iterator", "cliext::vector::size", "cliext::vector::size_type", "cliext::vector::swap", "cliext::vector::to_array", "cliext::vector::value_type", "cliext::vector::vector"]
helpviewer_keywords: ["vector class [STL/CLR]", "<cliext/vector> header [STL/CLR]", "<vector> header [STL/CLR]", "operator!= member [STL/CLR]", "operator< member [STL/CLR]", "operator<= member [STL/CLR]", "operator== member [STL/CLR]", "operator> (vector) member [STL/CLR]", "operator>= member [STL/CLR]", "assign member [STL/CLR]", "at member [STL/CLR]", "back member [STL/CLR]", "back_item member [STL/CLR]", "begin member [STL/CLR]", "capacity member [STL/CLR]", "clear member [STL/CLR]", "const_iterator member [STL/CLR]", "const_reference member [STL/CLR]", "const_reverse_iterator member [STL/CLR]", "difference_type member [STL/CLR]", "empty member [STL/CLR]", "end member [STL/CLR]", "erase member [STL/CLR]", "front member [STL/CLR]", "front_item member [STL/CLR]", "generic_container member [STL/CLR]", "generic_iterator member [STL/CLR]", "generic_reverse_iterator member [STL/CLR]", "generic_value member [STL/CLR]", "insert member [STL/CLR]", "iterator member [STL/CLR]", "operator= member [STL/CLR]", "operator member [STL/CLR]", "pop_back member [STL/CLR]", "push_back member [STL/CLR]", "rbegin member [STL/CLR]", "reference member [STL/CLR]", "rend member [STL/CLR]", "reserve member [STL/CLR]", "resize member [STL/CLR]", "reverse_iterator member [STL/CLR]", "size member [STL/CLR]", "size_type member [STL/CLR]", "swap member [STL/CLR]", "to_array member [STL/CLR]", "value_type member [STL/CLR]", "vector member [STL/CLR]"]
ms.assetid: f90060d5-097a-4e9d-9a26-a634b5b9c6c2
---
# vector (STL/CLR)

The template class describes an object that controls a varying-length sequence of elements that has random access. You use the container `vector` to manage a sequence of elements as a contiguous block of storage. The block is implemented as an array that grows on demand.

In the description below, `GValue` is the same as *Value* unless the latter is a ref type, in which case it is `Value^`.

## Syntax

```cpp
template<typename Value>
    ref class vector
        :   public
        System::ICloneable,
        System::Collections::IEnumerable,
        System::Collections::ICollection,
        System::Collections::Generic::IEnumerable<GValue>,
        System::Collections::Generic::ICollection<GValue>,
        System::Collections::Generic::IList<GValue>,
        Microsoft::VisualC::StlClr::IVector<GValue>
    { ..... };
```

### Parameters

*Value*<br/>
The type of an element in the controlled sequence.

## Requirements

**Header:** \<cliext/vector>

**Namespace:** cliext

## Declarations

|Type Definition|Description|
|---------------------|-----------------|
|[vector::const_iterator (STL/CLR)](#const_iterator)|The type of a constant iterator for the controlled sequence.|
|[vector::const_reference (STL/CLR)](#const_reference)|The type of a constant reference to an element.|
|[vector::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|The type of a constant reverse iterator for the controlled sequence.|
|[vector::difference_type (STL/CLR)](#difference_type)|The type of a signed distance between two elements.|
|[vector::generic_container (STL/CLR)](#generic_container)|The type of the generic interface for the container.|
|[vector::generic_iterator (STL/CLR)](#generic_iterator)|The type of an iterator for the generic interface for the container.|
|[vector::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|The type of a reverse iterator for the generic interface for the container.|
|[vector::generic_value (STL/CLR)](#generic_value)|The type of an element for the generic interface for the container.|
|[vector::iterator (STL/CLR)](#iterator)|The type of an iterator for the controlled sequence.|
|[vector::reference (STL/CLR)](#reference)|The type of a reference to an element.|
|[vector::reverse_iterator (STL/CLR)](#reverse_iterator)|The type of a reverse iterator for the controlled sequence.|
|[vector::size_type (STL/CLR)](#size_type)|The type of a signed distance between two elements.|
|[vector::value_type (STL/CLR)](#value_type)|The type of an element.|

|Member Function|Description|
|---------------------|-----------------|
|[vector::assign (STL/CLR)](#assign)|Replaces all elements.|
|[vector::at (STL/CLR)](#at)|Accesses an element at a specified position.|
|[vector::back (STL/CLR)](#back)|Accesses the last element.|
|[vector::begin (STL/CLR)](#begin)|Designates the beginning of the controlled sequence.|
|[vector::capacity (STL/CLR)](#capacity)|Reports the size of allocated storage for the container.|
|[vector::clear (STL/CLR)](#clear)|Removes all elements.|
|[vector::empty (STL/CLR)](#empty)|Tests whether no elements are present.|
|[vector::end (STL/CLR)](#end)|Designates the end of the controlled sequence.|
|[vector::erase (STL/CLR)](#erase)|Removes elements at specified positions.|
|[vector::front (STL/CLR)](#front)|Accesses the first element.|
|[vector::insert (STL/CLR)](#insert)|Adds elements at a specified position.|
|[vector::pop_back (STL/CLR)](#pop_back)|Removes the last element.|
|[vector::push_back (STL/CLR)](#push_back)|Adds a new last element.|
|[vector::rbegin (STL/CLR)](#rbegin)|Designates the beginning of the reversed controlled sequence.|
|[vector::rend (STL/CLR)](#rend)|Designates the end of the reversed controlled sequence.|
|[vector::reserve (STL/CLR)](#reserve)|Ensures a minimum growth capacity for the container.|
|[vector::resize (STL/CLR)](#resize)|Changes the number of elements.|
|[vector::size (STL/CLR)](#size)|Counts the number of elements.|
|[vector::swap (STL/CLR)](#swap)|Swaps the contents of two containers.|
|[vector::to_array (STL/CLR)](#to_array)|Copies the controlled sequence to a new array.|
|[vector::vector (STL/CLR)](#vector)|Constructs a container object.|

|Property|Description|
|--------------|-----------------|
|[vector::back_item (STL/CLR)](#back_item)|Accesses the last element.|
|[vector::front_item (STL/CLR)](#front_item)|Accesses the first element.|

|Operator|Description|
|--------------|-----------------|
|[vector::operator= (STL/CLR)](#op_as)|Replaces the controlled sequence.|
|[vector::operator(STL/CLR)](#op)|Accesses an element at a specified position.|
|[operator!= (vector) (STL/CLR)](#op_neq)|Determines if a `vector` object is not equal to another `vector` object.|
|[operator< (vector) (STL/CLR)](#op_lt)|Determines if a `vector` object is less than another `vector` object.|
|[operator<= (vector) (STL/CLR)](#op_lteq)|Determines if a `vector` object is less than or equal to another `vector` object.|
|[operator== (vector) (STL/CLR)](#op_eq)|Determines if a `vector` object is equal to another `vector` object.|
|[operator> (vector) (STL/CLR)](#op_gt)|Determines if a `vector` object is greater than another `vector` object.|
|[operator>= (vector) (STL/CLR)](#op_gteq)|Determines if a `vector` object is greater than or equal to another `vector` object.|

## Interfaces

|Interface|Description|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicate an object.|
|<xref:System.Collections.IEnumerable>|Sequence through elements.|
|<xref:System.Collections.ICollection>|Maintain group of elements.|
|<xref:System.Collections.Generic.IEnumerable%601>|Sequence through typed elements.|
|<xref:System.Collections.Generic.ICollection%601>|Maintain group of typed elements.|
|<xref:System.Collections.Generic.IList%601>|Maintain ordered group of typed elements.|
|IVector<Value\>|Maintain generic container.|

## Remarks

The object allocates and frees storage for the sequence it controls through a stored array of *Value* elements, which grows on demand. Growth occurs in such a way that the cost of appending a new element is amortized constant time. In other words, the cost of adding elements at the end does not increase, on average, as the length of the controlled sequence gets larger. Thus, a vector is a good candidate for the underlying container for template class [stack (STL/CLR)](../dotnet/stack-stl-clr.md).

A `vector` supports random-access iterators, which means you can refer to an element directly given its numerical position, counting from zero for the first (front) element, to `size() - 1` for the last (back) element. It also means that a vector is a good candidate for the underlying container for template class [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).

A vector iterator stores a handle to its associated vector object, along with the bias of the element it designates. You can use iterators only with their associated container objects. The bias of a vector element is the same as its position.

Inserting or erasing elements can change the element value stored at a given position, so the value designated by an iterator can also change. (The container may have to copy elements up or down to create a hole before an insert or to fill a hole after an erase.) Nevertheless, a vector iterator remains valid so long as its bias is in the range `[0, size()]`. Moreover, a valid iterator remains dereferencable -- you can use it to access or alter the element value it designates -- so long as its bias is not equal to `size()`.

Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does not destroy its elements.

## Members

## <a name="assign"></a> vector::assign (STL/CLR)

Replaces all elements.

### Syntax

```cpp
void assign(size_type count, value_type val);
template<typename InIt>
    void assign(InIt first, InIt last);
void assign(System::Collections::Generic::IEnumerable<Value>^ right);
```

#### Parameters

*count*<br/>
Number of elements to insert.

*first*<br/>
Beginning of range to insert.

*last*<br/>
End of range to insert.

*right*<br/>
Enumeration to insert.

*val*<br/>
Value of the element to insert.

### Remarks

The first member function replaces the controlled sequence with a repetition of *count* elements of value *val*. You use it to fill the container with elements all having the same value.

If `InIt` is an integer type, the second member function behaves the same as `assign((size_type)first, (value_type)last)`. Otherwise, it replaces the controlled sequence with the sequence [`first`, `last`). You use it to make the controlled sequence a copy another sequence.

The third member function replaces the controlled sequence with the sequence designated by the enumerator *right*. You use it to make the controlled sequence a copy of a sequence described by an enumerator.

### Example

```cpp
// cliext_vector_assign.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// assign a repetition of values
    cliext::vector<wchar_t> c2;
    c2.assign(6, L'x');
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign an iterator range
    c2.assign(c1.begin(), c1.end() - 1);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign an enumeration
    c2.assign(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
x x x x x x
a b
a b c
```

## <a name="at"></a> vector::at (STL/CLR)

Accesses an element at a specified position.

### Syntax

```cpp
reference at(size_type pos);
```

#### Parameters

*pos*<br/>
Position of element to access.

### Remarks

The member function returns a reference to the element of the controlled sequence at position *pos*. You use it to read or write an element whose position you know.

### Example

```cpp
// cliext_vector_at.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" using at
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1.at(i));
    System::Console::WriteLine();

// change an entry and redisplay
    c1.at(1) = L'x';
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1[i]);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a x c
```

## <a name="back"></a> vector::back (STL/CLR)

Accesses the last element.

### Syntax

```cpp
reference back();
```

### Remarks

The member function returns a reference to the last element of the controlled sequence, which must be non-empty. You use it to access the last element, when you know it exists.

### Example

```cpp
// cliext_vector_back.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("back() = {0}", c1.back());

// alter last item and reinspect
    c1.back() = L'x';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
back() = c
a b x
```

## <a name="back_item"></a> vector::back_item (STL/CLR)

Accesses the last element.

### Syntax

```cpp
property value_type back_item;
```

### Remarks

The property accesses the last element of the controlled sequence, which must be non-empty. You use it to read or write the last element, when you know it exists.

### Example

```cpp
// cliext_vector_back_item.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("back_item = {0}", c1.back_item);

// alter last item and reinspect
    c1.back_item = L'x';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
back_item = c
a b x
```

## <a name="begin"></a> vector::begin (STL/CLR)

Designates the beginning of the controlled sequence.

### Syntax

```cpp
iterator begin();
```

### Remarks

The member function returns a random-access iterator that designates the first element of the controlled sequence, or just beyond the end of an empty sequence. You use it to obtain an iterator that designates the `current` beginning of the controlled sequence, but its status can change if the length of the controlled sequence changes.

### Example

```cpp
// cliext_vector_begin.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items
    cliext::vector<wchar_t>::iterator it = c1.begin();
    System::Console::WriteLine("*begin() = {0}", *it);
    System::Console::WriteLine("*++begin() = {0}", *++it);

// alter first two items and reinspect
    *--it = L'x';
    *++it = L'y';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
*begin() = a
*++begin() = b
x y c
```

## <a name="capacity"></a> vector::capacity (STL/CLR)

Reports the size of allocated storage for the container.

### Syntax

```cpp
size_type capacity();
```

### Remarks

The member function returns the storage currently allocated to hold the controlled sequence, a value at least as large as [vector::size (STL/CLR)](#size)`()`. You use it to determine how much the container can grow before it must reallocate storage for the controlled sequence.

### Example

```cpp
// cliext_vector_capacity.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1.at(i));
    System::Console::WriteLine();

// increase capacity
    cliext::vector<wchar_t>::size_type cap = c1.capacity();
    System::Console::WriteLine("capacity() = {0}, ok = {1}",
        cap, c1.size() <= cap);
    c1.reserve(cap + 5);
    System::Console::WriteLine("capacity() = {0}, ok = {1}",
        c1.capacity(), cap + 5 <= c1.capacity());
    return (0);
    }
```

```Output
a b c
capacity() = 4, ok = True
capacity() = 9, ok = True
```

## <a name="clear"></a> vector::clear (STL/CLR)

Removes all elements.

### Syntax

```cpp
void clear();
```

### Remarks

The member function effectively calls [vector::erase (STL/CLR)](#erase)`(` [vector::begin (STL/CLR)](#begin)`(),` [vector::end (STL/CLR)](#end)`())`. You use it to ensure that the controlled sequence is empty.

### Example

```cpp
// cliext_vector_clear.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());

// add elements and clear again
    c1.push_back(L'a');
    c1.push_back(L'b');

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

## <a name="const_iterator"></a> vector::const_iterator (STL/CLR)

The type of a constant iterator for the controlled sequence.

### Syntax

```cpp
typedef T2 const_iterator;
```

### Remarks

The type describes an object of unspecified type `T2` that can serve as a constant random-access iterator for the controlled sequence.

### Example

```cpp
// cliext_vector_const_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    cliext::vector<wchar_t>::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        System::Console::Write("{0} ", *cit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="const_reference"></a> vector::const_reference (STL/CLR)

The type of a constant reference to an element.

### Syntax

```cpp
typedef value_type% const_reference;
```

### Remarks

The type describes a constant reference to an element.

### Example

```cpp
// cliext_vector_const_reference.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    cliext::vector<wchar_t>::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        {   // get a const reference to an element
        cliext::vector<wchar_t>::const_reference cref = *cit;
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="const_reverse_iterator"></a> vector::const_reverse_iterator (STL/CLR)

The type of a constant reverse iterator for the controlled sequence..

### Syntax

```cpp
typedef T4 const_reverse_iterator;
```

### Remarks

The type describes an object of unspecified type `T4` that can serve as a constant reverse iterator for the controlled sequence.

### Example

```cpp
// cliext_vector_const_reverse_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" reversed
    cliext::vector<wchar_t>::const_reverse_iterator crit = c1.rbegin();
    cliext::vector<wchar_t>::const_reverse_iterator crend = c1.rend();
    for (; crit != crend; ++crit)
        System::Console::Write("{0} ", *crit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="difference_type"></a> vector::difference_type (STL/CLR)

The types of a signed distance between two elements.

### Syntax

```cpp
typedef int difference_type;
```

### Remarks

The type describes a signed element count.

### Example

```cpp
// cliext_vector_difference_type.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    cliext::vector<wchar_t>::difference_type diff = 0;
    for (cliext::vector<wchar_t>::iterator it = c1.begin();
        it != c1.end(); ++it) ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);

// compute negative difference
    diff = 0;
    for (cliext::vector<wchar_t>::iterator it = c1.end();
        it != c1.begin(); --it) --diff;
    System::Console::WriteLine("begin()-end() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
begin()-end() = -3
```

## <a name="empty"></a> vector::empty (STL/CLR)

Tests whether no elements are present.

### Syntax

```cpp
bool empty();
```

### Remarks

The member function returns true for an empty controlled sequence. It is equivalent to [vector::size (STL/CLR)](#size)`() == 0`. You use it to test whether the vector is empty.

### Example

```cpp
// cliext_vector_empty.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

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

## <a name="end"></a> vector::end (STL/CLR)

Designates the end of the controlled sequence.

### Syntax

```cpp
iterator end();
```

### Remarks

The member function returns a random-access iterator that points just beyond the end of the controlled sequence. You use it to obtain an iterator that designates the `current` end of the controlled sequence, but its status can change if the length of the controlled sequence changes.

### Example

```cpp
// cliext_vector_end.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last two items
    cliext::vector<wchar_t>::iterator it = c1.end();
    --it;
    System::Console::WriteLine("*-- --end() = {0}", *--it);
    System::Console::WriteLine("*--end() = {0}", *++it);

// alter first two items and reinspect
    *--it = L'x';
    *++it = L'y';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
*-- --end() = b
*--end() = c
a x y
```

## <a name="erase"></a> vector::erase (STL/CLR)

Removes elements at specified positions.

### Syntax

```cpp
iterator erase(iterator where);
iterator erase(iterator first, iterator last);
```

#### Parameters

*first*<br/>
Beginning of range to erase.

*last*<br/>
End of range to erase.

*where*<br/>
Element to erase.

### Remarks

The first member function removes the element of the controlled sequence pointed to by *where*. You use it to remove a single element.

The second member function removes the elements of the controlled sequence in the range [`first`, `last`). You use it to remove zero or more contiguous elements.

Both member functions return an iterator that designates the first element remaining beyond any elements removed, or [vector::end (STL/CLR)](#end)`()` if no such element exists.

When erasing elements, the number of element copies is linear in the number of elements between the end of the erasure and the nearer end of the sequence. (When erasing one or more elements at either end of the sequence, no element copies occur.)

### Example

```cpp
// cliext_vector_erase.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// erase an element and reinspect
    System::Console::WriteLine("erase(begin()) = {0}",
        *c1.erase(c1.begin()));

// add elements and display " b c d e"
    c1.push_back(L'd');
    c1.push_back(L'e');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// erase all but end
    cliext::vector<wchar_t>::iterator it = c1.end();
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

## <a name="front"></a> vector::front (STL/CLR)

Accesses the first element.

### Syntax

```cpp
reference front();
```

### Remarks

The member function returns a reference to the first element of the controlled sequence, which must be non-empty. You use it to read or write the first element, when you know it exists.

### Example

```cpp
// cliext_vector_front.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first item
    System::Console::WriteLine("front() = {0}", c1.front());

// alter first item and reinspect
    c1.front() = L'x';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
front() = a
x b c
```

## <a name="front_item"></a> vector::front_item (STL/CLR)

Accesses the first element.

### Syntax

```cpp
property value_type front_item;
```

### Remarks

The property accesses the first element of the controlled sequence, which must be non-empty. You use it to read or write the first element, when you know it exists.

### Example

```cpp
// cliext_vector_front_item.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first item
    System::Console::WriteLine("front_item = {0}", c1.front_item);

// alter first item and reinspect
    c1.front_item = L'x';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
front_item = a
x b c
```

## <a name="generic_container"></a> vector::generic_container (STL/CLR)

The type of the generic interface for the container.

### Syntax

```cpp
typedef Microsoft::VisualC::StlClr::
    IVector<generic_value>
    generic_container;
```

### Remarks

The type describes the generic interface for this template container class.

### Example

```cpp
// cliext_vector_generic_container.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    gc1->insert(gc1->end(), L'd');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify original and display generic
    c1.push_back(L'e');

    System::Collections::IEnumerator^ enum1 =
        gc1->GetEnumerator();
    while (enum1->MoveNext())
        System::Console::Write("{0} ", enum1->Current);
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

## <a name="generic_iterator"></a> vector::generic_iterator (STL/CLR)

The type of an iterator for use with the generic interface for the container.

### Syntax

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ContainerRandomAccessIterator<generic_value>
    generic_iterator;
```

### Remarks

The type describes a generic iterator that can be used with the generic interface for this template container class.

### Example

```cpp
// cliext_vector_generic_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    cliext::vector<wchar_t>::generic_iterator gcit = gc1->begin();
    cliext::vector<wchar_t>::generic_value gcval = *gcit;
    *++gcit = gcval;
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a a c
```

## <a name="generic_reverse_iterator"></a> vector::generic_reverse_iterator (STL/CLR)

The type of a reverse iterator for use with the generic interface for the container.

### Syntax

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ReverseRandomAccessIterator<generic_value> generic_reverse_iterator;
```

### Remarks

The type describes a generic reverse iterator that can be used with the generic interface for this template container class.

### Example

```cpp
// cliext_vector_generic_reverse_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    cliext::vector<wchar_t>::generic_reverse_iterator gcit = gc1->rbegin();
    cliext::vector<wchar_t>::generic_value gcval = *gcit;
    *++gcit = gcval;
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a c c
```

## <a name="generic_value"></a> vector::generic_value (STL/CLR)

The type of an element for use with the generic interface for the container.

### Syntax

```cpp
typedef GValue generic_value;
```

### Remarks

The type describes an object of type `GValue` that describes the stored element value for use with the generic interface for this template container class.

### Example

```cpp
// cliext_vector_generic_value.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    cliext::vector<wchar_t>::generic_iterator gcit = gc1->begin();
    cliext::vector<wchar_t>::generic_value gcval = *gcit;
    *++gcit = gcval;
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a a c
```

## <a name="insert"></a> vector::insert (STL/CLR)

Adds elements at a specified position.

### Syntax

```cpp
iterator insert(iterator where, value_type val);
void insert(iterator where, size_type count, value_type val);
template<typename InIt>
    void insert(iterator where, InIt first, InIt last);
void insert(iterator where,
    System::Collections::Generic::IEnumerable<Value>^ right);
```

#### Parameters

*count*<br/>
Number of elements to insert.

*first*<br/>
Beginning of range to insert.

*last*<br/>
End of range to insert.

*right*<br/>
Enumeration to insert.

*val*<br/>
Value of the element to insert.

*where*<br/>
Where in container to insert before.

### Remarks

Each of the member functions inserts, before the element pointed to by *where* in the controlled sequence, a sequence specified by the remaining operands.

The first member function inserts an element with value *val* and returns an iterator that designates the newly inserted element. You use it to insert a single element before a place designated by an iterator.

The second member function inserts a repetition of *count* elements of value *val*. You use it to insert zero or more contiguous elements which are all copies of the same value.

If `InIt` is an integer type, the third member function behaves the same as `insert(where, (size_type)first, (value_type)last)`. Otherwise, it inserts the sequence [`first`, `last`). You use it to insert zero or more contiguous elements copied from another sequence.

The fourth member function inserts the sequence designated by the *right*. You use it to insert a sequence described by an enumerator.

When inserting a single element, the number of element copies is linear in the number of elements between the insertion point and the nearer end of the sequence. (When inserting one or more elements at either end of the sequence, no element copies occur.) If `InIt` is an input iterator, the third member function effectively performs a single insertion for each element in the sequence. Otherwise, when inserting `N` elements, the number of element copies is linear in `N` plus the number of elements between the insertion point and the nearer end of the sequence.

### Example

```cpp
// cliext_vector_insert.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert a single value using iterator
    cliext::vector<wchar_t>::iterator it = c1.begin();
    System::Console::WriteLine("insert(begin()+1, L'x') = {0}",
        *c1.insert(++it, L'x'));
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert a repetition of values
    cliext::vector<wchar_t> c2;
    c2.insert(c2.begin(), 2, L'y');
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert an iterator range
    it = c1.end();
    c2.insert(c2.end(), c1.begin(), --it);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert an enumeration
    c2.insert(c2.begin(),   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
insert(begin()+1, L'x') = x
a x b c
y y
y y a x b
a x b c y y a x b
```

## <a name="iterator"></a> vector::iterator (STL/CLR)

The type of an iterator for the controlled sequence.

### Syntax

```cpp
typedef T1 iterator;
```

### Remarks

The type describes an object of unspecified type `T1` that can serve as a random-access iterator for the controlled sequence.

### Example

```cpp
// cliext_vector_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    cliext::vector<wchar_t>::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();

// alter first element and redisplay
    it = c1.begin();
    *it = L'x';
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
x b c
```

## <a name="op_as"></a> vector::operator= (STL/CLR)

Replaces the controlled sequence.

### Syntax

```cpp
vector<Value>% operator=(vector<Value>% right);
```

#### Parameters

*right*<br/>
Container to copy.

### Remarks

The member operator copies *right* to the object, then returns **`*this`**. You use it to replace the controlled sequence with a copy of the controlled sequence in *right*.

### Example

```cpp
// cliext_vector_operator_as.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
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

## <a name="op"></a> vector::operator(STL/CLR)

Accesses an element at a specified position.

### Syntax

```cpp
reference operator[](size_type pos);
```

#### Parameters

*pos*<br/>
Position of element to access.

### Remarks

The member operator returns a referene to the element at position *pos*. You use it to access an element whose position you know.

### Example

```cpp
// cliext_vector_operator_sub.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" using subscripting
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1[i]);
    System::Console::WriteLine();

// change an entry and redisplay
    c1[1] = L'x';
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1[i]);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a x c
```

## <a name="pop_back"></a> vector::pop_back (STL/CLR)

Removes the last element.

### Syntax

```cpp
void pop_back();
```

### Remarks

The member function removes the last element of the controlled sequence, which must be non-empty. You use it to shorten the vector by one element at the back.

### Example

```cpp
// cliext_vector_pop_back.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// pop an element and redisplay
    c1.pop_back();
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b
```

## <a name="push_back"></a> vector::push_back (STL/CLR)

Adds a new last element.

### Syntax

```cpp
void push_back(value_type val);
```

### Remarks

The member function inserts an element with value `val` at the end of the controlled sequence. You use it to append another element to the vector.

### Example

```cpp
// cliext_vector_push_back.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="rbegin"></a> vector::rbegin (STL/CLR)

Designates the beginning of the reversed controlled sequence.

### Syntax

```cpp
reverse_iterator rbegin();
```

### Remarks

The member function returns a reverse iterator that designates the last element of the controlled sequence, or just beyond the beginning of an empty sequence. Hence, it designates the `beginning` of the reverse sequence. You use it to obtain an iterator that designates the `current` beginning of the controlled sequence seen in reverse order, but its status can change if the length of the controlled sequence changes.

### Example

```cpp
// cliext_vector_rbegin.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items in reversed sequence
    cliext::vector<wchar_t>::reverse_iterator rit = c1.rbegin();
    System::Console::WriteLine("*rbegin() = {0}", *rit);
    System::Console::WriteLine("*++rbegin() = {0}", *++rit);

// alter first two items and reinspect
    *--rit = L'x';
    *++rit = L'y';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
*rbegin() = c
*++rbegin() = b
a y x
```

## <a name="reference"></a> vector::reference (STL/CLR)

The type of a reference to an element.

### Syntax

```cpp
typedef value_type% reference;
```

### Remarks

The type describes a reference to an element.

### Example

```cpp
// cliext_vector_reference.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    cliext::vector<wchar_t>::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        {   // get a reference to an element
        cliext::vector<wchar_t>::reference ref = *it;
        System::Console::Write("{0} ", ref);
        }
    System::Console::WriteLine();

// modify contents " a b c"
    for (it = c1.begin(); it != c1.end(); ++it)
        {   // get a reference to an element
        cliext::vector<wchar_t>::reference ref = *it;

        ref += (wchar_t)(L'A' - L'a');
        System::Console::Write("{0} ", ref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
A B C
```

## <a name="rend"></a> vector::rend (STL/CLR)

Designates the end of the reversed controlled sequence.

### Syntax

```cpp
reverse_iterator rend();
```

### Remarks

The member function returns a reverse iterator that points just beyond the beginning of the controlled sequence. Hence, it designates the `end` of the reverse sequence. You use it to obtain an iterator that designates the `current` end of the controlled sequence seen in reverse order, but its status can change if the length of the controlled sequence changes.

### Example

```cpp
// cliext_vector_rend.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items
    cliext::vector<wchar_t>::reverse_iterator rit = c1.rend();
    --rit;
    System::Console::WriteLine("*-- --rend() = {0}", *--rit);
    System::Console::WriteLine("*--rend() = {0}", *++rit);

// alter first two items and reinspect
    *--rit = L'x';
    *++rit = L'y';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
*-- --rend() = b
*--rend() = a
y x c
```

## <a name="reserve"></a> vector::reserve (STL/CLR)

Ensures a minimum growth capacity for the container.

### Syntax

```cpp
void reserve(size_type count);
```

#### Parameters

*count*<br/>
New minimum capacity of the container.

### Remarks

The member function ensures that `capacity()` henceforth returns at least *count*. You use it to ensure that the container need not reallocate storage for the controlled sequence until it has grown to the specified size.

### Example

```cpp
// cliext_vector_reserve.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1.at(i));
    System::Console::WriteLine();

// increase capacity
    cliext::vector<wchar_t>::size_type cap = c1.capacity();
    System::Console::WriteLine("capacity() = {0}, ok = {1}",
        cap, c1.size() <= cap);
    c1.reserve(cap + 5);
    System::Console::WriteLine("capacity() = {0}, ok = {1}",
        c1.capacity(), cap + 5 <= c1.capacity());
    return (0);
    }
```

```Output
a b c
capacity() = 4, ok = True
capacity() = 9, ok = True
```

## <a name="resize"></a> vector::resize (STL/CLR)

Changes the number of elements.

### Syntax

```cpp
void resize(size_type new_size);
void resize(size_type new_size, value_type val);
```

#### Parameters

*new_size*<br/>
New size of the controlled sequence.

*val*<br/>
Value of the padding element.

### Remarks

The member functions both ensure that [vector::size (STL/CLR)](#size)`()` henceforth returns *new_size*. If it must make the controlled sequence longer, the first member function appends elements with value `value_type()`, while the second member function appends elements with value *val*. To make the controlled sequence shorter, both member functions effectively erase the last element [vector::size (STL/CLR)](#size)`() -` `new_size` times. You use it to ensure that the controlled sequence has size *new_size*, by either trimming or padding the current controlled sequence.

### Example

```cpp
// cliext_vector_resize.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
// construct an empty container and pad with default values
    cliext::vector<wchar_t> c1;
    System::Console::WriteLine("size() = {0}", c1.size());
    c1.resize(4);
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", (int)elem);
    System::Console::WriteLine();

// resize to empty
    c1.resize(0);
    System::Console::WriteLine("size() = {0}", c1.size());

// resize and pad
    c1.resize(5, L'x');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
size() = 0
0 0 0 0
size() = 0
x x x x x
```

## <a name="reverse_iterator"></a> vector::reverse_iterator (STL/CLR)

The type of a reverse iterator for the controlled sequence.

### Syntax

```cpp
typedef T3 reverse_iterator;
```

### Remarks

The type describes an object of unspecified type `T3` that can serve as a reverse iterator for the controlled sequence.

### Example

```cpp
// cliext_vector_reverse_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" reversed
    cliext::vector<wchar_t>::reverse_iterator rit = c1.rbegin();
    for (; rit != c1.rend(); ++rit)
        System::Console::Write("{0} ", *rit);
    System::Console::WriteLine();

// alter first element and redisplay
    rit = c1.rbegin();
    *rit = L'x';
    for (; rit != c1.rend(); ++rit)
        System::Console::Write("{0} ", *rit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
x b a
```

## <a name="size"></a> vector::size (STL/CLR)

Counts the number of elements.

### Syntax

```cpp
size_type size();
```

### Remarks

The member function returns the length of the controlled sequence. You use it to determine the number of elements currently in the controlled sequence. If all you care about is whether the sequence has nonzero size, see [vector::empty (STL/CLR)](#empty)`()`.

### Example

```cpp
// cliext_vector_size.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0} after clearing", c1.size());

// add elements and clear again
    c1.push_back(L'a');
    c1.push_back(L'b');
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

## <a name="size_type"></a> vector::size_type (STL/CLR)

The type of a signed distance between two elements.

### Syntax

```cpp
typedef int size_type;
```

### Remarks

The type describes a non-negative element count.

### Example

```cpp
// cliext_vector_size_type.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    cliext::vector<wchar_t>::size_type diff = c1.end() - c1.begin();
    System::Console::WriteLine("end()-begin() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
```

## <a name="swap"></a> vector::swap (STL/CLR)

Swaps the contents of two containers.

### Syntax

```cpp
void swap(vector<Value>% right);
```

#### Parameters

*right*<br/>
Container to swap contents with.

### Remarks

The member function swaps the controlled sequences between **`*this`** and *right*. It does so in constant time and it throws no exceptions. You use it as a quick way to exchange the contents of two containers.

### Example

```cpp
// cliext_vector_swap.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct another container with repetition of values
    cliext::vector<wchar_t> c2(5, L'x');
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

## <a name="to_array"></a> vector::to_array (STL/CLR)

Copies the controlled sequence to a new array.

### Syntax

```cpp
cli::array<Value>^ to_array();
```

### Remarks

The member function returns an array containing the controlled sequence. You use it to obtain a copy of the controlled sequence in array form.

### Example

```cpp
// cliext_vector_to_array.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// copy the container and modify it
    cli::array<wchar_t>^ a1 = c1.to_array();

    c1.push_back(L'd');
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

## <a name="value_type"></a> vector::value_type (STL/CLR)

The type of an element.

### Syntax

```cpp
typedef Value value_type;
```

### Remarks

The type is a synonym for the template parameter *Value*.

### Example

```cpp
// cliext_vector_value_type.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" using value_type
    for (cliext::vector<wchar_t>::iterator it = c1.begin();
        it != c1.end(); ++it)
        {   // store element in value_type object
        cliext::vector<wchar_t>::value_type val = *it;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="vector"></a> vector::vector (STL/CLR)

Constructs a container object.

### Syntax

```cpp
vector();
vector(vector<Value>% right);
vector(vector<Value>^ right);
explicit vector(size_type count);
vector(size_type count, value_type val);
template<typename InIt>
    vector(InIt first, InIt last);
vector(System::Collections::Generic::IEnumerable<Value>^ right);
```

#### Parameters

*count*<br/>
Number of elements to insert.

*first*<br/>
Beginning of range to insert.

*last*<br/>
End of range to insert.

*right*<br/>
Object or range to insert.

*val*<br/>
Value of the element to insert.

### Remarks

The constructor:

`vector();`

initializes the controlled sequence with no elements. You use it to specify an empty initial controlled sequence.

The constructor:

`vector(vector<Value>% right);`

initializes the controlled sequence with the sequence [`right.begin()`, `right.end()`). You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the vector object *right*.

The constructor:

`vector(vector<Value>^ right);`

initializes the controlled sequence with the sequence [`right->begin()`, `right->end()`). You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the vector object whose handle is *right*.

The constructor:

`explicit vector(size_type count);`

initializes the controlled sequence with *count* elements each with value `value_type()`. You use it to fill the container with elements all having the default value.

The constructor:

`vector(size_type count, value_type val);`

initializes the controlled sequence with *count* elements each with value *val*. You use it to fill the container with elements all having the same value.

The constructor:

`template<typename InIt>`

`vector(InIt first, InIt last);`

initializes the controlled sequence with the sequence [`first`, `last`). You use it to make the controlled sequence a copy of another sequence.

The constructor:

`vector(System::Collections::Generic::IEnumerable<Value>^ right);`

initializes the controlled sequence with the sequence designated by the enumerator *right*. You use it to make the controlled sequence a copy of another sequence described by an enumerator.

### Example

```cpp
// cliext_vector_construct.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
// construct an empty container
    cliext::vector<wchar_t> c1;
    System::Console::WriteLine("size() = {0}", c1.size());

// construct with a repetition of default values
    cliext::vector<wchar_t> c2(3);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", (int)elem);
    System::Console::WriteLine();

// construct with a repetition of values
    cliext::vector<wchar_t> c3(6, L'x');
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an iterator range
    cliext::vector<wchar_t>::iterator it = c3.end();
    cliext::vector<wchar_t> c4(c3.begin(), --it);
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an enumeration
    cliext::vector<wchar_t> c5(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);
    for each (wchar_t elem in c5)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying another container
    cliext::vector<wchar_t> c7(c3);
    for each (wchar_t elem in c7)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying a container handle
    cliext::vector<wchar_t> c8(%c3);
    for each (wchar_t elem in c8)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
    }
```

```Output
size() = 0
0 0 0
x x x x x x
x x x x x
x x x x x x
x x x x x x
x x x x x x
```

## <a name="op_neq"></a> operator!= (vector) (STL/CLR)

Vector not equal comparison.

### Syntax

```cpp
template<typename Value>
    bool operator!=(vector<Value>% left,
        vector<Value>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(left == right)`. You use it to test whether *left* is not ordered the same as *right* when the two vectors are compared element by element.

### Example

```cpp
// cliext_vector_operator_ne.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="op_lt"></a> operator&lt; (vector) (STL/CLR)

Vector less than comparison.

### Syntax

```cpp
template<typename Value>
    bool operator<(vector<Value>% left,
        vector<Value>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns true if, for the lowest position `i` for which `!(right[i] < left[i])` it is also true that `left[i] < right[i]`. Otherwise, it returns `left->size() < right->size()` You use it to test whether *left* is ordered before *right* when the two vectors are compared element by element.

### Example

```cpp
// cliext_vector_operator_lt.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="op_lteq"></a> operator&lt;= (vector) (STL/CLR)

Vector less than or equal comparison.

### Syntax

```cpp
template<typename Value>
    bool operator<=(vector<Value>% left,
        vector<Value>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(right < left)`. You use it to test whether *left* is not ordered after *right* when the two vectors are compared element by element.

### Example

```cpp
// cliext_vector_operator_le.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="op_eq"></a> operator== (vector) (STL/CLR)

Vector equal comparison.

### Syntax

```cpp
template<typename Value>
    bool operator==(vector<Value>% left,
        vector<Value>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns true only if the sequences controlled by *left* and *right* have the same length and, for each position `i`, `left[i] ==` `right[i]`. You use it to test whether *left* is ordered the same as *right* when the two vectors are compared element by element.

### Example

```cpp
// cliext_vector_operator_eq.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="op_gt"></a> operator&gt; (vector) (STL/CLR)

Vector greater than comparison.

### Syntax

```cpp
template<typename Value>
    bool operator>(vector<Value>% left,
        vector<Value>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `right` `<` `left`. You use it to test whether *left* is ordered after *right* when the two vectors are compared element by element.

### Example

```cpp
// cliext_vector_operator_gt.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="op_gteq"></a> operator&gt;= (vector) (STL/CLR)

Vector greater than or equal comparison.

### Syntax

```cpp
template<typename Value>
    bool operator>=(vector<Value>% left,
        vector<Value>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(left < right)`. You use it to test whether *left* is not ordered before *right* when the two vectors are compared element by element.

### Example

```cpp
// cliext_vector_operator_ge.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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
