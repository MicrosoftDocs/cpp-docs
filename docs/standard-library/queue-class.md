---
title: "queue Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.queue"
  - "std::queue"
  - "queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "queue class"
ms.assetid: 28c20ab0-3a72-4185-9e0f-5a44eea0e204
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# queue Class
A template container adaptor class that provides a restriction of functionality for some underlying container type, limiting access to the front and back elements. Elements can be added at the back or removed from the front, and elements can be inspected at either end of the queue.  
  
## Syntax  
  
```  
template <class Type, class Container = deque <Type>>  
class queue  
```  
  
#### Parameters  
 *Type*  
 The element data type to be stored in the queue  
  
 `Container`  
 The type of the underlying container used to implement the queue.  
  
## Remarks  
 The elements of class **Type** stipulated in the first template parameter of a queue object are synonymous with [value_type](#queue__value_type) and must match the type of element in the underlying container class **Container** stipulated by the second template parameter. The **Type** must be assignable, so that it is possible to copy objects of that type and to assign values to variables of that type.  
  
 Suitable underlying container classes for queue include [deque](../standard-library/deque-class.md) and [list](../standard-library/list-class.md), or any other sequence container that supports the operations of `front`, **back**, `push_back`, and `pop_front`. The underlying container class is encapsulated within the container adaptor, which exposes only the limited set of the sequence container member functions as a public interface.  
  
 The queue objects are equality comparable if and only if the elements of class **Type** are equality comparable, and are less-than comparable if and only if the elements of class **Type** are less-than comparable.  
  
 There are three types of container adaptors defined by the STL: stack, queue, and priority_queue. Each restricts the functionality of some underlying container class to provide a precisely controlled interface to a standard data structure.  
  
-   The [stack class](../standard-library/stack-class.md) supports a last-in, first-out (LIFO) data structure. A good analogue to keep in mind would be a stack of plates. Elements (plates) may be inserted, inspected, or removed only from the top of the stack, which is the last element at the end of the base container. The restriction to accessing only the top element is the reason for using the stack class.  
  
-   The queue class supports a first-in, first-out (FIFO) data structure. A good analogue to keep in mind would be people lining up for a bank teller. Elements (people) may be added to the back of the line and are removed from the front of the line. Both the front and the back of a line may be inspected. The restriction to accessing only the front and back elements in this way is the reason for using the queue class.  
  
-   The [priority_queue class](../standard-library/priority-queue-class.md) orders its elements so that the largest element is always at the top position. It supports insertion of an element and the inspection and removal of the top element. A good analogue to keep in mind would be people lining up where they are arranged by age, height, or some other criterion.  
  
### Constructors  
  
|||  
|-|-|  
|[queue](#queue__queue)|Constructs a `queue` that is empty or that is a copy of a base container object.|  
  
### Typedefs  
  
|||  
|-|-|  
|[container_type](#queue__container_type)|A type that provides the base container to be adapted by the `queue`.|  
|[size_type](#queue__size_type)|An unsigned integer type that can represent the number of elements in a `queue`.|  
|[value_type](#queue__value_type)|A type that represents the type of object stored as an element in a `queue`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[back](#queue__back)|Returns a reference to the last and most recently added element at the back of the `queue`.|  
|[empty](#queue__empty)|Tests if the `queue` is empty.|  
|[front](#queue__front)|Returns a reference to the first element at the front of the `queue`.|  
|[pop](#queue__pop)|Removes an element from the front of the `queue`.|  
|[push](#queue__push)|Adds an element to the back of the `queue`.|  
|[size](#queue__size)|Returns the number of elements in the `queue`.|  
  
## Requirements  
 **Header:** \<queue>  
  
 **Namespace:** std  
  
##  <a name="queue__back"></a>  queue::back  
 Returns a reference to the last and most recently added element at the back of the queue.  
  
```  
reference back();

const_reference back() const;
```  
  
### Return Value  
 The last element of the queue. If the queue is empty, the return value is undefined.  
  
### Remarks  
 If the return value of **back** is assigned to a `const_reference`, the queue object cannot be modified. If the return value of **back** is assigned to a **reference**, the queue object can be modified.  
  
 When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty queue.  See [Checked Iterators](../standard-library/checked-iterators.md) for more information.  
  
### Example  
  
```cpp  
// queue_back.cpp  
// compile with: /EHsc  
#include <queue>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   queue <int> q1;  
  
   q1.push( 10 );  
   q1.push( 11 );  
  
   int& i = q1.back( );  
   const int& ii = q1.front( );  
  
   cout << "The integer at the back of queue q1 is " << i   
        << "." << endl;  
   cout << "The integer at the front of queue q1 is " << ii   
        << "." << endl;  
}  
```  
  
##  <a name="queue__container_type"></a>  queue::container_type  
 A type that provides the base container to be adapted.  
  
```  
typedef Container container_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Container`. Two STL sequence container classes — the list class and the default deque class — meet the requirements to be used as the base container for a queue object. User-defined types satisfying the requirements may also be used.  
  
 For more information on `Container`, see the Remarks section of the [queue Class](../standard-library/queue-class.md) topic.  
  
### Example  
  See the example for [queue](#queue__queue) for an example of how to declare and use `container_type`.  
  
##  <a name="queue__empty"></a>  queue::empty  
 Tests if a queue is empty.  
  
```  
bool empty() const;
```  
  
### Return Value  
 **true** if the queue is empty; **false** if the queue is nonempty.  
  
### Example  
  
```cpp  
// queue_empty.cpp  
// compile with: /EHsc  
#include <queue>  
#include <iostream>  
  
int main( )  
{  
using namespace std;  
  
   // Declares queues with default deque base container  
   queue <int> q1, q2;  
  
   q1.push( 1 );  
  
   if ( q1.empty( ) )  
      cout << "The queue q1 is empty." << endl;  
   else  
      cout << "The queue q1 is not empty." << endl;  
  
   if ( q2.empty( ) )  
      cout << "The queue q2 is empty." << endl;  
   else  
      cout << "The queue q2 is not empty." << endl;  
}  
```  
  
```Output  
The queue q1 is not empty.  
The queue q2 is empty.  
```  
  
##  <a name="queue__front"></a>  queue::front  
 Returns a reference to the first element at the front of the queue.  
  
```  
reference front();

const_reference front() const;
```  
  
### Return Value  
 The first element of the queue. If the queue is empty, the return value is undefined.  
  
### Remarks  
 If the return value of `front` is assigned to a `const_reference`, the queue object cannot be modified. If the return value of `front` is assigned to a **reference**, the queue object can be modified.  
  
 The member function returns a **reference** to the first element of the controlled sequence, which must be nonempty.  
  
 When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty queue.  See [Checked Iterators](../standard-library/checked-iterators.md) for more information.  
  
### Example  
  
```cpp  
// queue_front.cpp  
// compile with: /EHsc  
#include <queue>  
#include <iostream>  
  
int main() {  
   using namespace std;  
   queue <int> q1;  
  
   q1.push( 10 );  
   q1.push( 20 );  
   q1.push( 30 );  
  
   queue <int>::size_type i;  
   i = q1.size( );  
   cout << "The queue length is " << i << "." << endl;  
  
   int& ii = q1.back( );  
   int& iii = q1.front( );  
  
   cout << "The integer at the back of queue q1 is " << ii   
        << "." << endl;  
   cout << "The integer at the front of queue q1 is " << iii   
        << "." << endl;  
}  
```  
  
##  <a name="queue__pop"></a>  queue::pop  
 Removes an element from the front of the queue.  
  
```  
void pop();
```  
  
### Remarks  
 The queue must be nonempty to apply the member function. The top of the queue is the position occupied by the most recently added element and is the last element at the end of the container.  
  
### Example  
  
```cpp  
// queue_pop.cpp  
// compile with: /EHsc  
#include <queue>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   queue <int> q1, s2;  
  
   q1.push( 10 );  
   q1.push( 20 );  
   q1.push( 30 );  
  
   queue <int>::size_type i;  
   i = q1.size( );  
   cout << "The queue length is " << i << "." << endl;  
  
   i = q1.front( );  
   cout << "The element at the front of the queue is "  
        << i << "." << endl;  
  
   q1.pop( );  
  
   i = q1.size( );  
   cout << "After a pop the queue length is "   
        << i << "." << endl;  
  
   i = q1. front ( );  
   cout << "After a pop, the element at the front of the queue is "  
        << i << "." << endl;  
}  
```  
  
```Output  
The queue length is 3.  
The element at the front of the queue is 10.  
After a pop the queue length is 2.  
After a pop, the element at the front of the queue is 20.  
```  
  
##  <a name="queue__push"></a>  queue::push  
 Adds an element to the back of the queue.  
  
```  
void push(const Type& val);
```  
  
### Parameters  
 `val`  
 The element added to the back of the queue.  
  
### Remarks  
 The back of the queue is the position occupied by the most recently added element and is the last element at the end of the container.  
  
### Example  
  
```cpp  
// queue_push.cpp  
// compile with: /EHsc  
#include <queue>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   queue <int> q1;  
  
   q1.push( 10 );  
   q1.push( 20 );  
   q1.push( 30 );  
  
   queue <int>::size_type i;  
   i = q1.size( );  
   cout << "The queue length is " << i << "." << endl;  
  
   i = q1.front( );  
   cout << "The element at the front of the queue is "  
        << i << "." << endl;  
}  
```  
  
```Output  
The queue length is 3.  
The element at the front of the queue is 10.  
```  
  
##  <a name="queue__queue"></a>  queue::queue  
 Constructs a queue that is empty or that is a copy of a base container object.  
  
```  
queue();

explicit queue(const container_type& right);
```  
  
### Parameters  
 ` right`  
 The **const** container of which the constructed queue is to be a copy.  
  
### Remarks  
 The default base container for queue is deque. You can also specify list as a base container, but you cannot specify vector, because it lacks the required `pop_front` member function.  
  
### Example  
  
```cpp  
// queue_queue.cpp  
// compile with: /EHsc  
#include <queue>  
#include <vector>  
#include <list>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   // Declares queue with default deque base container  
   queue <char> q1;  
  
   // Explicitly declares a queue with deque base container  
   queue <char, deque<char> > q2;  
  
   // These lines don't cause an error, even though they  
   // declares a queue with a vector base container  
   queue <int, vector<int> > q3;  
   q3.push( 10 );  
   // but the following would cause an error because vector has   
   // no pop_front member function  
   // q3.pop( );  
  
   // Declares a queue with list base container  
   queue <int, list<int> > q4;  
  
   // The second member function copies elements from a container  
   list<int> li1;  
   li1.push_back( 1 );  
   li1.push_back( 2 );  
   queue <int, list<int> > q5( li1 );  
   cout << "The element at the front of queue q5 is "  
        << q5.front( ) << "." << endl;  
   cout << "The element at the back of queue q5 is "  
        << q5.back( ) << "." << endl;  
}  
```  
  
```Output  
The element at the front of queue q5 is 1.  
The element at the back of queue q5 is 2.  
```  
  
##  <a name="queue__size"></a>  queue::size  
 Returns the number of elements in the queue.  
  
```  
size_type size() const;
```  
  
### Return Value  
 The current length of the queue.  
  
### Example  
  
```cpp  
// queue_size.cpp  
// compile with: /EHsc  
#include <queue>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   queue <int> q1, q2;  
   queue <int>::size_type i;  
  
   q1.push( 1 );  
   i = q1.size( );  
   cout << "The queue length is " << i << "." << endl;  
  
   q1.push( 2 );  
   i = q1.size( );  
   cout << "The queue length is now " << i << "." << endl;  
}  
```  
  
```Output  
The queue length is 1.  
The queue length is now 2.  
```  
  
##  <a name="queue__size_type"></a>  queue::size_type  
 An unsigned integer type that can represent the number of elements in a queue.  
  
```  
typedef typename Container::size_type size_type;  
```  
  
### Remarks  
 The type is a synonym for the `size_type` of the base container adapted by the queue.  
  
### Example  
  See the example for [queue::front](#queue__front) for an example of how to declare and use `size_type`.  
  
##  <a name="queue__value_type"></a>  queue::value_type  
 A type that represents the type of object stored as an element in a queue.  
  
```  
typedef typename Container::value_type value_type;  
```  
  
### Remarks  
 The type is a synonym for the `value_type` of the base container adapted by the queue.  
  
### Example  
  
```cpp  
// queue_value_type.cpp  
// compile with: /EHsc  
#include <queue>  
#include <iostream>  
  
int main( )  
{  
using namespace std;  
  
   // Declares queues with default deque base container  
   queue<int>::value_type AnInt;  
  
   AnInt = 69;  
   cout << "The value_type is AnInt = " << AnInt << endl;  
  
   queue<int> q1;  
   q1.push(AnInt);  
   cout << "The element at the front of the queue is "  
        << q1.front( ) << "." << endl;  
}  
```  
  
```Output  
The value_type is AnInt = 69  
The element at the front of the queue is 69.  
```  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)

