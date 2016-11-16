---
title: "SimpleActivationFactory::ActivateInstance Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::SimpleActivationFactory::ActivateInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActivateInstance method"
ms.assetid: 4f836e51-5a6c-4bad-b871-9f25199298b4
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
 If __WRL_STRICT\_\_ is defined, an assert error is emitted if the base class specified in the class template parameter isn't derived from [RuntimeClass](../windows/runtimeclass-class.md), or isn't configured with the WinRt or WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeration value.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [SimpleActivationFactory Class](../windows/simpleactivationfactory-class.md)