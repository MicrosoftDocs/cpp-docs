---
title: "__declspec | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__declspec_cpp"
  - "__declspec"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec keyword [C++]"
ms.assetid: 832db681-e8e1-41ca-b78c-cd9d265cdb87
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
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
# __declspec
## Microsoft Specific  
 The extended attribute syntax for specifying storage-class information uses the `__declspec` keyword, which specifies that an instance of a given type is to be stored with a Microsoft-specific storage-class attribute listed below. Examples of other storage-class modifiers include the `static` and `extern` keywords. However, these keywords are part of the ANSI specification of the C and C++ languages, and as such are not covered by extended attribute syntax. The extended attribute syntax simplifies and standardizes Microsoft-specific extensions to the C and C++ languages.  
  
## Grammar  
 *decl-specifier*:  
 `__declspec (`  *extended-decl-modifier-seq*  `)`  
  
 *extended-decl-modifier-seq*:  
 *extended-decl-modifier*opt  
  
 *extended-decl-modifier extended-decl-modifier-seq*  
  
 *extended-decl-modifier*:  
 `align(` *#* `)`  
  
 `allocate("` *segname* `")`  
  
 `appdomain`  
  
 `code_seg("` *segname* `")`  
  
 `deprecated`  
  
 `dllimport`  
  
 `dllexport`  
  
 `jitintrinsic`  
  
 `naked`  
  
 `noalias`  
  
 `noinline`  
  
 `noreturn`  
  
 `nothrow`  
  
 `novtable`  
  
 `process`  
  
 `property(`{`get=`*get_func_name*&#124;`,put=`*put_func_name*}`)`  
  
 `restrict`  
  
 `safebuffers`  
  
 `selectany`  
  
 `thread`  
  
 `uuid("` *ComObjectGUID* `")`  
  
 White space separates the declaration modifier sequence. Examples appear in later sections.  
  
 Extended attribute grammar supports these Microsoft-specific storage-class attributes: [align](../cpp/align-cpp.md), [allocate](../cpp/allocate.md), [appdomain](../cpp/appdomain.md), [code_seg](../cpp/code-seg-declspec.md), [deprecated](../cpp/deprecated-cpp.md), [dllexport](../cpp/dllexport-dllimport.md), [dllimport](../cpp/dllexport-dllimport.md), [jitintrinsic](../cpp/jitintrinsic.md), [naked](../cpp/naked-cpp.md), [noalias](../cpp/noalias.md), [noinline](../cpp/noinline.md), [noreturn](../cpp/noreturn.md), [nothrow](../cpp/nothrow-cpp.md), [novtable](../cpp/novtable.md), [process](../cpp/process.md), [restrict](../cpp/restrict.md), [safebuffers](../cpp/safebuffers.md), [selectany](../cpp/selectany.md), and [thread](../cpp/thread.md). It also supports these COM-object attributes: [property](../cpp/property-cpp.md) and [uuid](../cpp/uuid-cpp.md).  
  
 The `code_seg`, `dllexport`, `dllimport`, `naked`, `noalias`, `nothrow`, `property`, `restrict`, `selectany`, `thread`, and `uuid` storage-class attributes are properties only of the declaration of the object or function to which they are applied. The `thread` attribute affects data and objects only. The `naked` attribute affects functions only. The `dllimport` and `dllexport` attributes affect functions, data, and objects. The `property`, `selectany`, and `uuid` attributes affect COM objects.  
  
 The `__declspec` keywords should be placed at the beginning of a simple declaration. The compiler ignores, without warning, any `__declspec` keywords placed after * or & and in front of the variable identifier in a declaration.  
  
 A `__declspec` attribute specified in the beginning of a user-defined type declaration applies to the variable of that type. For example:  
  
```  
__declspec(dllimport) class X {} varX;  
```  
  
 In this case, the attribute applies to `varX`. A `__declspec` attribute placed after the `class` or `struct` keyword applies to the user-defined type. For example:  
  
```  
class __declspec(dllimport) X {};  
```  
  
 In this case, the attribute applies to `X`.  
  
 The general guideline for using the `__declspec` attribute for simple declarations is as follows:  
  
```  
  
decl-specifier-seq  
declarator-list;  
```  
  
 The *decl-specifier-seq* should contain, among other things, a base type (e.g. `int`, `float`, a `typedef`, or a class name), a storage class (e.g. `static`, `extern`), or the `__declspec` extension. The *init-declarator-list* should contain, among other things, the pointer part of declarations. For example:  
  
```  
__declspec(selectany) int * pi1 = 0;   //OK, selectany & int both part of decl-specifier  
int __declspec(selectany) * pi2 = 0;   //OK, selectany & int both part of decl-specifier  
int * __declspec(selectany) pi3 = 0;   //ERROR, selectany is not part of a declarator  
```  
  
 The following code declares an integer thread local variable and initializes it with a value:  
  
```  
// Example of the __declspec keyword  
__declspec( thread ) int tls_i = 1;  
```  
  
## END Microsoft Specific  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)   
 [C Extended Storage-Class Attributes](../c-language/c-extended-storage-class-attributes.md)