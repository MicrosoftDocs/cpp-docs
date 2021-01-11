---
description: "Learn more about: insert_iterator Class"
title: "insert_iterator Class"
ms.date: "11/04/2016"
f1_keywords: ["iterator/std::insert_iterator", "iterator/std::insert_iterator::container_type", "iterator/std::insert_iterator::reference"]
helpviewer_keywords: ["std::insert_iterator [C++]", "std::insert_iterator [C++], container_type", "std::insert_iterator [C++], reference"]
ms.assetid: d5d86405-872e-4e3b-9e68-c69a2b7e8221
---
# insert_iterator Class

Describes an iterator adaptor that satisfies the requirements of an output iterator. It inserts, rather than overwrites, elements into a sequence and thus provides semantics that are different from the overwrite semantics provided by the iterators of the C++ sequence and associative containers. The `insert_iterator` class is templatized on the type of container being adapted.

## Syntax

```cpp
template <class Container>
class insert_iterator;
```

### Parameters

*Container*\
The type of container into which elements are to be inserted by an `insert_iterator`.

## Remarks

The container of type `Container` must satisfy the requirements for a variable-sized container and have a two-argument insert member function where the parameters are of type `Container::iterator` and `Container::value_type` and that returns a type `Container::iterator`. C++ Standard Library sequence and sorted associative containers satisfy these requirements and can be adapted to use with `insert_iterator`s. For associative containers, the position argument is treated as a hint, which has the potential to improve or degrade performance depending on how good the hint is. An `insert_iterator` must always be initialized with its container.

### Constructors

|Constructor|Description|
|-|-|
|[insert_iterator](#insert_iterator)|Constructs an `insert_iterator` that inserts an element into a specified position in a container.|

### Typedefs

|Type name|Description|
|-|-|
|[container_type](#container_type)|A type that represents the container into which a general insertion is to be made.|
|[reference](#reference)|A type that provides a reference to an element in a sequence controlled by the associated container.|

### Operators

|Operator|Description|
|-|-|
|[operator*](#op_star)|Dereferencing operator used to implement the output iterator expression * `i` = `x` for a general insertion.|
|[operator++](#op_add_add)|Increments the `insert_iterator` to the next location into which a value may be stored.|
|[operator=](#op_eq)|Assignment operator used to implement the output iterator expression * `i` = `x` for a general insertion.|

## Requirements

**Header**: \<iterator>

**Namespace:** std

## <a name="container_type"></a> insert_iterator::container_type

A type that represents the container into which a general insertion is to be made.

```cpp
typedef Container container_type;
```

### Remarks

The type is a synonym for the template parameter *Container*.

### Example

```cpp
// insert_iterator_container_type.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   list<int> L1;
   insert_iterator<list<int> >::container_type L2 = L1;
   inserter ( L2, L2.end ( ) ) = 20;
   inserter ( L2, L2.end ( ) ) = 10;
   inserter ( L2, L2.begin ( ) ) = 40;

   list <int>::iterator vIter;
   cout << "The list L2 is: ( ";
   for ( vIter = L2.begin ( ) ; vIter != L2.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
/* Output:
The list L2 is: ( 40 20 10 ).
*/
```

## <a name="insert_iterator"></a> insert_iterator::insert_iterator

Constructs an `insert_iterator` that inserts an element into a specified position in a container.

```cpp
insert_iterator(Container& _Cont, typename Container::iterator _It);
```

### Parameters

*_Cont*\
The container into which the `insert_iterator` is to insert elements.

*_It*\
The position for the insertion.

### Remarks

All containers have the insert member function called by the `insert_iterator`. For associative containers the position parameter is merely a suggestion. The inserter function provides a convenient way to insert to values.

### Example

```cpp
// insert_iterator_insert_iterator.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   list <int>::iterator L_Iter;

   list<int> L;
   for (i = 1 ; i < 4 ; ++i )
   {
      L.push_back ( 10 * i );
   }

   cout << "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout << *L_Iter << " ";
   cout << ")." << endl;

   // Using the member function to insert an element
   inserter ( L, L.begin ( ) ) = 2;

   // Alternatively, you may use the template version
   insert_iterator< list < int> > Iter(L, L.end ( ) );
*Iter = 300;

   cout << "After the insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
/* Output:
The list L is:
( 10 20 30 ).
After the insertions, the list L is:
( 2 10 20 30 300 ).
*/
```

## <a name="op_star"></a> insert_iterator::operator*

Dereferences the insert iterator returning the element is addresses.

```cpp
insert_iterator<Container>& operator*();
```

### Return Value

The member function returns the value of the element addressed.

### Remarks

Used to implement the output iterator expression **\*Iter** = **value**. If `Iter` is an iterator that addresses an element in a sequence, then **\*Iter** = **value** replaces that element with value and does not change the total number of elements in the sequence.

### Example

```cpp
// insert_iterator_op_deref.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   list <int>::iterator L_Iter;

   list<int> L;
   for (i = 0 ; i < 4 ; ++i )
   {
      L.push_back ( 2 * i );
   }

   cout << "The original list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;

   insert_iterator< list < int> > Iter(L, L.begin ( ) );
*Iter = 10;
*Iter = 20;
*Iter = 30;

   cout << "After the insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
/* Output:
The original list L is:
( 0 2 4 6 ).
After the insertions, the list L is:
( 10 20 30 0 2 4 6 ).
*/
```

## <a name="op_add_add"></a> insert_iterator::operator++

Increments the `insert_iterator` to the next location into which a value may be stored.

```cpp
insert_iterator<Container>& operator++();

insert_iterator<Container> operator++(int);
```

### Parameters

A `insert_iterator` addressing the next location into which a value may be stored.

### Remarks

Both preincrementation and postincrementation operators return the same result.

### Example

```cpp
// insert_iterator_op_incr.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   vector<int> vec;
   for (i = 1 ; i < 5 ; ++i )
   {
      vec.push_back (  i );
   }

   vector <int>::iterator vIter;
   cout << "The vector vec is:\n ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   insert_iterator<vector<int> > ii ( vec, vec.begin ( ) );
*ii = 30;
   ii++;
*ii = 40;
   ii++;
*ii = 50;

   cout << "After the insertions, the vector vec becomes:\n ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
/* Output:
The vector vec is:
( 1 2 3 4 ).
After the insertions, the vector vec becomes:
( 30 40 50 1 2 3 4 ).
*/
```

## <a name="op_eq"></a> insert_iterator::operator=

Inserts a value into the container and returns the iterator updated to point to the new element.

```cpp
insert_iterator<Container>& operator=(
    typename Container::const_reference val,);

insert_iterator<Container>& operator=(
    typename Container::value_type&& val);
```

### Parameters

*val*\
The value to be assigned to the container.

### Return Value

A reference to the element inserted into the container.

### Remarks

The first member operator evaluates

`Iter = container->insert(Iter, val)`;

`++Iter;`

then returns **`*this`**.

The second member operator evaluates

`Iter = container->insert(Iter, std::move(val));`

`++Iter;`

then returns **`*this`**.

### Example

```cpp
// insert_iterator_op_assign.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   list <int>::iterator L_Iter;

   list<int> L;
   for (i = 0 ; i < 4 ; ++i )
   {
      L.push_back ( 2 * i );
   }

   cout << "The original list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;

   insert_iterator< list < int> > Iter(L, L.begin ( ) );
*Iter = 10;
*Iter = 20;
*Iter = 30;

   cout << "After the insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout << *L_Iter << " ";
   cout << ")." << endl;
}
/* Output:
The original list L is:
( 0 2 4 6 ).
After the insertions, the list L is:
( 10 20 30 0 2 4 6 ).
*/
```

## <a name="reference"></a> insert_iterator::reference

A type that provides a reference to an element in a sequence controlled by the associated container.

```cpp
typedef typename Container::reference reference;
```

### Remarks

The type describes a reference to an element of the sequence controlled by the associated container.

### Example

```cpp
// insert_iterator_container_reference.cpp
// compile with: /EHsc
#include <iterator>
#include <list>
#include <iostream>

int main( )
{
   using namespace std;

   list<int> L;
   insert_iterator<list<int> > iivIter( L , L.begin ( ) );
*iivIter = 10;
*iivIter = 20;
*iivIter = 30;

   list<int>::iterator LIter;
   cout << "The list L is: ( ";
   for ( LIter = L.begin ( ) ; LIter != L.end ( ); LIter++ )
      cout << *LIter << " ";
   cout << ")." << endl;

   insert_iterator<list<int> >::reference
        RefFirst = *(L.begin ( ));
   cout << "The first element in the list L is: "
        << RefFirst << "." << endl;
}
/* Output:
The list L is: ( 10 20 30 ).
The first element in the list L is: 10.
*/
```

## See also

[\<iterator>](../standard-library/iterator.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
