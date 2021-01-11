---
description: "Learn more about: priority_queue Class"
title: "priority_queue Class"
ms.date: "11/04/2016"
f1_keywords: ["queue/std::priority_queue::container_type", "queue/std::priority_queue::size_type", "queue/std::priority_queue::value_type", "queue/std::priority_queue::empty", "queue/std::priority_queue::pop", "queue/std::priority_queue::push", "queue/std::priority_queue::size", "queue/std::priority_queue::top"]
helpviewer_keywords: ["std::priority_queue [C++], container_type", "std::priority_queue [C++], size_type", "std::priority_queue [C++], value_type", "std::priority_queue [C++], empty", "std::priority_queue [C++], pop", "std::priority_queue [C++], push", "std::priority_queue [C++], size", "std::priority_queue [C++], top"]
ms.assetid: 69fca9cc-a449-4be4-97b7-02ca5db9cbb2
---
# priority_queue Class

A template container adaptor class that provides a restriction of functionality limiting access to the top element of some underlying container type, which is always the largest or of the highest priority. New elements can be added to the priority_queue and the top element of the priority_queue can be inspected or removed.

## Syntax

```cpp
template <class Type, class Container= vector <Type>, class Compare= less <typename Container ::value_type>>
class priority_queue
```

### Parameters

*Type*\
The element data type to be stored in the priority_queue.

*Container*\
The type of the underlying container used to implement the priority_queue.

*Compare*\
The type that provides a function object that can compare two element values as sort keys to determine their relative order in the priority_queue. This argument is optional and the binary predicate `less<typename Container::value_type>` is the default value.

## Remarks

The elements of class `Type` stipulated in the first template parameter of a queue object are synonymous with [value_type](#value_type) and must match the type of element in the underlying container class `Container` stipulated by the second template parameter. The `Type` must be assignable, so that it is possible to copy objects of that type and to assign values to variables of that type.

The priority_queue orders the sequence it controls by calling a stored function object of class `Traits`. In general, the elements need be merely less than comparable to establish this order: so that, given any two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. On a more technical note, the comparison function is a binary predicate that induces a strict weak ordering in the standard mathematical sense.

Suitable underlying container classes for priority_queue include [deque Class](../standard-library/deque-class.md) and the default [vector Class](../standard-library/vector-class.md) or any other sequence container that supports the operations of `front`, `push_back`, and `pop_back` and a random-access iterator. The underlying container class is encapsulated within the container adaptor, which exposes only the limited set of the sequence container member functions as a public interface.

Adding elements to and removing elements from a `priority_queue` both have logarithmic complexity. Accessing elements in a `priority_queue` has constant complexity.

There are three types of container adaptors defined by the C++ Standard Library: stack, queue, and priority_queue. Each restricts the functionality of some underlying container class to provide a precisely controlled interface to a standard data structure.

- The [stack Class](../standard-library/stack-class.md) supports a last-in, first-out (LIFO) data structure. A good analogue to keep in mind would be a stack of plates. Elements (plates) may be inserted, inspected, or removed only from the top of the stack, which is the last element at the end of the base container. The restriction to accessing only the top element is the reason for using the stack class.

- The [queue Class](../standard-library/queue-class.md) supports a first-in, first-out (FIFO) data structure. A good analogue to keep in mind would be people lining up for a bank teller. Elements (people) may be added to the back of the line and are removed from the front of the line. Both the front and the back of a line may be inspected. The restriction to accessing only the front and back elements in this way is the reason for using the queue class.

- The priority_queue class orders its elements so that the largest element is always at the top position. It supports insertion of an element and the inspection and removal of the top element. A good analogue to keep in mind would be people lining up where they are arranged by age, height, or some other criterion.

### Constructors

|Constructor|Description|
|-|-|
|[priority_queue](#priority_queue)|Constructs a `priority_queue` that is empty or that is a copy of a range of a base container object or of other `priority_queue`.|

### Typedefs

|Type name|Description|
|-|-|
|[container_type](#container_type)|A type that provides the base container to be adapted by a `priority_queue`.|
|[size_type](#size_type)|An unsigned integer type that can represent the number of elements in a `priority_queue`.|
|[value_type](#value_type)|A type that represents the type of object stored as an element in a `priority_queue`.|

### Member functions

|Member function|Description|
|-|-|
|[empty](#empty)|Tests if the `priority_queue` is empty.|
|[pop](#pop)|Removes the largest element of the `priority_queue` from the top position.|
|[push](#push)|Adds an element to the priority queue based on the priority of the element from operator<.|
|[size](#size)|Returns the number of elements in the `priority_queue`.|
|[top](#top)|Returns a const reference to the largest element at the top of the `priority_queue`.|

## Requirements

**Header:** \<queue>

**Namespace:** std

## <a name="container_type"></a> priority_queue::container_type

A type that provides the base container to be adapted.

```cpp
typedef Container container_type;
```

### Remarks

The type is a synonym for the template parameter `Container`. The C++ Standard Library sequence container class `deque` and the default class `vector` meet the requirements to be used as the base container for a priority_queue object. User-defined types satisfying the requirements may also be used.

For more information on `Container`, see the Remarks section of the [priority_queue Class](../standard-library/priority-queue-class.md) topic.

### Example

See the example for [priority_queue](#priority_queue) for an example of how to declare and use `container_type`.

## <a name="empty"></a> priority_queue::empty

Tests if a priority_queue is empty.

```cpp
bool empty() const;
```

### Return Value

**`true`** if the priority_queue is empty; **`false`** if the priority_queue is nonempty.

### Example

```cpp
// pqueue_empty.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares priority_queues with default deque base container
   priority_queue <int> q1, s2;

   q1.push( 1 );

   if ( q1.empty( ) )
      cout << "The priority_queue q1 is empty." << endl;
   else
      cout << "The priority_queue q1 is not empty." << endl;

   if ( s2.empty( ) )
      cout << "The priority_queue s2 is empty." << endl;
   else
      cout << "The priority_queue s2 is not empty." << endl;
}
```

```Output
The priority_queue q1 is not empty.
The priority_queue s2 is empty.
```

## <a name="pop"></a> priority_queue::pop

Removes the largest element of the priority_queue from the top position.

```cpp
void pop();
```

### Remarks

The priority_queue must be nonempty to apply the member function. The top of the priority_queue is always occupied by the largest element in the container.

### Example

```cpp
// pqueue_pop.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   priority_queue <int> q1, s2;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   priority_queue <int>::size_type i, iii;
   i = q1.size( );
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top( );
   cout << "The element at the top of the priority_queue is "
        << ii << "." << endl;

   q1.pop( );

   iii = q1.size( );
   cout << "After a pop, the priority_queue length is "
        << iii << "." << endl;

   const int& iv = q1.top( );
   cout << "After a pop, the element at the top of the "
        << "priority_queue is " << iv << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
After a pop, the priority_queue length is 2.
After a pop, the element at the top of the priority_queue is 20.
```

## <a name="priority_queue"></a> priority_queue::priority_queue

Constructs a priority_queue that is empty or that is a copy of a range of a base container object or of another priority_queue.

```cpp
priority_queue();

explicit priority_queue(const Traits& _comp);

priority_queue(const Traits& _comp, const container_type& _Cont);

priority_queue(const priority_queue& right);

template <class InputIterator>
priority_queue(InputIterator first, InputIterator last);

template <class InputIterator>
priority_queue(InputIterator first, InputIterator last, const Traits& _comp);

template <class InputIterator>
priority_queue(InputIterator first, InputIterator last, const Traits& _comp, const container_type& _Cont);
```

### Parameters

*_comp*\
The comparison function of type **constTraits** used to order the elements in the priority_queue, which defaults to compare function of the base container.

*_Cont*\
The base container of which the constructed priority_queue is to be a copy.

*right*\
The priority_queue of which the constructed set is to be a copy.

*first*\
The position of the first element in the range of elements to be copied.

*last*\
The position of the first element beyond the range of elements to be copied.

### Remarks

Each of the first three constructors specifies an empty initial priority_queue, the second also specifying the type of comparison function (`comp`) to be used in establishing the order of the elements and the third explicitly specifying the `container_type` (`_Cont`) to be used. The keyword **`explicit`** suppresses certain kinds of automatic type conversion.

The fourth constructor specifies a copy of the priority_queue *right*.

The last three constructors copy the range \[*first*, *last*) of some container and use the values to initialize a priority_queue with increasing explicitness in specifying the type of comparison function of class `Traits` and `container_type`.

### Example

```cpp
// pqueue_ctor.cpp
// compile with: /EHsc
#include <queue>
#include <vector>
#include <deque>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function declares priority_queue
   // with a default vector base container
   priority_queue <int> q1;
   cout << "q1 = ( ";
   while ( !q1.empty( ) )
   {
      cout << q1.top( ) << " ";
      q1.pop( );
   }
   cout << ")" << endl;

   // Explicitly declares a priority_queue with nondefault
   // deque base container
   priority_queue <int, deque <int> > q2;
   q2.push( 5 );
   q2.push( 15 );
   q2.push( 10 );
   cout << "q2 = ( ";
   while ( !q2.empty( ) )
   {
      cout << q2.top( ) << " ";
      q2.pop( );
   }
   cout << ")" << endl;

   // This method of printing out the elements of a priority_queue
   // removes the elements from the priority queue, leaving it empty
   cout << "After printing, q2 has " << q2.size( ) << " elements." << endl;

   // The third member function declares a priority_queue
   // with a vector base container and specifies that the comparison
   // function greater is to be used for ordering elements
   priority_queue <int, vector<int>, greater<int> > q3;
   q3.push( 2 );
   q3.push( 1 );
   q3.push( 3 );
   cout << "q3 = ( ";
   while ( !q3.empty( ) )
   {
      cout << q3.top( ) << " ";
      q3.pop( );
   }
   cout << ")" << endl;

   // The fourth member function declares a priority_queue and
   // initializes it with elements copied from another container:
   // first, inserting elements into q1, then copying q1 elements into q4
   q1.push( 100 );
   q1.push( 200 );
   priority_queue <int> q4( q1 );
   cout << "q4 = ( ";
   while ( !q4.empty( ) )
   {
      cout << q4.top( ) << " ";
      q4.pop( );
   }
   cout << ")" << endl;

   // Creates an auxiliary vector object v5 to be used to initialize q5
   vector <int> v5;
   vector <int>::iterator v5_Iter;
   v5.push_back( 10 );
   v5.push_back( 30 );
   v5.push_back( 20 );
   cout << "v5 = ( " ;
   for ( v5_Iter = v5.begin( ) ; v5_Iter != v5.end( ) ; v5_Iter++ )
      cout << *v5_Iter << " ";
   cout << ")" << endl;

   // The fifth member function declares and
   // initializes a priority_queue q5 by copying the
   // range v5[ first,  last) from vector v5
   priority_queue <int> q5( v5.begin( ), v5.begin( ) + 2 );
   cout << "q5 = ( ";
   while ( !q5.empty( ) )
   {
      cout << q5.top( ) << " ";
      q5.pop( );
   }
   cout << ")" << endl;

   // The sixth member function declares a priority_queue q6
   // with a comparison function greater and initializes q6
   // by copying the range v5[ first,  last) from vector v5
   priority_queue <int, vector<int>, greater<int> >
      q6( v5.begin( ), v5.begin( ) + 2 );
   cout << "q6 = ( ";
   while ( !q6.empty( ) )
   {
      cout << q6.top( ) << " ";
      q6.pop( );
   }
   cout << ")" << endl;
}
```

## <a name="push"></a> priority_queue::push

Adds an element to the priority queue based on the priority of the element from operator<.

```cpp
void push(const Type& val);
```

### Parameters

*val*\
The element added to the top of the priority_queue.

### Remarks

The top of the priority_queue is the position occupied by the largest element in the container.

### Example

```cpp
// pqueue_push.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   priority_queue<int> q1;

   q1.push( 10 );
   q1.push( 30 );
   q1.push( 20 );

   priority_queue<int>::size_type i;
   i = q1.size( );
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top( );
   cout << "The element at the top of the priority_queue is "
        << ii << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
```

## <a name="size"></a> priority_queue::size

Returns the number of elements in the priority_queue.

```cpp
size_type size() const;
```

### Return Value

The current length of the priority_queue.

### Example

```cpp
// pqueue_size.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   priority_queue <int> q1, q2;
   priority_queue <int>::size_type i;

   q1.push( 1 );
   i = q1.size( );
   cout << "The priority_queue length is " << i << "." << endl;

   q1.push( 2 );
   i = q1.size( );
   cout << "The priority_queue length is now " << i << "." << endl;
}
```

```Output
The priority_queue length is 1.
The priority_queue length is now 2.
```

## <a name="size_type"></a> priority_queue::size_type

An unsigned integer type that can represent the number of elements in a priority_queue.

```cpp
typedef typename Container::size_type size_type;
```

### Remarks

The type is a synonym for the `size_type` of the base container adapted by the priority_queue.

### Example

See the example for [size](#size) for an example of how to declare and use `size_type`.

## <a name="top"></a> priority_queue::top

Returns a const reference to the largest element at the top of the priority_queue.

```cpp
const_reference top() const;
```

### Return Value

A reference to the largest element, as determined by the `Traits` function, object of the priority_queue.

### Remarks

The priority_queue must be nonempty to apply the member function.

### Example

```cpp
// pqueue_top.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   priority_queue<int> q1;

   q1.push( 10 );
   q1.push( 30 );
   q1.push( 20 );

   priority_queue<int>::size_type i;
   i = q1.size( );
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top( );
   cout << "The element at the top of the priority_queue is "
        << ii << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
```

## <a name="value_type"></a> priority_queue::value_type

A type that represents the type of object stored as an element in a priority_queue.

```cpp
typedef typename Container::value_type value_type;
```

### Remarks

The type is a synonym for the `value_type` of the base container adapted by the priority_queue.

### Example

```cpp
// pqueue_value_type.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares priority_queues with default deque base container
   priority_queue<int>::value_type AnInt;

   AnInt = 69;
   cout << "The value_type is AnInt = " << AnInt << endl;

   priority_queue<int> q1;
   q1.push( AnInt );
   cout << "The element at the top of the priority_queue is "
        << q1.top( ) << "." << endl;
}
```

```Output
The value_type is AnInt = 69
The element at the top of the priority_queue is 69.
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
