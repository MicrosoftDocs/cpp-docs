---
title: "Visual Studio is waiting for an operation to complete. If you regularly encounter this delay during normal usage please report this problem to Microsoft. | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.0x800A002A"
  - "vs.message.VB_E_IDWOLENOTRESPONDING"
ms.assetid: 0a4efbb7-72de-43a8-a51a-4a7a24ec743a
caps.latest.revision: 10
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
# Visual Studio is waiting for an operation to complete. If you regularly encounter this delay during normal usage please report this problem to Microsoft.
The server application has not completed the current request.  
  
 This error might also be caused by antivirus software blocking some devenv.exe processes. Several features in the product use scripts, and these scripts might be blocked by antivirus software. For related information, see "PRB: Visual IDE does not open when started or application cannot start error message" online at [http://support.microsoft.com/default.aspx?scid=kb;en-us;306905&Product=vsnet](http://support.microsoft.com/default.aspx?scid=kb;en-us;306905&Product=vsnet).  
  
### To correct this error  
  
-   Choose Switch To to open the application and investigate the problem.  
  
     —or—  
  
     Choose Retry to wait for the server application to finish processing the request.  
  
### To correct antivirus related errors  
  
-   In your antivirus software, specify that the software should allow scripts that originate from devenv.exe to run. For detailed instructions, see the product documentation for the antivirus software.