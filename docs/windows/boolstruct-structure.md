---
title: "BoolStruct Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "internal/Microsoft::WRL::Details::BoolStruct"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BoolStruct structure"
ms.assetid: 666eae78-e81d-4fb7-a9e4-1ba617d6d4cd
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
# BoolStruct Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
struct BoolStruct;  
```  
  
## Remarks  
 The BoolStruct structure defines whether a ComPtr is managing the object lifetime of an interface. BoolStruct is used internally by the [BoolType()](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md) operator.  
  
## Members  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[BoolStruct::Member Data Member](../windows/boolstruct-member-data-member.md)|Specifies that a [ComPtr](../windows/comptr-class.md) is, or is not, managing the object lifetime of an interface.|  
  
## Inheritance Hierarchy  
 `BoolStruct`  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)   
 [ComPtr::operator Microsoft::WRL::Details::BoolType Operator](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)