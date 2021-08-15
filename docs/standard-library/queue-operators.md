---
description: "Learn more about: &lt;queue&gt; operators"
title: "&lt;queue&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["queue/std::operator!=", "queue/std::operator&gt;", "queue/std::operator&gt;=", "queue/std::operator&lt;", "queue/std::operator&lt;=", "queue/std::operator=="]
ms.assetid: 7c435b48-175c-45b0-88eb-24561044019c
helpviewer_keywords: ["std::operator!= (queue)", "std::operator&gt; (queue)", "std::operator&gt;= (queue)", "std::operator&lt; (queue)", "std::operator&lt;= (queue)", "std::operator== (queue)"]
---
# &lt;queue&gt; operators

## <a name="op_neq"></a> operator!=

Tests if the queue object on the left side of the operator is not equal to the queue object on the right side.

```cpp
bool operator!=(const queue <Type, Container>& left, const queue <Type, Container>& right,);
```

### Parameters

*left*\
An object of type `queue`.

*right*\
An object of type `queue`.

### Return Value

**`true`** if the queues are not equal; **`false`** if queues are equal.

### Remarks

The comparison between queue objects is based on a pairwise comparison of their elements. Two queues are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// queue_op_ne.cpp
// compile with: /EHsc
#include <queue>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares queues with list base containers
   queue <int, list<int> > q1, q2, q3;

   // The following line would have caused an error because vector
   // does not support pop_front( ) and so cannot be adapted
   // by queue as a base container
   // queue <int, vector<int> > q1, q2, q3;

   q1.push( 1 );
   q2.push( 1 );
   q2.push( 2 );
   q3.push( 1 );

   if ( q1 != q2 )
      cout << "The queues q1 and q2 are not equal." << endl;
   else
      cout << "The queues q1 and q2 are equal." << endl;

   if ( q1 != q3 )
      cout << "The queues q1 and q3 are not equal." << endl;
   else
      cout << "The queues q1 and q3 are equal." << endl;
}
```

```Output
The queues q1 and q2 are not equal.
The queues q1 and q3 are equal.
```

## <a name="op_lt"></a> operator&lt;

Tests if the queue object on the left side of the operator is less than the queue object on the right side.

```cpp
bool operator<(const queue <Type, Container>& left, const queue <Type, Container>& right,);
```

### Parameters

*left*\
An object of type `queue`.

*right*\
An object of type `queue`.

### Return Value

**`true`** if the queue on the left side of the operator is less than and not equal to the queue on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between queue objects is based on a pairwise comparison of their elements. The less-than relationship between two queue objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// queue_op_lt.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares queues with default deque base container
   queue <int> q1, q2, q3;

   q1.push( 1 );
   q1.push( 2 );
   q2.push( 5 );
   q2.push( 10 );
   q3.push( 1 );
   q3.push( 2 );

   if ( q1 < q2 )
      cout << "The queue q1 is less than the queue q2." << endl;
   else
      cout << "The queue q1 is not less than the queue q2." << endl;

   if ( q1 < q3 )
      cout << "The queue q1 is less than the queue q3." << endl;
   else
      cout << "The queue q1 is not less than the queue q3." << endl;
}
```

```Output
The queue q1 is less than the queue q2.
The queue q1 is not less than the queue q3.
```

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the queue object on the left side of the operator is less than or equal to the queue object on the right side.

```cpp
bool operator<=(const queue <Type, Container>& left, const queue <Type, Container>& right,);
```

### Parameters

*left*\
An object of type `queue`.

*right*\
An object of type `queue`.

### Return Value

**`true`** if the queue on the left side of the operator is strictly less than the queue on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between queue objects is based on a pairwise comparison of their elements. The less than or equal to relationship between two queue objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// queue_op_le.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   queue <int> q1, q2, q3;

   q1.push( 5 );
   q1.push( 10 );
   q2.push( 1 );
   q2.push( 2 );
   q3.push( 5 );
   q3.push( 10 );

   if ( q1 <= q2 )
      cout << "The queue q1 is less than or equal to "
           << "the queue q2." << endl;
   else
      cout << "The queue q1 is greater than "
           << "the queue q2." << endl;

   if ( q1 <= q3 )
      cout << "The queue q1 is less than or equal to "
           << "the queue q3." << endl;
   else
      cout << "The queue q1 is greater than "
           << "the queue q3." << endl;
}
```

```Output
The queue q1 is greater than the queue q2.
The queue q1 is less than or equal to the queue q3.
```

## <a name="op_eq_eq"></a> operator==

Tests if the queue object on the left side of the operator is equal to queue object on the right side.

```cpp
bool operator==(const queue <Type, Container>& left, const queue <Type, Container>& right,);
```

### Parameters

*left*\
An object of type `queue`.

*right*\
An object of type `queue`.

### Return Value

**`true`** if the queues are not equal; **`false`** if queues are equal.

### Remarks

The comparison between queue objects is based on a pairwise comparison of their elements. Two queues are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// queue_op_eq.cpp
// compile with: /EHsc
#include <queue>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares queues with list base containers
   queue <int, list<int> > q1, q2, q3;

   // The following line would have caused an error because vector
   // does not support pop_front( ) and so cannot be adapted
   // by queue as a base container
   // queue <int, vector<int> > q1, q2, q3;

   q1.push( 1 );
   q2.push( 2 );
   q3.push( 1 );

   if ( q1 != q2 )
      cout << "The queues q1 and q2 are not equal." << endl;
   else
      cout << "The queues q1 and q2 are equal." << endl;

   if ( q1 != q3 )
      cout << "The queues q1 and q3 are not equal." << endl;
   else
      cout << "The queues q1 and q3 are equal." << endl;
}
```

```Output
The queues q1 and q2 are not equal.
The queues q1 and q3 are equal.
```

## <a name="op_gt"></a> operator&gt;

Tests if the queue object on the left side of the operator is greater than the queue object on the right side.

```cpp
bool operator>(const queue <Type, Container>& left, const queue <Type, Container>& right,);
```

### Parameters

*left*\
An object of type `queue`.

*right*\
An object of type `queue`.

### Return Value

**`true`** if the queue on the left side of the operator is strictly less than the queue on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between queue objects is based on a pairwise comparison of their elements. The greater-than relationship between two queue objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// queue_op_gt.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   queue <int> q1, q2, q3;

   q1.push( 1 );
   q1.push( 2 );
   q1.push( 3 );
   q2.push( 5 );
   q2.push( 10 );
   q3.push( 1 );
   q3.push( 2 );

   if ( q1 > q2 )
      cout << "The queue q1 is greater than "
           << "the queue q2." << endl;
   else
      cout << "The queue q1 is not greater than "
           << "the queue q2." << endl;

   if ( q1> q3 )
      cout << "The queue q1 is greater than "
           << "the queue q3." << endl;
   else
      cout << "The queue q1 is not greater than "
           << "the queue q3." << endl;
}
```

```Output
The queue q1 is not greater than the queue q2.
The queue q1 is greater than the queue q3.
```

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the queue object on the left side of the operator is greater than or equal to the queue object on the right side.

```cpp
bool operator>=(const queue <Type, Container>& left, const queue <Type, Container>& right,);
```

### Parameters

*left*\
An object of type `queue`.

*right*\
An object of type `queue`.

### Return Value

**`true`** if the queue on the left side of the operator is strictly less than the queue on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between queue objects is based on a pairwise comparison of their elements. Two queues are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// queue_op_ge.cpp
// compile with: /EHsc
#include <queue>
#include <iostream>

int main( )
{
   using namespace std;
   queue <int> q1, q2, q3;

   q1.push( 1 );
   q1.push( 2 );
   q2.push( 5 );
   q2.push( 10 );
   q3.push( 1 );
   q3.push( 2 );

   if ( q1 >= q2 )
      cout << "The queue q1 is greater than or equal to "
           << "the queue q2." << endl;
   else
      cout << "The queue q1 is less than "
           << "the queue q2." << endl;

   if ( q1>= q3 )
      cout << "The queue q1 is greater than or equal to "
           << "the queue q3." << endl;
   else
      cout << "The queue q1 is less than "
           << "the queue q3." << endl;
}
```

```Output
The queue q1 is less than the queue q2.
The queue q1 is greater than or equal to the queue q3.
```
