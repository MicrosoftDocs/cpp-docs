---
description: "Learn more about: priority_queue (STL/CLR)"
title: "priority_queue (STL/CLR)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["cliext::priority_queue", "cliext::priority_queue::assign", "cliext::priority_queue::const_reference", "cliext::priority_queue::container_type", "cliext::priority_queue::difference_type", "cliext::priority_queue::empty", "cliext::priority_queue::generic_container", "cliext::priority_queue::generic_value", "cliext::priority_queue::get_container", "cliext::priority_queue::operator=", "cliext::priority_queue::pop", "cliext::priority_queue::priority_queue", "cliext::priority_queue::push", "cliext::priority_queue::reference", "cliext::priority_queue::size", "cliext::priority_queue::size_type", "cliext::priority_queue::to_array", "cliext::priority_queue::top", "cliext::priority_queue::top_item", "cliext::priority_queue::value_comp", "cliext::priority_queue::value_compare", "cliext::priority_queue::value_type"]
helpviewer_keywords: ["priority_queue class [STL/CLR]", "<queue> header [STL/CLR]", "<cliext/queue> header [STL/CLR]", "assign member [STL/CLR]", "const_reference member [STL/CLR]", "container_type member [STL/CLR]", "difference_type member [STL/CLR]", "empty member [STL/CLR]", "generic_container member [STL/CLR]", "generic_value member [STL/CLR]", "get_container member [STL/CLR]", "operator= member [STL/CLR]", "pop member [STL/CLR]", "priority_queue member [STL/CLR]", "push member [STL/CLR]", "reference member [STL/CLR]", "size member [STL/CLR]", "size_type member [STL/CLR]", "to_array member [STL/CLR]", "top member [STL/CLR]", "top_item member [STL/CLR]", "value_comp member [STL/CLR]", "value_compare member [STL/CLR]", "value_type member [STL/CLR]"]
ms.assetid: 4d0000d3-68ff-4c4b-8157-7060540136f5
---
# priority_queue (STL/CLR)

The template class describes an object that controls a varying-length ordered sequence of elements that has limited access. You use the container adapter `priority_queue` to manage an underlying container as a priority queue.

In the description below, `GValue` is the same as *Value* unless the latter is a ref type, in which case it is `Value^`. Similarly, `GContainer` is the same as *Container* unless the latter is a ref type, in which case it is `Container^`.

## Syntax

```cpp
template<typename Value,
    typename Container>
    ref class priority_queue
        System::ICloneable,
        Microsoft::VisualC::StlClr::IPriorityQueue<GValue, GContainer>
    { ..... };
```

### Parameters

*Value*<br/>
The type of an element in the controlled sequence.

*Container*<br/>
The type of the underlying container.

## Requirements

**Header:** \<cliext/queue>

**Namespace:** cliext

## Declarations

|Type Definition|Description|
|---------------------|-----------------|
|[priority_queue::const_reference (STL/CLR)](#const_reference)|The type of a constant reference to an element.|
|[priority_queue::container_type (STL/CLR)](#container_type)|The type of the underlying container.|
|[priority_queue::difference_type (STL/CLR)](#difference_type)|The type of a signed distance between two elements.|
|[priority_queue::generic_container (STL/CLR)](#generic_container)|The type of the generic interface for the container adapter.|
|[priority_queue::generic_value (STL/CLR)](#generic_value)|The type of an element for the generic interface for the container adapter.|
|[priority_queue::reference (STL/CLR)](#reference)|The type of a reference to an element.|
|[priority_queue::size_type (STL/CLR)](#size_type)|The type of a signed distance between two elements.|
|[priority_queue::value_compare (STL/CLR)](#value_compare)|The ordering delegate for two elements.|
|[priority_queue::value_type (STL/CLR)](#value_type)|The type of an element.|

|Member Function|Description|
|---------------------|-----------------|
|[priority_queue::assign (STL/CLR)](#assign)|Replaces all elements.|
|[priority_queue::empty (STL/CLR)](#empty)|Tests whether no elements are present.|
|[priority_queue::get_container (STL/CLR)](#get_container)|Accesses the underlying container.|
|[priority_queue::pop (STL/CLR)](#pop)|Removes the hghest-priority element.|
|[priority_queue::priority_queue (STL/CLR)](#priority_queue)|Constructs a container object.|
|[priority_queue::push (STL/CLR)](#push)|Adds a new element.|
|[priority_queue::size (STL/CLR)](#size)|Counts the number of elements.|
|[priority_queue::top (STL/CLR)](#top)|Accesses the highest-priority element.|
|[priority_queue::to_array (STL/CLR)](#to_array)|Copies the controlled sequence to a new array.|
|[priority_queue::value_comp (STL/CLR)](#value_comp)|Copies the ordering delegate for two elements.|

|Property|Description|
|--------------|-----------------|
|[priority_queue::top_item (STL/CLR)](#top_item)|Accesses the highest-priority element.|

|Operator|Description|
|--------------|-----------------|
|[priority_queue::operator= (STL/CLR)](#op_as)|Replaces the controlled sequence.|

## Interfaces

|Interface|Description|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicate an object.|
|IPriorityQueue\<Value, Container>|Maintain generic container adapter.|

## Remarks

The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. It keeps the sequence ordered as a heap, with the highest-priority element (the top element) readily accessible and removable. The object restricts access to pushing new elements and popping just the highest-priority element, implementing a priority queue.

The object orders the sequence it controls by calling a stored delegate object of type [priority_queue::value_compare (STL/CLR)](#value_compare). You can specify the stored delegate object when you construct the priority_queue; if you specify no delegate object, the default is the comparison `operator<(value_type, value_type)`. You access this stored object by calling the member function [priority_queue::value_comp (STL/CLR)](#value_comp)`()`.

Such a delegate object must impose a strict weak ordering on values of type [priority_queue::value_type (STL/CLR)](#value_type). That means, for any two keys `X` and `Y`:

`value_comp()(X, Y)` returns the same Boolean result on every call.

If `value_comp()(X, Y)` is true, then `value_comp()(Y, X)` must be false.

If `value_comp()(X, Y)` is true, then `X` is said to be ordered before `Y`.

If `!value_comp()(X, Y) && !value_comp()(Y, X)` is true, then `X` and `Y` are said to have equivalent ordering.

For any element `X` that precedes `Y` in the controlled sequence, `key_comp()(Y, X)` is false. (For the default delegate object, keys never decrease in value.)

The highest priority element is thus one of the elements which is not ordered before any other element.

Since the underlying container keeps elements ordered as a heap:

The container must support random-access iterators.

Elements with equivalent ordering may be popped in a different order than they were pushed. (The ordering is not stable.)

Thus, candidates for the underlying container include [deque (STL/CLR)](../dotnet/deque-stl-clr.md) and [vector (STL/CLR)](../dotnet/vector-stl-clr.md).

## Members

## <a name="assign"></a> priority_queue::assign (STL/CLR)

Replaces all elements.

### Syntax

```cpp
void assign(priority_queue<Value, Container>% right);
```

#### Parameters

*right*<br/>
Container adapter to insert.

### Remarks

The member function assigns `right.get_container()` to the underlying container. You use it to change the entire contents of the queue.

### Example

```cpp
// cliext_priority_queue_assign.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign a repetition of values
    Mypriority_queue c2;
    c2.assign(c1);
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
c a b
```

## <a name="const_reference"></a> priority_queue::const_reference (STL/CLR)

The type of a constant reference to an element.

### Syntax

```cpp
typedef value_type% const_reference;
```

### Remarks

The type describes a constant reference to an element.

### Example

```cpp
// cliext_priority_queue_const_reference.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display reversed contents " c b a"
    for (; !c1.empty(); c1.pop())
        {   // get a const reference to an element
        Mypriority_queue::const_reference cref = c1.top();
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="container_type"></a> priority_queue::container_type (STL/CLR)

The type of the underlying container.

### Syntax

```cpp
typedef Container value_type;
```

### Remarks

The type is a synonym for the template parameter `Container`.

### Example

```cpp
// cliext_priority_queue_container_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c" using container_type
    Mypriority_queue::container_type wc1 = c1.get_container();
    for each (wchar_t elem in wc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
```

## <a name="difference_type"></a> priority_queue::difference_type (STL/CLR)

The types of a signed distance between two elements.

### Syntax

```cpp
typedef int difference_type;
```

### Remarks

The type describes a possibly negative element count.

### Example

```cpp
// cliext_priority_queue_difference_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // compute negative difference
    Mypriority_queue::difference_type diff = c1.size();
    c1.push(L'd');
    c1.push(L'e');
    diff -= c1.size();
    System::Console::WriteLine("pushing 2 = {0}", diff);

    // compute positive difference
    diff = c1.size();
    c1.pop();
    c1.pop();
    c1.pop();
    diff -= c1.size();
    System::Console::WriteLine("popping 3 = {0}", diff);
    return (0);
    }
```

```Output
c a b
pushing 2 = -2
popping 3 = 3
```

## <a name="empty"></a> priority_queue::empty (STL/CLR)

Tests whether no elements are present.

### Syntax

```cpp
bool empty();
```

### Remarks

The member function returns true for an empty controlled sequence. It is equivalent to [priority_queue::size (STL/CLR)](#size)`() == 0`. You use it to test whether the priority_queue is empty.

### Example

```cpp
// cliext_priority_queue_empty.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());

    // clear the container and reinspect
    c1.pop();
    c1.pop();
    c1.pop();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());
    return (0);
    }
```

```Output
c a b
size() = 3
empty() = False
size() = 0
empty() = True
```

## <a name="generic_container"></a> priority_queue::generic_container (STL/CLR)

The type of the generic interface for the container.

### Syntax

```cpp
typedef Microsoft::VisualC::StlClr::IPriorityQueue<Value>
    generic_container;
```

### Remarks

The type describes the generic interface for this template container adapter class.

### Example

```cpp
// cliext_priority_queue_generic_container.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct a generic container
    Mypriority_queue::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1->get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify generic and display original
    gc1->push(L'd');
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify original and display generic
    c1.push(L'e');
    for each (wchar_t elem in gc1->get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
c a b
d c b a
e d b a c
```

## <a name="generic_value"></a> priority_queue::generic_value (STL/CLR)

The type of an element for use with the generic interface for the container.

### Syntax

```cpp
typedef GValue generic_value;
```

### Remarks

The type describes an object of type `GValue` that describes the stored element value for use with the generic interface for this template container class. (`GValue` is either `value_type` or `value_type^` if `value_type` is a ref type.)

### Example

```cpp
// cliext_priority_queue_generic_value.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // get interface to container
    Mypriority_queue::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1->get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // display in priority order using generic_value
    for (; !gc1->empty(); gc1->pop())
        {
        Mypriority_queue::generic_value elem = gc1->top();

        System::Console::Write("{0} ", elem);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
c a b
c b a
```

## <a name="get_container"></a> priority_queue::get_container (STL/CLR)

Accesses the underlying container.

### Syntax

```cpp
container_type get_container();
```

### Remarks

The member function returns the underlying container. You use it to bypass the restrictions imposed by the container wrapper.

### Example

```cpp
// cliext_priority_queue_get_container.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
```

## <a name="op_as"></a> priority_queue::operator= (STL/CLR)

Replaces the controlled sequence.

### Syntax

```cpp
priority_queue <Value, Container>% operator=(priority_queue <Value, Container>% right);
```

#### Parameters

*right*<br/>
Container adapter to copy.

### Remarks

The member operator copies *right* to the object, then returns **`*this`**. You use it to replace the controlled sequence with a copy of the controlled sequence in *right*.

### Example

```cpp
// cliext_priority_queue_operator_as.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    Mypriority_queue c2;
    c2 = c1;
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
c a b
```

## <a name="pop"></a> priority_queue::pop (STL/CLR)

Removes the highest-proirity element.

### Syntax

```cpp
void pop();
```

### Remarks

The member function removes the highest-priority element of the controlled sequence, which must be non-empty. You use it to shorten the queue by one element at the back.

### Example

```cpp
// cliext_priority_queue_pop.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // pop an element and redisplay
    c1.pop();
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
b a
```

## <a name="priority_queue"></a> priority_queue::priority_queue (STL/CLR)

Constructs a container adapter object.

### Syntax

```cpp
priority_queue();
priority_queue(priority_queue<Value, Container> right);
priority_queue(priority_queue<Value, Container> right);
explicit priority_queue(value_compare^ pred);
priority_queue(value_compare^ pred, container_type% cont);
template<typename InIt>
    priority_queue(InIt first, InIt last);
template<typename InIt>
    priority_queue(InIt first, InIt last,
        value_compare^ pred);
template<typename InIt>
    priority_queue(InIt first, InIt last,
        value_compare^ pred, container_type% cont);
```

#### Parameters

*cont*<br/>
Container to copy.

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

`priority_queue();`

creates an empty wrapped container, with the default ordering predicate. You use it to specify an empty initial controlled sequence, with the default ordering predicate.

The constructor:

`priority_queue(priority_queue<Value, Container>% right);`

creates a wrapped container that is a copy of `right.get_container()`, with the ordering predicate `right.value_comp()`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the queue object *right*, with the same ordering predicate.

The constructor:

`priority_queue(priority_queue<Value, Container>^ right);`

creates a wrapped container that is a copy of `right->get_container()`, with the ordering predicate `right->value_comp()`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the queue object `*right`, with the same ordering predicate.

The constructor:

`explicit priority_queue(value_compare^ pred);`

creates an empty wrapped container, with the ordering predicate *pred*. You use it to specify an empty initial controlled sequence, with the specified ordering predicate.

The constructor:

`priority_queue(value_compare^ pred, container_type cont);`

creates an empty wrapped container, with the ordering predicate *pred*, then pushes all the elements of *cont* You use it to specify an initial controlled sequence from an existing container, with the specified ordering predicate.

The constructor:

`template<typename InIt> priority_queue(InIt first, InIt last);`

creates an empty wrapped container, with the default ordering predicate, then pushes the sequence [`first`, `last`). You use it to specify an initial controlled sequence from a specified eqeuence, with the specified ordering predicate.

The constructor:

`template<typename InIt> priority_queue(InIt first, InIt last, value_compare^ pred);`

creates an empty wrapped container, with the ordering predicate *pred*, then pushes the sequence [`first`, `last`). You use it to specify an initial controlled sequence from a specified seqeuence, with the specified ordering predicate.

The constructor:

`template<typename InIt> priority_queue(InIt first, InIt last, value_compare^ pred, container_type% cont);`

creates an empty wrapped container, with the ordering predicate *pred*, then pushes all the elements of *cont* plus the sequence [`first`, `last`). You use it to specify an initial controlled sequence from an existing container and a specified seqeuence, with the specified ordering predicate.

### Example

```cpp
// cliext_priority_queue_construct.cpp
// compile with: /clr
#include <cliext/queue>
#include <cliext/deque>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
typedef cliext::deque<wchar_t> Mydeque;
int main()
    {
// construct an empty container
    Mypriority_queue c1;
    Mypriority_queue::container_type^ wc1 = c1.get_container();
    System::Console::WriteLine("size() = {0}", c1.size());

    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');
    for each (wchar_t elem in wc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an ordering rule
    Mypriority_queue c2 = cliext::greater<wchar_t>();
    System::Console::WriteLine("size() = {0}", c2.size());

    for each (wchar_t elem in wc1)
        c2.push(elem);
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an ordering rule by copying an underlying container
    Mypriority_queue c2x =
        gcnew Mypriority_queue(cliext::greater<wchar_t>(), *wc1);
   for each (wchar_t elem in c2x.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an iterator range
    Mypriority_queue c3(wc1->begin(), wc1->end());
    for each (wchar_t elem in c3.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an iterator range and an ordering rule
    Mypriority_queue c4(wc1->begin(), wc1->end(),
        cliext::greater<wchar_t>());
    for each (wchar_t elem in c4.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an iterator range, another container, and an ordering rule
    Mypriority_queue c5(wc1->begin(), wc1->end(),
        cliext::greater<wchar_t>(), *wc1);
    for each (wchar_t elem in c5.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct from a generic container
    Mypriority_queue c6(c3);
    for each (wchar_t elem in c6.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying another container
    Mypriority_queue c7(%c3);
    for each (wchar_t elem in c7.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an ordering rule, by copying an underlying container
    Mypriority_queue c8 =
        gcnew Mypriority_queue(cliext::greater<wchar_t>(), *wc1);
    for each (wchar_t elem in c8.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
    }
```

```Output
size() = 0
c a b
size() = 0
a c b
a c b
c a b
a c b
a a b c c b
c a b
c a b
a c b
```

## <a name="push"></a> priority_queue::push (STL/CLR)

Adds a new element.

### Syntax

```cpp
void push(value_type val);
```

### Remarks

The member function inserts an element with value `val` into the controlled sequence, and reorders the controlled sequence to maintain the heap discipline. You use it to add another element to the queue.

### Example

```cpp
// cliext_priority_queue_push.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
```

## <a name="reference"></a> priority_queue::reference (STL/CLR)

The type of a reference to an element.

### Syntax

```cpp
typedef value_type% reference;
```

### Remarks

The type describes a reference to an element.

### Example

```cpp
// cliext_priority_queue_reference.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify top of priority_queue and redisplay
    Mypriority_queue::reference ref = c1.top();
    ref = L'x';
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
x a b
```

## <a name="size"></a> priority_queue::size (STL/CLR)

Counts the number of elements.

### Syntax

```cpp
size_type size();
```

### Remarks

The member function returns the length of the controlled sequence. You use it to determine the number of elements currently in the controlled sequence. If all you care about is whether the sequence has nonzero size, see [priority_queue::empty (STL/CLR)](#empty)`()`.

### Example

```cpp
// cliext_priority_queue_size.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());

    // pop an item and reinspect
    c1.pop();
    System::Console::WriteLine("size() = {0} after popping", c1.size());

    // add two elements and reinspect
    c1.push(L'a');
    c1.push(L'b');
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());
    return (0);
    }
```

```Output
c a b
size() = 3 starting with 3
size() = 2 after popping
size() = 4 after adding 2
```

## <a name="size_type"></a> priority_queue::size_type (STL/CLR)

The type of a signed distance between two element.

### Syntax

```cpp
typedef int size_type;
```

### Remarks

The type describes a non-negative element count.

### Example

```cpp
// cliext_priority_queue_size_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // compute positive difference
    Mypriority_queue::size_type diff = c1.size();
    c1.pop();
    c1.pop();
    diff -= c1.size();
    System::Console::WriteLine("size difference = {0}", diff);
    return (0);
    }
```

```Output
c a b
size difference = 2
```

## <a name="to_array"></a> priority_queue::to_array (STL/CLR)

Copies the controlled sequence to a new array.

### Syntax

```cpp
cli::array<Value>^ to_array();
```

### Remarks

The member function returns an array containing the controlled sequence. You use it to obtain a copy of the controlled sequence in array form.

### Example

```cpp
// cliext_priority_queue_to_array.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // copy the container and modify it
    cli::array<wchar_t>^ a1 = c1.to_array();

    c1.push(L'd');
    for each (wchar_t elem in c1.get_container())
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
d c b a
c a b
```

## <a name="top"></a> priority_queue::top (STL/CLR)

Accesses the highest-priority element.

### Syntax

```cpp
reference top();
```

### Remarks

The member function returns a reference to the top (highest-priority) element of the controlled sequence, which must be non-empty. You use it to access the highest-priority element, when you know it exists.

### Example

```cpp
// cliext_priority_queue_top.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect last item
    System::Console::WriteLine("top() = {0}", c1.top());

    // alter last item and reinspect
    c1.top() = L'x';
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

## <a name="top_item"></a> priority_queue::top_item (STL/CLR)

Accesses the highest-priority element.

### Syntax

```cpp
property value_type back_item;
```

### Remarks

The property accesses the top (highest-priority) element of the controlled sequence, which must be non-empty. You use it to read or write the highest-priority element, when you know it exists.

### Example

```cpp
// cliext_priority_queue_top_item.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect last item
    System::Console::WriteLine("top_item = {0}", c1.top_item);

    // alter last item and reinspect
    c1.top_item = L'x';
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
top_item = c
x a b
```

## <a name="value_comp"></a> priority_queue::value_comp (STL/CLR)

Copies the ordering delegate for two elements.

### Syntax

```cpp
value_compare^ value_comp();
```

### Remarks

The member function returns the ordering delegate used to order the controlled sequence. You use it to compare two values.

### Example

```cpp
// cliext_priority_queue_value_comp.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    Mypriority_queue::value_compare^ vcomp = c1.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        vcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        vcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        vcomp(L'b', L'a'));
    System::Console::WriteLine();

    // test a different ordering rule
    Mypriority_queue c2 = cliext::greater<wchar_t>();
    vcomp = c2.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        vcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        vcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        vcomp(L'b', L'a'));
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

## <a name="value_compare"></a> priority_queue::value_compare (STL/CLR)

The ordering delegate for two values.

### Syntax

```cpp
binary_delegate<value_type, value_type, int> value_compare;
```

### Remarks

The type is a synonym for the delegate that determines whether the first argument is ordered before the second.

### Example

```cpp
// cliext_priority_queue_value_compare.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    Mypriority_queue::value_compare^ vcomp = c1.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        vcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        vcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        vcomp(L'b', L'a'));
    System::Console::WriteLine();

    // test a different ordering rule
    Mypriority_queue c2 = cliext::greater<wchar_t>();
    vcomp = c2.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        vcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        vcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        vcomp(L'b', L'a'));
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

## <a name="value_type"></a> priority_queue::value_type (STL/CLR)

The type of an element.

### Syntax

```cpp
typedef Value value_type;
```

### Remarks

The type is a synonym for the template parameter *Value*.

### Example

```cpp
// cliext_priority_queue_value_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display reversed contents " a b c" using value_type
    for (; !c1.empty(); c1.pop())
        {   // store element in value_type object
        Mypriority_queue::value_type val = c1.top();

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```
