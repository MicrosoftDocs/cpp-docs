---
title: "Summary of Declarations"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 53a5e9e5-1a33-40b5-9dea-7f669b479329
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Summary of Declarations
`declaration`:  
 *declaration-specifiers attribute-seq* opt*init-declarator-list*opt**;**  
  
 /\* *attribute-seq* is Microsoft Specific */  
  
 *declaration-specifiers*:  
 *storage-class-specifier declaration-specifiers*opt  
  
 *type-specifier declaration-specifiers*opt  
  
 *type-qualifier declaration-specifiers*opt  
  
 *attribute-seq* :            /\* *attribute-seq* is Microsoft Specific \*/  
 *attribute attribute-seq* opt  
  
 *attribute* : one of      /* Microsoft Specific \*/  
 ||||  
|-|-|-|  
|[__asm](../VS_visualcpp/__asm.md)|[__clrcall](../VS_visualcpp/__clrcall.md)|[__stdcall](../VS_visualcpp/__stdcall.md)|  
|[__based](../VS_visualcpp/__based-Grammar.md)|[__fastcall](../VS_visualcpp/__fastcall.md)|[__thiscall](../VS_visualcpp/__thiscall.md)|  
|[__cdecl](../VS_visualcpp/__cdecl.md)|[__inline](../Topic/inline,%20__inline,%20__forceinline.md)|[__vectorcall](../VS_visualcpp/__vectorcall.md)|  
  
 *init-declarator-list*:  
 *init-declarator*  
  
 *init-declarator-list*  **,**  *init-declarator*  
  
 *init-declarator*:  
 *declarator*  
  
 *declarator*  **=**  *initializer* /* For scalar initialization \*/  
  
 *storage-class-specifier*:  
 **auto**  
  
 **register**  
  
 **static**  
  
 **extern**  
  
 **typedef**  
  
 **__declspec (**  *extended-decl-modifier-seq*  **)** /* Microsoft Specific \*/  
  
 *type-specifier*:  
 **void**  
  
 **char**  
  
 **short**  
  
 **int**  
  
 `__int8` /* Microsoft Specific \*/  
  
 `__int16` /* Microsoft Specific \*/  
  
 `__int32` /* Microsoft Specific \*/  
  
 `__int64` /* Microsoft Specific \*/  
  
 **long**  
  
 **float**  
  
 **double**  
  
 **signed**  
  
 **unsigned**  
  
 *struct-or-union-specifier*  
  
 *enum-specifier*  
  
 *typedef-name*  
  
 *type-qualifier*:  
 **const**  
  
 `volatile`  
  
 `declarator`:  
 `pointer`opt*direct-declarator*  
  
 *direct-declarator*:  
 *identifier*  
  
 **(**  *declarator*  **)**  
  
 *direct-declarator*  **[**  *constant-expression* opt**]**  
  
 *direct-declarator*  **(**  *parameter-type-list*  **)** /* New-style declarator \*/  
  
 *direct-declarator*  **(**  *identifier-list*opt**)** /* Obsolete-style declarator \*/  
  
 `pointer`:  
 **\*** *type-qualifier-list*opt  
  
 **\*** *type-qualifier-list*opt`pointer`  
  
 *parameter-type-list*:                           /\* The parameter list \*/  
 *parameter-list*  
  
 *parameter-list* **, ...**  
  
 *parameter-list*:  
 *parameter-declaration*  
  
 *parameter-list*  **,**  *parameter-declaration*  
  
 *type-qualifier-list*:  
 *type-qualifier*  
  
 *type-qualifier-list type-qualifier*  
  
 *enum-specifier*:  
 **enum**  *identifier*opt**{** *enumerator-list* **}**  
  
 **enum**  *identifier*  
  
 *enumerator-list*:  
 *enumerator*  
  
 *enumerator-list*  **,**  `enumerator`  
  
 `enumerator`:  
 *enumeration-constant*  
  
 *enumeration-constant*  **=**  *constant-expression*  
  
 *enumeration-constant*:  
 *identifier*  
  
 *struct-or-union-specifier*:  
 *struct-or-union identifier*opt**{** *struct-declaration-list* **}** *struct-or-union identifier*  
  
 *struct-or-union*:  
 **struct**  
  
 **union**  
  
 *struct-declaration-list*:  
 *struct-declaration*  
  
 *struct-declaration-list struct-declaration*  
  
 *struct-declaration*:  
 *specifier-qualifier-list struct-declarator-list*  **;**  
  
 *specifier-qualifier-list*:  
 *type-specifier specifier-qualifier-list*opt  
  
 *type-qualifier specifier-qualifier-list*opt  
  
 *struct-declarator-list*:  
 *struct-declarator struct-declarator-list*  **,**  *struct-declarator*  
  
 *struct-declarator*:  
 *declarator*  
  
 *type-specifier declarator*opt**:** *constant-expression*  
  
 *parameter-declaration*:  
 *declaration-specifiers declarator* /* Named declarator \*/  
  
 *declaration-specifiers abstract-declarator*opt**/\*** Anonymous declarator **\*/**  
  
 *identifier-list*: **/\*** For old-style declarator **\* /**  
 *identifier*  
  
 *identifier-list*  **,**  *identifier*  
  
 *abstract-declarator*: **/\*** Used with anonymous declarators **\*/**  
 *pointer*  
  
 `pointer`opt*direct-abstract-declarator*  
  
 *direct-abstract-declarator*:  
 **(**  *abstract-declarator*  **)**  
  
 *direct-abstract-declarator*opt**[** *constant-expression*opt**]**  
  
 *direct-abstract-declarator*opt**(** *parameter-type-list* opt**)**  
  
 *initializer*:  
 *assignment-expression*  
  
 **{**  *initializer-list*  **}** /* For aggregate initialization \*/  
  
 **{**  *initializer-list*  **, }**  
  
 *initializer-list*:  
 *initializer*  
  
 *initializer-list*  **,**  *initializer*  
  
 *type-name*:  
 *specifier-qualifier-list abstract-declarator*opt  
  
 *typedef-name*:  
 *identifier*  
  
 *extended-decl-modifier-seq*:/\*    Microsoft Specific \*/  
 *extended-decl-modifier*opt  
  
 *extended-decl-modifier-seq extended-decl-modifier*  
  
 *extended-decl-modifier*:   /\* Microsoft Specific \*/  
 **thread**  
  
 **naked**  
  
 **dllimport**  
  
 `dllexport`  
  
## See Also  
 [Calling Conventions](../VS_visualcpp/Calling-Conventions.md)   
 [Phrase Structure Grammar](../VS_visualcpp/Phrase-Structure-Grammar.md)   
 [Obsolete Calling Conventions](../VS_visualcpp/Obsolete-Calling-Conventions.md)