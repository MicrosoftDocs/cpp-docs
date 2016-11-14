---
title: "array Class (STL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "array/std::tr1::array"
  - "std.tr1.array"
  - "array"
  - "std::tr1::array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array class [TR1]"
ms.assetid: fdfd43a5-b2b5-4b9e-991f-93bf10fb4293
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# array Class (STL)
Describes an object that controls a sequence of length `N` of elements of type `Ty`. The sequence is stored as an array of `Ty`, contained in the `array<Ty, N>` object.  
  
## Syntax  
  
```  
template <class Ty, std::size_t N>  
class array;  
```  
  
#### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`Ty`|The type of an element.|  
|`N`|The number of elements.|  
  
## Members  
  
|||  
|-|-|  
|Type Definition|Description|  
|[array::const_iterator](#array__const_iterator)|The type of a constant iterator for the controlled sequence.|  
|[array::const_pointer](#array__const_pointer)|The type of a constant pointer to an element.|  
|[array::const_reference](#array__const_reference)|The type of a constant reference to an element.|  
|[array::const_reverse_iterator](#array__const_reverse_iterator)|The type of a constant reverse iterator for the controlled sequence.|  
|[array::difference_type](#array__difference_type)|The type of a signed distance between two elements.|  
|[array::iterator](#array__iterator)|The type of an iterator for the controlled sequence.|  
|[array::pointer](#array__pointer)|The type of a pointer to an element.|  
|[array::reference](#array__reference)|The type of a reference to an element.|  
|[array::reverse_iterator](#array__reverse_iterator)|The type of a reverse iterator for the controlled sequence.|  
|[array::size_type](#array__size_type)|The type of an unsigned distance between two elements.|  
|[array::value_type](#array__value_type)|The type of an element.|  
  
|||  
|-|-|  
|Member Function|Description|  
|[array::array](#array__array)|Constructs an array object.|  
|[array::assign](#array__assign)|Replaces all elements.|  
|[array::at](#array__at)|Accesses an element at a specified position.|  
|[array::back](#array__back)|Accesses the last element.|  
|[array::begin](#array__begin)|Designates the beginning of the controlled sequence.|  
|[array::cbegin](#array__cbegin)|Returns a random-access const iterator to the first element in the array.|  
|[array::cend](#array__cend)|Returns a random-access const iterator that points just beyond the end of the array.|  
|[array::crbegin](#array__crbegin)|Returns a const iterator to the first element in a reversed array.|  
|[array::crend](#array__crend)|Returns a const iterator to the end of a reversed array.|  
|[array::data](#array__data)|Gets the address of the first element.|  
|[array::empty](#array__empty)|Tests whether elements are present.|  
|[array::end](#array__end)|Designates the end of the controlled sequence.|  
|[array::fill](#array__fill)|Replaces all elements with a specified value.|  
|[array::front](#array__front)|Accesses the first element.|  
|[array::max_size](#array__max_size)|Counts the number of elements.|  
|[array::rbegin](#array__rbegin)|Designates the beginning of the reversed controlled sequence.|  
|[array::rend](#array__rend)|Designates the end of the reversed controlled sequence.|  
|[array::size](#array__size)|Counts the number of elements.|  
|[array::swap](#array__swap)|Swaps the contents of two containers.|  
  
|||  
|-|-|  
|Operator|Description|  
|[array::operator=](#array__operator_eq)|Replaces the controlled sequence.|  
|[array::operator[]](#array__operator_at)|Accesses an element at a specified position.|  
  
## Remarks  
 The type has a default constructor `array()` and a default assignment operator `operator=`, and satisfies the requirements for an `aggregate`. Therefore, objects of type `array<Ty, N>` can be initialized by using an aggregate initializer. For example,  
  
```  
array<int, 4> ai = { 1, 2, 3 };  
```  
  
 creates the object `ai` that holds four integer values, initializes the first three elements to the values 1, 2, and 3, respectively, and initializes the fourth element to 0.  
  
## Requirements  
 **Header:** \<array>  
  
 **Namespace:** std  
  
##  <a name="array__array"></a>  array::array  
 Constructs an array object.  
  
```  
array();

array(const array& right);
```  
  
### Parameters  
 `right`  
 Object or range to insert.  
  
### Remarks  
 The constructor:  
  
```  
array();
```  
  
 leaves the controlled sequence uninitialized (or default initialized). You use it to specify an uninitialized controlled sequence.  
  
 The constructor:  
  
```  
array(const array& right);
```  
  
 initializes the controlled sequence with the sequence `[``right``.`[array::begin](#array__begin)`(),` `right``.`[array::end](#array__end)`())`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the array object `right`.  
  
### Example  
  
```cpp  
// std_tr1__array__array_array.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    Myarray c1(c0);   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
```  
  
##  <a name="array__assign"></a>  array::assign  
 Replaces all elements.  
  
```  
void assign(const Ty& val);
```  
  
### Parameters  
 `val`  
 The value to assign.  
  
### Remarks  
 The member function replaces the sequence controlled by `*this` with a repetition of `N` elements of value `val`.  
  
### Example  
  
```cpp  
// std_tr1__array__array_assign.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    Myarray c1;   
    c1.assign(4);   
  
// display contents " 4 4 4 4"   
    for (Myarray::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4 4 4 4  
```  
  
##  <a name="array__at"></a>  array::at  
 Accesses an element at a specified position.  
  
```  
reference at(size_type off);

constexpr const_reference at(size_type off) const;
```  
  
### Parameters  
 `off`  
 Position of element to access.  
  
### Remarks  
 The member functions return a reference to the element of the controlled sequence at position `off`. If that position is invalid, the function throws an object of class `out_of_range`.  
  
### Example  
  
```cpp  
// std__array__array_at.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display odd elements " 1 3"   
    std::cout << " " << c0.at(1);   
    std::cout << " " << c0.at(3);   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
##  <a name="array__back"></a>  array::back  
 Accesses the last element.  
  
```  
reference back();

constexpr const_reference back() const;
```  
  
### Remarks  
 The member functions return a reference to the last element of the controlled sequence, which must be non-empty.  
  
### Example  
  
```cpp  
// std__array__array_back.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    std::cout << " " << c0.back();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="array__begin"></a>  array::begin  
 Designates the beginning of the controlled sequence.  
  
```  
iterator begin() noexcept;  
const_iterator begin() const noexcept;  
```  
  
### Remarks  
 The member functions return a random-access iterator that points at the first element of the sequence (or just beyond the end of an empty sequence).  
  
### Example  
  
```cpp  
// std_tr1__array__array_begin.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::iterator it2 = c0.begin();   
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="array__cbegin"></a>  array::cbegin  
 Returns a `const` iterator that addresses the first element in the range.  
  
```  
const_iterator cbegin() const noexcept;  
```  
  
### Return Value  
 A `const` random-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, `cbegin() == cend()`).  
  
### Remarks  
 With the return value of `cbegin`, the elements in the range cannot be modified.  
  
 You can use this member function in place of the `begin()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- `const`) container of any kind that supports `begin()` and `cbegin()`.  
  
```cpp  
 
auto i1 = Container.begin();
// i1 is Container<T>::iterator   
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator  
```  
  
##  <a name="array__cend"></a>  array::cend  
 Returns a `const` iterator that addresses the location just beyond the last element in a range.  
  
```  
const_iterator cend() const noexcept;  
```  
  
### Return Value  
 A random-access iterator that points just beyond the end of the range.  
  
### Remarks  
 `cend` is used to test whether an iterator has passed the end of its range.  
  
 You can use this member function in place of the `end()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- `const`) container of any kind that supports `end()` and `cend()`.  
  
```cpp  
 
auto i1 = Container.end();
// i1 is Container<T>::iterator   
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator  
```  
  
 The value returned by `cend` should not be dereferenced.  
  
##  <a name="array__const_iterator"></a>  array::const_iterator  
 The type of a constant iterator for the controlled sequence.  
  
```  
typedef implementation-defined const_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant random-access iterator for the controlled sequence.  
  
### Example  
  
```cpp  
  
// std__array__array_const_iterator.cpp  
// compile with: /EHsc /W4  
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> MyArray;   
  
int main()   
{   
    MyArray c0 = {0, 1, 2, 3};   
  
    // display contents " 0 1 2 3"   
    std::cout << "it1:";  
    for ( MyArray::const_iterator it1 = c0.begin();   
          it1 != c0.end();   
          ++it1 ) {  
       std::cout << " " << *it1;   
    }  
    std::cout << std::endl;   
  
    // display first element " 0"   
    MyArray::const_iterator it2 = c0.begin();   
    std::cout << "it2:";  
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
}  
  
```  
  
```Output  
it1: 0 1 2 3                                  
  
it2: 0  
  
```  
  
##  <a name="array__const_pointer"></a>  array::const_pointer  
 The type of a constant pointer to an element.  
  
```  
typedef const Ty *const_pointer;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant pointer to elements of the sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_const_pointer.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::const_pointer ptr = &*c0.begin();   
    std::cout << " " << *ptr;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="array__const_reference"></a>  array::const_reference  
 The type of a constant reference to an element.  
  
```  
typedef const Ty& const_reference;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant reference to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_const_reference.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::const_reference ref = *c0.begin();   
    std::cout << " " << ref;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="array__const_reverse_iterator"></a>  array::const_reverse_iterator  
 The type of a constant reverse iterator for the controlled sequence.  
  
```  
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant reverse iterator for the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_const_reverse_iterator.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    Myarray::const_reverse_iterator it2 = c0.rbegin();   
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="array__crbegin"></a>  array::crbegin  
 Returns a const iterator to the first element in a reversed array.  
  
```  
const_reverse_iterator crbegin() const;
```  
  
### Return Value  
 A const reverse random-access iterator addressing the first element in a reversed array or addressing what had been the last element in the unreversed array.  
  
### Remarks  
 With the return value of `crbegin`, the array object cannot be modified.  
  
### Example  
  
```cpp  
// array_crbegin.cpp  
// compile with: /EHsc  
#include <array>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   array<int, 2> v1 = {1, 2};  
   array<int, 2>::iterator v1_Iter;  
   array<int, 2>::const_reverse_iterator v1_rIter;  
  
   v1_Iter = v1.begin( );  
   cout << "The first element of array is "  
        << *v1_Iter << "." << endl;  
  
   v1_rIter = v1.crbegin( );  
   cout << "The first element of the reversed array is "  
        << *v1_rIter << "." << endl;  
}  
```  
  
```Output  
The first element of array is 1.  
The first element of the reversed array is 2.  
```  
  
##  <a name="array__crend"></a>  array::crend  
 Returns a const iterator that addresses the location succeeding the last element in a reversed array.  
  
```  
const_reverse_iterator crend() const noexcept;  
```  
  
### Return Value  
 A const reverse random-access iterator that addresses the location succeeding the last element in a reversed array (the location that had preceded the first element in the unreversed array).  
  
### Remarks  
 `crend` is used with a reversed array just as [array::cend](#array__cend) is used with a array.  
  
 With the return value of `crend` (suitably decremented), the array object cannot be modified.  
  
 `crend` can be used to test to whether a reverse iterator has reached the end of its array.  
  
 The value returned by `crend` should not be dereferenced.  
  
### Example  
  
```cpp  
// array_crend.cpp  
// compile with: /EHsc  
#include <array>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   array<int, 2> v1 = {1, 2};  
   array<int, 2>::const_reverse_iterator v1_rIter;  
  
   for ( v1_rIter = v1.rbegin( ) ; v1_rIter != v1.rend( ) ; v1_rIter++ )  
      cout << *v1_rIter << endl;  
}  
```  
  
```Output  
2  
1  
```  
  
##  <a name="array__data"></a>  array::data  
 Gets the address of the first element.  
  
```  
Ty *data();

const Ty *data() const;
```  
  
### Remarks  
 The member functions return the address of the first element in the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_data.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::pointer ptr = c0.data();   
    std::cout << " " << *ptr;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="array__difference_type"></a>  array::difference_type  
 The type of a signed distance between two elements.  
  
```  
typedef std::ptrdiff_t difference_type;  
```  
  
### Remarks  
 The signed integer type describes an object that can represent the difference between the addresses of any two elements in the controlled sequence. It is a synonym for the type `std::ptrdiff_t`.  
  
### Example  
  
```cpp  
// std_tr1__array__array_difference_type.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display distance first-last " -4"   
    Myarray::difference_type diff = c0.begin() - c0.end();   
    std::cout << " " << diff;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
-4  
```  
  
##  <a name="array__empty"></a>  array::empty  
 Tests whether no elements are present.  
  
```  
constexpr bool empty() const;
```  
  
### Remarks  
 The member function returns true only if `N == 0`.  
  
### Example  
  
```cpp  
// std_tr1__array__array_empty.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display whether c0 is empty " false"   
    std::cout << std::boolalpha << " " << c0.empty();   
    std::cout << std::endl;   
  
    std::array<int, 0> c1;   
  
// display whether c1 is empty " true"   
    std::cout << std::boolalpha << " " << c1.empty();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
false  
true  
```  
  
##  <a name="array__end"></a>  array::end  
 Designates the end of the controlled sequence.  
  
```  
reference end();

const_reference end() const;
```  
  
### Remarks  
 The member functions return a random-access iterator that points just beyond the end of the sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_end.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    Myarray::iterator it2 = c0.end();   
    std::cout << " " << *--it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="array__fill"></a>  array::fill  
 Erases a array and copies the specified elements to the empty array.  
  
```  
void fill(const Type& val);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|` val`|The value of the element being inserted into the array.|  
  
### Remarks  
 `fill` replaces each element of the array with the specified value.  
  
### Example  
  
```cpp  
// array_fill.cpp  
// compile with: /EHsc  
#include <array>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   array<int, 2> v1 = {1, 2};  
   array<int, 2>::iterator iter;  
  
   cout << "v1 = " ;  
   for (iter = v1.begin(); iter != v1.end(); iter++)  
      cout << *iter << " ";  
   cout << endl;  
  
   v1.fill(3);  
   cout << "v1 = " ;  
   for (iter = v1.begin(); iter != v1.end(); iter++)  
      cout << *iter << " ";  
   cout << endl;  
}  
```  
  
##  <a name="array__front"></a>  array::front  
 Accesses the first element.  
  
```  
reference front();

constexpr const_reference front() const;
```  
  
### Remarks  
 The member functions return a reference to the first element of the controlled sequence, which must be non-empty.  
  
### Example  
  
```cpp  
// std_tr1__array__array_front.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    std::cout << " " << c0.front();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="array__iterator"></a>  array::iterator  
 The type of an iterator for the controlled sequence.  
  
```  
typedef implementation-defined iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a random-access iterator for the controlled sequence.  
  
### Example  
  
```cpp  
  
// std__array__array_iterator.cpp   
// compile with: /EHsc /W4  
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> MyArray;   
  
int main()   
{   
    MyArray c0 = {0, 1, 2, 3};   
  
    // display contents " 0 1 2 3"   
    std::cout << "it1:";  
    for ( MyArray::iterator it1 = c0.begin();   
          it1 != c0.end();   
          ++it1 ) {  
       std::cout << " " << *it1;   
    }  
    std::cout << std::endl;   
  
    // display first element " 0"   
    MyArray::iterator it2 = c0.begin();   
    std::cout << "it2:";  
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
}  
  
```  
  
```Output  
it1: 0 1 2 3                                  
  
it2: 0  
  
```  
  
##  <a name="array__max_size"></a>  array::max_size  
 Counts the number of elements.  
  
```  
constexpr size_type max_size() const;
```  
  
### Remarks  
 The member function returns `N`.  
  
### Example  
  
```cpp  
// std__array__array_max_size.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display (maximum) size " 4"   
    std::cout << " " << c0.max_size();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4  
```  
  
##  <a name="array__operator_at"></a>  array::operator[]  
 Accesses an element at a specified position.  
  
```  
 
reference operator[](size_type off);

constexpr const_reference operator[](size_type off) const;
```  
  
### Parameters  
 `off`  
 Position of element to access.  
  
### Remarks  
 The member functions return a reference to the element of the controlled sequence at position `off`. If that position is invalid, the behavior is undefined.  
  
### Example  
  
```cpp  
// std_tr1__array__array_operator_sub.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display odd elements " 1 3"   
    std::cout << " " << c0[1];   
    std::cout << " " << c0[3];   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
1 3  
```  
  
##  <a name="array__operator_eq"></a>  array::operator=  
 Replaces the controlled sequence.  
  
```  
array <Value>%  operator=(array <Value>% right);
```  
  
### Parameters  
 right  
 Container to copy.  
  
### Remarks  
 The member operator assigns each element of `right` to the corresponding element of the controlled sequence, then returns `*this`. You use it to replace the controlled sequence with a copy of the controlled sequence in `right`.  
  
### Example  
  
```cpp  
// std_tr1__array__array_operator_as.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    Myarray c1;   
    c1 = c0;   
  
// display copied contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
```  
  
##  <a name="array__pointer"></a>  array::pointer  
 The type of a pointer to an element.  
  
```  
typedef Ty *pointer;  
```  
  
### Remarks  
 The type describes an object that can serve as a pointer to elements of the sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_pointer.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::pointer ptr = &*c0.begin();   
    std::cout << " " << *ptr;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="array__rbegin"></a>  array::rbegin  
 Designates the beginning of the reversed controlled sequence.  
  
```  
reverse_iterator rbegin()noexcept;  
const_reverse_iterator rbegin() const noexcept;  
```  
  
### Remarks  
 The member functions return a reverse iterator that points just beyond the end of the controlled sequence. Hence, it designates the beginning of the reverse sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_rbegin.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    Myarray::const_reverse_iterator it2 = c0.rbegin();   
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="array__reference"></a>  array::reference  
 The type of a reference to an element.  
  
```  
typedef Ty& reference;  
```  
  
### Remarks  
 The type describes an object that can serve as a reference to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_reference.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::reference ref = *c0.begin();   
    std::cout << " " << ref;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="array__rend"></a>  array::rend  
 Designates the end of the reversed controlled sequence.  
  
```  
reverse_iterator rend()noexcept;  
const_reverse_iterator rend() const noexcept;  
```  
  
### Remarks  
 The member functions return a reverse iterator that points at the first element of the sequence (or just beyond the end of an empty sequence)). Hence, it designates the end of the reverse sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_rend.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::const_reverse_iterator it2 = c0.rend();   
    std::cout << " " << *--it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="array__reverse_iterator"></a>  array::reverse_iterator  
 The type of a reverse iterator for the controlled sequence.  
  
```  
typedef std::reverse_iterator<iterator> reverse_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a reverse iterator for the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__array__array_reverse_iterator.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    Myarray::reverse_iterator it2 = c0.rbegin();   
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="array__size"></a>  array::size  
 Counts the number of elements.  
  
```  
constexpr size_type size() const;
```  
  
### Remarks  
 The member function returns `N`.  
  
### Example  
  
```cpp  
// std_tr1__array__array_size.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display size " 4"   
    std::cout << " " << c0.size();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4  
```  
  
##  <a name="array__size_type"></a>  array::size_type  
 The type of an unsigned distance between two element.  
  
```  
typedef std::size_t size_type;  
```  
  
### Remarks  
 The unsigned integer type describes an object that can represent the length of any controlled sequence. It is a synonym for the type `std::size_t`.  
  
### Example  
  
```cpp  
// std__array__array_size_type.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display distance last-first " 4"   
    Myarray::size_type diff = c0.end() - c0.begin();   
    std::cout << " " << diff;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4  
```  
  
##  <a name="array__swap"></a>  array::swap  
 Swaps the contents of two arrays.  
  
```  
void swap(array& right);
```  
  
### Parameters  
 `right`  
 Array to swap contents with.  
  
### Remarks  
 The member function swaps the controlled sequences between `*this` and `right`. It performs a number of element assignments and constructor calls proportional to `N`.  
  
### Example  
  
```cpp  
// std_tr1__array__array_swap.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    Myarray c1 = {4, 5, 6, 7};   
    c0.swap(c1);   
  
// display swapped contents " 4 5 6 7"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    swap(c0, c1);   
  
// display swapped contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4 5 6 7  
0 1 2 3  
```  
  
##  <a name="array__value_type"></a>  array::value_type  
 The type of an element.  
  
```  
typedef Ty value_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Ty`.  
  
### Example  
  
```cpp  
// std_tr1__array__array_value_type.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        {   
        Myarray::value_type val = *it;   
        std::cout << " " << val;   
        }   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
```  
  
## See Also  
 [\<array>](../standard-library/array.md)

