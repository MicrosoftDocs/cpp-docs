---
title: "Linker Tools Warning LNK4075"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4075"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4075"
ms.assetid: f39ad3f9-c263-4cf0-9d70-259fc56ac96d
caps.latest.revision: 8
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Linker Tools Warning LNK4075
ignoring "option1" due to "option2" specification  
  
 The second option overrides the first.  
  
 Mutually exclusive linker options are being specified.  Examine your linker options.  Where linker options are specified depends on how you are building your project.  
  
-   If you are building in the development environment, look in the linker property pages for your project, and see where both linker options are being specified.  See [How to: Specify Project Properties with Property Pages](../notintoc/how-to--specify-project-properties-with-property-pages.md) for more information.  
  
-   If you build at the command line, look at the linker options specified there.  
  
-   If you build with build scripts, look through your scripts to see where these linker options are being specified.  
  
 When you find where the mutually exclusive linker options are specified, remove one of the linker options.  
  
 Some specific examples:  
  
-   If you link a module that was compiled with **/ZI**, which implies an internal linker option called /EDITANDCONTINUE, and a module that was compiled with /OPT:REF, /OPT:ICF, or /INCREMENTAL:NO, which imply no /EDITANDCONTINUE, you will get LNK4075.  See [/Z7, /Zi, /ZI (Debug Information Format)](../buildref/-z7---zi---zi--debug-information-format-.md) for more information.