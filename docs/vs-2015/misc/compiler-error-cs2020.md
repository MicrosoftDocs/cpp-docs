---
title: "Compiler Error CS2020 | Microsoft Docs"
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
  - "CS2020"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2020"
ms.assetid: b2db7a05-5965-4a9b-86c3-0c4792b29a6c
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS2020
Only the first set of input files can build a target other than 'module'  
  
 In a multi-output compilation, the first output file must be built with [/target:exe](http://msdn.microsoft.com/library/bda5717d-1b91-4848-956b-fcf85c30e432), [/target:winexe](http://msdn.microsoft.com/library/b5a0619c-8caa-46a5-a743-1cf68408ad7a), or [/target:library](http://msdn.microsoft.com/library/c5670e88-2126-47c1-8d1c-217923837d17). Any subsequent output files must be built with [/target:module](http://msdn.microsoft.com/library/9af1e4fa-c749-44e7-ae58-90a3d05d4e72).