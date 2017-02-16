---
title: "String::Concat Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::Concat"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::Concat"
ms.assetid: 68052d22-3df0-4777-828d-fc3a8e8a3ab7
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::Concat Method
Concatenates the values of two String objects.  
  
## Syntax  
  
```cpp  
  
String^ Concat( String ^ str1,   
String ^ str2  
)  
  
```  
  
#### Parameters  
 `str1`  
 The first String object, or `null`.  
  
 `str2`  
 The second String object, or `null`.  
  
## Return Value  
 A new String^ object whose value is the concatenation of the values of `str1` and `str2`.  
  
 If `str1` is `null` and `str2` is not, `str1` is returned. If `str2` is `null` and `str1` is not, `str2` is returned. If `str1` and `str2` are both `null`, the empty string (L"") is returned.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)