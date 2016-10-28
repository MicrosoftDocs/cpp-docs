---
title: "How to: Use the Windows ReadFile Function (C# Programming Guide)"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "ReadFile function [C#]"
ms.assetid: 46bb53e0-a658-48c9-ae36-6720da7781c1
caps.latest.revision: 18
ms.author: "billchi"
manager: "douge"
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
# How to: Use the Windows ReadFile Function (C# Programming Guide)
This example demonstrates the Windows `ReadFile` function by reading and displaying a text file. The `ReadFile` function requires the use of `unsafe` code because it requires a pointer as a parameter.  
  
 The byte array passed into the `Read` function is a managed type. This means that the common language runtime (CLR) garbage collector could relocate the memory used by the array at will. To prevent this, [fixed](../Topic/fixed%20Statement%20\(C%23%20Reference\).md) is used to get a pointer to the memory and mark it so that the garbage collector will not move it. At the end of the `fixed` block, the memory automatically returns to being subject to moving through garbage collection.  
  
 This capability is known as *declarative pinning*. With pinning, there is very little overhead unless a garbage collection occurs in the `fixed` block, which is an unlikely occurrence. However, pinning can lead to some undesirable side effects during the global garbage collection runs. The garbage collector's ability to compact memory is greatly limited by pinned buffers. Therefore, pinning should be avoided if at all possible.  
  
## Example  
 [!code[csProgGuidePointers#2](../notintoc/codesnippet/CSharp/how-to--use-the-windows-readfile-function--csharp-programming-guide-_1.cs)]  
  
## See Also  
 [C# Programming Guide](../Topic/C%23%20Programming%20Guide.md)   
 [C# Reference](../Topic/C%23%20Reference.md)   
 [Unsafe Code and Pointers](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md)   
 [Pointer types](../Topic/Pointer%20types%20\(C%23%20Programming%20Guide\).md)   
 [Garbage Collection](../Topic/Garbage%20Collection.md)