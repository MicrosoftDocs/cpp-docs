---
title: "Linker Tools Error LNK1107 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1107"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1107"
ms.assetid: a37a893d-5efa-4eba-8f40-6c5518b4b9d0
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Linker Tools Error LNK1107
invalid or corrupt file: cannot read at location  
  
 The tool could not read the file. Recreate the file.  
  
 LNK1107 could also occur if you attempt to pass a module (.dll or .netmodule extension created with [/clr:noAssembly](../../build/reference/clr-common-language-runtime-compilation.md) or  [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)) to the linker; pass the .obj file instead.  
  
 If you compile the following sample:  
  
```  
// LNK1107.cpp  
// compile with: /clr /LD  
public ref class MyClass {  
public:  
   void Test(){}  
};  
```  
  
 and then specify **link LNK1107.dll** on the command line, you will get LNK1107.  To resolve the error, specify **link LNK1107.obj** instead.