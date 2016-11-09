---
title: "MSBuild Error MSB8031"
ms.custom: ""
ms.date: "10/26/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSB8031"
ms.assetid: ebfaca51-fd91-4b04-8194-b4fdededd5fe
caps.latest.revision: 4
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
# MSBuild Error MSB8031
MSB8031  
  
 To use MBCS encoding in MFC projects, you must download and install an additional library.  
  
 MBCS versions of the MFC DLLs are not included in Visual Studio, but they're available in the MFC MBCS DLL Add-on, which you can download if you're a Visual Studio customer. If you don't install the add-on and try to build an MFC project that uses the MBCS character set, the linker won’t find the DLLs and the build will fail.  
  
### To correct this error  
  
1.  [Download the MBCS MFC DLL Add-on](http://go.microsoft.com/fwlink/?LinkId=299009) from the MSDN Download Center, or if it is practical to do so, convert your project to the UNICODE character set.  
  
## See Also  
 [MFC MBCS DLL Add-on](../mfc/mfc-mbcs-dll-add-on.md)