---
title: "Troubleshooting Exceptions: System.MissingMethodException | Microsoft Docs"
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
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "MissingMethodException class"
ms.assetid: 1ca4c351-ca26-4a6d-a5a1-c484ac193e2e
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.MissingMethodException
A <xref:System.MissingMethodException> exception is thrown when there is an attempt to dynamically access a method that does not exist.  
  
## Associated Tips  
 **If a method in a class library has been removed or renamed, recompile any assemblies that reference that method.**  
 This exception is typically thrown when an attempt is made to dynamically access a deleted or renamed method of an assembly that is not referenced by its strong name.  
  
## Remarks  
 If you are calling an unmanaged function, this exception is thrown if the CLR cannot find the module or function.  
  
## See Also  
 <xref:System.MissingMethodException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)   
 [Troubleshooting Interoperability](http://msdn.microsoft.com/library/b324cc1e-b03c-4f39-aea6-6a6d5bfd0e37)