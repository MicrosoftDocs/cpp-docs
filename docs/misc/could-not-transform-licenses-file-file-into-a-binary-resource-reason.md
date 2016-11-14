---
title: "Could not transform licenses file &#39;file&#39; into a binary resource. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.licx_generator_failed"
ms.assetid: 875e948c-d7a3-4ffc-be0d-f341de5f6310
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
# Could not transform licenses file &#39;file&#39; into a binary resource. &lt;reason&gt;
The licenses processor used to transform .licx files into binary resources failed for some reason.  
  
 This error is typically caused by a bad .licx file. For example, the file may have been opened and modified in a text editor.  
  
 The build process will fail if this error occurs.  
  
### To correct this error  
  
1.  Select the project in Solution Explorer.  
  
2.  From the **Project** menu, click **Show All Files**.  
  
3.  In the Solution Explorer, expand the obj folder, and then expand the **Debug** folder.  
  
4.  Locate the file named "myApplication.exe.licenses" where myApplication is the name of your Windows Forms application.  
  
5.  Delete this file and rebuild the solution.  
  
## See Also  
 [How to: License Components and Controls](../Topic/How%20to:%20License%20Components%20and%20Controls.md)