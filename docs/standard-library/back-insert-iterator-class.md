---
title: "back_insert_iterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "iterator/std::back_insert_iterator"
  - "std::back_insert_iterator"
  - "back_insert_iterator"
  - "std.back_insert_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "back_insert_iterator class"
ms.assetid: a1ee07f2-cf9f-46a1-8608-cfaf207f9713
caps.latest.revision: 21
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
# back_insert_iterator Class
Describes an iterator adaptor that satisfies the requirements of an output iterator. It inserts, rather than overwrites, elements into the back end of a sequence and thus provides semantics that are different from the overwrite semantics provided by the iterators of the C++ sequence containers. The `back_insert_iterator` class is templatized on the type of container.  
  
## Syntax  
  
```  
template <class Container>  
class back_insert_iterator;  
```  
  
#### Parameters  
 `Container`  
 The type of container into the back of which elements are to be inserted by a `back_insert_iterator`.  
  
## Remarks  
 The container must satisfy the requirements for a back insertion sequence where is it possible to insert elements at the end of the sequence in amortized constant time. STL sequence containers defined by the [deque Class](../standard-library/deque-class.md), [list Class](../standard-library/list-class.md) and [vector Class](../standard-library/vector-class.md) provide the needed `push_back` member function and satisfy these requirements. These three containers as well as strings may each be adapted to use with `back_insert_iterator`s. A `back_insert_iterator` must always be initialized with its container.  
  
### Constructors  
  
|||  
|-|-|  
|[back_insert_iterator](#back_insert_iterator__back_insert_iterator)|Constructs a `back_insert_iterator` that inserts elements after the last element in a container.|  
  
### Typedefs  
  
|||  
|-|-|  
|[container_type](#back_insert_iterator__container_type)|A type that provides a container for the `back_insert_iterator`.|  
|[reference](#back_insert_iterator__reference)|A type that provides a reference for the `back_insert_iterator`.|  
  
### Operators  
  
|||  
|-|-|  
|[operator*](#back_insert_iterator__operator_star)|Dereferencing operator used to implement the output iterator expression * `i` = `x` for a back insertion.|  
|[operator++](#back_insert_iterator__operator_add_add)|Increments the `back_insert_iterator` to the next location into which a value may be stored.|  
|[operator=](#back_insert_iterator__operator_eq)|Assignment operator used to implement the output iterator expression * `i` = `x` for a back insertion.|  
  
## Requirements  
 **Header**: \<iterator>  
  
 **Namespace:** std  
  
##  <a name="back_insert_iterator__back_insert_iterator"></a>  back_insert_iterator::back_insert_iterator  
 Constructs a `back_insert_iterator` that inserts elements after the last element in a container.  
  
```   
explicit back_insert_iterator(Container& _Cont);
```  
  
### Parameters  
 `_Cont`  
 The container that the `back_insert_iterator` is to insert an element into.  
  
### Return Value  
 A `back_insert_iterator` for the parameter container.  
  
### Example  
  
```cpp  
// back_insert_iterator_back_insert_iterator.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for ( i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The initial vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   // Insertions with member function  
   back_inserter ( vec ) = 40;  
   back_inserter ( vec ) = 50;  
  
   // Alternatively, insertions can be done with template function  
   back_insert_iterator<vector<int> > backiter ( vec );  
 *backiter = 600;  
   backiter++;  
 *backiter = 700;  
  
   cout << "After the insertions, the vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The initial vector vec is: ( 1 2 3 ).  
After the insertions, the vector vec is: ( 1 2 3 40 50 600 700 ).  
```  
  
##  <a name="back_insert_iterator__container_type"></a>  back_insert_iterator::container_type  
 A type that provides a container for the `back_insert_iterator`.  
  
```   
typedef Container  
container_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter **Container**.  
  
### Example  
  
```cpp  
// back_insert_iterator_container_type.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back (  i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The original vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> >::container_type vec1 = vec;  
   back_inserter ( vec1 ) = 40;  
  
   cout << "After the insertion, the vector is: ( ";  
   for ( vIter = vec1.begin ( ) ; vIter != vec1.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The original vector vec is: ( 1 2 3 ).  
After the insertion, the vector is: ( 1 2 3 40 ).  
```  
  
##  <a name="back_insert_iterator__operator_star"></a>  back_insert_iterator::operator*  
 Dereferencing operator used to implement the output iterator expression \* *i* = *x*.  
  
```  
back_insert_iterator<Container>& operator*();
```  
  
### Return Value  
 A reference to the element inserted at the back of the container.  
  
### Remarks  
 Used to implement the output iterator expression **\*Iter** = **value**. If **Iter** is an iterator that addresses an element in a sequence, then **\*Iter** = **value** replaces that element with value and does not change the total number of elements in the sequence.  
  
### Example  
  
```cpp  
// back_insert_iterator_back_insert.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> > backiter ( vec );  
 *backiter = 10;  
   backiter++;      // Increment to the next element  
 *backiter = 20;  
   backiter++;  
  
   cout << "After the insertions, the vector vec becomes: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 1 2 3 ).  
After the insertions, the vector vec becomes: ( 1 2 3 10 20 ).  
```  
  
##  <a name="back_insert_iterator__operator_add_add"></a>  back_insert_iterator::operator++  
 Increments the `back_insert_iterator` to the next location into which a value may be stored.  
  
```  
back_insert_iterator<Container>& operator++();
back_insert_iterator<Container> operator++(int);
```  
  
### Return Value  
 A `back_insert_iterator` addressing the next location into which a value may be stored.  
  
### Remarks  
 Both preincrementation and postincrementation operators return the same result.  
  
### Example  
  
```cpp  
// back_insert_iterator_op_incre.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 3 ; ++i )    
   {  
      vec.push_back ( 10 * i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> > backiter ( vec );  
 *backiter = 30;  
   backiter++;      // Increment to the next element  
 *backiter = 40;  
   backiter++;  
  
   cout << "After the insertions, the vector vec becomes: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 10 20 ).  
After the insertions, the vector vec becomes: ( 10 20 30 40 ).  
```  
  
##  <a name="back_insert_iterator__operator_eq"></a>  back_insert_iterator::operator=  
 Appends or pushes a value onto the back end of a container.  
  
```  
back_insert_iterator<Container>& operator=(typename Container::const_reference val);
back_insert_iterator<Container>& operator=(typename Container::value_type&& val);
```  
  
### Parameters  
 ` val`  
 The value to be inserted into the container.  
  
### Return Value  
 A reference to the last element inserted at the back of the container.  
  
### Remarks  
 The first member operator evaluates `Container.push_back( val)`,  
  
 then returns `*this`. The second member operator evaluates  
  
 `container->push_back((typename Container::value_type&&)val)`,  
  
 then returns `*this`.  
  
### Example  
  
```cpp  
// back_insert_iterator_op_assign.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> > backiter ( vec );  
 *backiter = 10;  
   backiter++;      // Increment to the next element  
 *backiter = 20;  
   backiter++;  
  
   cout << "After the insertions, the vector vec becomes: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
}  
```  
  
##  <a name="back_insert_iterator__reference"></a>  back_insert_iterator::reference  
 A type that provides a reference for the `back_insert_iterator`.  
  
```  
typedef typename Container::reference reference;  
```  
  
### Remarks  
 The type describes a reference to an element of the sequence controlled by the associated container.  
  
### Example  
  
```cpp  
// back_insert_iterator_reference.cpp  
// compile with: /EHsc  
#include <iterator>  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   vector<int> vec;  
   for (i = 1 ; i < 4 ; ++i )    
   {  
      vec.push_back ( i );  
   }  
  
   vector <int>::iterator vIter;  
   cout << "The vector vec is: ( ";  
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)  
      cout << *vIter << " ";  
   cout << ")." << endl;  
  
   back_insert_iterator<vector<int> >::reference   
        RefLast = *(vec.end ( ) - 1 );  
   cout << "The last element in the vector vec is: "   
        << RefLast << "." << endl;  
}  
```  
  
```Output  
The vector vec is: ( 1 2 3 ).  
The last element in the vector vec is: 3.  
```  
  
## See Also  
 [\<iterator>](../standard-library/iterator.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)

