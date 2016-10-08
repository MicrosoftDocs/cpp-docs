---
title: "Serialization (C++-CLI)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: Serialization (C++/CLI)
ms.assetid: 869010ca-74e1-4989-b409-4643cdb94084
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Serialization (C++-CLI)
Serialization (the process of storing the state of an object or member to a permanent medium) of managed classes (including individual fields or properties) is supported by the <xref:System.SerializableAttribute?qualifyHint=False> and <xref:System.NonSerializedAttribute?qualifyHint=False> classes.  
  
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
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)