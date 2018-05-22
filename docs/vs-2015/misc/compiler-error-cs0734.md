---
title: "Compiler Error CS0734 | Microsoft Docs"
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
  - "CS0734"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0734"
ms.assetid: 9e1b0e49-bfc3-400c-9fd1-37e3c827e656
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0734
The /moduleassemblyname option may only be specified when building a target type of 'module'  
  
 The compiler option **/moduleassemblyname** should only be used when building a .netmodule. See [/moduleassemblyname (C# Compiler Option)](http://msdn.microsoft.com/library/d464d9b9-f18d-423b-95e9-66c7878fd53a) for more information.  
  
 For more information on building a .netmodule, see [/target:module (C# Compiler Options)](http://msdn.microsoft.com/library/9af1e4fa-c749-44e7-ae58-90a3d05d4e72).  
  
## Example  
 The following sample generates CS0734. To resolve, add **/target:module** to the compilation.  
  
```  
// CS0734.cs  
// compile with: /moduleassemblyname:A  
// CS0734 expected  
public class Test {}  
```