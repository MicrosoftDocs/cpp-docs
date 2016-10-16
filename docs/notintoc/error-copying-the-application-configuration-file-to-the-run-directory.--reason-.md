---
title: "Error copying the application configuration file to the run directory. &lt;reason&gt;"
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
  - "vs.tasklisterror.cant_copy_appcfg_file"
ms.assetid: 15699a76-16ef-40a8-8ed4-5eef4d2c0e72
caps.latest.revision: 7
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
# Error copying the application configuration file to the run directory. &lt;reason&gt;
The project system cannot copy an app.config file to the directory from which the project is being run. The build process will fail if this error occurs.  
  
 This error only occurs when building an .exe file.  
  
 The build system attempts to find a file called app.config in the root folder of the project. That file will then be copied into the project's output directory; its name in the output directory will be *outputfile.*config.  
  
 Reasons for this error include:  
  
-   out of disk space  
  
-   MAX_PATH exceeded  
  
 You may also want to make sure that there is not another copy of the application running.  
  
## See Also  
 [NIB How to: Modify Project Properties and Configuration Settings](assetId:///e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)