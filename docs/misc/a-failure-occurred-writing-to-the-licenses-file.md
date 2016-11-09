---
title: "A failure occurred writing to the licenses file | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.fail_writing_licenses_file"
ms.assetid: 7ea1e2ac-fc94-4d53-8ce9-2ae31bcba85d
caps.latest.revision: 7
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
# A failure occurred writing to the licenses file
The transformed file could not be written to by the project system. As part of preparing licenses, the project system will transform text .licx files into binary licenses files that are understood by the [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] licensing system.  
  
 Possible reasons for this error include no disk space left on the device or exceeding the MAX_PATH limit for file names.  
  
 **To correct this error**  
  
-   Move the project to a different folder with a short absolute path name or shorten the output file name.  
  
     The build process will fail if this error occurs.  
  
## See Also  
 [How to: License Components and Controls](../Topic/How%20to:%20License%20Components%20and%20Controls.md)