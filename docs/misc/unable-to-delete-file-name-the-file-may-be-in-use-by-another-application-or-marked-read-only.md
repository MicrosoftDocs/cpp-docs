---
title: "Unable to delete file &lt;name&gt;. The file may be in use by another application or marked read-only. | Microsoft Docs"
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
  - "vs.message.VB_E_DELETEFILEFAILED"
  - "vs.message.0x800A00A2"
ms.assetid: 5c425dca-1d28-47a8-a11c-6a890be10baf
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
# Unable to delete file &lt;name&gt;. The file may be in use by another application or marked read-only.
This error generally occurs when the keyboard scheme selected to be deleted is either in use or is read-only.  
  
### To correct this error  
  
1.  If another application is using the specified file, close that application  
  
     —or—  
  
     If the file is read-only, remove the read-only attribute. You can modify the read-only attribute in the Properties dialog box for the file, available in File Explorer.  
  
## See Also  
 [Identifying and Customizing Keyboard Shortcuts](/visual-studio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio)