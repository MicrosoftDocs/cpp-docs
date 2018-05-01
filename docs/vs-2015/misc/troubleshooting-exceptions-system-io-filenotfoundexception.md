---
title: "Troubleshooting Exceptions: System.IO.FileNotFoundException | Microsoft Docs"
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
  - "FileNotFoundException class"
  - "System.IO.FileNotFoundException exception"
ms.assetid: 6e5ab395-7c81-434e-835f-0fc792b9149d
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.IO.FileNotFoundException
A <xref:System.IO.FileNotFoundException> exception is thrown when an attempt is made to access a file or directory that does not exist on disk.  
  
## Associated Tips  
 **Verify that the file exists in the specified location.**  
 If the file does not exist, this exception is thrown. For more information, see <xref:Microsoft.VisualBasic.FileIO.FileSystem.FileExists%2A>.  
  
 **When using relative paths, make sure the current directory is correct.**  
 If you are assuming the current directory incorrectly, relative paths will be incorrect as well.  
  
## See Also  
 <xref:System.IO.FileNotFoundException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)