---
title: "Encoding cannot be set to Nothing"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 59f7c731-8291-4a85-bf51-c225e48cdc84
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
# Encoding cannot be set to Nothing
An attempt to read from or write to a file has failed because the parameter `encoding` has been set to `Nothing` but requires a valid value.  
  
 <xref:System.Text.Encoding> is used to determine what encoding to use when writing to a file. The default is UTF-8.  
  
### To correct this error  
  
-   Supply a valid value for the `encoding` parameter.  
  
## See Also  
 [File Encodings](../Topic/File%20Encodings%20\(Visual%20Basic\).md)   
 [Reading from Files](../Topic/Reading%20from%20Files%20in%20Visual%20Basic.md)   
 [Writing to Files](../Topic/Writing%20to%20Files%20in%20Visual%20Basic.md)   
 [My.Computer.FileSystem.ReadAllText Method](http://msdn.microsoft.com/en-us/3a7ac8be-fb1d-4087-bc65-167d6754d57f)   
 [My.Computer.FileSystem.WriteAllText Method](http://msdn.microsoft.com/en-us/f507460c-87d9-4504-b74f-3ff825c7d5c4)