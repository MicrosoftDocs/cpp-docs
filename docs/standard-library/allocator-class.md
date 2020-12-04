---
description: "Learn more about: allocator Class"
title: "allocator Class"
ms.date: "11/04/2016"
f1_keywords: ["memory/std::allocator", "memory/std::allocator::const_pointer", "memory/std::allocator::const_reference", "memory/std::allocator::difference_type", "memory/std::allocator::pointer", "memory/std::allocator::reference", "memory/std::allocator::size_type", "memory/std::allocator::value_type", "memory/std::allocator::address", "memory/std::allocator::allocate", "memory/std::allocator::construct", "memory/std::allocator::deallocate", "memory/std::allocator::destroy", "memory/std::allocator::max_size", "memory/std::allocator::rebind"]
helpviewer_keywords: ["std::allocator [C++]", "std::allocator [C++], const_pointer", "std::allocator [C++], const_reference", "std::allocator [C++], difference_type", "std::allocator [C++], pointer", "std::allocator [C++], reference", "std::allocator [C++], size_type", "std::allocator [C++], value_type", "std::allocator [C++], address", "std::allocator [C++], allocate", "std::allocator [C++], construct", "std::allocator [C++], deallocate", "std::allocator [C++], destroy", "std::allocator [C++], max_size", "std::allocator [C++], rebind"]
ms.assetid: 3fd58076-56cc-43bb-ad58-b4b7c9c6b410
---
# allocator Class

The class template describes an object that manages storage allocation and freeing for arrays of objects of type `Type`. An object of class `allocator` is the default allocator object specified in the constructors for several container class templates in the C++ Standard Library.

## Syntax

```cpp
template <class Type>
class allocator
```

### Parameters

*Type*\
The type of object for which storage is being allocated or deallocated.

## Remarks

All the C++ Standard Library containers have a template parameter that defaults to `allocator`. Constructing a container with a custom allocator provide control over allocation and freeing of that container's elements.

For example, an allocator object might allocate storage on a private heap or in shared memory, or it might optimize for small or large object sizes. It might also specify, through the type definitions it supplies, that elements be accessed through special accessor objects that manage shared memory, or perform automatic garbage collection. Hence, a class that allocates storage using an allocator object should use these types for declaring pointer and reference objects, as the containers in the C++ Standard Library do.

<strong>(C++98/03 only)</strong> When you derive from allocator class, you have to provide a [rebind](#rebind) struct, whose `_Other` typedef references your newly-derived class.

Thus, an allocator defines the following types:

- [pointer](#pointer) behaves like a pointer to `Type`.

- [const_pointer](#const_pointer) behaves like a const pointer to `Type`.

- [reference](#reference) behaves like a reference to `Type`.

- [const_reference](#const_reference) behaves like a const reference to `Type`.

These `Type`s specify the form that pointers and references must take for allocated elements. ( [allocator::pointer](#pointer) is not necessarily the same as `Type*` for all allocator objects, even though it has this obvious definition for class `allocator`.)

**C++11 and later:**  To enable move operations in your allocator, use the minimal allocator interface and implement copy constructor, == and != operators, allocate and deallocate. For more information and an example, see [Allocators](allocators.md)

## Members

### Constructors

|Name|Description|
|-|-|
|[allocator](#allocator)|Constructors used to create `allocator` objects.|

### Typedefs

|Name|Description|
|-|-|
|[const_pointer](#const_pointer)|A type that provides a constant pointer to the type of object managed by the allocator.|
|[const_reference](#const_reference)|A type that provides a constant reference to type of object managed by the allocator.|
|[difference_type](#difference_type)|A signed integral type that can represent the difference between values of pointers to the type of object managed by the allocator.|
|[pointer](#pointer)|A type that provides a pointer to the type of object managed by the allocator.|
|[reference](#reference)|A type that provides a reference to the type of object managed by the allocator.|
|[size_type](#size_type)|An unsigned integral type that can represent the length of any sequence that an object of type `allocator` can allocate.|
|[value_type](#value_type)|A type that is managed by the allocator.|

### Functions

|Name|Description|
|-|-|
|[address](#address)|Finds the address of an object whose value is specified.|
|[allocate](#allocate)|Allocates a block of memory large enough to store at least some specified number of elements.|
|[construct](#construct)|Constructs a specific type of object at a specified address that is initialized with a specified value.|
|[deallocate](#deallocate)|Frees a specified number of objects from storage beginning at a specified position.|
|[destroy](#destroy)|Calls an objects destructor without deallocating the memory where the object was stored.|
|[max_size](#max_size)|Returns the number of elements of type `Type` that could be allocated by an object of class `allocator` before the free memory is used up.|
|[rebind](#rebind)|A structure that enables an allocator for objects of one type to allocate storage for objects of another type.|

### Operators

|Name|Description|
|-|-|
|[operator=](#op_eq)|Assigns one `allocator` object to another `allocator` object.|

### <a name="address"></a> address

Finds the address of an object whose value is specified.

```cpp
pointer address(reference val) const;
const_pointer address(const_reference val) const;
```

#### Parameters

*val*\
The const or nonconst value of the object whose address is being searched for.

#### Return Value

A const or nonconst pointer to the object found of, respectively, const or nonconst value.

#### Remarks

The member functions return the address of *val*, in the form that pointers must take for allocated elements.

#### Example

```cpp
// allocator_address.cpp
// compile with: /EHsc
#include <memory>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( 2 * i );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::const_pointer v1Ptr;
   const int k = 8;
   v1Ptr = v1Alloc.address( *find(v1.begin( ), v1.end( ), k) );
   // v1Ptr = v1Alloc.address( k );
   cout << "The integer addressed by v1Ptr has a value of: "
        << "*v1Ptr = " << *v1Ptr << "." << endl;
}
```

```Output
The original vector v1 is:
( 2 4 6 8 10 12 14 ).
The integer addressed by v1Ptr has a value of: *v1Ptr = 8.
```

### <a name="allocate"></a> allocate

Allocates a block of memory large enough to store at least some specified number of elements.

```cpp
pointer allocate(size_type count, const void* _Hint);
```

#### Parameters

*count*\
The number of elements for which sufficient storage is to be allocated.

*_Hint*\
A const pointer that may assist the allocator object satisfy the request for storage by locating the address of an object allocated prior to the request.

#### Return Value

A pointer to the allocated object or null if memory was not allocated.

#### Remarks

The member function allocates storage for an array of count elements of type `Type`, by calling operator new(*count*). It returns a pointer to the allocated object. The hint argument helps some allocators in improving locality of reference; a valid choice is the address of an object earlier allocated by the same allocator object and not yet deallocated. To supply no hint, use a null pointer argument instead.

#### Example

```cpp
// allocator_allocate.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   allocator<int> v1Alloc;
   allocator<int>::pointer v1aPtr;
   v1aPtr = v1Alloc.allocate ( 10 );

   int i;
   for ( i = 0 ; i < 10 ; i++ )
   {
      v1aPtr[ i ] = i;
   }

   for ( i = 0 ; i < 10 ; i++ )
   {
      cout << v1aPtr[ i ] << " ";
   }
   cout << endl;
   v1Alloc.deallocate( v1aPtr, 10 );
}
```

```Output
0 1 2 3 4 5 6 7 8 9
```

### <a name="allocator"></a> allocator

Constructors used to create allocator objects.

```cpp
allocator();
allocator(const allocator<Type>& right);
template <class Other>
    allocator(const allocator<Other>& right);
```

#### Parameters

*right*\
The allocator object to be copied.

#### Remarks

The constructor does nothing. In general, however, an allocator object constructed from another allocator object should compare equal to it and permit intermixing of object allocation and freeing between the two allocator objects.

#### Example

```cpp
// allocator_allocator.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

class Int {
public:
   Int( int i )
   {
      cout << "Constructing " << ( void* )this  << endl;
      x = i;
      bIsConstructed = true;
   };
   ~Int( )
   {
      cout << "Destructing " << ( void* )this << endl;
      bIsConstructed = false;
   };
   Int &operator++( )
   {
      x++;
      return *this;
   };
   int x;
private:
   bool bIsConstructed;
};

int main( )
{
   allocator<double> Alloc;
   vector <Int>:: allocator_type v1Alloc;

   allocator<double> cAlloc(Alloc);
   allocator<Int> cv1Alloc(v1Alloc);

   if ( cv1Alloc == v1Alloc )
      cout << "The allocator objects cv1Alloc & v1Alloc are equal."
           << endl;
   else
      cout << "The allocator objects cv1Alloc & v1Alloc are not equal."
           << endl;

   if ( cAlloc == Alloc )
      cout << "The allocator objects cAlloc & Alloc are equal."
           << endl;
   else
      cout << "The allocator objects cAlloc & Alloc are not equal."
           << endl;
}
```

```Output
The allocator objects cv1Alloc & v1Alloc are equal.
The allocator objects cAlloc & Alloc are equal.
```

### <a name="const_pointer"></a> const_pointer

A type that provides a constant pointer to the type of object managed by the allocator.

```cpp
typedef const value_type *const_pointer;
```

#### Remarks

The pointer type describes an object `ptr` that can designate, through the expression `*ptr`, any const object that an object of type `allocator` can allocate.

#### Example

```cpp
// allocator_const_ptr.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( i * 2 );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::const_pointer v1Ptr;
   const int k = 10;
   v1Ptr = v1Alloc.address( k );

   cout << "The integer's address found has a value of: "
        << *v1Ptr << "." << endl;
}
```

```Output
The original vector v1 is:
( 2 4 6 8 10 12 14 ).
The integer's address found has a value of: 10.
```

### <a name="const_reference"></a> const_reference

A type that provides a constant reference to type of object managed by the allocator.

```cpp
typedef const value_type& const_reference;
```

#### Remarks

The reference type describes an object that can designate any const object that an object of type `allocator` can allocate.

#### Example

```cpp
// allocator_const_ref.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <double> v;
   vector <double> ::iterator vIter, vfIter;
   vector <double> :: allocator_type vAlloc;

   int j;
   for ( j = 1 ; j <= 7 ; j++ )
   {
      v.push_back( 100.0 * j );
   }

   cout << "The original vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vfIter = v.begin( );
   allocator<double>::const_reference vcref =*vfIter;
   cout << "The value of the element referred to by vref is: "
        << vcref << ",\n the first element in the vector." << endl;

   // const references can have their elements modified,
   // so the following would generate an error:
   // vcref = 150;
   // but the value of the first element could be modified through
   // its nonconst iterator and the const reference would remain valid
*vfIter = 175;
   cout << "The value of the element referred to by vcref,"
        <<"\n after nofication through its nonconst iterator, is: "
        << vcref << "." << endl;
}
```

```Output
The original vector v is:
( 100 200 300 400 500 600 700 ).
The value of the element referred to by vref is: 100,
the first element in the vector.
The value of the element referred to by vcref,
after nofication through its nonconst iterator, is: 175.
```

### <a name="construct"></a> construct

Constructs a specific type of object at a specified address that is initialized with a specified value.

```cpp
void construct(pointer ptr, const Type& val);
void construct(pointer ptr, Type&& val);
template <class _Other>
    void construct(pointer ptr, _Other&&... val);
```

#### Parameters

*ptr*\
A pointer to the location where the object is to be constructed.

*val*\
The value with which the object being constructed is to be initialized.

#### Remarks

The first member function is equivalent to `new ((void *) ptr) Type(val)`.

#### Example

```cpp
// allocator_construct.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( 3 * i );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::pointer v1PtrA;
   int kA = 6, kB = 7;
   v1PtrA = v1Alloc.address( *find( v1.begin( ), v1.end( ), kA ) );
   v1Alloc.destroy ( v1PtrA );
   v1Alloc.construct ( v1PtrA , kB );

   cout << "The modified vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;
}
```

```Output
The original vector v1 is:
( 3 6 9 12 15 18 21 ).
The modified vector v1 is:
( 3 7 9 12 15 18 21 ).
```

### <a name="deallocate"></a> deallocate

Frees a specified number of objects from storage beginning at a specified position.

```cpp
void deallocate(pointer ptr, size_type count);
```

#### Parameters

*ptr*\
A pointer to the first object to be deallocated from storage.

*count*\
The number of objects to be deallocated from storage.

#### Remarks

The member function frees storage for the array of count objects of type `Type` beginning at *ptr*, by calling `operator delete(ptr)`. The pointer *ptr* must have been returned earlier by a call to [allocate](#allocate) for an allocator object that compares equal to **\*this**, allocating an array object of the same size and type. `deallocate` never throws an exception.

#### Example

For an example using the member function, see [allocator::allocate](#allocate).

### <a name="destroy"></a> destroy

Calls an objects destructor without deallocating the memory where the object was stored.

```cpp
void destroy(pointer ptr);
```

#### Parameters

*ptr*\
A pointer designating the address of the object to be destroyed.

#### Remarks

The member function destroys the object designated by *ptr*, by calling the destructor `ptr->Type::~Type`.

#### Example

```cpp
// allocator_destroy.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( 2 * i );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::pointer v1PtrA;
   int kA = 12, kB = -99;
   v1PtrA = v1Alloc.address( *find(v1.begin( ), v1.end( ), kA) );
   v1Alloc.destroy ( v1PtrA );
   v1Alloc.construct ( v1PtrA , kB );

   cout << "The modified vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;
}
```

```Output
The original vector v1 is:
( 2 4 6 8 10 12 14 ).
The modified vector v1 is:
( 2 4 6 8 10 -99 14 ).
```

### <a name="difference_type"></a> difference_type

A signed integral type that can represent the difference between values of pointers to the type of object managed by the allocator.

```cpp
typedef ptrdiff_t difference_type;
```

#### Remarks

The signed integer type describes an object that can represent the difference between the addresses of any two elements in a sequence that an object of type `allocator` can allocate.

#### Example

```cpp
// allocator_diff_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 0 ; i <= 7 ; i++ )
   {
      v1.push_back( i * 2 );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::const_pointer v1PtrA, v1PtrB;
   const int kA = 4, kB =12;
   v1PtrA = v1Alloc.address( kA );
   v1PtrB = v1Alloc.address( kB );
   allocator<int>::difference_type v1diff = *v1PtrB - *v1PtrA;

   cout << "Pointer v1PtrA addresses " << *v1PtrA << "." << endl;
   cout << "Pointer v1PtrB addresses " << *v1PtrB <<  "." << endl;
   cout << "The difference between the integer's addresses is: "
        << v1diff << "." << endl;
}
```

```Output
The original vector v1 is:
( 0 2 4 6 8 10 12 14 ).
Pointer v1PtrA addresses 4.
Pointer v1PtrB addresses 12.
The difference between the integer's addresses is: 8.
```

### <a name="max_size"></a> max_size

Returns the number of elements of type `Type` that could be allocated by an object of class allocator before the free memory is used up.

```cpp
size_type max_size() const;
```

#### Return Value

The number of elements that could be allocated.

#### Example

```cpp
// allocator_max_size.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( i );
   }

   cout << "The original vector v1 is:\n ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   vector <double> v2;
   vector <double> ::iterator v2Iter;
   vector <double> :: allocator_type v2Alloc;
   allocator<int>::size_type v1size;
   v1size = v1Alloc.max_size( );

   cout << "The number of integers that can be allocated before\n"
        << " the free memory in the vector v1 is used up is: "
        << v1size << "." << endl;

   int ii;
   for ( ii = 1 ; ii <= 7 ; ii++ )
   {
      v2.push_back( ii * 10.0 );
   }

   cout << "The original vector v2 is:\n ( " ;
   for ( v2Iter = v2.begin( ) ; v2Iter != v2.end( ) ; v2Iter++ )
      cout << *v2Iter << " ";
   cout << ")." << endl;
   allocator<double>::size_type v2size;
   v2size = v2Alloc.max_size( );

   cout << "The number of doubles that can be allocated before\n"
        << " the free memory in the vector v2 is used up is: "
        << v2size << "." << endl;
}
```

### <a name="op_eq"></a> operator=

Assigns one allocator object to another allocator object.

```cpp
template <class Other>
    allocator<Type>& operator=(const allocator<Other>& right);
```

#### Parameters

*right*\
An allocator object to be assigned to another such object.

#### Return Value

A reference to the allocator object

#### Remarks

The template assignment operator does nothing. In general, however, an allocator object assigned to another allocator object should compare equal to it and permit intermixing of object allocation and freeing between the two allocator objects.

#### Example

```cpp
// allocator_op_assign.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

class Int {
public:
   Int(int i)
   {
      cout << "Constructing " << ( void* )this  << endl;
      x = i;
      bIsConstructed = true;
   };
   ~Int( ) {
      cout << "Destructing " << ( void* )this << endl;
      bIsConstructed = false;
   };
   Int &operator++( )
   {
      x++;
      return *this;
   };
   int x;
private:
   bool bIsConstructed;
};

int main( )
{
   allocator<Int> Alloc;
   allocator<Int> cAlloc ;
   cAlloc = Alloc;
}
```

### <a name="pointer"></a> pointer

A type that provides a pointer to the type of object managed by the allocator.

```cpp
typedef value_type *pointer;
```

#### Remarks

The pointer type describes an object `ptr` that can designate, through the expression **\*ptr**, any object that an object of type `allocator` can allocate.

#### Example

```cpp
// allocator_ptr.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <int> v1;
   vector <int>::iterator v1Iter;
   vector <int>:: allocator_type v1Alloc;

   int i;
   for ( i = 1 ; i <= 7 ; i++ )
   {
      v1.push_back( 3 * i );
   }

   cout << "The original vector v1 is:\n( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ; v1Iter++ )
      cout << *v1Iter << " ";
   cout << ")." << endl;

   allocator<int>::const_pointer v1Ptr;
   const int k = 12;
   v1Ptr = v1Alloc.address( k );

   cout << "The integer addressed by v1Ptr has a value of: "
        << "*v1Ptr = " << *v1Ptr << "." << endl;
}
```

```Output
The original vector v1 is:
( 3 6 9 12 15 18 21 ).
The integer addressed by v1Ptr has a value of: *v1Ptr = 12.
```

### <a name="rebind"></a> rebind

A structure that enables an allocator for objects of one type to allocate storage for objects of another type.

```cpp
struct rebind { typedef allocator<_Other> other; };
```

#### Parameters

*other*\
The type of element for which memory is being allocated.

#### Remarks

This structure is useful for allocating memory for type that differs from the element type of the container being implemented.

The member class template defines the type other. Its sole purpose is to provide the type name `allocator<_Other>`, given the type name `allocator<Type>`.

For example, given an allocator object `al` of type `A`, you can allocate an object of type `_Other` with the expression:

```cpp
A::rebind<Other>::other(al).allocate(1, (Other *)0)
```

Or, you can name its pointer type by writing the type:

```cpp
A::rebind<Other>::other::pointer
```

#### Example

```cpp
// allocator_rebind.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int>::allocator_type IntAlloc;
int main( )
{
   IntAlloc v1Iter;
   vector<int> v1;

   IntAlloc::rebind<char>::other::pointer pszC =
      IntAlloc::rebind<char>::other(v1.get_allocator()).allocate(1, (void *)0);

   int * pInt = v1Iter.allocate(10);
}
```

### <a name="reference"></a> reference

A type that provides a reference to the type of object managed by the allocator.

```cpp
typedef value_type& reference;
```

#### Remarks

The reference type describes an object that can designate any object that an object of type `allocator` can allocate.

#### Example

```cpp
// allocator_reference.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <double> v;
   vector <double> ::iterator vIter, vfIter;
   vector <double> :: allocator_type vAlloc;

   int j;
   for ( j = 1 ; j <= 7 ; j++ )
   {
      v.push_back( 100.0 * j );
   }

   cout << "The original vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vfIter = v.begin( );
   allocator<double>::reference vref =*vfIter;
   cout << "The value of the element referred to by vref is: "
        << vref << ",\n the first element in the vector." << endl;

   // nonconst references can have their elements modified
   vref = 150;
   cout << "The element referred to by vref after being modified is: "
        << vref << "." << endl;
}
```

```Output
The original vector v is:
( 100 200 300 400 500 600 700 ).
The value of the element referred to by vref is: 100,
the first element in the vector.
The element referred to by vref after being modified is: 150.
```

### <a name="size_type"></a> size_type

An unsigned integral type that can represent the length of any sequence that an object of type `allocator` can allocate.

```cpp
typedef size_t size_type;
```

#### Example

```cpp
// allocator_size_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
   vector <double> v;
   vector <double> ::iterator vIter;
   vector <double> :: allocator_type vAlloc;

   int j;
   for ( j = 1 ; j <= 7 ; j++ )
   {
      v.push_back( 100.0 * j );
   }

   cout << "The original vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   allocator<double>::size_type vsize;
   vsize = vAlloc.max_size( );

   cout << "The number of doubles that can be allocated before\n"
        << " the free memory in the vector v is used up is: "
        << vsize << "." << endl;
}
```

### <a name="value_type"></a> value_type

A type that is managed by the allocator.

```cpp
typedef Type value_type;
```

#### Remarks

The type is a synonym for the template parameter `Type`.

#### Example

```cpp
// allocator_value_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>
#include <vector>
using namespace std;

int main( )
{
   vector <double> v;
   vector <double> ::iterator vIter, vfIter;
   vector <double> :: allocator_type vAlloc;

   int j;
   for ( j = 1 ; j <= 7 ; j++ )
   {
      v.push_back( 100.0 * j );
   }

   cout << "The original vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;

   vfIter = v.begin( );
   allocator<double>::value_type vecVal = 150.0;
*vfIter = vecVal;
   cout << "The value of the element addressed by vfIter is: "
        << *vfIter << ",\n the first element in the vector." << endl;

   cout << "The modified vector v is:\n ( " ;
   for ( vIter = v.begin( ) ; vIter != v.end( ) ; vIter++ )
      cout << *vIter << " ";
   cout << ")." << endl;
}
```

```Output
The original vector v is:
( 100 200 300 400 500 600 700 ).
The value of the element addressed by vfIter is: 150,
the first element in the vector.
The modified vector v is:
( 150 200 300 400 500 600 700 ).
```

## Helpers

### <a name="allocator_arg_t"></a> allocator_arg_t

```cpp
struct allocator_arg_t { explicit allocator_arg_t() = default; };
inline constexpr allocator_arg_t allocator_arg{};
```

### <a name="uses_allocator"></a> uses_allocator

```cpp
template <class T, class Alloc> struct uses_allocator;
```
