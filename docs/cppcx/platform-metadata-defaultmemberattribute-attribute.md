---
title: "Platform::Metadata::DefaultMemberAttribute Attribute | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "VCCORLIB/Platform::Metadata::DefaultMemberAttribute"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Metadata::DefaultMemberAttribute Attribute"
ms.assetid: d8abda01-c257-4371-aec4-541d4825e0af
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Metadata::DefaultMemberAttribute Attribute
Indicates the preferred function to invoke among several possible overloaded functions.  
  
## Syntax  
  
```cpp  
  
public ref class DefaultMember abstract : Attribute  
```  
  
## Inheritance  
 [Platform::Object](../cppcx/platform-object-class.md)   
  
 [Platform::Metadata::Attribute](../cppcx/platform-metadata-attribute-attribute.md)  
  
### Remarks  
 Apply the DefaultMember attribute to a method that will be consumed by a JavaScript application.  
  
### Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform::Metadata  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::Metadata Namespace](../cppcx/platform-metadata-namespace.md)