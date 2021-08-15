---
description: "Learn more about: &lt;stack&gt; operators"
title: "&lt;stack&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["stack/std::operator!=", "stack/std::operator&gt;", "stack/std::operator&gt;=", "stack/std::operator&lt;", "stack/std::operator&lt;=", "stack/std::operator=="]
ms.assetid: 9c1fc282-2f61-4727-9e80-84ea5d4934a2
helpviewer_keywords: ["std::operator!= (stack)", "std::operator&gt; (stack)", "std::operator&gt;= (stack)", "std::operator&lt; (stack)", "std::operator&lt;= (stack)", "std::operator== (stack)"]
---
# &lt;stack&gt; operators

## <a name="op_neq"></a> operator!=

Tests if the stack object on the left side of the operator is not equal to stack object on the right side.

```cpp
bool operator!=(const stack <Type, Container>& left, const stack <Type, Container>& right,);
```

### Parameters

*left*\
An object of type `stack`.

*right*\
An object of type `stack`.

### Return Value

**`true`** if the stacks or stacks are not equal; **`false`** if stacks or stacks are equal.

### Remarks

The comparison between stacks objects is based on a pairwise comparison of their elements. Two stacks are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// stack_op_me.cpp
// compile with: /EHsc
#include <stack>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares stacks with vector base containers
   stack <int, vector<int> > s1, s2, s3;

   // The following would have cause an error because stacks with
   // different base containers are not equality comparable
   // stack <int, list<int> >  s3;

   s1.push( 1 );
   s2.push( 2 );
   s3.push( 1 );

   if ( s1 != s2 )
      cout << "The stacks s1 and s2 are not equal." << endl;
   else
      cout << "The stacks s1 and s2 are equal." << endl;

   if ( s1 != s3 )
      cout << "The stacks s1 and s3 are not equal." << endl;
   else
      cout << "The stacks s1 and s3 are equal." << endl;
}
```

```Output
The stacks s1 and s2 are not equal.
The stacks s1 and s3 are equal.
```

## <a name="op_lt"></a> operator&lt;

Tests if the stack object on the left side of the operator is less than the stack object on the right side.

```cpp
bool operator<(const stack <Type, Container>& left, const stack <Type, Container>& right);
```

### Parameters

*left*\
An object of type `stack`.

*right*\
An object of type `stack`.

### Return Value

**`true`** if the stack on the left side of the operator is less than and not equal to the stack on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between stack objects is based on a pairwise comparison of their elements. The less-than relationship between two stack objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// stack_op_lt.cpp
// compile with: /EHsc
#include <stack>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares stacks with list base container
   stack <int, list<int> > s1, s2, s3;

   s1.push( 2 );
   s1.push( 4 );
   s1.push( 6 );
   s1.push( 8 );
   s2.push( 5 );
   s2.push( 10 );
   s3.push( 2 );
   s3.push( 4 );
   s3.push( 6 );
   s3.push( 8 );

   if ( s1 >= s2 )
      cout << "The stack s1 is greater than or equal to "
           << "the stack s2." << endl;
   else
      cout << "The stack s1 is less than "
           << "the stack s2." << endl;

   if ( s1>= s3 )
      cout << "The stack s1 is greater than or equal to "
           << "the stack s3." << endl;
   else
      cout << "The stack s1 is less than "
           << "the stack s3." << endl;

   // to print out the stack s1 ( by unstacking the elements):
   stack <int>::size_type i_size_s1 = s1.size( );
   cout << "The stack s1 from the top down is: ( ";
   unsigned int i;
   for ( i = 1 ; i <= i_size_s1 ; i++ )
   {
      cout << s1.top( ) << " ";
      s1.pop( );
   }
   cout << ")." << endl;
}
```

```Output
The stack s1 is less than the stack s2.
The stack s1 is greater than or equal to the stack s3.
The stack s1 from the top down is: ( 8 6 4 2 ).
```

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the stack object on the left side of the operator is less than or equal to the stack object on the right side.

```cpp
bool operator<=(const stack <Type, Container>& left, const stack <Type, Container>& right);
```

### Parameters

*left*\
An object of type `stack`.

*right*\
An object of type `stack`.

### Return Value

**`true`** if the stack on the left side of the operator is less than or equal to the stack on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between stack objects is based on a pairwise comparison of their elements. The less than or equal to relationship between two stack objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// stack_op_le.cpp
// compile with: /EHsc
#include <stack>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares stacks with default deque base container
   stack <int> s1, s2, s3;

   s1.push( 5 );
   s1.push( 10 );
   s2.push( 1 );
   s2.push( 2 );
   s3.push( 5 );
   s3.push( 10 );

   if ( s1 <= s2 )
      cout << "The stack s1 is less than or equal to "
           << "the stack s2." << endl;
   else
      cout << "The stack s1 is greater than "
           << "the stack s2." << endl;

   if ( s1 <= s3 )
      cout << "The stack s1 is less than or equal to "
           << "the stack s3." << endl;
   else
      cout << "The stack s1 is greater than "
           << "the stack s3." << endl;
}
```

```Output
The stack s1 is greater than the stack s2.
The stack s1 is less than or equal to the stack s3.
```

## <a name="op_eq_eq"></a> operator==

Tests if the stack object on the left side of the operator is equal to stack object on the right side.

```cpp
bool operator==(const stack <Type, Container>& left, const stack <Type, Container>& right);
```

### Parameters

*left*\
An object of type `stack`.

*right*\
An object of type `stack`.

### Return Value

**`true`** if the stacks or stacks are equal; **`false`** if stacks or stacks are not equal.

### Remarks

The comparison between stack objects is based on a pairwise comparison of their elements. Two stacks are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// stack_op_eq.cpp
// compile with: /EHsc
#include <stack>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares stacks with vector base containers
   stack <int, vector<int> > s1, s2, s3;

   // The following would have cause an error because stacks with
   // different base containers are not equality comparable
   // stack <int, list<int> > s3;

   s1.push( 1 );
   s2.push( 2 );
   s3.push( 1 );

   if ( s1 == s2 )
      cout << "The stacks s1 and s2 are equal." << endl;
   else
      cout << "The stacks s1 and s2 are not equal." << endl;

   if ( s1 == s3 )
      cout << "The stacks s1 and s3 are equal." << endl;
   else
      cout << "The stacks s1 and s3 are not equal." << endl;
}
```

```Output
The stacks s1 and s2 are not equal.
The stacks s1 and s3 are equal.
```

## <a name="op_gt"></a> operator&gt;

Tests if the stack object on the left side of the operator is greater than the stack object on the right side.

```cpp
bool operator>(const stack <Type, Container>& left, const stack <Type, Container>& right);
```

### Parameters

*left*\
An object of type `stack`.

*right*\
An object of type `stack`.

### Return Value

**`true`** if the stack on the left side of the operator is greater than and not equal to the stack on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between stack objects is based on a pairwise comparison of their elements. The greater-than relationship between two stack objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// stack_op_gt.cpp
// compile with: /EHsc
#include <stack>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares stacks with list base container
   stack <int, list<int> > s1, s2, s3;

   s1.push( 1 );
   s1.push( 2 );
   s1.push( 3 );
   s2.push( 5 );
   s2.push( 10 );
   s3.push( 1 );
   s3.push( 2 );

   if ( s1 > s2 )
      cout << "The stack s1 is greater than "
           << "the stack s2." << endl;
   else
      cout << "The stack s1 is not greater than "
           << "the stack s2." << endl;

   if ( s1> s3 )
      cout << "The stack s1 is greater than "
           << "the stack s3." << endl;
   else
      cout << "The stack s1 is not greater than "
           << "the stack s3." << endl;
}
```

```Output
The stack s1 is not greater than the stack s2.
The stack s1 is greater than the stack s3.
```

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the stack object on the left side of the operator is greater than or equal to the stack object on the right side.

```cpp
bool operator>=(const stack <Type, Container>& left, const stack <Type, Container>& right);
```

### Parameters

*left*\
An object of type `stack`.

*right*\
An object of type `stack`.

### Return Value

**`true`** if the stack on the left side of the operator is strictly less than the stack on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between stack objects is based on a pairwise comparison of their elements. The greater than or equal to relationship between two stack objects is based on a comparison of the first pair of unequal elements.

### Example

```cpp
// stack_op_ge.cpp
// compile with: /EHsc
#include <stack>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   // Declares stacks with list base container
   stack <int, list<int> > s1, s2, s3;

   s1.push( 1 );
   s1.push( 2 );
   s2.push( 5 );
   s2.push( 10 );
   s3.push( 1 );
   s3.push( 2 );

   if ( s1 >= s2 )
      cout << "The stack s1 is greater than or equal to "
           << "the stack s2." << endl;
   else
      cout << "The stack s1 is less than "
           << "the stack s2." << endl;

   if ( s1>= s3 )
      cout << "The stack s1 is greater than or equal to "
           << "the stack s3." << endl;
   else
      cout << "The stack s1 is less than "
           << "the stack s3." << endl;
}
```

```Output
The stack s1 is less than the stack s2.
The stack s1 is greater than or equal to the stack s3.
```
