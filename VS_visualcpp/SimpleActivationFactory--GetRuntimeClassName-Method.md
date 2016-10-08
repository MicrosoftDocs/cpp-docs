---
title: "SimpleActivationFactory::GetRuntimeClassName Method"
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
ms.assetid: 3aa07487-9a42-46f8-8893-37ba6315e50b
caps.latest.revision: 3
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
# SimpleActivationFactory::GetRuntimeClassName Method
Gets the runtime class name of an instance of the class specified by the `Base` class template parameter.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetRuntimeClassName  
)(_Out_ HSTRING* runtimeName);  
```  
  
#### Parameters  
 `runtimeName`  
 When this operation completes, the runtime class name.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 If __WRL_STRICT\_\_ is defined, an assert error is emitted if the class specified by the `Base` class template parameter isn't derived from [RuntimeClass](../VS_visualcpp/RuntimeClass-Class.md), or isn't configured with the WinRt or WinRtClassicComMix [RuntimeClassType](../VS_visualcpp/RuntimeClassType-Enumeration.md) enumeration value.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [SimpleActivationFactory Class](../VS_visualcpp/SimpleActivationFactory-Class.md)