---
description: "Learn more about: &lt;vector&gt; operators"
title: "&lt;vector&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["vector/std::operator!=", "vector/std::operator&gt;", "vector/std::operator&gt;=", "vector/std::operator&lt;", "vector/std::operator&lt;=", "vector/std::operator=="]
ms.assetid: 1d14f312-6f59-4ec7-88ae-95f89a558823
helpviewer_keywords: ["std::operator!= (vector)", "std::operator&gt; (vector)", "std::operator&gt;= (vector)", "std::operator&lt; (vector)", "std::operator&lt;= (vector)", "std::operator== (vector)"]
---
# &lt;vector&gt; operators

## <a name="op_neq"></a> operator!=

Tests if the object on the left side of the operator is not equal to the object on the right side.

```cpp
bool operator!=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `vector`.

*right*\
An object of type `vector`.

### Return Value

**`true`** if the vectors are not equal; **`false`** if the vectors are equal.

### Remarks

Two vectors are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// vector_op_ne.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
     v2.push_back( 2 );

   if ( v1 != v2 )
      cout << "Vectors not equal." << endl;
   else
      cout << "Vectors equal." << endl;
}
```

```Output
Vectors not equal.
```

## <a name="op_lt"></a> operator&lt;

Tests if the object on the left side of the operator is less than the object on the right side.

```cpp
bool operator<(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `vector`.

*right*\
An object of type `vector`.

### Return Value

**`true`** if the vector on the left side of the operator is less than the vector on the right side of the operator; otherwise **`false`**.

### Example

```cpp
// vector_op_lt.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v1.push_back( 2 );
   v1.push_back( 4 );

   v2.push_back( 1 );
   v2.push_back( 3 );

   if ( v1 < v2 )
      cout << "Vector v1 is less than vector v2." << endl;
   else
      cout << "Vector v1 is not less than vector v2." << endl;
}
```

```Output
Vector v1 is less than vector v2.
```

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the object on the left side of the operator is less than or equal to the object on the right side.

```cpp
bool operator<=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `vector`.

*right*\
An object of type `vector`.

### Return Value

**`true`** if the vector on the left side of the operator is less than or equal to the vector on the right side of the operator; otherwise **`false`**.

### Example

```cpp
// vector_op_le.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v1.push_back( 2 );
   v1.push_back( 4 );

   v2.push_back( 1 );
   v2.push_back( 3 );

   if ( v1 <= v2 )
      cout << "Vector v1 is less than or equal to vector v2." << endl;
   else
      cout << "Vector v1 is greater than vector v2." << endl;
}
```

```Output
Vector v1 is less than or equal to vector v2.
```

## <a name="op_eq_eq"></a> operator==

Tests if the object on the left side of the operator is equal to the object on the right side.

```cpp
bool operator==(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `vector`.

*right*\
An object of type `vector`.

### Return Value

**`true`** if the vector on the left side of the operator is equal to the vector on the right side of the operator; otherwise **`false`**.

### Remarks

Two vectors are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// vector_op_eq.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v2.push_back( 1 );

   if ( v1 == v2 )
      cout << "Vectors equal." << endl;
   else
      cout << "Vectors not equal." << endl;
}
```

```Output
Vectors equal.
```

## <a name="op_gt"></a> operator&gt;

Tests if the object on the left side of the operator is greater than the object on the right side.

```cpp
bool operator>(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `vector`.

*right*\
An object of type `vector`.

### Return Value

**`true`** if the vector on the left side of the operator is greater than the vector on the right side of the operator; otherwise **`false`**.

### Example

```cpp
// vector_op_gt.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v1.push_back( 3 );
   v1.push_back( 1 );

   v2.push_back( 1 );
   v2.push_back( 2 );
   v2.push_back( 2 );

   if ( v1 > v2 )
      cout << "Vector v1 is greater than vector v2." << endl;
   else
      cout << "Vector v1 is not greater than vector v2." << endl;
}
```

```Output
Vector v1 is greater than vector v2.
```

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the object on the left side of the operator is greater than or equal to the object on the right side.

```cpp
bool operator>=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `vector`.

*right*\
An object of type `vector`.

### Return Value

**`true`** if the vector on the left side of the operator is greater than or equal to the vector on the right side of the vector; otherwise **`false`**.

### Example

```cpp
// vector_op_ge.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v1.push_back( 3 );
   v1.push_back( 1 );

     v2.push_back( 1 );
   v2.push_back( 2 );
   v2.push_back( 2 );

   if ( v1 >= v2 )
      cout << "Vector v1 is greater than or equal to vector v2." << endl;
   else
      cout << "Vector v1 is less than vector v2." << endl;
}
```

```Output
Vector v1 is greater than or equal to vector v2.
```
