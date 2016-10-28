---
title: "Compiler Error C2241"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C2241"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2241"
ms.assetid: 2f4e2c2c-b95c-4afe-bbe0-4214cd39d140
caps.latest.revision: 6
ms.author: "corob"
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
# Compiler Error C2241
'identifier' : member access is restricted  
  
 Code attempts to access a private or protected member.  
  
### To fix by using the following possible solutions  
  
1.  Change the access level of the member.  
  
2.  Declare the member a `friend` of the accessing function.