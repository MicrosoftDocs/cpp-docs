---
title: "Compiler Error CS1542 | Microsoft Docs"
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
  - "CS1542"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1542"
ms.assetid: d7f60aa2-6645-472c-ac12-fa57a09fbd87
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1542
'dll' cannot be added to this assembly because it already is an assembly; use '/R' option instead  
  
 The file that was referenced with the [/addmodule](http://msdn.microsoft.com/library/ed604546-0dc2-4bd4-9a3e-610a8d973e58) compiler option was not built with [/target:module](http://msdn.microsoft.com/library/9af1e4fa-c749-44e7-ae58-90a3d05d4e72); use [/reference](http://msdn.microsoft.com/library/8d13e5b0-abf6-4c46-bf71-2daf2cd0a6c4) to reference the file in this compilation.