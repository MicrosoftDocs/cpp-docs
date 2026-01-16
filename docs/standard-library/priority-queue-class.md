---
description: "Learn more about: priority_queue Class"
title: "priority_queue Class"
ms.date: 01/18/2026
f1_keywords: ["queue/std::priority_queue::container_type", "queue/std::priority_queue::size_type", "queue/std::priority_queue::value_type", "queue/std::priority_queue::empty", "queue/std::priority_queue::pop", "queue/std::priority_queue::push", "queue/std::priority_queue::size", "queue/std::priority_queue::top"]
helpviewer_keywords: ["std::priority_queue [C++], container_type", "std::priority_queue [C++], size_type", "std::priority_queue [C++], value_type", "std::priority_queue [C++], empty", "std::priority_queue [C++], pop", "std::priority_queue [C++], push", "std::priority_queue [C++], size", "std::priority_queue [C++], top"]
---
# `priority_queue` class

A container adaptor that maintains a collection of elements where the largest (or highest priority) element is always accessible at the top. You can add new elements and remove or examine the top element, but you can't directly access elements in the middle of the collection.

## Syntax

```cpp
template <class Type, class Container= vector <Type>, class Compare= less <typename Container ::value_type>>
class priority_queue
```

### Parameters

*`Type`*\
The element data type to store in the `priority_queue`.

*`Container`*\
The type of the underlying container that stores the elements for the `priority_queue`.

*`Compare`*\
The type that provides a function object that compares two element values as sort keys to determine their relative order in the `priority_queue`. This argument is optional. The binary predicate `less<typename Container::value_type>` is the default.

## Remarks

Elements of class `Type` specified in the first template parameter of a `priority_queue` object are equivalent to [`value_type`](#value_type) and must match the element type in the underlying container class `Container` specified by the second template parameter. The `Type` must be assignable, which means you can copy objects of that type and assign values to variables of that type.

The `priority_queue` uses a comparison function to determine which elements have higher priority. This comparison function is a function object of class `Traits`. To work with `priority_queue`, your elements only need to support comparison using the less-than operator (`<`) so that it can arrange the elements in order.

You can change the underlying container type used by the `priority_queue`. You may want to do that for performance reasons. The default, `vector`, is usually best for cache locality because elements are stored in contiguous storage, and does fewer allocations as it grows. But perhaps you would consider `deque` if you have very large or unbounded queues and moving elements is expensive. For more information about suitable underlying container classes, see [container_type](#container_type).

Adding and removing elements from a `priority_queue` both have logarithmic complexity. Accessing elements in a `priority_queue` has constant complexity.

The C++ Standard Library defines other container adaptors that you can use to store the elements in your `priority_queue`: `stack`, `queue`, and `priority_queue`:

- The [`stack` Class](../standard-library/stack-class.md) supports a last-in, first-out (LIFO) data structure. Consider a stack of plates: you can insert, inspect, or remove elements (plates) only from the top of the stack, which is the last element at the end of the base container.
- The [`queue` Class](../standard-library/queue-class.md) supports a first-in, first-out (FIFO) data structure. Consider people in a line. You add elements (people) to the back of the line and remove them from the front of the line. Both the front and the back of a line can be inspected.
- The `priority_queue` class orders its elements so that the largest element is always at the top. It supports insertion of an element and the inspection and removal of the top element.

## Examples

- [Check if the `priority_queue` is empty](#check-if-a-priority_queue-is-empty)
- [Pop elements and check queue size](#pop-elements-and-inspect-size)
- [Use custom containers and comparers](#construct-priority_queue-with-custom-containers-and-comparers)
- [Push elements and read the top](#push-elements-and-read-the-top)
- [Get the number of elements](#get-priority_queue-size)
- [Access the top element](#access-the-top-element)
- [Use the priority_queue value_type alias](#use-the-priority_queue-value_type-alias)
- [Use a user-defined data type](#use-a-user-defined-data-type-with-the-priority_queue)

### Constructors

|Constructor|Description|
|-|-|
|[`priority_queue`](#priority_queue)|Constructs a `priority_queue` that is empty or that is a copy of a range of a base container object or of other `priority_queue`.|

### Typedefs

|Type name|Description|
|-|-|
|[`container_type`](#container_type)|A type that provides the base container that the `priority_queue` adapts.|
|[`size_type`](#size_type)|An unsigned integer type that can represent the number of elements in a `priority_queue`.|
|[`value_type`](#value_type)|A type that represents the type of object stored as an element in a `priority_queue`.|

### Member functions

|Member function|Description|
|-|-|
|[`empty`](#empty)|Tests if the `priority_queue` is empty.|
|[`pop`](#pop)|Removes the largest element of the `priority_queue` from the top position.|
|[`push`](#push)|Adds an element to the priority queue based on the priority of the element from `operator<`.|
|[`size`](#size)|Returns the number of elements in the `priority_queue`.|
|[`top`](#top)|Returns a const reference to the largest element at the top of the `priority_queue`.|

## Requirements

**Header:** `<queue>`

**Namespace:** `std`

## <a name="container_type"></a> `priority_queue::container_type`

A type that provides the base container to be adapted.

```cpp
typedef Container container_type;
```

### Remarks

The type is a synonym for the template parameter `Container`. 

Suitable underlying container classes for `priority_queue` include [`deque` Class](../standard-library/deque-class.md), the default [`vector` Class](../standard-library/vector-class.md), or any other sequence container that supports the operations of `front`, `push_back`, and `pop_back` and a random-access iterator. The container adaptor encapsulates the underlying container class and exposes only a limited set of the sequence container member functions as a public interface.

For an example of how to declare and use `container_type`, see [Use custom containers and comparers](#construct-priority_queue-with-custom-containers-and-comparers)

## <a name="empty"></a> `priority_queue::empty`

Tests if a `priority_queue` is empty.

```cpp
bool empty() const;
```

### Return Value

**`true`** if the `priority_queue` is empty; **`false`** if the `priority_queue` is nonempty.

### <a name="check-if-a-priority_queue-is-empty"></a>Example: Check if the `priority_queue` is empty

```cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main()
{
   using namespace std;

   // Declares priority_queues with default deque base container
   priority_queue <int> q1, s2;

   q1.push(1);

   if (q1.empty())
      cout << "The priority_queue q1 is empty." << endl;
   else
      cout << "The priority_queue q1 is not empty." << endl;

   if (s2.empty())
      cout << "The priority_queue s2 is empty." << endl;
   else
      cout << "The priority_queue s2 is not empty." << endl;
}
```

```Output
The priority_queue q1 is not empty.
The priority_queue s2 is empty.
```

## <a name="pop"></a> `priority_queue::pop`

Removes the largest element of the `priority_queue` from the top position.

```cpp
void pop();
```

### Remarks

The `priority_queue` must be nonempty to use this member function. The top of the `priority_queue` always holds the largest element in the container.

### <a name="pop-elements-and-inspect-size"></a>Example: Pop elements and check size

```cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main()
{
   using namespace std;
   priority_queue <int> q1, s2;

   q1.push(10);
   q1.push(20);
   q1.push(30);

   priority_queue <int>::size_type i, iii;
   i = q1.size();
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top();
   cout << "The element at the top of the priority_queue is " << ii << "." << endl;

   q1.pop();

   iii = q1.size();
   cout << "After a pop, the priority_queue length is " << iii << "." << endl;

   const int& iv = q1.top();
   cout << "After a pop, the element at the top of the " << "priority_queue is " << iv << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
After a pop, the priority_queue length is 2.
After a pop, the element at the top of the priority_queue is 20.
```

## <a name="priority_queue"></a> `priority_queue::priority_queue`

Creates a `priority_queue` that is empty or that copies a range from a base container object or from another `priority_queue`.

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

*`_comp`*\
The comparison function of type **`constTraits`** used to order the elements in the `priority_queue`, which defaults to compare function of the base container.

*`_Cont`*\
The base container of which the constructed `priority_queue` is to be a copy.

*`right`*\
The `priority_queue` of which the constructed set is to be a copy.

*`first`*\
The position of the first element in the range of elements to be copied.

*`last`*\
The position of the first element beyond the range of elements to be copied.

### Remarks

Each of the first three constructors specifies an empty initial `priority_queue`, the second also specifying the type of comparison function (`comp`) to be used in establishing the order of the elements and the third explicitly specifying the `container_type` (`_Cont`) to be used. The keyword **`explicit`** suppresses certain kinds of automatic type conversion.

The fourth constructor specifies a copy of the `priority_queue right`.

The last three constructors copy the range `[first, last)` of some container and use the values to initialize a `priority_queue` with increasing explicitness in specifying the type of comparison function of class `Traits` and `container_type`.

### <a name="construct-priority_queue-with-custom-containers-and-comparers"></a>Example: Use custom containers and comparers

```cpp
// compile with: /EHsc
#include <queue>
#include <vector>
#include <deque>
#include <list>
#include <iostream>

int main()
{
   using namespace std;

   // Declares a priority_queue with a default vector base container
   priority_queue <int> q1;
   cout << "q1 = ( ";
   while (!q1.empty())
   {
      cout << q1.top() << " ";
      q1.pop();
   }
   cout << ")" << endl;

   // Declares a priority_queue with nondefault deque base container
   priority_queue <int, deque <int>> q2;
   q2.push(5);
   q2.push(15);
   q2.push(10);
   cout << "q2 = ( ";
   while (!q2.empty())
   {
      cout << q2.top() << " ";
      q2.pop();
   }
   cout << ")" << endl;
   cout << "After printing, q2 has " << q2.size() << " elements." << endl;

   // Declares a priority_queue with a vector base container and specifies that
   // the comparison function greater is to be used for ordering elements
   priority_queue <int, vector<int>, greater<int>> q3;
   q3.push(2);
   q3.push(1);
   q3.push(3);
   cout << "q3 = ( ";
   
   while (!q3.empty())
   {
      cout << q3.top() << " ";
      q3.pop();
   }
   cout << ")" << endl;

   // Declares a priority_queue and initializes it with elements copied from another
   // container by first inserting elements into q1 and then copying q1 elements into q4
   q1.push(100);
   q1.push(200);
   priority_queue <int> q4(q1);
   cout << "q4 = ( ";
   while (!q4.empty())
   {
      cout << q4.top() << " ";
      q4.pop();
   }
   cout << ")" << endl;

   // Creates an auxiliary vector object v5 to be used to initialize q5
   vector <int> v5;
   vector <int>::iterator v5_Iter;
   v5.push_back(10);
   v5.push_back(30);
   v5.push_back(20);
   cout << "v5 = ( " ;
   for (v5_Iter = v5.begin() ; v5_Iter != v5.end() ; v5_Iter++)
   {
      cout << *v5_Iter << " ";
   }
   cout << ")" << endl;

   // Declares and initializes a priority_queue q5 by copying the
   // range v5[ first,  last) from vector v5
   priority_queue <int> q5(v5.begin(), v5.begin() + 2);
   cout << "q5 = ( ";
   while (!q5.empty())
   {
      cout << q5.top() << " ";
      q5.pop();
   }
   cout << ")" << endl;

   // Declares a priority_queue q6 with a comparison function greater and
   // initializes q6 by copying the range v5[ first,  last) from vector v5
   priority_queue <int, vector<int>, greater<int>> q6(v5.begin(), v5.begin() + 2);
   cout << "q6 = ( ";
   while (!q6.empty())
   {
      cout << q6.top() << " ";
      q6.pop();
   }
   cout << ")" << endl;
}
```

## <a name="push"></a> `priority_queue::push`

Adds an element to the priority queue based on the priority of the element from `operator<`.

```cpp
void push(const Type& val);
```

### Parameters

*`val`*\
The element to add to the top of the `priority_queue`.

### Remarks

The top of the `priority_queue` contains the largest element in the container.

### <a name="push-elements-and-read-the-top"></a>Example: Push elements and read the top

```cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main()
{
   using namespace std;
   priority_queue<int> q1;

   q1.push(10);
   q1.push(30);
   q1.push(20);

   priority_queue<int>::size_type i;
   i = q1.size();
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top();
   cout << "The element at the top of the priority_queue is " << ii << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
```

## <a name="size"></a> `priority_queue::size`

Returns the number of elements in the `priority_queue`.

```cpp
size_type size() const;
```

### Return Value

The current length of the `priority_queue`.

### <a name="get-priority_queue-size"></a>Example: Get the number of elements in the `priority_queue`

```cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main()
{
   using namespace std;
   priority_queue <int> q1, q2;
   priority_queue <int>::size_type i;

   q1.push(1);
   i = q1.size();
   cout << "The priority_queue length is " << i << "." << endl;

   q1.push(2);
   i = q1.size();
   cout << "The priority_queue length is now " << i << "." << endl;
}
```

```Output
The priority_queue length is 1.
The priority_queue length is now 2.
```

## <a name="size_type"></a> `priority_queue::size_type`

An unsigned integer type that represents the number of elements in a `priority_queue`.

```cpp
typedef typename Container::size_type size_type;
```

### Remarks

This type is a synonym for the `size_type` of the base container that the `priority_queue` adapts.

### <a name="access-the-top-element"></a>Example: Access the top element

For an example of how to declare and use `size_type`, see [Get the number of elements](#get-priority_queue-size)

## <a name="top"></a> `priority_queue::top`

Returns a const reference to the largest element at the top of the `priority_queue`.

```cpp
const_reference top() const;
```

### Return Value

A reference to the largest element, as determined by the `Traits` function, object of the `priority_queue`.

### Remarks

The `priority_queue` must be nonempty to use this member function.

### <a name="priority_queue::top-example"></a>Example: Get the top element of the `priority_queue`

```cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main()
{
   using namespace std;
   priority_queue<int> q1;

   q1.push(10);
   q1.push(30);
   q1.push(20);

   priority_queue<int>::size_type i;
   i = q1.size();
   cout << "The priority_queue length is " << i << "." << endl;

   const int& ii = q1.top();
   cout << "The element at the top of the priority_queue is " << ii << "." << endl;
}
```

```Output
The priority_queue length is 3.
The element at the top of the priority_queue is 30.
```

## <a name="value_type"></a> `priority_queue::value_type`

A type that represents the type of object stored as an element in a `priority_queue`.

```cpp
typedef typename Container::value_type value_type;
```

### Remarks

This type is a synonym for the `value_type` of the base container that the `priority_queue` adapts.

### <a name="use-the-priority_queue-value_type-alias"></a>Example: Use the priority_queue value_type alias

```cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main()
{
   using namespace std;

   // Declares priority_queues with default deque base container
   priority_queue<int>::value_type AnInt;

   AnInt = 69;
   cout << "The value_type is AnInt = " << AnInt << endl;

   priority_queue<int> q1;
   q1.push(AnInt);
   cout << "The element at the top of the priority_queue is " << q1.top() << "." << endl;
}
```

```Output
The value_type is AnInt = 69
The element at the top of the priority_queue is 69.
```

## <a name="use-a-user-defined-data-type-with-the-priority_queue"></a>Example: Use a user-defined data type

To use `priority_queue` with user-defined type elements, you must provide a way to compare the elements. You can either define `operator<` for your type or provide a custom comparison function object.

The following example demonstrates a `priority_queue` that stores `Task` objects, ordered by priority level. Tasks with higher priority values are at the top of the queue.

```cpp
// compile with: /EHsc
#include <queue>
#include <iostream>
#include <string>

struct Task
{
    int priority;
    std::string name;

    // Define operator< for priority_queue ordering
    // Returns true if this task has LOWER priority than other
    // (priority_queue puts the "largest" element at the top)
    bool operator<(const Task& other) const
    {
        return priority < other.priority;
    }
};

int main()
{
    std::priority_queue<Task> tasks;

    tasks.push({3, "Low priority task"});
    tasks.push({10, "High priority task"});
    tasks.push({5, "Medium priority task"});

    std::cout << "Processing tasks by priority:\n";
    while (!tasks.empty())
    {
        const Task& t = tasks.top();
        std::cout << "  Priority " << t.priority << ": " << t.name << "\n";
        tasks.pop();
    }
}
```

```Output
Processing tasks by priority:
  Priority 10: High priority task
  Priority 5: Medium priority task
  Priority 3: Low priority task
```

### Remarks

If you want different ordering (for example, lower values first), provide a custom comparator:

```cpp
struct ComparePriority
{
    bool operator()(const Task& a, const Task& b)
    {
        return a.priority > b.priority; // Lower priority value means higher priority
    }
};

std::priority_queue<Task, std::vector<Task>, ComparePriority> minQueue;
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
