---
title: "InvokeHelper::Invoke Method"
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
ms.assetid: 98618815-c30e-4699-b3dd-203c91b1bf3b
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# InvokeHelper::Invoke Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
STDMETHOD(  
   Invoke  
)();  
STDMETHOD(  
   Invoke  
)(typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
```  
  
#### Parameters  
 `arg1`  
 Argument 1.  
  
 `arg2`  
 Argument 2.  
  
 `arg3`  
 Argument 3.  
  
 `arg4`  
 Argument 4.  
  
 `arg5`  
 Argument 5.  
  
 `arg6`  
 Argument 6.  
  
 `arg7`  
 Argument 7.  
  
 `arg8`  
 Argument 8.  
  
 `arg9`  
 Argument 9.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the error.  
  
## Remarks  
 Calls the event handler whose signature contains the specified number of arguments.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [InvokeHelper Structure](../VS_visualcpp/InvokeHelper-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)