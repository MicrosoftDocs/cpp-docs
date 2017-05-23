---
title: "-Zc (Conformance) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
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
You can use the **/Zc** compiler options to specify standard or Microsoft-specific compiler behavior.  
  
## Syntax  
  
`/Zc:`_option_{,_option_}  
  
## Remarks  
  
When Visual Studio has implemented an extension to C or C++ that is not compatible with the standard, you can use a `/Zc` conformance option to specify standard-conforming or Microsoft-specific behavior. For some options, the Microsoft-specific behavior is the default, to prevent large-scale breaking changes to existing code. In other cases, the default is the standard behavior, where improvements in security, performance, or compatibility outweigh the costs of breaking changes. The default setting of each conformance option may change in newer versions of Visual Studio. For more information about each conformance option, see the topic for the specific option.  
  
These are the `/Zc` compiler options:  
  
|Option|Behavior|
|---|---|
|[auto\[-\]](zc-auto-deduce-variable-type.md)|Enforce the new Standard C++ meaning for `auto` (on by default).|  
|[forScope\[-\]](zc-forscope-force-conformance-in-for-loop-scope.md)|Enforce Standard C++ `for` scoping rules (on by default).|  
|[implicitNoexcept\[-\]](zc-implicitnoexcept-implicit-exception-specifiers.md)|Enable implicit `noexcept` on required functions (on by default).|  
|[inline\[-\]](zc-inline-remove-unreferenced-comdat.md)|Remove unreferenced function or data if it is COMDAT or has internal linkage only (off by default).|
|[referenceBinding\[-\]](zc-referencebinding-enforce-reference-binding-rules.md)|A UDT temporary will not bind to an non-const lvalue reference (off by default).|
|[rvalueCast\[-\]](zc-rvaluecast-enforce-type-conversion-rules.md)|Enforce Standard C++ explicit type conversion rules (off by default).|  
|[sizedDealloc\[-\]](zc-sizeddealloc-enable-global-sized-dealloc-functions.md)|Enable C++14 global sized deallocation functions (on by default).|
|[strictStrings\[-\]](zc-strictstrings-disable-string-literal-type-conversion.md)|Disable string-literal to `char*` or `wchar_t*` conversion (off by default).|  
|[threadSafeInit\[-\]](zc-threadsafeinit-thread-safe-local-static-initialization.md)|Enable thread-safe local static initialization (on by default).|
|[throwingNew\[-\]](zc-throwingnew-assume-operator-new-throws.md)|Assume `operator new` throws on failure (off by default).|
|[trigraphs\[-\]](zc-trigraphs-trigraphs-substitution.md)|Enable trigraphs (obsolete, off by default).|  
|[wchar_t\[-\]](zc-wchar-t-wchar-t-is-native-type.md)|`wchar_t` is a native type, not a typedef (on by default).|  
  
For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
## See Also  
 [Compiler Options](compiler-options.md)   
 [Setting Compiler Options](setting-compiler-options.md)
