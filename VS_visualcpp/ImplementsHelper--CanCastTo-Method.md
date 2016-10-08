---
title: "ImplementsHelper::CanCastTo Method"
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
ms.assetid: 9ae6fa17-d0b1-4e31-9ae5-da6ae4026e32
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
# ImplementsHelper::CanCastTo Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
  
HRESULT CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
  
HRESULT CanCastTo(  
   _In_ const IID &iid,  
   _Deref_out_ void **ppv  
);  
```  
  
#### Parameters  
 `riid`  
 Reference to an interface ID.  
  
 `ppv`  
 If this operation is successful, a pointer to the interface specified by `riid` or `iid`.  
  
 `iid`  
 Reference to an interface ID.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 Gets a pointer to the specified interface ID.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ImplementsHelper Structure](../VS_visualcpp/ImplementsHelper-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)