---
title: "Serialization (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "serialization [C++]"
  - "SerializableAttribute class, managed applications"
  - "NonSerializedAttribute class, managed applications"
  - "managed code [C++], serializing"
  - ".NET Framework [C++], serialization"
  - "serialization [C++], about serialization"
ms.assetid: 869010ca-74e1-4989-b409-4643cdb94084
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Serialization (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Serialization (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/serialization-cpp-cli).  
  
  
Serialization (the process of storing the state of an object or member to a permanent medium) of managed classes (including individual fields or properties) is supported by the <xref:System.SerializableAttribute> and <xref:System.NonSerializedAttribute> classes.  
  
## Remarks  
 Apply the **SerializableAttribute** custom attribute to a managed class to serialize the entire class or apply only to specific fields or properties to serialize parts of the managed class. Use the **NonSerializedAttribute** custom attribute to exempt fields or properties of a managed class from being serialized.  
  
## Example  
  
### Description  
 In the following example, the class `MyClass` (and the property `m_nCount`) is marked as serializable. However, the `m_nData` property is not serialized as indicated by the **NonSerialized** custom attribute:  
  
### Code  
  
```  
// serialization_and_mcpp.cpp  
// compile with: /LD /clr  
using namespace System;  
  
[ Serializable ]  
public ref class MyClass {  
public:  
   int m_nCount;  
private:  
   [ NonSerialized ]  
   int m_nData;  
};  
```  
  
### Comments  
 Note that both attributes can be referenced using their "short name" (**Serializable** and **NonSerialized**). This is further explained in [Applying Attributes](../Topic/Applying%20Attributes.md).  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

