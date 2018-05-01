---
title: "Compiler Error CS1605 | Microsoft Docs"
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
  - "CS1605"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1605"
ms.assetid: a202d3a9-9777-4902-a7b9-1628640f9433
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1605
Cannot pass 'var' as a ref or out argument because it is read-only  
  
 A variable passed as a [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) parameter is expected to be modified in the called method. Therefore, it is not possible to pass a read-only parameter as `ref` or `out`.