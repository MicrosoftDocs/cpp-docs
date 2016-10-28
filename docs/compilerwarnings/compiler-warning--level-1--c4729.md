---
title: "Compiler Warning (Level 1) C4729"
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
  - "C4729"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4729"
ms.assetid: 36a0151f-f258-48d9-9444-ae6d41ff70a4
caps.latest.revision: 7
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
# Compiler Warning (Level 1) C4729
function too big for flow graph based warnings  
  
 This warning is generated when a function is too big to be compiled with reliable checking for situations that would generate a warning. This warning is only generated when the [/Od](../buildref/-od--disable--debug--.md) compiler option used.  
  
 To resolve this warning, break the function into smaller functions.