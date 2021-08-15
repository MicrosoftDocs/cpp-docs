---
description: "Learn more about: queue (STL/CLR)"
title: "queue (STL/CLR)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["cliext::queue", "cliext::queue::assign", "cliext::queue::back", "cliext::queue::back_item", "cliext::queue::const_reference", "cliext::queue::container_type", "cliext::queue::difference_type", "cliext::queue::empty", "cliext::queue::front", "cliext::queue::front_item", "cliext::queue::generic_container", "cliext::queue::generic_value", "cliext::queue::get_container", "cliext::queue::operator=", "cliext::queue::pop", "cliext::queue::push", "cliext::queue::queue", "cliext::queue::reference", "cliext::queue::size", "cliext::queue::size_type", "cliext::queue::to_array", "cliext::queue::value_type"]
helpviewer_keywords: ["<queue> header [STL/CLR]", "queue class [STL/CLR]", "<cliext/queue> header [STL/CLR]", "operator!= member [STL/CLR]", "operator< member [STL/CLR]", "operator<= member [STL/CLR]", "operator== member [STL/CLR]", "operator> member [STL/CLR]", "operator>= member [STL/CLR]", "assign member [STL/CLR]", "back member [STL/CLR]", "back_item member [STL/CLR]", "const_reference member [STL/CLR]", "container_type member [STL/CLR]", "difference_type member [STL/CLR]", "empty member [STL/CLR]", "front member [STL/CLR]", "front_item member [STL/CLR]", "generic_container member [STL/CLR]", "generic_value member [STL/CLR]", "get_container member [STL/CLR]", "operator= member [STL/CLR]", "pop member [STL/CLR]", "push member [STL/CLR]", "queue member [STL/CLR]", "reference member [STL/CLR]", "size member [STL/CLR]", "size_type member [STL/CLR]", "to_array member [STL/CLR]", "value_type member [STL/CLR]"]
ms.assetid: 9ea7dec3-ea98-48ff-87d0-a5afc924aaf2
---
# queue (STL/CLR)

The template class describes an object that controls a varying-length sequence of elements that has first-in first-out access. You use the container adapter `queue` to manage an underlying container as a queue.

In the description below, `GValue` is the same as *Value* unless the latter is a ref type, in which case it is `Value^`. Similarly, `GContainer` is the same as *Container* unless the latter is a ref type, in which case it is `Container^`.

## Syntax

```cpp
template<typename Value,
    typename Container>
    ref class queue
        :   public
        System::ICloneable,
        Microsoft::VisualC::StlClr::IQueue<GValue, GContainer>
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
|[queue::const_reference (STL/CLR)](#const_reference)|The type of a constant reference to an element.|
|[queue::container_type (STL/CLR)](#container_type)|The type of the underlying container.|
|[queue::difference_type (STL/CLR)](#difference_type)|The type of a signed distance between two elements.|
|[queue::generic_container (STL/CLR)](#generic_container)|The type of the generic interface for the container adapter.|
|[queue::generic_value (STL/CLR)](#generic_value)|The type of an element for the generic interface for the container adapter.|
|[queue::reference (STL/CLR)](#reference)|The type of a reference to an element.|
|[queue::size_type (STL/CLR)](#size_type)|The type of a signed distance between two elements.|
|[queue::value_type (STL/CLR)](#value_type)|The type of an element.|

|Member Function|Description|
|---------------------|-----------------|
|[queue::assign (STL/CLR)](#assign)|Replaces all elements.|
|[queue::back (STL/CLR)](#back)|Accesses the last element.|
|[queue::empty (STL/CLR)](#empty)|Tests whether no elements are present.|
|[queue::front (STL/CLR)](#front)|Accesses the first element.|
|[queue::get_container (STL/CLR)](#get_container)|Accesses the underlying container.|
|[queue::pop (STL/CLR)](#pop)|Removes the first element.|
|[queue::push (STL/CLR)](#push)|Adds a new last element.|
|[queue::queue (STL/CLR)](#queue)|Constructs a container object.|
|[queue::size (STL/CLR)](#size)|Counts the number of elements.|
|[queue::to_array (STL/CLR)](#to_array)|Copies the controlled sequence to a new array.|

|Property|Description|
|--------------|-----------------|
|[queue::back_item (STL/CLR)](#back_item)|Accesses the last element.|
|[queue::front_item (STL/CLR)](#front_item)|Accesses the first element.|

|Operator|Description|
|--------------|-----------------|
|[queue::operator= (STL/CLR)](#op_as)|Replaces the controlled sequence.|
|[operator!= (queue) (STL/CLR)](#op_neq)|Determines if a `queue` object is not equal to another `queue` object.|
|[operator< (queue) (STL/CLR)](#op_lt)|Determines if a `queue` object is less than another `queue` object.|
|[operator<= (queue) (STL/CLR)](#op_lteq)|Determines if a `queue` object is less than or equal to another `queue` object.|
|[operator== (queue) (STL/CLR)](#op_eq)|Determines if a `queue` object is equal to another `queue` object.|
|[operator> (queue) (STL/CLR)](#op_gt)|Determines if a `queue` object is greater than another `queue` object.|
|[operator>= (queue) (STL/CLR)](#op_gteq)|Determines if a `queue` object is greater than or equal to another `queue` object.|

## Interfaces

|Interface|Description|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicate an object.|
|IQueue\<Value, Container>|Maintain generic container adapter.|

## Remarks

The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. The object restricts access to just pushing the first element and popping the last element, implementing a first-in first-out queue (also known as a FIFO queue, or simply a queue).

## Members

## <a name="assign"></a> queue::assign (STL/CLR)

Replaces all elements.

### Syntax

```cpp
void assign(queue<Value, Container>% right);
```

#### Parameters

*right*<br/>
Container adapter to insert.

### Remarks

The member function assigns `right.get_container()` to the underlying container. You use it to change the entire contents of the queue.

### Example

```cpp
// cliext_queue_assign.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign a repetition of values
    Myqueue c2;
    c2.assign(c1);
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
```

## <a name="back"></a> queue::back (STL/CLR)

Accesses the last element.

### Syntax

```cpp
reference back();
```

### Remarks

The member function returns a reference to the last element of the controlled sequence, which must be non-empty. You use it to access the last element, when you know it exists.

### Example

```cpp
// cliext_queue_back.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("back() = {0}", c1.back());

// alter last item and reinspect
    c1.back() = L'x';
    for each (wchar_t elem in c1.get_container())
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

## <a name="back_item"></a> queue::back_item (STL/CLR)

Accesses the last element.

### Syntax

```cpp
property value_type back_item;
```

### Remarks

The property accesses the last element of the controlled sequence, which must be non-empty. You use it to read or write the last element, when you know it exists.

### Example

```cpp
// cliext_queue_back_item.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("back_item = {0}", c1.back_item);

// alter last item and reinspect
    c1.back_item = L'x';
    for each (wchar_t elem in c1.get_container())
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

## <a name="const_reference"></a> queue::const_reference (STL/CLR)

The type of a constant reference to an element.

### Syntax

```cpp
typedef value_type% const_reference;
```

### Remarks

The type describes a constant reference to an element.

### Example

```cpp
// cliext_queue_const_reference.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for (; !c1.empty(); c1.pop())
        {   // get a const reference to an element
        Myqueue::const_reference cref = c1.front();
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="container_type"></a> queue::container_type (STL/CLR)

The type of the underlying container.

### Syntax

```cpp
typedef Container value_type;
```

### Remarks

The type is a synonym for the template parameter `Container`.

### Example

```cpp
// cliext_queue_container_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c" using container_type
    Myqueue::container_type wc1 = c1.get_container();
    for each (wchar_t elem in wc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="difference_type"></a> queue::difference_type (STL/CLR)

The types of a signed distance between two elements.

### Syntax

```cpp
typedef int difference_type;
```

### Remarks

The type describes a possibly negative element count.

### Example

```cpp
// cliext_queue_difference_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute negative difference
    Myqueue::difference_type diff = c1.size();
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
a b c
pushing 2 = -2
popping 3 = 3
```

## <a name="empty"></a> queue::empty (STL/CLR)

Tests whether no elements are present.

### Syntax

```cpp
bool empty();
```

### Remarks

The member function returns true for an empty controlled sequence. It is equivalent to [queue::size (STL/CLR)](#size)`() == 0`. You use it to test whether the queue is empty.

### Example

```cpp
// cliext_queue_empty.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
size() = 3
empty() = False
size() = 0
empty() = True
```

## <a name="front"></a> queue::front (STL/CLR)

Accesses the first element.

### Syntax

```cpp
reference front();
```

### Remarks

The member function returns a reference to the first element of the controlled sequence, which must be non-empty. You use it to access the first element, when you know it exists.

### Example

```cpp
// cliext_queue_front.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first item
    System::Console::WriteLine("front() = {0}", c1.front());

// alter first item and reinspect
    c1.front() = L'x';
    for each (wchar_t elem in c1.get_container())
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

## <a name="front_item"></a> queue::front_item (STL/CLR)

Accesses the first element.

### Syntax

```cpp
property value_type front_item;
```

### Remarks

The property accesses the first element of the controlled sequence, which must be non-empty. You use it to read or write the first element, when you know it exists.

### Example

```cpp
// cliext_queue_front_item.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("front_item = {0}", c1.front_item);

// alter last item and reinspect
    c1.front_item = L'x';
    for each (wchar_t elem in c1.get_container())
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

## <a name="generic_container"></a> queue::generic_container (STL/CLR)

The type of the generic interface for the container adapter.

### Syntax

```cpp
typedef Microsoft::VisualC::StlClr::IQueue<Value>
    generic_container;
```

### Remarks

The type describes the generic interface for this template container adapter class.

### Example

```cpp
// cliext_queue_generic_container.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myqueue::generic_container^ gc1 = %c1;
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
a b c
a b c
a b c d
a b c d e
```

## <a name="generic_value"></a> queue::generic_value (STL/CLR)

The type of an element for use with the generic interface for the container.

### Syntax

```cpp
typedef GValue generic_value;
```

### Remarks

The type describes an object of type `GValue` that describes the stored element value for use with the generic interface for this template container class. (`GValue` is either `value_type` or `value_type^` if `value_type` is a ref type.)

### Example

```cpp
// cliext_queue_generic_value.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// get interface to container
    Myqueue::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1->get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// display in order using generic_value
    for (; !gc1->empty(); gc1->pop())
        {
        Myqueue::generic_value elem = gc1->front();

        System::Console::Write("{0} ", elem);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a b c
```

## <a name="get_container"></a> queue::get_container (STL/CLR)

Accesses the underlying container.

### Syntax

```cpp
container_type^ get_container();
```

### Remarks

The member function returns the underlying container. You use it to bypass the restrictions imposed by the container wrapper.

### Example

```cpp
// cliext_queue_get_container.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
```

## <a name="op_as"></a> queue::operator= (STL/CLR)

Replaces the controlled sequence.

### Syntax

```cpp
queue <Value, Container>% operator=(queue <Value, Container>% right);
```

#### Parameters

*right*<br/>
Container adapter to copy.

### Remarks

The member operator copies *right* to the object, then returns **`*this`**. You use it to replace the controlled sequence with a copy of the controlled sequence in *right*.

### Example

```cpp
// cliext_queue_operator_as.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2 = c1;
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
```

## <a name="pop"></a> queue::pop (STL/CLR)

Removes the last element.

### Syntax

```cpp
void pop();
```

### Remarks

The member function removes the last element of the controlled sequence, which must be non-empty. You use it to shorten the queue by one element at the back.

### Example

```cpp
// cliext_queue_pop.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
b c
```

## <a name="push"></a> queue::push (STL/CLR)

Adds a new last element.

### Syntax

```cpp
void push(value_type val);
```

### Remarks

The member function adds an element with value `val` at the end of the queue. You use it to append an element to the queue.

### Example

```cpp
// cliext_queue_push.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
```

## <a name="queue"></a> queue::queue (STL/CLR)

Constructs a container adapter object.

### Syntax

```cpp
queue();
queue(queue<Value, Container>% right);
queue(queue<Value, Container>^ right);
explicit queue(container_type% wrapped);
```

#### Parameters

*right*<br/>
Object to copy.

*wrapped*<br/>
Wrapped container to use.

### Remarks

The constructor:

`queue();`

creates an empty wrapped container. You use it to specify an empty initial controlled sequence.

The constructor:

`queue(queue<Value, Container>% right);`

creates a wrapped container that is a copy of `right.get_container()`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the queue object *right*.

The constructor:

`queue(queue<Value, Container>^ right);`

creates a wrapped container that is a copy of `right->get_container()`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the queue object `*right`.

The constructor:

`explicit queue(container_type wrapped);`

uses the existing container *wrapped* as the wrapped container. You use it to construct a queue from an existing container.

### Example

```cpp
// cliext_queue_construct.cpp
// compile with: /clr
#include <cliext/queue>
#include <cliext/list>

typedef cliext::queue<wchar_t> Myqueue;
typedef cliext::list<wchar_t> Mylist;
typedef cliext::queue<wchar_t, Mylist> Myqueue_list;
int main()
    {
// construct an empty container
    Myqueue c1;
    System::Console::WriteLine("size() = {0}", c1.size());

// construct from an underlying container
    Mylist v2(5, L'x');
    Myqueue_list c2(v2);
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying another container
    Myqueue_list c3(c2);
    for each (wchar_t elem in c3.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying another container through handle
    Myqueue_list c4(%c2);
    for each (wchar_t elem in c4.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
size() = 0
x x x x x
x x x x x
x x x x x
```

## <a name="reference"></a> queue::reference (STL/CLR)

The type of a reference to an element.

### Syntax

```cpp
typedef value_type% reference;
```

### Remarks

The type describes a reference to an element.

### Example

```cpp
// cliext_queue_reference.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify back of queue and redisplay
    Myqueue::reference ref = c1.back();
    ref = L'x';
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b x
```

## <a name="size"></a> queue::size (STL/CLR)

Counts the number of elements.

### Syntax

```cpp
size_type size();
```

### Remarks

The member function returns the length of the controlled sequence. You use it to determine the number of elements currently in the controlled sequence. If all you care about is whether the sequence has nonzero size, see [queue::empty (STL/CLR)](#empty)`()`.

### Example

```cpp
// cliext_queue_size.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
size() = 3 starting with 3
size() = 2 after popping
size() = 4 after adding 2
```

## <a name="size_type"></a> queue::size_type (STL/CLR)

The type of a signed distance between two element.

### Syntax

```cpp
typedef int size_type;
```

### Remarks

The type describes a non-negative element count.

### Example

```cpp
// cliext_queue_size_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    Myqueue::size_type diff = c1.size();
    c1.pop();
    c1.pop();
    diff -= c1.size();
    System::Console::WriteLine("size difference = {0}", diff);
    return (0);
    }
```

```Output
a b c
size difference = 2
```

## <a name="to_array"></a> queue::to_array (STL/CLR)

Copies the controlled sequence to a new array.

### Syntax

```cpp
cli::array<Value>^ to_array();
```

### Remarks

The member function returns an array containing the controlled sequence. You use it to obtain a copy of the controlled sequence in array form.

### Example

```cpp
// cliext_queue_to_array.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c d
a b c
```

## <a name="value_type"></a> queue::value_type (STL/CLR)

The type of an element.

### Syntax

```cpp
typedef Value value_type;
```

### Remarks

The type is a synonym for the template parameter *Value*.

### Example

```cpp
// cliext_queue_value_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display reversed contents " a b c" using value_type
    for (; !c1.empty(); c1.pop())
        {   // store element in value_type object
        Myqueue::value_type val = c1.front();

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="op_neq"></a> operator!= (queue) (STL/CLR)

Queue not equal comparison.

### Syntax

```cpp
template<typename Value,
    typename Container>
    bool operator!=(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(left == right)`. You use it to test whether *left* is not ordered the same as *right* when the two queues are compared element by element.

### Example

```cpp
// cliext_queue_operator_ne.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="op_lt"></a> operator&lt; (queue) (STL/CLR)

Queue less than comparison.

### Syntax

```cpp
template<typename Value,
    typename Container>
    bool operator<(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns true if, for the lowest position `i` for which `!(right[i] < left[i])` it is also true that `left[i] < right[i]`. Otherwise, it returns `left->`[queue::size (STL/CLR)](#size)`() <` `right->size()` You use it to test whether *left* is ordered before *right* when the two queues are compared element by element.

### Example

```cpp
// cliext_queue_operator_lt.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="op_lteq"></a> operator&lt;= (queue) (STL/CLR)

Queue less than or equal comparison.

### Syntax

```cpp
template<typename Value,
    typename Container>
    bool operator<=(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(right < left)`. You use it to test whether *left* is not ordered after *right* when the two queues are compared element by element.

### Example

```cpp
// cliext_queue_operator_le.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="op_eq"></a> operator== (queue) (STL/CLR)

Queue equal comparison.

### Syntax

```cpp
template<typename Value,
    typename Container>
    bool operator==(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns true only if the sequences controlled by *left* and *right* have the same length and, for each position `i`, `left[i] ==` `right[i]`. You use it to test whether *left* is ordered the same as *right* when the two queues are compared element by element.

### Example

```cpp
// cliext_queue_operator_eq.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="op_gt"></a> operator&gt; (queue) (STL/CLR)

Queue greater than comparison.

### Syntax

```cpp
template<typename Value,
    typename Container>
    bool operator>(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `right` `<` `left`. You use it to test whether *left* is ordered after *right* when the two queues are compared element by element.

### Example

```cpp
// cliext_queue_operator_gt.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="op_gteq"></a> operator&gt;= (queue) (STL/CLR)

Queue greater than or equal comparison.

### Syntax

```cpp
template<typename Value,
    typename Container>
    bool operator>=(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### Parameters

*left*<br/>
Left container to compare.

*right*<br/>
Right container to compare.

### Remarks

The operator function returns `!(left < right)`. You use it to test whether *left* is not ordered before *right* when the two queues are compared element by element.

### Example

```cpp
// cliext_queue_operator_ge.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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
