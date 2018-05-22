---
title: "How to: Use the Windows ReadFile Function (C# Programming Guide) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "ReadFile function [C#]"
ms.assetid: 46bb53e0-a658-48c9-ae36-6720da7781c1
caps.latest.revision: 18
author: "BillWagner"
ms.author: "billchi"
manager: "douge"
---
# How to: Use the Windows ReadFile Function (C# Programming Guide)
This example demonstrates the Windows `ReadFile` function by reading and displaying a text file. The `ReadFile` function requires the use of `unsafe` code because it requires a pointer as a parameter.  
  
 The byte array passed into the `Read` function is a managed type. This means that the common language runtime (CLR) garbage collector could relocate the memory used by the array at will. To prevent this, [fixed](http://msdn.microsoft.com/library/7ea6db08-ad49-4a7a-b934-d8c4acad1c3a) is used to get a pointer to the memory and mark it so that the garbage collector will not move it. At the end of the `fixed` block, the memory automatically returns to being subject to moving through garbage collection.  
  
 This capability is known as *declarative pinning*. With pinning, there is very little overhead unless a garbage collection occurs in the `fixed` block, which is an unlikely occurrence. However, pinning can lead to some undesirable side effects during the global garbage collection runs. The garbage collector's ability to compact memory is greatly limited by pinned buffers. Therefore, pinning should be avoided if at all possible.  
  
## Example  
 [!code-csharp[csProgGuidePointers#2](../snippets/csharp/VS_Snippets_VBCSharp/csProgGuidePointers/CS/Pointers.cs#2)]  
  
## See Also  
 [C# Programming Guide](http://msdn.microsoft.com/library/ac0f23a2-6bf3-4077-be99-538ae5fd3bc5)   
 [C# Reference](http://msdn.microsoft.com/library/06de3167-c16c-4e1a-b3c5-c27841d4569a)   
 [Unsafe Code and Pointers](http://msdn.microsoft.com/library/b0fcca10-a92d-4f2a-835b-b0ccae6739ee)   
 [Pointer types](http://msdn.microsoft.com/library/3319faf9-336d-4148-9af2-1da2579cdd1e)   
 [Garbage Collection](http://msdn.microsoft.com/library/22b6cb97-0c80-4eeb-a2cf-5ed7655e37f9)