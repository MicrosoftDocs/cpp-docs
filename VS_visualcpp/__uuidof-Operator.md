---
title: "__uuidof Operator"
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
ms.topic: language-reference
ms.assetid: badfe709-809b-4b66-ad48-ee35039d25c6
caps.latest.revision: 9
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
# __uuidof Operator
**Microsoft Specific**  
  
 Retrieves the GUID attached to the expression.  
  
## Syntax  
  
```  
  
      __uuidof (  
   expression   
)  
```  
  
## Remarks  
 The *expression* can be a type name, pointer, reference, or array of that type, a template specialized on these types, or a variable of these types. The argument is valid as long as the compiler can use it to find the attached GUID.  
  
 A special case of this intrinsic is when either **0** or **NULL** is supplied as the argument. In this case, `__uuidof` will return a GUID made up of zeros.  
  
 Use this keyword to extract the GUID attached to:  
  
-   An object by the [uuid](../VS_visualcpp/uuid--C---.md) extended attribute.  
  
-   A library block created with the [module](../VS_visualcpp/module--C---.md) attribute.  
  
> [!NOTE]
>  In a debug build, `__uuidof` always initializes an object dynamically (at runtime). In a release build, `__uuidof` can statically (at compile time) initialize an object.  
  
## Example  
 The following code (compiled with ole32.lib) will display the uuid of a library block created with the module attribute:  
  
```  
// expre_uuidof.cpp  
// compile with: ole32.lib  
#include "stdio.h"  
#include "windows.h"  
  
[emitidl];  
[module(name="MyLib")];  
[export]  
struct stuff {  
   int i;  
};  
  
int main() {  
   LPOLESTR lpolestr;  
   StringFromCLSID(__uuidof(MyLib), &lpolestr);  
   wprintf_s(L"%s", lpolestr);  
   CoTaskMemFree(lpolestr);  
}  
```  
  
## Comments  
 In cases where the library name is no longer in scope, you can use __LIBID\_ instead of `__uuidof`. For example:  
  
```  
StringFromCLSID(__LIBID_, &lpolestr);  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [Expressions with Unary Operators](../VS_visualcpp/Expressions-with-Unary-Operators.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)