---
title: "C Keywords | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "keywords [C]"
  - "redefining keywords"
  - "Microsoft-specific keywords"
ms.assetid: 2d932335-97bf-45cd-b367-4ae00db0ff42
caps.latest.revision: 10
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
# C Keywords
"Keywords" are words that have special meaning to the C compiler. In translation phases 7 and 8, an identifier cannot have the same spelling and case as a C keyword. (See a description of [translation phases](../preprocessor/phases-of-translation.md) in the *Preprocessor Reference*; for information on identifiers, see [Identifiers](../c-language/c-identifiers.md).) The C language uses the following keywords:  
  
|||||  
|-|-|-|-|  
|**auto**|**double**|`int`|`struct`|  
|**break**|**else**|**long**|`switch`|  
|**case**|`enum`|**register**|`typedef`|  
|`char`|`extern`|`return`|**union**|  
|**const**|**float**|**short**|`unsigned`|  
|**continue**|**for**|**signed**|`void`|  
|**default**|`goto`|`sizeof`|`volatile`|  
|**do**|**if**|**static**|`while`|  
  
 You cannot redefine keywords. However, you can specify text to be substituted for keywords before compilation by using C [preprocessor directives](../preprocessor/preprocessor-directives.md).  
  
 **Microsoft Specific**  
  
 The ANSI C standard allows identifiers with two leading underscores to be reserved for compiler implementations. Therefore, the Microsoft convention is to precede Microsoft-specific keyword names with double underscores. These words cannot be used as identifier names. For a description of the ANSI rules for naming identifiers, including the use of double underscores, see [Identifiers](../c-language/c-identifiers.md).  
  
 The following keywords and special identifiers are recognized by the Microsoft C compiler:  
  
|||||  
|-|-|-|-|  
|`__asm`|**dllimport**2|`__int8`|`naked`2|  
|`__based`1|`__except`|`__int16`|`__stdcall`|  
|`__cdecl`|`__fastcall`|`__int32`|**thread**2|  
|`__declspec`|`__finally`|`__int64`|`__try`|  
|`dllexport`2|`__inline`|`__leave`||  
  
 1. The `__based` keyword has limited uses for 32-bit and 64-bit target compilations.  
  
 2. These are special identifiers when used with `__declspec`; their use in other contexts is not restricted.  
  
 Microsoft extensions are enabled by default. To ensure that your programs are fully portable, you can disable Microsoft extensions by specifying the /Za option (compile for ANSI compatibility) during compilation. When you do this, Microsoft-specific keywords are disabled.  
  
 When Microsoft extensions are enabled, you can use the keywords listed above in your programs. For ANSI compliance, most of these keywords are prefaced by a double underscore. The four exceptions, `dllexport`, **dllimport**, `naked`, and **thread**, are used only with `__declspec` and therefore do not require a leading double underscore. For backward compatibility, single-underscore versions of the rest of the keywords are supported.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Elements of C](../c-language/elements-of-c.md)