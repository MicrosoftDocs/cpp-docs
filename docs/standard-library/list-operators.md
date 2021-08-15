---
description: "Learn more about: &lt;list&gt; operators"
title: "&lt;list&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["list/std::operator!=", "list/std::operator&gt;", "list/std::operator&gt;=", "list/std::operator&lt;", "list/std::operator&lt;=", "list/std::operator=="]
ms.assetid: 8103d8f2-c30f-49ad-ac50-b3ba6a907ebe
helpviewer_keywords: ["std::operator!= (list)", "std::operator&gt; (list)", "std::operator&gt;= (list)", "std::operator&lt; (list)", "std::operator&lt;= (list)", "std::operator== (list)"]
---
# &lt;list&gt; operators

## <a name="op_neq"></a> operator!=

Tests if the list object on the left side of the operator is not equal to the list object on the right side.

```cpp
bool operator!=(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `list`.

*right*\
An object of type `list`.

### Return Value

**`true`** if the lists are not equal; **`false`** if the lists are equal.

### Remarks

The comparison between list objects is based on a pairwise comparison of their elements. Two lists are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// list_op_ne.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
using namespace std;
list <int> c1, c2;
c1.push_back( 1 );
c2.push_back( 2 );

if ( c1 != c2 )
cout << "Lists not equal." << endl;
else
cout << "Lists equal." << endl;
}
/* Output:
Lists not equal.
*/
```

## <a name="op_lt"></a> operator&lt;

Tests if the list object on the left side of the operator is less than the list object on the right side.

```cpp
bool operator<(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `list`.

*right*\
An object of type `list`.

### Return Value

**`true`** if the list on the left side of the operator is less than but not equal to the list on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between list objects is based on a pairwise comparison of their elements. The less-than relationship between two objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// list_op_lt.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1, c2;
   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 4 );

   c2.push_back( 1 );
   c2.push_back( 3 );

   if ( c1 < c2 )
      cout << "List c1 is less than list c2." << endl;
   else
      cout << "List c1 is not less than list c2." << endl;
}
/* Output:
List c1 is less than list c2.
*/
```

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the list object on the left side of the operator is less than or equal to the list object on the right side.

```cpp
bool operator<=(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `list`.

*right*\
An object of type `list`.

### Return Value

**`true`** if the list on the left side of the operator is less than or equal to the list on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between list objects is based on a pairwise comparison of their elements. The less than or equal to relationship between two objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// list_op_le.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1, c2;
   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 4 );

   c2.push_back( 1 );
   c2.push_back( 3 );

   if ( c1 <= c2 )
      cout << "List c1 is less than or equal to list c2." << endl;
   else
      cout << "List c1 is greater than list c2." << endl;
}
/* Output:
List c1 is less than or equal to list c2.
*/
```

## <a name="op_eq_eq"></a> operator==

Tests if the list object on the left side of the operator is equal to the list object on the right side.

```cpp
bool operator==(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `list`.

*right*\
An object of type `list`.

### Return Value

**`true`** if the list on the left side of the operator is equal to the list on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between list objects is based on a pairwise comparison of their elements. Two lists are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// list_op_eq.cpp
// compile with: /EHsc
#include <list>
#include <iostream>
int main( )
{
   using namespace std;

   list <int> c1, c2;
   c1.push_back( 1 );
   c2.push_back( 1 );

   if ( c1 == c2 )
      cout << "The lists are equal." << endl;
   else
      cout << "The lists are not equal." << endl;
}
/* Output:
The lists are equal.
*/
```

## <a name="op_gt"></a> operator&gt;

Tests if the list object on the left side of the operator is greater than the list object on the right side.

```cpp
bool operator>(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `list`.

*right*\
An object of type `list`.

### Return Value

**`true`** if the list on the left side of the operator is greater than the list on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between list objects is based on a pairwise comparison of their elements. The greater-than relationship between two objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// list_op_gt.cpp
// compile with: /EHsc
#include <list>
#include <iostream>
int main( )
{
   using namespace std;
   list <int> c1, c2;
   c1.push_back( 1 );
   c1.push_back( 3 );
   c1.push_back( 1 );

   c2.push_back( 1 );
   c2.push_back( 2 );
   c2.push_back( 2 );

   if ( c1 > c2 )
      cout << "List c1 is greater than list c2." << endl;
   else
      cout << "List c1 is not greater than list c2." << endl;
}
/* Output:
List c1 is greater than list c2.
*/
```

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the list object on the left side of the operator is greater than or equal to the list object on the right side.

```cpp
bool operator>=(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `list`.

*right*\
An object of type `list`.

### Return Value

**`true`** if the list on the left side of the operator is greater than or equal to the list on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between list objects is based on a pairwise comparison of their elements. The greater than or equal to relationship between two objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// list_op_ge.cpp
// compile with: /EHsc
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   list <int> c1, c2;
   c1.push_back( 1 );
   c1.push_back( 3 );
   c1.push_back( 1 );

   c2.push_back( 1 );
   c2.push_back( 2 );
   c2.push_back( 2 );

   if ( c1 >= c2 )
      cout << "List c1 is greater than or equal to list c2." << endl;
   else
      cout << "List c1 is less than list c2." << endl;
}
/* Output:
List c1 is greater than or equal to list c2.
*/
```
