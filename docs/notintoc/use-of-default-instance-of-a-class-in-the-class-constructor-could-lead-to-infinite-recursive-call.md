---
title: "Use of Default Instance of a class in the class constructor could lead to infinite recursive call"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 9645b47f-7de5-46d0-bb45-d5fdaa8aaa2a
caps.latest.revision: 13
ms.author: "billchi"
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
# Use of Default Instance of a class in the class constructor could lead to infinite recursive call
A default instance of a class has been used in the constructor of the class. This can lead to an infinite recursive call, also known as an infinite loop.  
  
### To correct this error  
  
-   Remove the default instance from the class constructor.  
  
## See Also  
 [NOT IN BUILD: Using Constructors and Destructors](assetId:///548eebe1-86c4-4377-b2f5-447cb8be3d90)