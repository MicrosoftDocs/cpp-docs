---
title: "iterator_traits Struct"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "std::iterator_traits"
  - "xutility/std::iterator_traits"
  - "iterator_traits"
  - "std.iterator_traits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iterator_traits struct"
  - "iterator_traits class"
ms.assetid: 8b92c2c5-f658-402f-8ca1-e7ae301b8514
caps.latest.revision: 18
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
# iterator_traits Struct
A template helper struct used to specify all the critical type definitions that an iterator should have.  
  
## Syntax  
  
```
template<class Iterator>
struct iterator_traits {
    typedef typename Iterator::iterator_category iterator_category;
    typedef typename Iterator::value_type value_type;
    typedef typename Iterator::difference_type difference_type;
    typedef difference_type distance_type;
    typedef typename Iterator::pointer pointer;
    typedef typename Iterator::reference reference;
 };
template<class Type>
struct iterator_traits<Type*> {
    typedef random_access_iterator_tag iterator_category;
    typedef Type value_type;
    typedef ptrdiff_t difference_type;
    typedef difference_type distance_type;
    typedef Type *pointer;
    typedef Type& reference;
 };
template<class Type>
struct iterator_traits<const Type*> {
    typedef random_access_iterator_tag iterator_category;
    typedef Type value_type;
    typedef ptrdiff_t difference_type;
    typedef difference_type distance_type;
    typedef const Type *pointer;
    typedef const Type& reference;
 };
```  
  
## Remarks  
 The template struct defines the member types  
  
- **iterator_category**: a synonym for **Iterator::iterator_category**.  
  
- `value_type`: a synonym for **Iterator::value_type**.  
  
- `difference_type`: a synonym for **Iterator::difference_type**.  
  
- `distance_type`: a synonym for **Iterator::difference_type.**  
  
- **pointer**: a synonym for **Iterator::pointer**.  
  
- **reference**: a synonym for **Iterator::reference**.  
  
 The partial specializations determine the critical types associated with an object pointer of type **Type \*** or const **Type \***.  
  
 In this implementation you can also use several template functions that do not make use of partial specialization:  
  
```
template<class Category, class Type, class Diff>
C _Iter_cat(const iterator<Category, Ty, Diff>&);

template<class Ty>
random_access_iterator_tag _Iter_cat(const Ty *);

template<class Category, class Ty, class Diff>
Ty *val_type(const iterator<Category, Ty, Diff>&);

template<class Ty>
Ty *val_type(const Ty *);

template<class Category, class Ty, class Diff>
Diff *_Dist_type(const iterator<Category, Ty, Diff>&);

template<class Ty>
ptrdiff_t *_Dist_type(const Ty *);
```  
  
 which determine several of the same types more indirectly. You use these functions as arguments on a function call. Their sole purpose is to supply a useful template class parameter to the called function.  
  
## Example  
  
```  
// iterator_traits.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iterator>  
#include <vector>  
#include <list>  
  
using namespace std;  
  
template< class it >  
void  
function( it i1, it i2 )  
{  
   iterator_traits<it>::iterator_category cat;  
   cout << typeid( cat ).name( ) << endl;  
   while ( i1 != i2 )  
   {  
      iterator_traits<it>::value_type x;  
      x = *i1;  
      cout << x << " ";  
      i1++;  
   };     
   cout << endl;  
};  
  
int main( )   
{  
   vector<char> vc( 10,'a' );  
   list<int> li( 10 );  
   function( vc.begin( ), vc.end( ) );  
   function( li.begin( ), li.end( ) );  
}  
\* Output:   
struct std::random_access_iterator_tag  
a a a a a a a a a a   
struct std::bidirectional_iterator_tag  
0 0 0 0 0 0 0 0 0 0   
*\  
```  
  
## Requirements  
 **Header:** \<iterator>  
  
 **Namespace:** std  
  
## See Also  
 [\<iterator>](../stdcpplib/-iterator-.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)

