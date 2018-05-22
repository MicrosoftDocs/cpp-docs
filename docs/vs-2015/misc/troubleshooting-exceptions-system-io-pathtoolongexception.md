---
title: "Troubleshooting Exceptions: System.IO.PathTooLongException | Microsoft Docs"
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
  - "PathTooLongException class"
ms.assetid: 8912c425-bf91-42e3-82d8-bee6b2062db3
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.IO.PathTooLongException
A <xref:System.IO.PathTooLongException> exception is thrown when a path name or file name is longer than the system-defined maximum length.  
  
## Associated Tips  
 **Make sure the path is not longer than the system-defined maximum.**  
 On Windows-based platforms, paths must be less than 248 characters, and file names must be less than 260 characters.  
  
## See Also  
 <xref:System.IO.PathTooLongException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)   
 [How to: Parse File Paths](http://msdn.microsoft.com/library/c1bd99c9-8160-456a-b5ab-60a49139b923)