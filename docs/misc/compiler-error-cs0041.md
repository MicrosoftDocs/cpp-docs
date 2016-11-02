---
title: "Compiler Error CS0041 | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0041"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0041"
ms.assetid: 80dbfe00-8cdb-4275-9574-8a215c7139d6
caps.latest.revision: 16
ms.author: "wiwagn"
manager: "wpickett"
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
# Compiler Error CS0041
The fully qualified name for 'type' is too long for debug information. Compile without '/debug' option.  
  
 This error can occur when using the [/debug](/dotnet/csharp/language-reference/compiler-options/debug-compiler-option) compiler option. If you encounter this error, try to delete the PDB files in the bin directory and recompiling. If you are still encountering this error, you may have to repair or reinstall [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].