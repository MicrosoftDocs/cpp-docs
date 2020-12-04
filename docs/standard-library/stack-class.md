---
description: "Learn more about: stack Class"
title: "stack Class"
ms.date: "11/04/2016"
f1_keywords: ["stack/std::stack::container_type", "stack/std::stack::size_type", "stack/std::stack::value_type", "stack/std::stack::empty", "stack/std::stack::pop", "stack/std::stack::push", "stack/std::stack::size", "stack/std::stack::top"]
helpviewer_keywords: ["std::stack [C++], container_type", "std::stack [C++], size_type", "std::stack [C++], value_type", "std::stack [C++], empty", "std::stack [C++], pop", "std::stack [C++], push", "std::stack [C++], size", "std::stack [C++], top"]
ms.assetid: 02151c1e-eab0-41b8-be94-a839ead78ecf
---
# stack Class

A template container adaptor class that provides a restriction of functionality limiting access to the element most recently added to some underlying container type. The stack class is used when it is important to be clear that only stack operations are being performed on the container.

## Syntax

```cpp
template <class Type, class Container= deque <Type>>
class stack
```

### Parameters

*Type*\
The element data type to be stored in the stack.

*Container*\
The type of the underlying container used to implement the stack. The default value is the class `deque`*\<Type>*.

## Remarks

The elements of class `Type` stipulated in the first template parameter of a stack object are synonymous with [value_type](#value_type) and must match the type of element in the underlying container class `Container` stipulated by the second template parameter. The `Type` must be assignable, so that it is possible to copy objects of that type and to assign values to variables of that type.

Suitable underlying container classes for stack include [deque](../standard-library/deque-class.md), [list class](../standard-library/list-class.md), and [vector class](../standard-library/vector-class.md), or any other sequence container that supports the operations of `back`, `push_back`, and `pop_back`. The underlying container class is encapsulated within the container adaptor, which exposes only the limited set of the sequence container member functions as a public interface.

The stack objects are equality comparable if and only if the elements of class `Type` are equality comparable and are less-than comparable if and only if the elements of class `Type` are less-than comparable.

- The stack class supports a last-in, first-out (LIFO) data structure. A good analogue to keep in mind would be a stack of plates. Elements (plates) may be inserted, inspected, or removed only from the top of the stack, which is the last element at the end of the base container. The restriction to accessing only the top element is the reason for using the stack class.

- The [queue class](../standard-library/queue-class.md) supports a first-in, first-out (FIFO) data structure. A good analogue to keep in mind would be people lining up for a bank teller. Elements (people) may be added to the back of the line and are removed from the front of the line. Both the front and the back of a line may be inspected. The restriction to accessing only the front and back elements in this way is the reason fur using the queue class.

- The [priority_queue class](../standard-library/priority-queue-class.md) orders its elements so that the largest element is always at the top position. It supports insertion of an element and the inspection and removal of the top element. A good analogue to keep in mind would be people lining up where they are arranged by age, height, or some other criterion.

## Members

### Constructors

|Name|Description|
|-|-|
|[stack](#stack)|Constructs a `stack` that is empty or that is a copy of a base container object.|

### Typedefs

|Name|Description|
|-|-|
|[container_type](#container_type)|A type that provides the base container to be adapted by a `stack`.|
|[size_type](#size_type)|An unsigned integer type that can represent the number of elements in a `stack`.|
|[value_type](#value_type)|A type that represents the type of object stored as an element in a `stack`.|

### Functions

|Name|Description|
|-|-|
|[empty](#empty)|Tests if the `stack` is empty.|
|[pop](#pop)|Removes the element from the top of the `stack`.|
|[push](#push)|Adds an element to the top of the `stack`.|
|[size](#size)|Returns the number of elements in the `stack`.|
|[top](#top)|Returns a reference to an element at the top of the `stack`.|

## <a name="container_type"></a> container_type

A type that provides the base container to be adapted.

```cpp
typedef Container container_type;
```

### Remarks

The type is a synonym for the template parameter `Container`. All three C++ Standard Library sequence container classes — the vector class, list class, and the default class deque — meet the requirements to be used as the base container for a stack object. User-defined types satisfying these requirements may also be used.

For more information on `Container`, see the Remarks section of the [stack Class](../standard-library/stack-class.md) topic.

### Example

See the example for [stack::stack](#stack) for an example of how to declare and use `container_type`.

## <a name="empty"></a> empty

Tests if a stack is empty.

```cpp
bool empty() const;
```

### Return Value

**`true`** if the stack is empty; **`false`** if the stack is nonempty.

### Example

```cpp
// stack_empty.cpp
// compile with: /EHsc
#include <stack>
#include <iostream>

int main( )
{
   using namespace std;
   // Declares stacks with default deque base container
   stack <int> s1, s2;

   s1.push( 1 );

   if ( s1.empty( ) )
      cout << "The stack s1 is empty." << endl;
   else
      cout << "The stack s1 is not empty." << endl;

   if ( s2.empty( ) )
      cout << "The stack s2 is empty." << endl;
   else
      cout << "The stack s2 is not empty." << endl;
}
```

```Output
The stack s1 is not empty.
The stack s2 is empty.
```

## <a name="pop"></a> pop

Removes the element from the top of the stack.

```cpp
void pop();
```

### Remarks

The stack must be nonempty to apply the member function. The top of the stack is the position occupied by the most recently added element and is the last element at the end of the container.

### Example

```cpp
// stack_pop.cpp
// compile with: /EHsc
#include <stack>
#include <iostream>

int main( )
{
   using namespace std;
   stack <int> s1, s2;

   s1.push( 10 );
   s1.push( 20 );
   s1.push( 30 );

   stack <int>::size_type i;
   i = s1.size( );
   cout << "The stack length is " << i << "." << endl;

   i = s1.top( );
   cout << "The element at the top of the stack is "
        << i << "." << endl;

   s1.pop( );

   i = s1.size( );
   cout << "After a pop, the stack length is "
        << i << "." << endl;

   i = s1.top( );
   cout << "After a pop, the element at the top of the stack is "
        << i << "." << endl;
}
```

```Output
The stack length is 3.
The element at the top of the stack is 30.
After a pop, the stack length is 2.
After a pop, the element at the top of the stack is 20.
```

## <a name="push"></a> push

Adds an element to the top of the stack.

```cpp
void push(const Type& val);
```

### Parameters

*val*\
The element added to the top of the stack.

### Remarks

The top of the stack is the position occupied by the most recently added element and is the last element at the end of the container.

### Example

```cpp
// stack_push.cpp
// compile with: /EHsc
#include <stack>
#include <iostream>

int main( )
{
   using namespace std;
   stack <int> s1;

   s1.push( 10 );
   s1.push( 20 );
   s1.push( 30 );

   stack <int>::size_type i;
   i = s1.size( );
   cout << "The stack length is " << i << "." << endl;

   i = s1.top( );
   cout << "The element at the top of the stack is "
        << i << "." << endl;
}
```

```Output
The stack length is 3.
The element at the top of the stack is 30.
```

## <a name="size"></a> size

Returns the number of elements in the stack.

```cpp
size_type size() const;
```

### Return Value

The current length of the stack.

### Example

```cpp
// stack_size.cpp
// compile with: /EHsc
#include <stack>
#include <iostream>

int main( )
{
   using namespace std;
   stack <int> s1, s2;
   stack <int>::size_type i;

   s1.push( 1 );
   i = s1.size( );
   cout << "The stack length is " << i << "." << endl;

   s1.push( 2 );
   i = s1.size( );
   cout << "The stack length is now " << i << "." << endl;
}
```

```Output
The stack length is 1.
The stack length is now 2.
```

## <a name="size_type"></a> size_type

An unsigned integer type that can represent the number of elements in a stack.

```cpp
typedef typename Container::size_type size_type;
```

### Remarks

The type is a synonym for `size_type` of the base container adapted by the stack.

### Example

See the example for [size](#size) for an example of how to declare and use `size_type`.

## <a name="stack"></a> stack

Constructs a stack that is empty or that is a copy of a base container class.

```cpp
stack();

explicit stack(const container_type& right);
```

### Parameters

*right*\
The container of which the constructed stack is to be a copy.

### Example

```cpp
// stack_stack.cpp
// compile with: /EHsc
#include <stack>
#include <vector>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares stack with default deque base container
   stack <char> dsc1;

   //Explicitly declares a stack with deque base container
   stack <char, deque<char> > dsc2;

   // Declares a stack with vector base containers
   stack <int, vector<int> > vsi1;

   // Declares a stack with list base container
   stack <int, list<int> > lsi;

   // The second member function copies elements from a container
   vector<int> v1;
   v1.push_back( 1 );
   stack <int, vector<int> > vsi2( v1 );
   cout << "The element at the top of stack vsi2 is "
        << vsi2.top( ) << "." << endl;
}
```

```Output
The element at the top of stack vsi2 is 1.
```

## <a name="top"></a> top

Returns a reference to an element at the top of the stack.

```cpp
reference top();

const_reference top() const;
```

### Return Value

A reference to the last element in the container at the top of the stack.

### Remarks

The stack must be nonempty to apply the member function. The top of the stack is the position occupied by the most recently added element and is the last element at the end of the container.

If the return value of `top` is assigned to a `const_reference`, the stack object cannot be modified. If the return value of `top` is assigned to a `reference`, the stack object can be modified.

### Example

```cpp
// stack_top.cpp
// compile with: /EHsc
#include <stack>
#include <iostream>

int main( )
{
   using namespace std;
   stack <int> s1;

   s1.push( 1 );
   s1.push( 2 );

   int& i = s1.top( );
   const int& ii = s1.top( );

   cout << "The top integer of the stack s1 is "
        << i << "." << endl;
   i--;
   cout << "The next integer down is "<< ii << "." << endl;
}
```

```Output
The top integer of the stack s1 is 2.
The next integer down is 1.
```

## <a name="value_type"></a> value_type

A type that represents the type of object stored as an element in a stack.

```cpp
typedef typename Container::value_type value_type;
```

### Remarks

The type is a synonym for `value_type` of the base container adapted by the stack.

### Example

```cpp
// stack_value_type.cpp
// compile with: /EHsc
#include <stack>
#include <iostream>

int main( )
{
   using namespace std;
   // Declares stacks with default deque base container
   stack<int>::value_type AnInt;

   AnInt = 69;
   cout << "The value_type is AnInt = " << AnInt << endl;

   stack<int> s1;
   s1.push( AnInt );
   cout << "The element at the top of the stack is "
        << s1.top( ) << "." << endl;
}
```

```Output
The value_type is AnInt = 69
The element at the top of the stack is 69.
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
