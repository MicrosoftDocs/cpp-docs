---
title: "At least one startup service is missing the &#39;attribute&#39; attribute"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.projfile_missing_ss_attrib"
ms.assetid: 987c42dc-4394-4b07-b7fa-a8e7afc6fdfb
caps.latest.revision: 6
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
# At least one startup service is missing the &#39;attribute&#39; attribute
A startup service requires the ID attribute, which was not found on a `<Service>` element. For example:  
  
```  
<Service ID="{0000-0000-0000-00000000-000000000000}"/>  
```  
  
 This indicates that the project file is corrupt.  
  
 This error is most likely caused by editing the project file by hand.  
  
 **To correct this error**  
  
-   Save the project file.  
  
     The defective section will not be written out and this error will not occur the next time you open the project.  
  
## See Also  
 [NIB: Project Properties (Visual Studio)](http://msdn.microsoft.com/en-us/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)