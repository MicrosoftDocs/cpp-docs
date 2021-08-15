---
description: "Learn more about: pair Structure"
title: "pair Structure"
ms.date: "11/04/2016"
f1_keywords: ["utility/std::pair"]
helpviewer_keywords: ["pair class"]
ms.assetid: 539d3d67-80a2-4170-b347-783495d42109
---
# pair Structure

A struct that provides for the ability to treat two objects as a single object.

## Syntax

```cpp
struct pair
{
    typedef T1 first_type;
    typedef T2 second_type;
    T1 first;
    T2 second;
    constexpr pair();
    pair(const pair&) = default;
    pair(pair&&) = default;
    constexpr pair(
        const T1& Val1,
        const T2& Val2);

    template <class Other1, class Other2>
    constexpr pair(const pair<Other1, Other2>& Right);

    template <class Other1, class Other2>
    constexpr pair(const pair <Other1 Val1, Other2 Val2>&& Right);

    template <class Other1, class Other2>
    constexpr pair(Other1&& Val1, Other2&& Val2);

    template <class... Args1, class... Args2>
    pair(piecewise_construct_t, tuple<Args1...> first_args, tuple<Args2...> second_args);

    pair& operator=(const pair& p);
    template<class U1, class U2> pair& operator=(const pair<U1, U2>& p);
    pair& operator=(pair&& p) noexcept(see below );
    template<class U1, class U2> pair& operator=(pair<U1, U2>&& p);

    void swap(pair& p) noexcept(see below );
};

template<class T1, class T2>
    pair(T1, T2) -> pair<T1, T2>;
```

### Parameters

*Val1*\
Value initializing the first element of `pair`.

*Val2*\
Value initializing the second element of `pair`.

*Right*\
A pair whose values are to be used to initialize the elements of another pair.

## Return Value

The first (default) constructor initializes the first element of the pair to the default of type `T1` and the second element to default of type `T2`.  It is defined if both types are default-constructible.

The second constructor initializes the first element of the pair to *Val1* and the second to *Val2.*  It is defined if both types are copy-constructible.

The third (template) constructor initializes the first element of the pair to `Right`. **first** and the second to `Right`. **second**.  It is defined if both types of the pair are constructible from the value types provided.

The fourth constructor initializes the first element of the pair to *Val1* and the second to *Val2* using [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  It is defined if both types of the pair are constructible from the value types provided.

## Remarks

The template struct stores a pair of objects of type `T1` and `T2`, respectively. The type `first_type` is the same as the template parameter `T1` and the type `second_type` is the same as the template parameter `T2`. `T1` and `T2` each need supply only a default constructor, a single-argument constructor, and a destructor. All members of the type `pair` are public, because the type is declared as a **`struct`** rather than as a **`class`**. The two most common uses for a pair are as return types for functions that return two values and as elements for the associative container classes [map Class](../standard-library/map-class.md) and [multimap Class](../standard-library/multimap-class.md) that have both a key and a value type associated with each element. The latter satisfies the requirements for a pair associative container and has a value type of the form `pair< const key_type, mapped_type >`.

## Example

```cpp
// utility_pair.cpp
// compile with: /EHsc
#include <utility>
#include <map>
#include <iomanip>
#include <iostream>

int main( )
{
   using namespace std;

   // Using the constructor to declare and initialize a pair
   pair <int, double> p1 ( 10, 1.1e-2 );

   // Compare using the helper function to declare and initialize a pair
   pair <int, double> p2;
   p2 = make_pair ( 10, 2.22e-1 );

   // Making a copy of a pair
   pair <int, double> p3 ( p1 );

   cout.precision ( 3 );
   cout << "The pair p1 is: ( " << p1.first << ", "
        << p1.second << " )." << endl;
   cout << "The pair p2 is: ( " << p2.first << ", "
        << p2.second << " )." << endl;
   cout << "The pair p3 is: ( " << p3.first << ", "
        << p3.second << " )." << endl;

   // Using a pair for a map element
   map <int, int> m1;
   map <int, int>::iterator m1_Iter;

   typedef pair <int, int> Map_Int_Pair;

   m1.insert ( Map_Int_Pair ( 1, 10 ) );
   m1.insert ( Map_Int_Pair ( 2, 20 ) );
   m1.insert ( Map_Int_Pair ( 3, 30 ) );

   cout << "The element pairs of the map m1 are:";
   for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )
      cout << " ( " << m1_Iter -> first << ", "
           << m1_Iter -> second << " )";
   cout   << "." << endl;

   // Using pair as a return type for a function
   pair< map<int,int>::iterator, bool > pr1, pr2;
   pr1 = m1.insert ( Map_Int_Pair ( 4, 40 ) );
   pr2 = m1.insert ( Map_Int_Pair (1, 10 ) );

   if( pr1.second == true )
   {
      cout << "The element (4,40) was inserted successfully in m1."
           << endl;
   }
   else
   {
      cout << "The element with a key value of\n"
           << " ( (pr1.first) -> first ) = " << ( pr1.first ) -> first
           << " is already in m1,\n so the insertion failed." << endl;
   }

   if( pr2.second == true )
   {
      cout << "The element (1,10) was inserted successfully in m1."
           << endl;
   }
   else
   {
      cout << "The element with a key value of\n"
           << " ( (pr2.first) -> first ) = " << ( pr2.first ) -> first
           << " is already in m1,\n so the insertion failed." << endl;
   }
}
```

```Output
The pair p1 is: ( 10, 0.011 ).
The pair p2 is: ( 10, 0.222 ).
The pair p3 is: ( 10, 0.011 ).
The element pairs of the map m1 are: ( 1, 10 ) ( 2, 20 ) ( 3, 30 ).
The element (4,40) was inserted successfully in m1.
The element with a key value of
( (pr2.first) -> first ) = 1 is already in m1,
so the insertion failed.
```
