---
title: "is_pod Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d73ebdee-746b-4082-9fa4-2db71432eb0e
caps.latest.revision: 18
manager: ghogen
translation.priority.mt: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# is_pod Class
Tests if type is POD.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_pod;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 `is_pod<Ty>::value` is `true` if the type `Ty` is Plain Old Data (POD). Otherwise it is `false`.  
  
 Arithmetic types, enumeration types, pointer types, and pointer to member types are POD.  
  
 A cv-qualified version of a POD type is itself a POD type.  
  
 An array of POD is itself POD.  
  
 A struct or union, all of whose non-static data members are POD, is itself POD if it has:  
  
-   No user-declared constructors.  
  
-   No private or protected non-static data members.  
  
-   No base classes.  
  
-   No virtual functions.  
  
-   No non-static data members of reference type.  
  
-   No user-defined copy assignment operator.  
  
-   No user-defined destructor.  
  
 Therefore, you can recursively build POD structs and arrays that contain POD structs and arrays.  
  
## Example  
  
```  
// std_tr1__type_traits__is_pod.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct throws   
    {   
    throws() throw(int)   
        {   
        }   
  
    throws(const throws&) throw(int)   
        {   
        }   
  
    throws& operator=(const throws&) throw(int)   
        {   
        }   
  
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_pod<trivial> == " << std::boolalpha   
        << std::is_pod<trivial>::value << std::endl;   
    std::cout << "is_pod<int> == " << std::boolalpha   
        << std::is_pod<int>::value << std::endl;   
    std::cout << "is_pod<throws> == " << std::boolalpha   
        << std::is_pod<throws>::value << std::endl;   
  
    return (0);   
    }   
    /* Output:  
    is_pod<trivial> == true  
is_pod<int> == true  
is_pod<throws> == false  
*/  
  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)