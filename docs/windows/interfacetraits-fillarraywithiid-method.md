---
title: "InterfaceTraits::FillArrayWithIid Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::InterfaceTraits::FillArrayWithIid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FillArrayWithIid method"
ms.assetid: 73583177-adc9-4fcb-917d-fa7e6d07c990
caps.latest.revision: 5
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
# InterfaceTraits::FillArrayWithIid Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
__forceinline static void FillArrayWithIid(  
   _Inout_ unsigned long &index,  
   _In_ IID* iids  
);  
  
```  
  
#### Parameters  
 `index`  
 Pointer to a field that contains a zero-based index value.  
  
 `iids`  
 An array of interface IDs.  
  
## Remarks  
 Assigns the interface ID of `Base` to the array element specified by the index argument.  
  
 Contrary to the name of this API, only one array element is modified; not the entire array.  
  
 For more information about `Base`, see the Public Typedefs section in [InterfaceTraits Structure](../windows/interfacetraits-structure.md).  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [InterfaceTraits Structure](../windows/interfacetraits-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)