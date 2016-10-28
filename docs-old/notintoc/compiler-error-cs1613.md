---
title: "Compiler Error CS1613"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS1613"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1613"
ms.assetid: 9d7ea9c8-9953-459f-a3f0-c7e65d1b9f59
caps.latest.revision: 7
ms.author: "billchi"
manager: "douge"
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
# Compiler Error CS1613
The managed coclass wrapper class 'class' for interface 'interface' cannot be found (are you missing an assembly reference?)  
  
 An attempt was made to instantiate a COM object from an interface. The interface has the **ComImport** and `CoClass` attributes, but the compiler cannot find the type given for the `CoClass` attribute.  
  
 To resolve this error, you can try one of the following:  
  
-   Add a reference to the assembly that has the coclass (most of the time the interface and coclass should be in the same assembly). See [/reference](../Topic/-reference%20\(C%23%20Compiler%20Options\).md) or [Add Reference Dialog Box](assetId:///2feb0fe2-0805-4cc9-8cba-b0315849dfb7) for information.  
  
-   Fix the `CoClass` attribute on the interface.  
  
 The following sample demonstrates correct usage of **CoClassAttribute**:  
  
```  
// CS1613.cs  
using System;  
using System.Runtime.InteropServices;  
  
[Guid("1FFD7840-E82D-4268-875C-80A160C23296")]  
[ComImport()]  
[CoClass(typeof(A))]  
public interface IA{}  
public class A : IA {}  
  
public class AA  
{  
   public static void Main()  
   {  
      IA i;  
      i = new IA(); // This is equivalent to new A().  
                    // because of the CoClass attribute on IA  
   }  
}  
```