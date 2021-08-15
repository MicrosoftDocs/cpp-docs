---
description: "Learn more about: &lt;hash_map&gt; operators"
title: "&lt;hash_map&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["hash_map/std::operator!=", "hash_map/std::operator=="]
ms.assetid: 24b9bb9e-e983-4060-bce5-2c7c8161ee61
---
# &lt;hash_map&gt; operators

[operator!=](#op_neq)\
[operator!= (multimap)](#op_neq_mm)\
[operator==](#op_eq_eq)\
[operator== (multimap)](#op_eq_eq_mm)

## <a name="op_neq"></a> operator!=

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](unordered-map-class.md).

Tests if the hash_map object on the left side of the operator is not equal to the hash_map object on the right side.

```cpp
bool operator!=(const hash_map <Key, Type, Traits, Allocator>& left, const hash_map <Key, Type, Traits, Allocator>& right);
```

### Parameters

*left*\
An object of type `hash_map`.

*right*\
An object of type `hash_map`.

### Return Value

**`true`** if the hash_maps are not equal; **`false`** if hash_maps are equal.

### Remarks

The comparison between hash_map objects is based on a pairwise comparison of their elements. Two hash_maps are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

Members of the [<hash_map>](hash-map.md) and [<hash_set>](hash-set.md) header files in the [stdext Namespace](stdext-namespace.md).

### Example

```cpp
// hash_map_op_ne.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1, hm2, hm3;
   int i;
   typedef pair <int, int> Int_Pair;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hm1.insert ( Int_Pair ( i, i ) );
      hm2.insert ( Int_Pair ( i, i * i ) );
      hm3.insert ( Int_Pair ( i, i ) );
   }

   if ( hm1 != hm2 )
      cout << "The hash_maps hm1 and hm2 are not equal." << endl;
   else
      cout << "The hash_maps hm1 and hm2 are equal." << endl;

   if ( hm1 != hm3 )
      cout << "The hash_maps hm1 and hm3 are not equal." << endl;
   else
      cout << "The hash_maps hm1 and hm3 are equal." << endl;
}
```

```Output
The hash_maps hm1 and hm2 are not equal.
The hash_maps hm1 and hm3 are equal.
```

## <a name="op_eq_eq"></a> operator==

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](unordered-map-class.md).

Tests if the hash_map object on the left side of the operator is equal to the hash_map object on the right side.

```cpp
bool operator==(const hash_map <Key, Type, Traits, Allocator>& left, const hash_map <Key, Type, Traits, Allocator>& right);
```

### Parameters

*left*\
An object of type `hash_map`.

*right*\
An object of type `hash_map`.

### Return Value

**`true`** if the hash_map on the left side of the operator is equal to the hash_map on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between hash_map objects is based on a pairwise comparison of their elements. Two hash_maps are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// hash_map_op_eq.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1, hm2, hm3;
   int i;
   typedef pair <int, int> Int_Pair;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hm1.insert ( Int_Pair ( i, i ) );
      hm2.insert ( Int_Pair ( i, i * i ) );
      hm3.insert ( Int_Pair ( i, i ) );
   }

   if ( hm1 == hm2 )
      cout << "The hash_maps hm1 and hm2 are equal." << endl;
   else
      cout << "The hash_maps hm1 and hm2 are not equal." << endl;

   if ( hm1 == hm3 )
      cout << "The hash_maps hm1 and hm3 are equal." << endl;
   else
      cout << "The hash_maps hm1 and hm3 are not equal." << endl;
}
```

```Output
The hash_maps hm1 and hm2 are not equal.
The hash_maps hm1 and hm3 are equal.
```

## <a name="op_neq_mm"></a> operator!= (hash_multimap)

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multimap Class](unordered-multimap-class.md).

Tests if the hash_multimap object on the left side of the operator is not equal to the hash_multimap object on the right side.

```cpp
bool operator!=(const hash_multimap <Key, Type, Traits, Allocator>& left, const hash_multimap <Key, Type, Traits, Allocator>& right);
```

### Parameters

*left*\
An object of type `hash_multimap`.

*right*\
An object of type `hash_multimap`.

### Return Value

**`true`** if the hash_multimaps are not equal; **`false`** if hash_multimaps are equal.

### Remarks

The comparison between hash_multimap objects is based on a pairwise comparison of their elements. Two hash_multimaps are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// hash_multimap_op_ne.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1, hm2, hm3;
   int i;
   typedef pair <int, int> Int_Pair;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hm1.insert ( Int_Pair ( i, i ) );
      hm2.insert ( Int_Pair ( i, i * i ) );
      hm3.insert ( Int_Pair ( i, i ) );
   }

   if ( hm1 != hm2 )
      cout << "The hash_multimaps hm1 and hm2 are not equal." << endl;
   else
      cout << "The hash_multimaps hm1 and hm2 are equal." << endl;

   if ( hm1 != hm3 )
      cout << "The hash_multimaps hm1 and hm3 are not equal." << endl;
   else
      cout << "The hash_multimaps hm1 and hm3 are equal." << endl;
}
```

```Output
The hash_multimaps hm1 and hm2 are not equal.
The hash_multimaps hm1 and hm3 are equal.
```

## <a name="op_eq_eq_mm"></a> operator==  (hash_multimap)

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multimap Class](unordered-multimap-class.md).

Tests if the hash_multimap object on the left side of the operator is equal to the hash_multimap object on the right side.

```cpp
bool operator==(const hash_multimap <Key, Type, Traits, Allocator>& left, const hash_multimap <Key, Type, Traits, Allocator>& right);
```

### Parameters

*left*\
An object of type `hash_multimap`.

*right*\
An object of type `hash_multimap`.

### Return Value

**`true`** if the hash_multimap on the left side of the operator is equal to the hash_multimap on the right side of the operator; otherwise **`false`**.

### Remarks

The comparison between hash_multimap objects is based on a pairwise comparison of their elements. Two hash_multimaps are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.

### Example

```cpp
// hash_multimap_op_eq.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap<int, int> hm1, hm2, hm3;
   int i;
   typedef pair<int, int> Int_Pair;

   for (i = 0; i < 3; i++)
   {
      hm1.insert(Int_Pair(i, i));
      hm2.insert(Int_Pair(i, i*i));
      hm3.insert(Int_Pair(i, i));
   }

   if ( hm1 == hm2 )
      cout << "The hash_multimaps hm1 and hm2 are equal." << endl;
   else
      cout << "The hash_multimaps hm1 and hm2 are not equal." << endl;

   if ( hm1 == hm3 )
      cout << "The hash_multimaps hm1 and hm3 are equal." << endl;
   else
      cout << "The hash_multimaps hm1 and hm3 are not equal." << endl;
}
```

```Output
The hash_multimaps hm1 and hm2 are not equal.
The hash_multimaps hm1 and hm3 are equal.
```

## See also

[<hash_map>](hash-map.md)
