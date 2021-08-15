---
description: "Learn more about: &lt;hash_set&gt; operators"
title: "&lt;hash_set&gt; operators"
ms.date: "03/27/2019"
f1_keywords: ["hash_set/std::operator!=", "hash_set/std::operator=="]
ms.assetid: 403d8e4e-0b3f-43fb-bc5a-8100c4f331c5
---
# &lt;hash_set&gt; operators

[operator!=](#op_neq)\
[operator!= (hash_multiset)](#op_neq_hash_multiset)\
[operator==](#op_eq_eq)\
[operator== (hash_multiset)](#op_eq_eq_hash_multiset)

## <a name="op_neq"></a> operator!=

> [!NOTE]
> This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).

Tests if the hash_set object on the left side of the operator is not equal to the hash_set object on the right side.

```cpp
bool operator!=(const hash_set <Key, Traits, Allocator>& left, const hash_set <Key, Traits, Allocator>& right);
```

### Parameters

*left*\
An object of type `hash_set`.

*right*\
An object of type `hash_set`.

### Return Value

**`true`** if the hash_sets are not equal; **`false`** if hash_sets are equal.

### Remarks

The comparison between hash_set objects is based on a pairwise comparison between their elements. Two hash_sets are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

Members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are in the [stdext Namespace](../standard-library/stdext-namespace.md).

### Example

```cpp
// hash_set_op_ne.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1, hs2, hs3;
   int i;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hs1.insert ( i );
      hs2.insert ( i * i );
      hs3.insert ( i );
   }

   if ( hs1 != hs2 )
      cout << "The hash_sets hs1 and hs2 are not equal." << endl;
   else
      cout << "The hash_sets hs1 and hs2 are equal." << endl;

   if ( hs1 != hs3 )
      cout << "The hash_sets hs1 and hs3 are not equal." << endl;
   else
      cout << "The hash_sets hs1 and hs3 are equal." << endl;
}
```

```Output
The hash_sets hs1 and hs2 are not equal.
The hash_sets hs1 and hs3 are equal.
```

## <a name="op_eq_eq"></a> operator==

> [!NOTE]
> This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).

Tests if the hash_set object on the left side of the operator is equal to the hash_set object on the right side.

```cpp
bool operator!==(const hash_set <Key, Traits, Allocator>& left, const hash_set <Key, Traits, Allocator>& right);
```

### Parameters

*left*\
An object of type `hash_set`.

*right*\
An object of type `hash_set`.

### Return Value

**`true`** if the hash_set on the left side of the operator is equal to the hash_set on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between hash_set objects is based on a pairwise comparison of their elements. Two hash_sets are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// hash_set_op_eq.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> s1, s2, s3;
   int i;

   for ( i = 0 ; i < 3 ; i++ )
   {
      s1.insert ( i );
      s2.insert ( i * i );
      s3.insert ( i );
   }

   if ( s1 == s2 )
      cout << "The hash_sets s1 and s2 are equal." << endl;
   else
      cout << "The hash_sets s1 and s2 are not equal." << endl;

   if ( s1 == s3 )
      cout << "The hash_sets s1 and s3 are equal." << endl;
   else
      cout << "The hash_sets s1 and s3 are not equal." << endl;
}
```

```Output
The hash_sets s1 and s2 are not equal.
The hash_sets s1 and s3 are equal.
```

## <a name="op_neq_hash_multiset"></a> operator!= (hash_multiset)

> [!NOTE]
> This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).

Tests if the hash_multiset object on the left side of the operator is not equal to the hash_multiset object on the right side.

```cpp
bool operator!=(const hash_multiset <Key, Traits, Allocator>& left, const hash_multiset <Key, Traits, Allocator>& right);
```

### Parameters

*left*\
An object of type `hash_multiset`.

*right*\
An object of type `hash_multiset`.

### Return Value

**`true`** if the hash_multisets are not equal; **`false`** if hash_multisets are equal.

### Remarks

The comparison between hash_multiset objects is based on a pairwise comparison between their elements. Two hash_multisets are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// hashset_op_ne.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1, hs2, hs3;
   int i;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hs1.insert ( i );
      hs2.insert ( i * i );
      hs3.insert ( i );
   }

   if ( hs1 != hs2 )
      cout << "The hash_multisets hs1 and hs2 are not equal." << endl;
   else
      cout << "The hash_multisets hs1 and hs2 are equal." << endl;

   if ( hs1 != hs3 )
      cout << "The hash_multisets hs1 and hs3 are not equal." << endl;
   else
      cout << "The hash_multisets hs1 and hs3 are equal." << endl;
}
```

```Output
The hash_multisets hs1 and hs2 are not equal.
The hash_multisets hs1 and hs3 are equal.
```

## <a name="op_eq_eq_hash_multiset"></a> operator== (hash_multiset)

> [!NOTE]
> This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).

Tests if the hash_multiset object on the left side of the operator is equal to the hash_multiset object on the right side.

```cpp
bool operator!==(const hash_multiset <Key, Traits, Allocator>& left, const hash_multiset <Key, Traits, Allocator>& right);
```

### Parameters

*left*\
An object of type `hash_multiset`.

*right*\
An object of type `hash_multiset`.

### Return Value

**`true`** if the hash_multiset on the left side of the operator is equal to the hash_multiset on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between hash_multiset objects is based on a pairwise comparison of their elements. Two hash_multisets are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// hash_multiset_op_eq.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> s1, s2, s3;
   int i;

   for ( i = 0 ; i < 3 ; i++ )
   {
      s1.insert ( i );
      s2.insert ( i * i );
      s3.insert ( i );
   }

   if ( s1 == s2 )
      cout << "The hash_multisets s1 and s2 are equal." << endl;
   else
      cout << "The hash_multisets s1 and s2 are not equal." << endl;

   if ( s1 == s3 )
      cout << "The hash_multisets s1 and s2 are equal." << endl;
   else
      cout << "The hash_multisets s1 and s2 are not equal." << endl;
}
```

```Output
The hash_multisets s1 and s2 are not equal.
The hash_multisets s1 and s2 are equal.
```

## See also

[<hash_set>](../standard-library/hash-set.md)
