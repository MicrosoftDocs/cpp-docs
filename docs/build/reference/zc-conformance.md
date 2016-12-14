---
title: "-Zc (Conformance) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/zc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc compiler options [C++]"
  - "-Zc compiler options [C++]"
  - "Conformance compiler options"
  - "Zc compiler options [C++]"
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
caps.latest.revision: 15
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
# /Zc (Conformance)
You can use the **/Zc** compiler options to specify standard or Microsoft-specific compiler behavior. Here are the **/Zc** compiler options:  
  
|Option|Behavior|
|---|---|
|[auto\[-\]](../../build/reference/zc-auto-deduce-variable-type.md)|Enforce the new Standard C++ meaning for `auto`.|  
|[forScope\[-\]](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md)|Enforce Standard C++ `for` scoping rules.|  
|[implicitNoexcept\[-\]](../../build/reference/zc-implicitnoexcept-implicit-exception-specifiers.md)|Enable implicit noexcept on required functions.|  
|[inline\[-\]](../../build/reference/zc-inline-remove-unreferenced-comdat.md)|Remove unreferenced function or data if it is COMDAT or has internal linkage only (off by default).|
|[referenceBinding\[-\]](zc-referencebinding-enforce-reference-binding-rules.md)|A UDT temporary will not bind to an non-const lvalue reference (off by default).|
|[rvalueCast\[-\]](../../build/reference/zc-rvaluecast-enforce-type-conversion-rules.md)|Enforce Standard C++ explicit type conversion rules.|  
|[sizedDealloc\[-\]]()|Enable C++14 global sized deallocation functions (on by default).|
|[strictStrings\[-\]](../../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md)|Disable string-literal to `char*` or `wchar_t*` conversion (off by default).|  
|[threadSafeInit\[-\]]()|Enable thread-safe local static initialization.|
|[throwingNew\[-\]]()|Assume `operator new` throws on failure (off by default).|
|[trigraphs\[-\]](../../build/reference/zc-trigraphs-trigraphs-substitution.md)|Enable trigraphs (obsolete, off by default).|  
|[wchar_t\[-\]](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md)|`wchar_t` is a native type, not a typedef.|  
  
For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)