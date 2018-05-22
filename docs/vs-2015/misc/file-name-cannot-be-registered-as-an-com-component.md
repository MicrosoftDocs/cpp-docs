---
title: "File &lt;name&gt; cannot be registered as an COM component. | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VB_E_IDACANTREGTYPELIB"
  - "vs.message.0x800A0017"
ms.assetid: afaa12f4-db6a-475c-a572-3910250f0005
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# File &lt;name&gt; cannot be registered as an COM component.
The file cannot be added to the project's references. This error occurs when a file has been corrupted, does not contain type libraries, uses an incompatible file type, or when the system does not have enough resources to complete the operation.  
  
### To correct this error  
  
1.  Verify that the file contains a valid type library and try again.  
  
     —or—  
  
     Re-install the product that installed the file.  
  
    > [!NOTE]
    >  The product that installed the file may not be Visual Studio.  
  
## See Also  
 [Edit Custom Component Set Dialog Box](http://msdn.microsoft.com/en-us/dc995bd7-afbf-4389-ba1c-f377b677ded7)