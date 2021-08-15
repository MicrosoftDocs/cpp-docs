---
description: "Learn more about: reverse_iterator Class"
title: "reverse_iterator Class"
ms.date: "03/27/2019"
f1_keywords: ["xutility/std::reverse_iterator", "iterator/std::reverse_iterator::difference_type", "iterator/std::reverse_iterator::iterator_type", "iterator/std::reverse_iterator::pointer", "iterator/std::reverse_iterator::reference", "iterator/std::reverse_iterator::base", "iterator/std::reverse_iterator::operator_star"]
helpviewer_keywords: ["std::reverse_iterator [C++]", "std::reverse_iterator [C++], difference_type", "std::reverse_iterator [C++], iterator_type", "std::reverse_iterator [C++], pointer", "std::reverse_iterator [C++], reference", "std::reverse_iterator [C++], base", "std::reverse_iterator [C++], operator_star"]
ms.assetid: c0b34d04-ae9a-4999-9aff-28b313897ffa
---
# reverse_iterator Class

The class template is an iterator adaptor that describes a reverse iterator object that behaves like a random-access or bidirectional iterator, only in reverse. It enables the backward traversal of a range.

## Syntax

```cpp
template <class RandomIterator>
class reverse_iterator
```

### Parameters

RandomIterator
The type that represents the iterator to be adapted to operate in reverse.

## Remarks

Existing C++ Standard Library containers also define `reverse_iterator` and `const_reverse_iterator` types and have member functions `rbegin` and `rend` that return reverse iterators. These iterators have overwrite semantics. The `reverse_iterator` adaptor supplements this functionality as it offers insert semantics and can also be used with streams.

The `reverse_iterator` that requires a bidirectional iterator must not call any of the member functions `operator+=`, `operator+`, `operator-=`, `operator-`, or `operator[]`, which may only be used with random-access iterators.

The range of an iterator is [*first*, *last*), where the square bracket on the left indicates the inclusion of *first* and the parenthesis on the right indicates the inclusion of elements up to but excluding *last* itself. The same elements are included in the reversed sequence [ **rev** - *first*, **rev** - *last*) so that if *last* is the one-past-the-end element in a sequence, then the first element **rev** - *first* in the reversed sequence points to \*(*last* - 1). The identity which relates all reverse iterators to their underlying iterators is:

&\*( **reverse_iterator** ( *i* ) ) == &\*( *i* - 1 ).

In practice, this means that in the reversed sequence the reverse_iterator will refer to the element one position beyond (to the right of) the element that the iterator had referred to in the original sequence. So if an iterator addressed the element 6 in the sequence (2, 4, 6, 8), then the `reverse_iterator` will address the element 4 in the reversed sequence (8, 6, 4, 2).

### Constructors

|Constructor|Description|
|-|-|
|[reverse_iterator](#reverse_iterator)|Constructs a default `reverse_iterator` or a `reverse_iterator` from an underlying iterator.|

### Typedefs

|Type name|Description|
|-|-|
|[difference_type](#difference_type)|A type that provides the difference between two `reverse_iterator`s referring to elements within the same container.|
|[iterator_type](#iterator_type)|A type that provides the underlying iterator for a `reverse_iterator`.|
|[pointer](#pointer)|A type that provides a pointer to an element addressed by a `reverse_iterator`.|
|[reference](#reference)|A type that provides a reference to an element addressed by a `reverse_iterator`.|

### Member functions

|Member function|Description|
|-|-|
|[base](#base)|Recovers the underlying iterator from its `reverse_iterator`.|

### Operators

|Operator|Description|
|-|-|
|[operator_star](#op_star)|Returns the element that a `reverse_iterator` addresses.|
|[operator+](#op_add)|Adds an offset to an iterator and returns the new `reverse_iterator` addressing the inserted element at the new offset position.|
|[operator++](#op_add_add)|Increments the `reverse_iterator` to the next element.|
|[operator+=](#op_add_eq)|Adds a specified offset from a `reverse_iterator`.|
|[operator-](#operator-)|Subtracts an offset from a `reverse_iterator` and returns a `reverse_iterator` addressing the element at the offset position.|
|[operator--](#operator--)|Decrements the `reverse_iterator` to the previous element.|
|[operator-=](#operator-_eq)|Subtracts a specified offset from a `reverse_iterator`.|
|[operator->](#op-arrow)|Returns a pointer to the element addressed by the `reverse_iterator`.|
|[operator&#91;&#93;](#op_at)|Returns a reference to an element offset from the element addressed by a `reverse_iterator` by a specified number of positions.|

## Requirements

**Header:** \<iterator>

**Namespace:** std

## <a name="base"></a> reverse_iterator::base

Recovers the underlying iterator from its `reverse_iterator`.

```cpp
RandomIterator base() const;
```

### Return Value

The iterator underlying the `reverse_iterator`.

### Remarks

The identity that relates all reverse iterators to their underlying iterators is:

&\*( `reverse_iterator` ( *i* ) ) == &\*( *i* - 1 ).

In practice, this means that in the reversed sequence the `reverse_iterator` will refer to the element one position beyond (to the right of) the element that the iterator had referred to in the original sequence. So if an iterator addressed the element 6 in the sequence (2, 4, 6, 8), then the `reverse_iterator` will address the element 4 in the reversed sequence (8, 6, 4, 2).

### Example

```cpp
// reverse_iterator_base.cpp
// compile with: /EHsc
#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for ( i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 2 * i );
   }

   vector <int>::iterator vIter;
   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   vector <int>::iterator pos, bpos;
   pos = find ( vec.begin ( ), vec.end ( ), 6 );
   cout << "The iterator pos points to: " << *pos << "." << endl;

   typedef reverse_iterator<vector<int>::iterator>::iterator_type it_vec_int_type;

   reverse_iterator<it_vec_int_type> rpos ( pos );
   cout << "The reverse_iterator rpos points to: " << *rpos
        << "." << endl;

   bpos = rpos.base ( );
   cout << "The iterator underlying rpos is bpos & it points to: "
        << *bpos << "." << endl;
}
```

## <a name="difference_type"></a> reverse_iterator::difference_type

A type that provides the difference between two `reverse_iterator`s referring to elements within the same container.

```cpp
typedef typename iterator_traits<RandomIterator>::difference_type  difference_type;
```

### Remarks

The `reverse_iterator` difference type is the same as the iterator difference type.

The type is a synonym for the iterator trait typename `iterator_traits`\< **RandomIterator**> **::pointer**.

### Example

See [reverse_iterator::operator&#91;&#93;](#op_at) for an example of how to declare and use `difference_type`.

## <a name="iterator_type"></a> reverse_iterator::iterator_type

A type that provides the underlying iterator for a `reverse_iterator`.

```cpp
typedef RandomIterator iterator_type;
```

### Remarks

The type is a synonym for the template parameter `Iterator`.

### Example

See [reverse_iterator::base](#base) for an example of how to declare and use `iterator_type`.

## <a name="op_star"></a> reverse_iterator::operator\*

Returns the element that a reverse_iterator addresses.

```cpp
reference operator*() const;
```

### Return Value

The value of the elements addressed by the reverse_iterator.

### Remarks

The operator returns \*( **current** - 1).

### Example

```cpp
// reverse_iterator_op_ref.cpp
// compile with: /EHsc
#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for (i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 2 * i );
   }

   vector <int>::iterator vIter;
   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   vector <int>::iterator pos, bpos;
   pos = find ( vec.begin ( ), vec.end ( ), 6 );

   // Declare a difference type for a parameter
   // declare a reference return type
   reverse_iterator<vector<int>::iterator>::reference refpos = *pos;
   cout << "The iterator pos points to: " << refpos << "." << endl;
}
```

## <a name="op_add"></a> reverse_iterator::operator+

Adds an offset to an iterator and returns the new `reverse_iterator` addressing the inserted element at the new offset position.

```cpp
reverse_iterator<RandomIterator> operator+(difference_type Off) const;
```

### Parameters

*Off*\
The offset to be added to the reverse iterator.

### Return Value

A `reverse_iterator` addressing the offset element.

### Remarks

This member function may only be used if the `reverse_iterator` satisfies the requirements for a random-access iterator.

### Example

```cpp
// reverse_iterator_op_add.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for (i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 2 * i );
   }

   vector <int>::iterator vIter;
   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   // Initializing reverse_iterators to the first element
   vector <int>::reverse_iterator rVPOS1 = vec.rbegin ( );

   cout << "The iterator rVPOS1 initially points to the first "
        << "element\n in the reversed sequence: "
        << *rVPOS1 << "." << endl;

   vector <int>::reverse_iterator rVPOS2 =rVPOS1 + 2; // offset added
   cout << "After the +2 offset, the iterator rVPOS2 points\n"
        << " to the 3rd element in the reversed sequence: "
        << *rVPOS2 << "." << endl;
}
```

```Output
The vector vec is: ( 2 4 6 8 10 ).
The vector vec reversed is: ( 10 8 6 4 2 ).
The iterator rVPOS1 initially points to the first element
in the reversed sequence: 10.
After the +2 offset, the iterator rVPOS2 points
to the 3rd element in the reversed sequence: 6.
```

## <a name="op_add_add"></a> reverse_iterator::operator++

Increments the reverse_iterator to the previous element.

```cpp
reverse_iterator<RandomIterator>& operator++();
reverse_iterator<RandomIterator> operator++(int);
```

### Return Value

The first operator returns the preincremented `reverse_iterator` and the second, the postincrement operator, returns a copy of the incremented `reverse_iterator`.

### Remarks

This member function may only be used if the `reverse_iterator` satisfies the requirements for a bidirectional iterator.

### Example

```cpp
// reverse_iterator_op_incr.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for ( i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 2 * i - 1 );
   }

   vector <int>::iterator vIter;
   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   // Initializing reverse_iterators to the last element
   vector <int>::reverse_iterator rVPOS1 = vec.rbegin( );

   cout << "The iterator rVPOS1 initially points to the first "
        << "element\n in the reversed sequence: "
        << *rVPOS1 << "." << endl;

   rVPOS1++;  // postincrement, preincrement: ++rVPSO1

   cout << "After incrementing, the iterator rVPOS1 points\n"
        << " to the second element in the reversed sequence: "
        << *rVPOS1 << "." << endl;
}
```

```Output
The vector vec is: ( 1 3 5 7 9 ).
The vector vec reversed is: ( 9 7 5 3 1 ).
The iterator rVPOS1 initially points to the first element
in the reversed sequence: 9.
After incrementing, the iterator rVPOS1 points
to the second element in the reversed sequence: 7.
```

## <a name="op_add_eq"></a> reverse_iterator::operator+=

Adds a specified offset from a reverse_iterator.

```cpp
reverse_iterator<RandomIterator>& operator+=(difference_type Off);
```

### Parameters

*Off*\
The offset by which to increment the iterator.

### Return Value

A reference to the element addressed by the `reverse_iterator`.

### Example

```cpp
// reverse_iterator_op_addoff.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for (i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 2 * i );
   }

   vector <int>::iterator vIter;

   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   // Initializing reverse_iterators to the last element
   vector <int>::reverse_iterator rVPOS1 = vec.rbegin ( );

   cout << "The iterator rVPOS1 initially points to the first "
        << "element\n in the reversed sequence: "
        << *rVPOS1 << "." << endl;

   rVPOS1+=2;   // addition of an offset
   cout << "After the +2 offset, the iterator rVPOS1 now points\n"
        << " to the third element in the reversed sequence: "
        << *rVPOS1 << "." << endl;
}
```

```Output
The vector vec is: ( 2 4 6 8 10 ).
The vector vec reversed is: ( 10 8 6 4 2 ).
The iterator rVPOS1 initially points to the first element
in the reversed sequence: 10.
After the +2 offset, the iterator rVPOS1 now points
to the third element in the reversed sequence: 6.
```

## <a name="operator-"></a> reverse_iterator::operator-

Subtracts an offset from a `reverse_iterator` and returns a `reverse_iterator` addressing the element at the offset position.

```cpp
reverse_iterator<RandomIterator> operator-(difference_type Off) const;
```

### Parameters

*Off*\
The offset to be subtracted from the reverse_iterator.

### Return Value

A `reverse_iterator` addressing the offset element.

### Remarks

This member function may only be used if the `reverse_iterator` satisfies the requirements for a random-access iterator.

### Example

```cpp
// reverse_iterator_op_sub.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for ( i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 3 * i );
   }

   vector <int>::iterator vIter;

   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   // Initializing reverse_iterators to the first element
   vector <int>::reverse_iterator rVPOS1 = vec.rend ( ) - 1;

   cout << "The iterator rVPOS1 initially points to the last "
        << "element\n in the reversed sequence: "
        << *rVPOS1 << "." << endl;

   vector <int>::reverse_iterator rVPOS2 =rVPOS1 - 2; // offset subtracted
   cout << "After the -2 offset, the iterator rVPOS2 points\n"
        << " to the 2nd element from the last in the reversed sequence: "
        << *rVPOS2 << "." << endl;
}
```

```Output
The vector vec is: ( 3 6 9 12 15 ).
The vector vec reversed is: ( 15 12 9 6 3 ).
The iterator rVPOS1 initially points to the last element
in the reversed sequence: 3.
After the -2 offset, the iterator rVPOS2 points
to the 2nd element from the last in the reversed sequence: 9.
```

## <a name="operator--"></a> reverse_iterator::operator--

Decrements the reverse_iterator to the previous element.

```cpp
reverse_iterator<RandomIterator>& operator--();
reverse_iterator<RandomIterator> operator--(int);
```

### Return Value

The first operator returns the predecremented `reverse_iterator` and the second, the postdecrement operator, returns a copy of the decremented `reverse_iterator`.

### Remarks

This member function may only be used if the `reverse_iterator` satisfies the requirements for a bidirectional iterator.

### Example

```cpp
// reverse_iterator_op_decr.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for (i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 2 * i - 1 );
   }

   vector <int>::iterator vIter;

   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   // Initializing reverse_iterators to the first element
   vector <int>::reverse_iterator rVPOS1 = vec.rend ( ) - 1;

   cout << "The iterator rVPOS1 initially points to the last "
        << "element\n in the reversed sequence: "
        << *rVPOS1 << "." << endl;
   rVPOS1--;  // postdecrement, predecrement: --rVPSO1

   cout << "After the decrement, the iterator rVPOS1 points\n"
        << " to the next-to-last element in the reversed sequence: "
        << *rVPOS1 << "." << endl;
}
```

```Output
The vector vec is: ( 1 3 5 7 9 ).
The vector vec reversed is: ( 9 7 5 3 1 ).
The iterator rVPOS1 initially points to the last element
in the reversed sequence: 1.
After the decrement, the iterator rVPOS1 points
to the next-to-last element in the reversed sequence: 3.
```

## <a name="operator-_eq"></a> reverse_iterator::operator-=

Subtracts a specified offset from a `reverse_iterator`.

```cpp
reverse_iterator<RandomIterator>& operator-=(difference_type Off);
```

### Parameters

*Off*\
The offset to be subtracted from the `reverse_iterator`.

### Remarks

This member function may only be used if the `reverse_iterator` satisfies the requirements for a random-access iterator.

The operator evaluates **current** + *Off* then returns **\*this**.

### Example

```cpp
// reverse_iterator_op_suboff.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for (i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 3 * i );
   }

   vector <int>::iterator vIter;

   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin( ) ; vIter != vec.end( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   // Initializing reverse_iterators to the first element
   vector <int>::reverse_iterator rVPOS1 = vec.rend ( ) - 1;

   cout << "The iterator rVPOS1 initially points to the last "
        << "element\n in the reversed sequence: "
        << *rVPOS1 << "." << endl;

   rVPOS1-=2;      // Subtraction of an offset
   cout << "After the -2 offset, the iterator rVPOS1 now points\n"
        << " to the 2nd element from the last in the reversed sequence: "
        << *rVPOS1 << "." << endl;
}
```

```Output
The vector vec is: ( 3 6 9 12 15 ).
The vector vec reversed is: ( 15 12 9 6 3 ).
The iterator rVPOS1 initially points to the last element
in the reversed sequence: 3.
After the -2 offset, the iterator rVPOS1 now points
to the 2nd element from the last in the reversed sequence: 9.
```

## <a name="op-arrow"></a> reverse_iterator::operator-&gt;

Returns a pointer to the element addressed by the `reverse_iterator`.

```cpp
pointer operator->() const;
```

### Return Value

A pointer to the element addressed by the `reverse_iterator`.

### Remarks

The operator returns **&\*\*this**.

### Example

```cpp
// reverse_iterator_ptrto.cpp
// compile with: /EHsc
#include <iterator>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>

int main( )
{
   using namespace std;

   typedef vector<pair<int,int> > pVector;
   pVector vec;
   vec.push_back(pVector::value_type(1,2));
   vec.push_back(pVector::value_type(3,4));
   vec.push_back(pVector::value_type(5,6));

   pVector::iterator pvIter;
   cout << "The vector vec of integer pairs is:\n( ";
   for ( pvIter = vec.begin ( ) ; pvIter != vec.end ( ); pvIter++)
      cout << "( " << pvIter -> first << ", " << pvIter -> second << ") ";
   cout << ")" << endl << endl;

   pVector::reverse_iterator rpvIter;
   cout << "The vector vec reversed is:\n( ";
   for ( rpvIter = vec.rbegin( ) ; rpvIter != vec.rend( ); rpvIter++ )
      cout << "( " << rpvIter -> first << ", " << rpvIter -> second << ") ";
   cout << ")" << endl << endl;

   pVector::iterator pos = vec.begin ( );
   pos++;
   cout << "The iterator pos points to:\n( " << pos -> first << ", "
   << pos -> second << " )" << endl << endl;

   pVector::reverse_iterator rpos (pos);

   // Use operator -> with return type: why type int and not int*
   int fint = rpos -> first;
   int sint = rpos -> second;

   cout << "The reverse_iterator rpos points to:\n( " << fint << ", "
   << sint << " )" << endl;
}
```

```Output
The vector vec of integer pairs is:
( ( 1, 2) ( 3, 4) ( 5, 6) )

The vector vec reversed is:
( ( 5, 6) ( 3, 4) ( 1, 2) )

The iterator pos points to:
( 3, 4 )

The reverse_iterator rpos points to:
( 1, 2 )
```

## <a name="op_at"></a> reverse_iterator::operator[]

Returns a reference to an element offset from the element addressed by a `reverse_iterator` by a specified number of positions.

```cpp
reference operator[](difference_type Off) const;
```

### Parameters

*Off*\
The offset from the `reverse_iterator` address.

### Return Value

The reference to the element offset.

### Remarks

The operator returns <strong>\*</strong>( **\*this** + `Off`).

### Example

```cpp
// reverse_iterator_ret_ref.cpp
// compile with: /EHsc
#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for (i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( 2 * i );
   }

   vector <int>::iterator vIter;
   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   vector <int>::iterator pos;
   pos = find ( vec.begin ( ), vec.end ( ), 8 );
   reverse_iterator<vector<int>::iterator> rpos ( pos );

   // Declare a difference type for a parameter
   reverse_iterator<vector<int>::iterator>::difference_type diff = 2;

   cout << "The iterator pos points to: " << *pos << "." << endl;
   cout << "The iterator rpos points to: " << *rpos << "." << endl;

   // Declare a reference return type & use operator[]
   reverse_iterator<vector<int>::iterator>::reference refrpos = rpos [diff];
   cout << "The iterator rpos now points to: " << refrpos << "." << endl;
}
```

```Output
The vector vec is: ( 2 4 6 8 10 ).
The vector vec reversed is: ( 10 8 6 4 2 ).
The iterator pos points to: 8.
The iterator rpos points to: 6.
The iterator rpos now points to: 2.
```

## <a name="pointer"></a> reverse_iterator::pointer

A type that provides a pointer to an element addressed by a `reverse_iterator`.

```cpp
typedef typename iterator_traits<RandomIterator>::pointer pointer;
```

### Remarks

The type is a synonym for the iterator trait typename `iterator_traits`\< *RandomIterator*> **::pointer**.

### Example

```cpp
// reverse_iterator_pointer.cpp
// compile with: /EHsc
#include <iterator>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>

int main( )
{
   using namespace std;

   typedef vector<pair<int,int> > pVector;
   pVector vec;
   vec.push_back( pVector::value_type( 1,2 ) );
   vec.push_back( pVector::value_type( 3,4 ) );
   vec.push_back( pVector::value_type( 5,6 ) );

   pVector::iterator pvIter;
   cout << "The vector vec of integer pairs is:\n" << "( ";
   for ( pvIter = vec.begin ( ) ; pvIter != vec.end ( ); pvIter++)
      cout << "( " << pvIter -> first << ", " << pvIter -> second << ") ";
   cout << ")" << endl;

   pVector::reverse_iterator rpvIter;
   cout << "\nThe vector vec reversed is:\n" << "( ";
   for ( rpvIter = vec.rbegin( ) ; rpvIter != vec.rend( ); rpvIter++)
      cout << "( " << rpvIter -> first << ", " << rpvIter -> second << ") ";
   cout << ")" << endl;

   pVector::iterator pos = vec.begin ( );
   pos++;
   cout << "\nThe iterator pos points to:\n"
        << "( " << pos -> first << ", "
        << pos -> second << " )" << endl;

   pVector::reverse_iterator rpos (pos);
   cout << "\nThe iterator rpos points to:\n"
        << "( " << rpos -> first << ", "
        << rpos -> second << " )" << endl;
}
```

```Output
The vector vec of integer pairs is:
( ( 1, 2) ( 3, 4) ( 5, 6) )

The vector vec reversed is:
( ( 5, 6) ( 3, 4) ( 1, 2) )

The iterator pos points to:
( 3, 4 )

The iterator rpos points to:
( 1, 2 )
```

## <a name="reference"></a> reverse_iterator::reference

A type that provides a reference to an element addressed by a reverse_iterator.

```cpp
typedef typename iterator_traits<RandomIterator>::reference reference;
```

### Remarks

The type is a synonym for the iterator trait typename `iterator_traits`\< *RandomIterator*> **::reference**.

### Example

See [reverse_iterator::operator&#91;&#93;](#op_at) or [reverse_iterator::operator*](#op_star) for examples of how to declare and use `reference`.

## <a name="reverse_iterator"></a> reverse_iterator::reverse_iterator

Constructs a default `reverse_iterator` or a `reverse_iterator` from an underlying iterator.

```cpp
reverse_iterator();
explicit reverse_iterator(RandomIterator right);

template <class Type>
reverse_iterator(const reverse_iterator<Type>& right);
```

### Parameters

*right*\
The iterator that is to be adapted to a `reverse_iterator`.

### Return Value

A default `reverse_iterator` or a `reverse_iterator` adapting an underlying iterator.

### Remarks

The identity which relates all reverse iterators to their underlying iterators is:

&\*( `reverse_iterator` ( *i* ) ) == &\*( *i* - 1 ).

In practice, this means that in the reversed sequence the reverse_iterator will refer to the element one position beyond (to the right of) the element that the iterator had referred to in the original sequence. So if an iterator addressed the element 6 in the sequence (2, 4, 6, 8), then the `reverse_iterator` will address the element 4 in the reversed sequence (8, 6, 4, 2).

### Example

```cpp
// reverse_iterator_reverse_iterator.cpp
// compile with: /EHsc
#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for ( i = 1 ; i < 6 ; ++i )
   {
      vec.push_back ( i );
   }

   vector <int>::iterator vIter;
   cout << "The vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout << *vIter << " ";
   cout << ")." << endl;

   vector <int>::reverse_iterator rvIter;
   cout << "The vector vec reversed is: ( ";
   for ( rvIter = vec.rbegin( ) ; rvIter != vec.rend( ); rvIter++)
      cout << *rvIter << " ";
   cout << ")." << endl;

   vector <int>::iterator pos;
   pos = find ( vec.begin ( ), vec.end ( ), 4 );
   cout << "The iterator pos = " << *pos << "." << endl;

   vector <int>::reverse_iterator rpos ( pos );
   cout << "The reverse_iterator rpos = " << *rpos
        << "." << endl;
}
```

## See also

[\<iterator>](../standard-library/iterator.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
