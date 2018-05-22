---
title: "Troubleshooting Exceptions: System.MissingMemberException | Microsoft Docs"
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
  - "MissingMemberException class"
ms.assetid: c4cf497b-0554-47fe-b2e9-81ee3eb9ec04
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.MissingMemberException
A <xref:System.MissingMemberException> exception is thrown when there is an attempt to dynamically access a class member that does not exist.  
  
## Associated Tips  
 **If a member in a class library has been removed or renamed, recompile any assemblies that reference that library.**  
 This exception is typically thrown when a field or method is deleted or renamed in one assembly, and the change is not reflected in a second assembly that is trying to access the missing member.  
  
 **If you are attempting to access members on a late-bound object variable, make sure it is declared Public.**  
 `Protected`, `Friend`, and `Private` variables cannot be late-bound in Visual Basic.  
  
## See Also  
 <xref:System.MissingMemberException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)