---
title: "Compiler Error CS0167 | Microsoft Docs"
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
  - "CS0167"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0167"
ms.assetid: e6901b40-11a0-422c-9ea3-3b25c0ad7791
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0167
The delegate 'delegate' is missing the Invoke method  
  
 You imported and used a managed program (one that uses the .NET Framework common language runtime) that was created with another compiler. That compiler allowed an ill-formed [delegate](http://msdn.microsoft.com/library/0bb8cb6d-2f87-47c7-9d1f-d65c1cd01e9f). Therefore, the `Invoke` method was not available. For more information, see [Delegates](http://msdn.microsoft.com/library/97de039b-c76b-4b9c-a27d-8c1e1c8d93da).