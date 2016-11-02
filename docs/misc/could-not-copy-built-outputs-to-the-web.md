---
title: "Could not copy built outputs to the Web | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cantcopyoutputstoweb"
ms.assetid: 59cf714b-cf7d-4df9-81ae-d3254969d5bc
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
# Could not copy built outputs to the Web
The project system could not copy one or more build output files (for example, the built DLL, PDB, or satellite assemblies) to the Web server.  
  
 This error indicates that one or more build output files were not copied to the Web server.  
  
 This error commonly occurs if an output file of the build is locked or read-only on the server. If a file is locked on the server, it indicates that the [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)] runtime did not properly copy the assemblies, satellites, or debug symbols that are currently on the server.  
  
 It is also possible that the server may be out of disk space or that network problems may be preventing [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] from uploading the files to the Web.  
  
### To correct this error  
  
1.  Check for disk space.  
  
2.  If a file is locked, then restart the Web server in order to release [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)]'s lock on the affected file(s).  
  
## See Also  
 [PDB Files](http://msdn.microsoft.com/en-us/1761c84e-8c2c-4632-9649-b5f99964ed3f)