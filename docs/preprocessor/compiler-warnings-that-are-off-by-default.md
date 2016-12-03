---
title: "Compiler Warnings That Are Off by Default | Microsoft Docs"
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
  - "warnings, compiler"
  - "cl.exe compiler, setting options"
ms.assetid: 69809cfb-a38a-4035-b154-283a61938df8
caps.latest.revision: 39
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
# Compiler Warnings That Are Off by Default
The compiler includes warnings that are turned off by default because most users don't want to see them. However, you can enable these warnings by using one of the following options.  
  
 `#pragma warning(default :`  `warning_number` `)`  
 The specified warning (`warning_number`) is enabled at its default level. Documentation for the warning contains the default level of the warning.  
  
 `#pragma warning(` `warning_level`  `:`  `warning_number` `)`  
 The specified warning (`warning_number`) is enabled at the specified level (`warning_level`).  
  
 [/Wall](../build/reference/compiler-option-warning-level.md)  
 **/Wall** enables all warnings that are off by default.  
  
 The following warnings are turned off by default.  
  
|||  
|-|-|  
|[C4061](../error-messages/compiler-warnings/compiler-warning-level-4-c4061.md) (level 4)|enumerator 'identifier' in a switch of enum 'enumeration' is not explicitly handled by a case label|  
|[C4062](../error-messages/compiler-warnings/compiler-warning-level-4-c4062.md) (level 4)|enumerator 'identifier' in a switch of enum 'enumeration' is not handled|  
|C4191 (level 3)|'operator/operation': unsafe conversion from 'type of expression' to 'type required'|  
|[C4242](../error-messages/compiler-warnings/compiler-warning-level-4-c4242.md) (level 4)|'identifier': conversion from 'type1' to 'type2', possible loss of data|  
|[C4254](../error-messages/compiler-warnings/compiler-warning-level-4-c4254.md) (level 4)|'operator': conversion from 'type1' to 'type2', possible loss of data|  
|[C4255](../error-messages/compiler-warnings/compiler-warning-level-4-c4255.md) (level 4)|'function': no function prototype given: converting '()' to '(void)'|  
|[C4263](../error-messages/compiler-warnings/compiler-warning-level-4-c4263.md) (level 4)|'function': member function does not override any base class virtual member function|  
|[C4264](../error-messages/compiler-warnings/compiler-warning-level-1-c4264.md) (level 1)|'virtual_function': no override available for virtual member function from base 'class'; function is hidden|  
|[C4265](../error-messages/compiler-warnings/compiler-warning-level-3-c4265.md) (level 3)|'class': class has virtual functions, but destructor is not virtual|  
|[C4266](../error-messages/compiler-warnings/compiler-warning-level-4-c4266.md) (level 4)|'function': no override available for virtual member function from base 'type'; function is hidden|  
|[C4287](../error-messages/compiler-warnings/compiler-warning-level-3-c4287.md) (level 3)|'operator': unsigned/negative constant mismatch|  
|[C4289](../error-messages/compiler-warnings/compiler-warning-level-4-c4289.md) (level 4)|nonstandard extension used : 'var' : loop control variable declared in the for-loop is used outside the for-loop scope|  
|[C4296](../error-messages/compiler-warnings/compiler-warning-level-4-c4296.md) (level 4)|'operator': expression is always false|  
|[C4302](../error-messages/compiler-warnings/compiler-warning-level-2-c4302.md) (level 2)|'conversion': truncation from 'type1' to 'type2'|  
|[C4311](../error-messages/compiler-warnings/compiler-warning-level-1-c4311.md) (level 1)|'variable' : pointer truncation from 'type' to 'type'|  
|[C4312](../error-messages/compiler-warnings/compiler-warning-level-1-c4312.md) (level 1)|'operation' : conversion from 'type1' to 'type2' of greater size|  
|[C4339](../error-messages/compiler-warnings/compiler-warning-level-4-c4339.md) (level 4)|'type' : use of undefined type detected in CLR meta-data - use of this type may lead to a runtime exception|  
|[C4342](../error-messages/compiler-warnings/compiler-warning-level-1-c4342.md) (level 1)|behavior change: 'function' called, but a member operator was called in previous versions|  
|[C4350](../error-messages/compiler-warnings/compiler-warning-level-1-c4350.md) (level 1)|behavior change: 'member1' called instead of 'member2'|  
|[C4355](../error-messages/compiler-warnings/compiler-warning-c4355.md)|'this' : used in base member initializer list|  
|[C4365](../error-messages/compiler-warnings/compiler-warning-level-4-c4365.md) (level 4)|'action': conversion from 'type_1' to 'type_2', signed/unsigned mismatch|  
|C4370 (level 3)|layout of class has changed from a previous version of the compiler due to better packing|  
|C4371 (level 3)|layout of class may have changed from a previous version of the compiler due to better packing of member 'member'|  
|C4388 (level 4)|signed/unsigned mismatch|  
|[C4412](../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md) (level 2)|'function': function signature contains type 'type'; C++ objects are unsafe to pass between pure code and mixed or native|  
|[C4431](../error-messages/compiler-warnings/compiler-warning-level-4-c4431.md) (level 4)|missing type specifier - int assumed. Note: C no longer supports default-int|  
|[C4435](../error-messages/compiler-warnings/compiler-warning-level-4-c4435.md) (level 4)|'class1' : Object layout under /vd2 will change due to virtual base 'class2'|  
|[C4437](../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md) (level 4)|dynamic_cast from virtual base 'class1' to 'class2' could fail in some contexts|  
|C4444 (level 3)|top level '__unaligned' is not implemented in this context|  
|C4471 (level 4)|a forward declaration of an unscoped enumeration must have an underlying type (int assumed)|  
|C4472 (level 1)|'identifier' is a native enum: add an access specifier (private/public) to declare a managed enum|  
|[C4514](../error-messages/compiler-warnings/compiler-warning-level-4-c4514.md) (level 4)|'function': unreferenced inline function has been removed|  
|[C4536](../error-messages/compiler-warnings/compiler-warning-level-4-c4536.md) (level 4)|'type name': type-name exceeds meta-data limit of 'limit' characters|  
|[C4545](../error-messages/compiler-warnings/compiler-warning-level-1-c4545.md) (level 1)|expression before comma evaluates to a function which is missing an argument list|  
|[C4546](../error-messages/compiler-warnings/compiler-warning-level-1-c4546.md) (level 1)|function call before comma missing argument list|  
|[C4547](../error-messages/compiler-warnings/compiler-warning-level-1-c4547.md) (level 1)|'operator': operator before comma has no effect; expected operator with side-effect|  
|[C4548](../error-messages/compiler-warnings/compiler-warning-level-1-c4548.md) (level 1)|expression before comma has no effect; expected expression with side-effect|  
|[C4549](../error-messages/compiler-warnings/compiler-warning-level-1-c4549.md) (level 1)|'operator': operator before comma has no effect; did you intend 'operator'?|  
|[C4555](../error-messages/compiler-warnings/compiler-warning-level-1-c4555.md) (level 1)|expression has no effect; expected expression with side-effect|  
|[C4557](../error-messages/compiler-warnings/compiler-warning-level-3-c4557.md) (level 3)|'__assume' contains effect 'effect'|  
|[C4571](../error-messages/compiler-warnings/compiler-warning-level-4-c4571.md) (level 4)|informational: catch(…) semantics changed since Visual C++ 7.1; structured exceptions (SEH) are no longer caught|  
|C4574 (level 4)|'identifier' is defined to be '0': did you mean to use '#if identifier'?|  
|C4608 (level 3)|'symbol1' has already been initialized by another union member in the initializer list, 'symbol2'|  
|[C4619](../error-messages/compiler-warnings/compiler-warning-level-3-c4619.md) (level 3)|#pragma warning: there is no warning number 'number'|  
|[C4623](../error-messages/compiler-warnings/compiler-warning-level-4-c4623.md) (level 4)|'derived class': default constructor could not be generated because a base class default constructor is inaccessible|  
|[C4625](../error-messages/compiler-warnings/compiler-warning-level-4-c4625.md) (level 4)|'derived class': copy constructor could not be generated because a base class copy constructor is inaccessible|  
|[C4626](../error-messages/compiler-warnings/compiler-warning-level-4-c4626.md) (level 4)|'derived class': assignment operator could not be generated because a base class assignment operator is inaccessible|  
|[C4628](../error-messages/compiler-warnings/compiler-warning-level-1-c4628.md) (level 1)|digraphs not supported with -Ze. Character sequence 'digraph' not interpreted as alternate token for 'char'|  
|[C4640](../error-messages/compiler-warnings/compiler-warning-level-3-c4640.md) (level 3)|'instance': construction of local static object is not thread-safe|  
|[C4668](../error-messages/compiler-warnings/compiler-warning-level-4-c4668.md) (level 4)|'symbol' is not defined as a preprocessor macro, replacing with '0' for 'directives'|  
|C4682 (level 4)|'symbol' : no directional parameter attribute specified, defaulting to [in]|  
|[C4686](../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md) (level 3)|'user-defined type': possible change in behavior, change in UDT return calling convention|  
|[C4692](../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md) (level 1)|'function': signature of non-private member contains assembly private native type 'native_type'|  
|[C4710](../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md) (level 4)|'function': function not inlined|  
|[C4738](../error-messages/compiler-warnings/compiler-warning-level-3-c4738.md) (level 3)|storing 32-bit float result in memory, possible loss of performance|  
|C4767 (level 4)|section name 'symbol' is longer than 8 characters and will be truncated by the linker|  
|C4786 (level 3)|'symbol' : object name was truncated to 'number' characters in the debug information|  
|[C4820](../error-messages/compiler-warnings/compiler-warning-level-4-c4820.md) (level 4)|'bytes' bytes padding added after construct 'member_name'|  
|[C4905](../error-messages/compiler-warnings/compiler-warning-level-1-c4905.md) (level 1)|wide string literal cast to 'LPSTR'|  
|[C4906](../error-messages/compiler-warnings/compiler-warning-level-1-c4906.md) (level 1)|string literal cast to 'LPWSTR'|  
|[C4917](../error-messages/compiler-warnings/compiler-warning-level-1-c4917.md) (level 1)|'declarator': a GUID can only be associated with a class, interface, or namespace|  
|[C4928](../error-messages/compiler-warnings/compiler-warning-level-1-c4928.md) (level 1)|illegal copy-initialization; more than one user-defined conversion has been implicitly applied|  
|[C4931](../error-messages/compiler-warnings/compiler-warning-level-4-c4931.md) (level 4)|we are assuming the type library was built for number-bit pointers|  
|[C4946](../error-messages/compiler-warnings/compiler-warning-level-1-c4946.md) (level 1)|reinterpret_cast used between related classes: 'class1' and 'class2'|  
|C4962|'function': profile-guided optimizations disabled because optimizations caused profile data to become inconsistent|  
|[C4986](../error-messages/compiler-warnings/compiler-warning-c4986.md) (level 4)|'symbol': exception specification does not match previous declaration|  
|C4987 (level 4)|nonstandard extension used: 'throw (...)'|  
|C4988 (level 4)|'symbol': variable declared outside class/function scope|  
  
## See Also  
 [warning](../preprocessor/warning.md)