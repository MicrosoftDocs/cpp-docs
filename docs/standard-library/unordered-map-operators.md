---
description: "Learn more about: &lt;unordered_map&gt; operators"
title: "&lt;unordered_map&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["unordered_map/std::operator!=", "unordered_map/std::operator=="]
ms.assetid: 9d5add0b-84bd-4a79-bd82-3f58b55145ed
---
# &lt;unordered_map&gt; operators

[unordered_map::operator!=](#op_neq)\
[unordered_map::operator==](#op_eq_eq)\
[unordered_multimap::operator!=](#op_neq_multimap)\
[unordered_multimap::operator==](#op_eq_eq_multimap)

## <a name="op_neq"></a> operator!=

Tests whether the [unordered_map](../standard-library/unordered-map-class.md) object on the left side of the operator is not equal to the unordered_map object on the right side.

```cpp
bool operator!=(const unordered_map <Key, Type, Hash, Pred, Allocator>& left, const unordered_map <Key, Type, Hash, Pred, Allocator>& right);
```

### Parameters

*left*\
An object of type `unordered_map`.

*right*\
An object of type `unordered_map`.

### Return Value

**`true`** if the unordered_maps are not equal; **`false`** if they are equal.

### Remarks

The comparison between unordered_map objects is not affected by the arbitrary order in which they store their elements. Two unordered_maps are equal if they have the same number of elements and the elements in one container are a permutation of the elements in the other container. Otherwise, they are unequal.

### Example

```cpp
// unordered_map_op_ne.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_map>
#include <iostream>
#include <ios>

int main( )
{
   using namespace std;
   unordered_map<int, int> um1, um2, um3;

   for ( int i = 0 ; i < 3 ; ++i ) {
      um1.insert( make_pair( i+1, i ) );
      um1.insert( make_pair( i, i ) );

      um2.insert( make_pair( i, i+1 ) );
      um2.insert( make_pair( i, i ) );

      um3.insert( make_pair( i, i ) );
      um3.insert( make_pair( i+1, i ) );
   }

   cout << boolalpha;
   cout << "um1 != um2: " << (um1 != um2) << endl;
   cout << "um1 != um3: " << (um1 != um3) << endl;
   cout << "um2 != um3: " << (um2 != um3) << endl;
}

/* Output:
um1 != um2: true
um1 != um3: false
um2 != um3: true
*/
```

## <a name="op_eq_eq"></a> operator==

Tests whether the [unordered_map](../standard-library/unordered-map-class.md) object on the left side of the operator is equal to the unordered_map object on the right side.

```cpp
bool operator==(const unordered_map <Key, Type, Hash, Pred, Allocator>& left, const unordered_map <Key, Type, Hash, Pred, Allocator>& right);
```

### Parameters

*left*\
An object of type `unordered_map`.

*right*\
An object of type `unordered_map`.

### Return Value

**`true`** if the unordered_maps are equal; **`false`** if they are not equal.

### Remarks

The comparison between unordered_map objects is not affected by the arbitrary order in which they store their elements. Two unordered_maps are equal if they have the same number of elements and the elements in one container are a permutation of the elements in the other container. Otherwise, they are unequal.

### Example

```cpp
// unordered_map_op_eq.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_map>
#include <iostream>
#include <ios>

int main( )
{
   using namespace std;
   unordered_map<int, int> um1, um2, um3;

   for ( int i = 0 ; i < 3 ; ++i ) {
      um1.insert( make_pair( i+1, i ) );
      um1.insert( make_pair( i, i ) );

      um2.insert( make_pair( i, i+1 ) );
      um2.insert( make_pair( i, i ) );

      um3.insert( make_pair( i, i ) );
      um3.insert( make_pair( i+1, i ) );
   }

   cout << boolalpha;
   cout << "um1 == um2: " << (um1 == um2) << endl;
   cout << "um1 == um3: " << (um1 == um3) << endl;
   cout << "um2 == um3: " << (um2 == um3) << endl;
}

/* Output:
um1 == um2: false
um1 == um3: true
um2 == um3: false
*/
```

## <a name="op_neq_multimap"></a> operator!= (multimap)

Tests whether the [unordered_multimap](../standard-library/unordered-multimap-class.md) object on the left side of the operator is not equal to the unordered_multimap object on the right side.

```cpp
bool operator!=(const unordered_multimap <Key, Type, Hash, Pred, Allocator>& left, const unordered_multimap <Key, Type, Hash, Pred, Allocator>& right);
```

### Parameters

*left*\
An object of type `unordered_multimap`.

*right*\
An object of type `unordered_multimap`.

### Return Value

**`true`** if the unordered_multimaps are not equal; **`false`** if they are equal.

### Remarks

The comparison between unordered_multimap objects is not affected by the arbitrary order in which they store their elements. Two unordered_multimaps are equal if they have the same number of elements and the elements in one container are a permutation of the elements in the other container. Otherwise, they are not equal.

### Example

```cpp
// unordered_multimap_op_ne.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_map>
#include <iostream>
#include <ios>

int main( )
{
   using namespace std;
   unordered_multimap<int, int> um1, um2, um3;

   for ( int i = 0 ; i < 3 ; ++i ) {
      um1.insert( make_pair( i, i ) );
      um1.insert( make_pair( i, i ) );

      um2.insert( make_pair( i, i ) );
      um2.insert( make_pair( i, i ) );
      um2.insert( make_pair( i, i ) );

      um3.insert( make_pair( i, i ) );
      um3.insert( make_pair( i, i ) );
   }

   cout << boolalpha;
   cout << "um1 != um2: " << (um1 != um2) << endl;
   cout << "um1 != um3: " << (um1 != um3) << endl;
   cout << "um2 != um3: " << (um2 != um3) << endl;
}

/* Output:
um1 != um2: true
um1 != um3: false
um2 != um3: true
*/
```

## <a name="op_eq_eq_multimap"></a> operator== (multimap)

Tests whether the [unordered_multimap](../standard-library/unordered-multimap-class.md) object on the left side of the operator is equal to the unordered_multimap object on the right side.

```cpp
bool operator==(const unordered_multimap <Key, Type, Hash, Pred, Allocator>& left, const unordered_multimap <Key, Type, Hash, Pred, Allocator>& right);
```

### Parameters

*left*\
An object of type `unordered_multimap`.

*right*\
An object of type `unordered_multimap`.

### Return Value

**`true`** if the unordered_multimaps are equal; **`false`** if they are not equal.

### Remarks

The comparison between unordered_multimap objects is not affected by the arbitrary order in which they store their elements. Two unordered_multimaps are equal if they have the same number of elements and the elements in one container are a permutation of the elements in the other container. Otherwise, they are unequal.

### Example

```cpp
// unordered_multimap_op_eq.cpp
// compile by using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_map>
#include <iostream>
#include <ios>

int main( )
{
   using namespace std;
   unordered_multimap<int, int> um1, um2, um3;

   for ( int i = 0 ; i < 3 ; ++i ) {
      um1.insert( make_pair( i, i ) );
      um1.insert( make_pair( i, i ) );

      um2.insert( make_pair( i, i ) );
      um2.insert( make_pair( i, i ) );
      um2.insert( make_pair( i, i ) );

      um3.insert( make_pair( i, i ) );
      um3.insert( make_pair( i, i ) );
   }

   cout << boolalpha;
   cout << "um1 == um2: " << (um1 == um2) << endl;
   cout << "um1 == um3: " << (um1 == um3) << endl;
   cout << "um2 == um3: " << (um2 == um3) << endl;
}

/* Output:
um1 == um2: false
um1 == um3: true
um2 == um3: false
*/
```

## See also

[<unordered_map>](../standard-library/unordered-map.md)
