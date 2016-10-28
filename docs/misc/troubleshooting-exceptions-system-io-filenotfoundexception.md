---
title: "Troubleshooting Exceptions: System.IO.FileNotFoundException"
ms.custom: ""
ms.date: "10/19/2016"
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
# Troubleshooting Exceptions: System.IO.FileNotFoundException
A <xref:System.IO.FileNotFoundException> exception is thrown when an attempt is made to access a file or directory that does not exist on disk.  
  
## Associated Tips  
 **Verify that the file exists in the specified location.**  
 If the file does not exist, this exception is thrown. For more information, see <xref:Microsoft.VisualBasic.FileIO.FileSystem.FileExists*>.  
  
 **When using relative paths, make sure the current directory is correct.**  
 If you are assuming the current directory incorrectly, relative paths will be incorrect as well.  
  
## See Also  
 <xref:System.IO.FileNotFoundException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)