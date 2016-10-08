---
title: "SimpleActivationFactory::ActivateInstance Method"
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
ms.assetid: 4f836e51-5a6c-4bad-b871-9f25199298b4
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
# SimpleActivationFactory::ActivateInstance Method
Creates an instance of the specified interface.  
  
## Syntax  
  
```  
STDMETHOD(  
   ActivateInstance  
)(_Deref_out_ IInspectable **ppvObject);  
```  
  
#### Parameters  
 `ppvObject`  
 When this operation completes, pointer to an instance of the object specified by the `Base` class template parameter.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 If __WRL_STRICT\_\_ is defined, an assert error is emitted if the base class specified in the class template parameter isn't derived from [RuntimeClass](../VS_visualcpp/RuntimeClass-Class.md), or isn't configured with the WinRt or WinRtClassicComMix [RuntimeClassType](../VS_visualcpp/RuntimeClassType-Enumeration.md) enumeration value.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [SimpleActivationFactory Class](../VS_visualcpp/SimpleActivationFactory-Class.md)