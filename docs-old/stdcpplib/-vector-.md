---
title: "&lt;vector&gt;"
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
  - "<vector>"
  - "std.<vector>"
  - "std::<vector>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vector header"
ms.assetid: c1431ad8-c0b6-4dbb-89c4-5f651e432d7f
caps.latest.revision: 23
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
# &lt;vector&gt;
Defines the container template class vector and several supporting templates.  
  
 The `vector` is a container that organizes elements of a given type in a linear sequence. It enables fast random access to any element, and dynamic additions and removals to and from the sequence. The `vector` is the preferred container for a sequence when random-access performance is at a premium.  
  
 For more information about the class `vector`, see "vector Class". For information about the specialization `vector<bool>`, see [vector\<bool> Class](../stdcpplib/vector-bool--class.md).  
  
## Syntax  
  
```  
namespace std {  
template<class Type, class Allocator>  
    class vector;  
template<class Allocator>  
    class vector<bool>;  
  
template<class Allocator>  
    struct hash<vector<bool, Allocator> >;  
  
        // TEMPLATE FUNCTIONS  
template<class Type, class Allocator>  
    bool operator== (  
        const vector< Type, Allocator>& _Left,  
        const vector< Type, Allocator>& _Right  
    );  
template<class Type, class Allocator>  
    bool operator!= (  
        const vector< Type, Allocator>& _Left,  
        const vector< Type, Allocator>& _Right  
    );  
template<class Type, class Allocator>  
    bool operator< (  
        const vector< Type, Allocator>& _Left,  
        const vector< Type, Allocator>& _Right  
    );  
template<class Type, class Allocator>  
    bool operator> (  
        const vector< Type, Allocator>& _Left,  
        const vector< Type, Allocator>& _Right  
    );  
template<class Type, class Allocator>  
    bool operator<= (  
        const vector< Type, Allocator>& _Left,  
        const vector< Type, Allocator>& _Right  
    );  
template<class Type, class Allocator>  
    bool operator>= (  
        const vector< Type, Allocator>& _Left,  
        const vector< Type, Allocator>& _Right  
    );  
template<class Type, class Allocator>  
    void swap (  
        vector< Type, Allocator>& _Left,  
        vector< Type, Allocator>& _Right  
    );  
}  // namespace std  
```  
  
#### Parameters  
 Type  
 The template parameter for the type of data stored in the vector.  
  
 Allocator  
 The template parameter for the stored allocator object responsible for memory allocation and deallocation.  
  
 `_Left`  
 The first (left) vector in a compare operation  
  
 `_Right`  
 The second (right) vector in a compare operation.  
  
### Operators  
  
|||  
|-|-|  
|[operator! =](../stdcpplib/-vector--operators.md#operator_neq)|Tests if the vector object on the left side of the operator is not equal to the vector object on the right side.|  
|[operator<](../stdcpplib/-vector--operators.md#operator_lt_)|Tests if the vector object on the left side of the operator is less than the vector object on the right side.|  
|[operator\<=](../stdcpplib/-vector--operators.md#operator_lt__eq)|Tests if the vector object on the left side of the operator is less than or equal to the vector object on the right side.|  
|[operator==](../stdcpplib/-vector--operators.md#operator_eq_eq)|Tests if the vector object on the left side of the operator is equal to the vector object on the right side.|  
|[operator>](../stdcpplib/-vector--operators.md#operator_gt_)|Tests if the vector object on the left side of the operator is greater than the vector object on the right side.|  
|[operator>=](../stdcpplib/-vector--operators.md#operator_gt__eq)|Tests if the vector object on the left side of the operator is greater than or equal to the vector object on the right side.|  
  
### Classes  
  
|||  
|-|-|  
|"vector Class"|A template class of sequence containers that arrange elements of a given type in a linear arrangement and allow fast random access to any element.|  
  
### Specializations  
  
|||  
|-|-|  
|[vector\<bool> Class](../stdcpplib/vector-bool--class.md)|A full specialization of the template class vector for elements of type `bool` with an allocator for the underlying type used by the specialization.|  
  
## Requirements  
 **Header:** \<vector>  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)