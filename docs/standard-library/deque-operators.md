---
description: "Learn more about: &lt;deque&gt; operators"
title: "&lt;deque&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["deque/std::operator!=", "deque/std::operator&gt;", "deque/std::operator&gt;=", "deque/std::operator&lt;", "deque/std::operator&lt;=", "deque/std::operator=="]
ms.assetid: 482d7c92-54c7-493b-99e6-2a73617481a5
helpviewer_keywords: ["std::operator!= (deque)", "std::operator&gt; (deque)", "std::operator&gt;= (deque)", "std::operator&lt; (deque)", "std::operator&lt;= (deque)", "std::operator== (deque)"]
---
# &lt;deque&gt; operators

## <a name="op_neq"></a> operator!=

Tests if the deque object on the left side of the operator is not equal to the deque object on the right side.

```cpp
bool operator!=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `deque`.

*right*\
An object of type `deque`.

### Return Value

**`true`** if the deque objects are not equal; **`false`** if the deque objects are equal.

### Remarks

The comparison between deque objects is based on a pairwise comparison of their elements. Two deque objects are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// deque_op_ne.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c2.push_back( 2 );

   if ( c1 != c2 )
      cout << "The deques are not equal." << endl;
   else
      cout << "The deques are equal." << endl;
}
```

```Output
The deques are not equal.
```

## <a name="op_lt"></a> operator&lt;

Tests if the deque object on the left side of the operator is less than the deque object on the right side.

```cpp
bool operator<(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `deque`.

*right*\
An object of type `deque`.

### Return Value

**`true`** if the deque on the left side of the operator is less than and not equal to the deque on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between deque objects is based on a pairwise comparison of their elements. The less-than relationship between two objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// deque_op_lt.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 4 );

   c2.push_back( 1 );
   c2.push_back( 3 );

   if ( c1 < c2 )
      cout << "Deque c1 is less than deque c2." << endl;
   else
      cout << "Deque c1 is not less than deque c2." << endl;
}
```

```Output
Deque c1 is less than deque c2.
```

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the deque object on the left side of the operator is less than or equal to the deque object on the right side.

```cpp
bool operator<=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `deque`.

*right*\
An object of type `deque`.

### Return Value

**`true`** if the deque on the left side of the operator is less than or equal to the deque on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between deque objects is based on a pairwise comparison of their elements. The less than or equal to relationship between two objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// deque_op_le.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 4 );

   c2.push_back( 1 );
   c2.push_back( 3 );

   if ( c1 <= c2 )
      cout << "Deque c1 is less than or equal to deque c2." << endl;
   else
      cout << "Deque c1 is greater than deque c2." << endl;
}
```

```Output
Deque c1 is less than or equal to deque c2.
```

## <a name="op_eq_eq"></a> operator==

Tests if the deque object on the left side of the operator is equal to the deque object on the right side.

```cpp
bool operator==(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `deque`.

*right*\
An object of type `deque`.

### Return Value

**`true`** if the deque on the left side of the operator is equal to the deque on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between deque objects is based on a pairwise comparison of their elements. Two deques are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// deque_op_eq.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c2.push_back( 1 );

   if ( c1 == c2 )
      cout << "The deques are equal." << endl;
   else
      cout << "The deques are not equal." << endl;

   c1.push_back( 1 );
   if ( c1 == c2 )
      cout << "The deques are equal." << endl;
   else
      cout << "The deques are not equal." << endl;
}
```

```Output
The deques are equal.
The deques are not equal.
```

## <a name="op_gt"></a> operator&gt;

Tests if the deque object on the left side of the operator is greater than the deque object on the right side.

```cpp
bool operator>(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `deque`.

*right*\
An object of type `deque`.

### Return Value

**`true`** if the deque on the left side of the operator is greater than the deque on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between deque objects is based on a pairwise comparison of their elements. The greater-than relationship between two objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// deque_op_gt.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c1.push_back( 3 );
   c1.push_back( 1 );

   c2.push_back( 1 );
   c2.push_back( 2 );
   c2.push_back( 2 );

   if ( c1 > c2 )
      cout << "Deque c1 is greater than deque c2." << endl;
   else
      cout << "Deque c1 is not greater than deque c2." << endl;
}
```

```Output
Deque c1 is greater than deque c2.
```

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the deque object on the left side of the operator is greater than or equal to the deque object on the right side.

```cpp
bool operator>=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `deque`.

*right*\
An object of type `deque`.

### Return Value

**`true`** if the deque on the left side of the operator is greater than or equal to the deque on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between deque objects is based on a pairwise comparison of their elements. The greater than or equal to relationship between two objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// deque_op_ge.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c1.push_back( 3 );
   c1.push_back( 1 );

   c2.push_back( 1 );
   c2.push_back( 2 );
   c2.push_back( 2 );

   if ( c1 >= c2 )
      cout << "Deque c1 is greater than or equal to deque c2." << endl;
   else
      cout << "Deque c1 is less than deque c2." << endl;
}
```

```Output
Deque c1 is greater than or equal to deque c2.
```
