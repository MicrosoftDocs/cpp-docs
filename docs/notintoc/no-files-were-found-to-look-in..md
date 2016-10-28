---
title: "No files were found to look in."
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
  - "vs.message.VS_E_FRLookInEmpty"
  - "vs.message.0x800A00DE"
ms.assetid: d560aef3-7a55-4fbb-a541-1a43fc13c18b
caps.latest.revision: 8
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
# No files were found to look in.
This error generally occurs when a file name or directory has been specified in the Look in list and that file name or directory does not exist or cannot be found. This error can also appear if you specify a valid directory that does not contain the file extension specified in the File types list or the directory specified does not contain any files. The error can also appear when searching in a directory with the `Hidden` or `System` attribute set.  
  
### To correct this error  
  
1.  Use the **Custom Directory Set** dialog box to browse to the directory or file name to search rather than typing in the path or file name. You can access the **Custom Directory Set** dialog box by choosing the ellipsis button next to the **Look in** list.  
  
2.  Change the file extension specified in the **File types** list to *.\* to search all files in the specified directory.  
  
### To bypass this error  
  
1.  Hold down the CTRL key and press ScrLk.  
  
     This cancels the dialog.  
  
## See Also  
 [Finding and Replacing Text](../Topic/Finding%20and%20Replacing%20Text.md)   
 [Find in Files](../Topic/Find%20in%20Files.md)   
 [Choose Search Folders](assetId:///85af6458-dcde-4a84-9ea4-f5cc6550dc80)