---
title: "ChainInterfaces::FillArrayWithIid Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::ChainInterfaces::FillArrayWithIid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FillArrayWithIid method"
ms.assetid: f1ce699c-dfb6-40a9-9ea0-e6703d3cf971
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
# ChainInterfaces::FillArrayWithIid Method
Stores the interface ID defined by the `I0` template parameter into a specified location in a specified array of interface IDs.  
  
## Syntax  
  
```  
__forceinline static void FillArrayWithIid(  
   _Inout_ unsigned long &index,  
   _In_ IID* iids  
);  
```  
  
#### Parameters  
 `index`  
 Pointer to an index value into the `iids` array.  
  
 `iids`  
 An array of interface IDs.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ChainInterfaces Structure](../windows/chaininterfaces-structure.md)