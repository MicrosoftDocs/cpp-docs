---
title: "functional (STL-CLR)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "<cliext/functional>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<functional> header [STL/CLR]"
  - "<cliext/functional> header [STL/CLR]"
  - "functional functions [STL/CLR]"
ms.assetid: 88738b8c-5d37-4375-970e-a4442bf5efde
caps.latest.revision: 16
ms.author: "mblome"
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
# functional (STL/CLR)
Include the STL/CLR header `<cliext/functional>` to define the a number of template classes and related template delegates and functions.  
  
## Syntax  
  
```  
#include <functional>  
```  
  
## Declarations  
  
|Delegate|Description|  
|--------------|-----------------|  
|[binary_delegate (STL/CLR)](../cli/binary_delegate--stl-clr-.md)|Two-argument delegate.|  
|[binary_delegate_noreturn (STL/CLR)](../cli/binary_delegate_noreturn--stl-clr-.md)|Two-argument delegate returning `void`.|  
|[unary_delegate (STL/CLR)](../cli/unary_delegate--stl-clr-.md)|One-argument delegate.|  
|[unary_delegate_noreturn (STL/CLR)](../cli/unary_delegate_noreturn--stl-clr-.md)|One-argument delegate returning `void`.|  
  
|Class|Description|  
|-----------|-----------------|  
|[binary_negate (STL/CLR)](../cli/binary_negate--stl-clr-.md)|Functor to negate a two-argument functor.|  
|[binder1st (STL/CLR)](../cli/binder1st--stl-clr-.md)|Functor to bind first argument to a two-argument functor.|  
|[binder2nd (STL/CLR)](../cli/binder2nd--stl-clr-.md)|Functor to bind second argument to a two-argument functor.|  
|[divides (STL/CLR)](../cli/divides--stl-clr-.md)|Divide functor.|  
|[equal_to (STL/CLR)](../cli/equal_to--stl-clr-.md)|Equal comparison functor.|  
|[greater (STL/CLR)](../cli/greater--stl-clr-.md)|Greater comparison functor.|  
|[greater_equal (STL/CLR)](../cli/greater_equal--stl-clr-.md)|Greater or equal comparison functor.|  
|[less (STL/CLR)](../cli/less--stl-clr-.md)|Less comparison functor.|  
|[less_equal (STL/CLR)](../cli/less_equal--stl-clr-.md)|Less or equal comparison functor.|  
|[logical_and (STL/CLR)](../cli/logical_and--stl-clr-.md)|Logical AND functor.|  
|[logical_not (STL/CLR)](../cli/logical_not--stl-clr-.md)|Logical NOT functor.|  
|[logical_or (STL/CLR)](../cli/logical_or--stl-clr-.md)|Logical OR functor.|  
|[minus (STL/CLR)](../cli/minus--stl-clr-.md)|Subtract functor.|  
|[modulus (STL/CLR)](../cli/modulus--stl-clr-.md)|Modulus functor.|  
|[multiplies (STL/CLR)](../cli/multiplies--stl-clr-.md)|Multiply functor.|  
|[negate (STL/CLR)](../cli/negate--stl-clr-.md)|Functor to return its argument negated.|  
|[not_equal_to (STL/CLR)](../cli/not_equal_to--stl-clr-.md)|Not equal comparison functor.|  
|[plus (STL/CLR)](../cli/plus--stl-clr-.md)|Add functor.|  
|[unary_negate (STL/CLR)](../cli/unary_negate--stl-clr-.md)|Functor to negate a one-argument functor.|  
  
|Function|Description|  
|--------------|-----------------|  
|[bind1st (STL/CLR)](../cli/bind1st--stl-clr-.md)|Generates a binder1st for an argument and functor.|  
|[bind2nd (STL/CLR)](../cli/bind2nd--stl-clr-.md)|Generates a binder2nd for an argument and functor.|  
|[not1 (STL/CLR)](../cli/not1--stl-clr-.md)|Generates a unary_negate for a functor.|  
|[not1 (STL/CLR)](../cli/not1--stl-clr-.md)|Generates a binary_negate for a functor.|  
  
## Requirements  
 **Header:** \<cliext/functional>  
  
 **Namespace:** cliext  
  
## See Also  
 [STL/CLR Library Reference](../cli/stl-clr-library-reference.md)