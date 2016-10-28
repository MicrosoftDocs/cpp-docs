---
title: "Compiler Warning (level 1) CS3004"
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
  - "CS3004"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3004"
ms.assetid: 84aa3b44-42b7-4d31-82b8-386e56f88129
caps.latest.revision: 9
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
# Compiler Warning (level 1) CS3004
Mixed and decomposed Unicode characters are not CLS-compliant  
  
 Only composed UNICODE characters are allowed in [public](../Topic/public%20\(C%23%20Reference\).md), [protected](../Topic/protected%20\(C%23%20Reference\).md), or `protected``internal` identifiers in order to be compliant with the Common Language Specification (CLS). For more information on CLS Compliance, see [Writing CLS-Compliant Code](assetId:///4c705105-69a2-4e5e-b24e-0633bc32c7f3) and [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).