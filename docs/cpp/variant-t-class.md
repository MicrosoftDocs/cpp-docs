---
title: "_variant_t Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Variant"
  - "_variant_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_variant_t class, operators"
  - "_variant_t class"
  - "_variant_t class, member functions"
  - "VARIANT object"
  - "VARIANT object, COM encapsulation"
ms.assetid: 6a3cbd4e-0ae8-425e-b4cf-ca0df894c93f
caps.latest.revision: 10
author: "mikeblome"
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
# _variant_t Class
**Microsoft Specific**  
  
 A `_variant_t` object encapsulates the `VARIANT` data type. The class manages resource allocation and deallocation and makes function calls to **VariantInit** and **VariantClear** as appropriate.  
  
### Construction  
  
|||  
|-|-|  
|[_variant_t](../cpp/variant-t-variant-t.md)|Constructs a `_variant_t` object.|  
  
### Operations  
  
|||  
|-|-|  
|[Attach](../cpp/variant-t-attach.md)|Attaches a **VARIANT** object into the `_variant_t` object.|  
|[Clear](../cpp/variant-t-clear.md)|Clears the encapsulated **VARIANT** object.|  
|[ChangeType](../cpp/variant-t-changetype.md)|Changes the type of the `_variant_t` object to the indicated **VARTYPE**.|  
|[Detach](../cpp/variant-t-detach.md)|Detaches the encapsulated **VARIANT** object from this `_variant_t` object.|  
|[SetString](../cpp/variant-t-setstring.md)|Assigns a string to this `_variant_t` object.|  
  
### Operators  
  
|||  
|-|-|  
|[Operator =](../cpp/variant-t-operator-equal.md)|Assigns a new value to an existing `_variant_t` object.|  
|[operator ==, !=](../cpp/variant-t-relational-operators.md)|Compare two `_variant_t` objects for equality or inequality.|  
|[Extractors](../cpp/variant-t-extractors.md)|Extract data from the encapsulated **VARIANT** object.|  
  
## END Microsoft Specific  
  
## Requirements  
 **Header:** comutil.h  
  
 **Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) for more information)  
  
## See Also  
 [Compiler COM Support Classes](../cpp/compiler-com-support-classes.md)