---
title: "Compiler Error CS0167"
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
  - "CS0167"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0167"
ms.assetid: e6901b40-11a0-422c-9ea3-3b25c0ad7791
caps.latest.revision: 8
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
# Compiler Error CS0167
The delegate 'delegate' is missing the Invoke method  
  
 You imported and used a managed program (one that uses the .NET Framework common language runtime) that was created with another compiler. That compiler allowed an ill-formed [delegate](../Topic/delegate%20\(C%23%20Reference\).md). Therefore, the `Invoke` method was not available. For more information, see [Delegates](../Topic/Delegates%20\(C%23%20Programming%20Guide\).md).