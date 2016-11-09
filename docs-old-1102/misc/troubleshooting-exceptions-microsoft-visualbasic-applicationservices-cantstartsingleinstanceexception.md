---
title: "Troubleshooting Exceptions: Microsoft.VisualBasic.ApplicationServices.CantStartSingleInstanceException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "CantStartSingleInstanceException exception"
  - "Microsoft.VisualBasic.ApplicationServices.CantStartSingleInstanceException exception"
ms.assetid: 3639f15d-9547-43da-8145-60da34782991
caps.latest.revision: 8
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
# Troubleshooting Exceptions: Microsoft.VisualBasic.ApplicationServices.CantStartSingleInstanceException
The exception that is thrown when the second instance of a single-instance application could not connect to the original instance.  
  
## Remarks  
 Possible causes for this problem include:  
  
-   The original instance stopped responding.  
  
-   The application does not have permissions to create kernel objects.  
  
     The base name for the kernel objects comes from concatenating the assembly's GUID, major version number, and minor version number. For example, the base name could be 3639f15d-9547-43da-8145-60da347829915.1.  
  
## See Also  
 <xref:Microsoft.VisualBasic.ApplicationServices.CantStartSingleInstanceException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)