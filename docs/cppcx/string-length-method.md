---
title: "String::Length Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::Length"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::Length"
ms.assetid: 92376897-1bf2-4b7a-9298-d2d3f05d8d6b
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::Length Method
Retrieves the number of characters in the current String object.  
  
## Syntax  
  
```cpp  
  
unsigned int Length()  
```  
  
## Return Value  
 The number of characters in the current String object.  
  
## Remarks  
 The length of a String with no characters is zero. The length of the following string is 5:  
  
```  
  
String^ str = "Hello";  
int len = str->Length(); //len = 5  
```  
  
 The character array returned by the [String::Data Method](../cppcx/string-data-method.md) has one additional character, which is the terminating NULL or ‘\0’. This character is also two bytes long.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)