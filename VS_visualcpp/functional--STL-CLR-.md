---
title: "functional (STL-CLR)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
H1: functional (STL/CLR)
ms.assetid: 88738b8c-5d37-4375-970e-a4442bf5efde
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
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
# functional (STL-CLR)
Include the STL/CLR header `<cliext/functional>` to define the a number of template classes and related template delegates and functions.  
  
## Syntax  
  
```  
#include <functional>  
```  
  
## Declarations  
  
|Delegate|Description|  
|--------------|-----------------|  
|[binary_delegate (STL/CLR)](../VS_visualcpp/binary_delegate--STL-CLR-.md)|Two-argument delegate.|  
|[binary_delegate_noreturn (STL/CLR)](../VS_visualcpp/binary_delegate_noreturn--STL-CLR-.md)|Two-argument delegate returning `void`.|  
|[unary_delegate (STL/CLR)](../VS_visualcpp/unary_delegate--STL-CLR-.md)|One-argument delegate.|  
|[unary_delegate_noreturn (STL/CLR)](../VS_visualcpp/unary_delegate_noreturn--STL-CLR-.md)|One-argument delegate returning `void`.|  
  
|Class|Description|  
|-----------|-----------------|  
|[binary_negate (STL/CLR)](../VS_visualcpp/binary_negate--STL-CLR-.md)|Functor to negate a two-argument functor.|  
|[binder1st (STL/CLR)](../VS_visualcpp/binder1st--STL-CLR-.md)|Functor to bind first argument to a two-argument functor.|  
|[binder2nd (STL/CLR)](../VS_visualcpp/binder2nd--STL-CLR-.md)|Functor to bind second argument to a two-argument functor.|  
|[divides (STL/CLR)](../VS_visualcpp/divides--STL-CLR-.md)|Divide functor.|  
|[equal_to (STL/CLR)](../VS_visualcpp/equal_to--STL-CLR-.md)|Equal comparison functor.|  
|[greater (STL/CLR)](../VS_visualcpp/greater--STL-CLR-.md)|Greater comparison functor.|  
|[greater_equal (STL/CLR)](../VS_visualcpp/greater_equal--STL-CLR-.md)|Greater or equal comparison functor.|  
|[less (STL/CLR)](../VS_visualcpp/less--STL-CLR-.md)|Less comparison functor.|  
|[less_equal (STL/CLR)](../VS_visualcpp/less_equal--STL-CLR-.md)|Less or equal comparison functor.|  
|[logical_and (STL/CLR)](../VS_visualcpp/logical_and--STL-CLR-.md)|Logical AND functor.|  
|[logical_not (STL/CLR)](../VS_visualcpp/logical_not--STL-CLR-.md)|Logical NOT functor.|  
|[logical_or (STL/CLR)](../VS_visualcpp/logical_or--STL-CLR-.md)|Logical OR functor.|  
|[minus (STL/CLR)](../VS_visualcpp/minus--STL-CLR-.md)|Subtract functor.|  
|[modulus (STL/CLR)](../VS_visualcpp/modulus--STL-CLR-.md)|Modulus functor.|  
|[multiplies (STL/CLR)](../VS_visualcpp/multiplies--STL-CLR-.md)|Multiply functor.|  
|[negate (STL/CLR)](../VS_visualcpp/negate--STL-CLR-.md)|Functor to return its argument negated.|  
|[not_equal_to (STL/CLR)](../VS_visualcpp/not_equal_to--STL-CLR-.md)|Not equal comparison functor.|  
|[plus (STL/CLR)](../VS_visualcpp/plus--STL-CLR-.md)|Add functor.|  
|[unary_negate (STL/CLR)](../VS_visualcpp/unary_negate--STL-CLR-.md)|Functor to negate a one-argument functor.|  
  
|Function|Description|  
|--------------|-----------------|  
|[bind1st (STL/CLR)](../VS_visualcpp/bind1st--STL-CLR-.md)|Generates a binder1st for an argument and functor.|  
|[bind2nd (STL/CLR)](../VS_visualcpp/bind2nd--STL-CLR-.md)|Generates a binder2nd for an argument and functor.|  
|[not1 (STL/CLR)](../VS_visualcpp/not1--STL-CLR-.md)|Generates a unary_negate for a functor.|  
|[not1 (STL/CLR)](../VS_visualcpp/not1--STL-CLR-.md)|Generates a binary_negate for a functor.|  
  
## Requirements  
 **Header:** <cliext/functional>  
  
 **Namespace:** cliext  
  
## See Also  
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)