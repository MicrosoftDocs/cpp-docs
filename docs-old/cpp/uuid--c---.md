---
title: "uuid (C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "uuid"
  - "uuid_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec keyword [C++], uuid"
  - "uuid __declspec keyword"
ms.assetid: 9d004621-09bc-4a8d-871b-648f5d5102d7
caps.latest.revision: 7
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
# uuid (C++)
**Microsoft Specific**  
  
 The compiler attaches a GUID to a class or structure declared or defined (full COM object definitions only) with the `uuid` attribute.  
  
## Syntax  
  
```  
  
__declspec( uuid("  
ComObjectGUID  
") ) declarator  
```  
  
## Remarks  
 The `uuid` attribute takes a string as its argument. This string names a GUID in normal registry format with or without the **{ }** delimiters. For example:  
  
```  
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) IUnknown;  
struct __declspec(uuid("{00020400-0000-0000-c000-000000000046}")) IDispatch;  
```  
  
 This attribute can be applied in a redeclaration. This allows the system headers to supply the definitions of interfaces such as **IUnknown**, and the redeclaration in some other header (such as COMDEF.H) to supply the GUID.  
  
 The keyword [__uuidof](../cpp/__uuidof-operator.md) can be applied to retrieve the constant GUID attached to a user-defined type.  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../cpp/__declspec.md)   
 [Keywords](../cpp/keywords--c---.md)