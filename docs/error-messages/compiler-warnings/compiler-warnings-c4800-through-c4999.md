---
title: "Compiler Warnings C4800 Through C4999 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4806"
  - "C4807"
  - "C4810"
  - "C4811"
  - "C4812"
  - "C4813"
  - "C4816"
  - "C4817"
  - "C4822"
  - "C4825"
  - "C4827"
  - "C4872"
  - "C4880"
  - "C4881"
  - "C4882"
  - "C4900"
  - "C4910"
  - "C4912"
  - "C4913"
  - "C4916"
  - "C4918"
  - "C4920"
  - "C4921"
  - "C4925"
  - "C4926"
  - "C4932"
  - "C4934"
  - "C4935"
  - "C4936"
  - "C4937"
  - "C4938"
  - "C4939"
  - "C4944"
  - "C4947"
  - "C4950"
  - "C4951"
  - "C4952"
  - "C4953"
  - "C4954"
  - "C4955"
  - "C4956"
  - "C4957"
  - "C4958"
  - "C4959"
  - "C4960"
  - "C4961"
  - "C4962"
  - "C4963"
  - "C4966"
  - "C4970"
  - "C4971"
  - "C4972"
  - "C4973"
  - "C4974"
  - "C4981"
  - "C4985"
  - "C4987"
  - "C4988"
  - "C4989"
  - "C4990"
  - "C4991"
  - "C4992"
  - "C4997"
  - "C4998"
  - "C4999"
  - "C4808"
  - "C4809"
dev_langs: 
  - "C++"
ms.assetid: c3182430-8b3b-4ab2-a532-5cd436707dc8
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warnings C4800 Through C4999
The articles in this part of the documentation contain information about a subset of the Visual C++ compiler warnings. You can access the information here or, in the Output window in Visual Studio, you can select an error number and then press the F1 key.  
  
## In This Section  
  
|Warning|Message|  
|-------------|-------------|  
|[Compiler Warning (level 3) C4800](../../error-messages/compiler-warnings/compiler-warning-level-3-c4800.md)|'type': forcing value to bool 'true' or 'false' (performance warning)|  
|[Compiler Warning (level 1) C4803](../../error-messages/compiler-warnings/compiler-warning-level-1-c4803.md)|'method': the raise method has a different storage class from that of the event, 'event'|  
|[Compiler Warning (level 1) C4804](../../error-messages/compiler-warnings/compiler-warning-level-1-c4804.md)|'operation': unsafe use of type 'bool' in operation|  
|[Compiler Warning (level 1) C4805](../../error-messages/compiler-warnings/compiler-warning-level-1-c4805.md)|'operation': unsafe mix of type 'type' and type 'type' in operation|  
|Compiler warning (level 1) C4806|'operation': unsafe operation: no value of type 'type' promoted to type 'type' can equal the given constant|  
|Compiler warning (level 1) C4807|'operation': unsafe mix of type 'type' and signed bit field of type 'type'|  
|Compiler warning (level 1) C4808|case 'value' is not a valid value for switch condition of type 'bool'|  
|Compiler warning (level 1) C4809|switch statement has redundant 'default' label; all possible 'case' labels are given|  
|Compiler warning (level 1) C4810|value of pragma pack(show) == n|  
|Compiler warning (level 1) C4811|value of pragma conform(forScope, show) == value|  
|Compiler warning (level 1) C4812|obsolete declaration style: please use 'new_syntax' instead|  
|Compiler warning (level 1) C4813|'function': a friend function of a local class must have been previously declared|  
|Compiler warning (level 4) C4816|'param': parameter has a zero-sized array which will be truncated (unless the object is passed by reference)|  
|Compiler warning (level 1) C4817|'member': illegal use of '.' to access this member; compiler replaced with '->'|  
|[Compiler Warning (level 1) C4819](../../error-messages/compiler-warnings/compiler-warning-level-1-c4819.md)|The file contains a character that cannot be represented in the current code page (number). Save the file in Unicode format to prevent data loss|  
|[Compiler Warning (level 4) C4820](../../error-messages/compiler-warnings/compiler-warning-level-4-c4820.md)|'bytes' bytes padding added after construct 'member_name'|  
|[Compiler Warning (level 1) C4821](../../error-messages/compiler-warnings/compiler-warning-level-1-c4821.md)|Unable to determine Unicode encoding type, please save the file with signature (BOM)|  
|Compiler warning (level 1) C4822|'member function': local class member function does not have a body|  
|[Compiler Warning (level 3) C4823](../../error-messages/compiler-warnings/compiler-warning-level-3-c4823.md)|'function': uses pinning pointers but unwind semantics are not enabled. Consider using /EHa|  
|Compiler warning (level 4) C4825||  
|Compiler warning (level 3) C4827|A public 'ToString' method with 0 parameters should be marked as virtual and override|  
|[Compiler Warning (level 1) C4829](../../error-messages/compiler-warnings/compiler-warning-level-1-c4829.md)|Possibly incorrect parameters to function main. Consider 'int main(Platform::Array\<Platform::String^>^ argv)'|  
|[Compiler Warning (level 1) C4835](../../error-messages/compiler-warnings/compiler-warning-level-1-c4835.md)|'variable': the initializer for exported data will not be run until managed code is first executed in the host assembly|  
|[Compiler Warning (level 1) C4838](../../error-messages/compiler-warnings/compiler-warning-level-1-c4838.md)|conversion from 'type_1' to 'type_2' requires a narrowing conversion|  
|[Compiler Warning C4867](../../error-messages/compiler-warnings/compiler-warning-c4867.md)|'function': function call missing argument list; use 'call' to create a pointer to member|  
|[Compiler Warning C4868](../../error-messages/compiler-warnings/compiler-warning-c4868.md)|'file(line_number)' compiler may not enforce left-to-right evaluation order in braced initialization list|  
|Compiler warning (level 2) C4872|floating point division by zero detected when compiling the call graph for the concurrency::parallel_for_each at: '%s'|  
|Compiler warning (level 1) C4880|casting from 'const type_1' to 'type_2': casting away constness from a pointer or reference may result in undefined behavior in an amp restricted function|  
|Compiler warning (level 4) C4881|the constructor and/or the destructor will not be invoked for tile_static variable 'variable'|  
|Compiler warning (level 1) C4882|passing functors with non-const call operators to concurrency::parallel_for_each is deprecated|  
|Compiler warning C4900|Il mismatch between 'tool1' version 'version1' and 'tool2' version 'version2'|  
|[Compiler Warning (level 1) C4905](../../error-messages/compiler-warnings/compiler-warning-level-1-c4905.md)|wide string literal cast to 'LPSTR'|  
|[Compiler Warning (level 1) C4906](../../error-messages/compiler-warnings/compiler-warning-level-1-c4906.md)|string literal cast to 'LPWSTR'|  
|Compiler warning (level 1) C4910|'\<identifier>: '__declspec(dllexport)' and 'extern' are incompatible on an explicit instantiation|  
|Compiler warning (level 1) C4912|'attribute': attribute has undefined behavior on a nested UDT|  
|Compiler warning (level 4) C4913|user defined binary operator ',' exists but no overload could convert all operands, default built-in binary operator ',' used|  
|Compiler warning (level 1) C4916|in order to have a dispid, '%$S': must be introduced by an interface|  
|[Compiler Warning (level 1) C4917](../../error-messages/compiler-warnings/compiler-warning-level-1-c4917.md)|'declarator': a GUID can only be associated with a class, interface or namespace|  
|Compiler warning (level 4) C4918|'character': invalid character in pragma optimization list|  
|Compiler warning (level 1) C4920|enum enum member member_1=value_1 already seen in enum enum as member_2=value_2|  
|Compiler warning (level 3) C4921|'%s': attribute value '%s' should not be multiply specified|  
|Compiler warning (level 1) C4925|'method': dispinterface method cannot be called from script|  
|Compiler warning (level 1) C4926|'identifier': symbol is already defined: attributes ignored|  
|[Compiler Warning (level 1) C4927](../../error-messages/compiler-warnings/compiler-warning-level-1-c4927.md)|illegal conversion; more than one user-defined conversion has been implicitly applied|  
|[Compiler Warning (level 1) C4928](../../error-messages/compiler-warnings/compiler-warning-level-1-c4928.md)|illegal copy-initialization; more than one user-defined conversion has been implicitly applied|  
|[Compiler Warning (level 1) C4929](../../error-messages/compiler-warnings/compiler-warning-level-1-c4929.md)|'file': typelibrary contains a union; ignoring the 'embedded_idl' qualifier|  
|[Compiler Warning (level 1) C4930](../../error-messages/compiler-warnings/compiler-warning-level-1-c4930.md)|'prototype': prototyped function not called (was a variable definition intended?)|  
|[Compiler Warning (level 4) C4931](../../error-messages/compiler-warnings/compiler-warning-level-4-c4931.md)|we are assuming the type library was built for number-bit pointers|  
|Compiler warning (level 4) C4932|__identifier(identifier) and \__identifier(identifier) are indistinguishable|  
|Compiler warning (level 1) C4934|'__delegate(multicast)' is deprecated, use '\__delegate' instead|  
|Compiler warning (level 1) C4935|assembly access specifier modified from 'access'|  
|Compiler warning (level 1) C4936|this __declspec is supported only when compiled with /clr or /clr:pure|  
|Compiler warning (level 4) C4937|'text1' and 'text2' are indistinguishable as arguments to 'directive'|  
|Compiler warning (level 4) C4938|'var': Floating point reduction variable may cause inconsistent results under /fp:strict or #pragma fenv_access|  
|Compiler warning C4939|#pragma vtordisp is deprecated and will be removed in a future release of Visual C++|  
|Compiler warning (level 1) C4944|'symbol': cannot import symbol from 'assembly1': as 'symbol' already exists in the current scope|  
|[Compiler Warning (level 1) C4945](../../error-messages/compiler-warnings/compiler-warning-level-1-c4945.md)|'symbol': cannot import symbol from 'assembly1': as 'symbol' has already been imported from another assembly 'assembly2'|  
|[Compiler Warning (level 1) C4946](../../error-messages/compiler-warnings/compiler-warning-level-1-c4946.md)|reinterpret_cast used between related classes: 'class1' and 'class2'|  
|Compiler warning (level 1) C4947|'type_or_member': marked as obsolete|  
|[Compiler Warning (level 2) C4948](../../error-messages/compiler-warnings/compiler-warning-level-2-c4948.md)|return type of 'accessor' does not match the last parameter type of the corresponding setter|  
|[Compiler Warning (level 1 and level 4) C4949](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4949.md)|pragmas 'managed' and 'unmanaged' are meaningful only when compiled with '/clr[:option]'|  
|Compiler warning (level 1) C4950|'type_or_member': marked as obsolete|  
|Compiler warning C4951|'function' has been edited since profile data was collected, function profile data not used|  
|Compiler warning C4952|'function': no profile data found in program database 'pgd_file'|  
|Compiler warning C4953|Inline 'function' has been edited since profile data was collected, profile data not used|  
|Compiler warning C4954|'function': not profiled (contains __int64 switch expression)|  
|Compiler warning C4955|'import2': import ignored; already imported from 'import1'|  
|Compiler warning (level 1) C4956|'type': this type is not verifiable|  
|Compiler warning (level 1) C4957|'cast': explicit cast from 'cast from' to 'cast_to' is not verifiable|  
|Compiler warning (level 1) C4958|'operation': pointer arithmetic is not verifiable|  
|Compiler warning (level 1) C4959|cannot define unmanaged type 'type' in /clr:safe because accessing its members yields unverifiable code|  
|Compiler warning C4960|'function' is too big to be profiled|  
|Compiler warning C4961|No profile data was merged into '.pgd file', profile-guided optimizations disabled|  
|Compiler warning C4962|'function': Profile-guided optimizations disabled because optimizations caused profile data to become inconsistent|  
|Compiler warning C4963|%s': no profile data found; different compiler options were used in instrumented build|  
|[Compiler Warning (level 1) C4964](../../error-messages/compiler-warnings/compiler-warning-level-1-c4964.md)|No optimization options were specified; profile info will not be collected|  
|[Compiler Warning (level 1) C4965](../../error-messages/compiler-warnings/compiler-warning-level-1-c4965.md)|implicit box of integer 0; use nullptr or explicit cast|  
|Compiler warning C4966|'%s' has __code_seg annotation with unsupported segment name, annotation ignored|  
|Compiler warning C4970|delegate constructor: target object ignored since '%$pS' is static|  
|Compiler warning (level 1) C4971|Argument order: \<target object>, \<target function> for delegate constructor is deprecated, use \<target function>, \<target object="">|  
|Compiler warning (level 1) C4972|Directly modifying or treating the result of an unbox operation as an lvalue is unverifiable|  
|Compiler warning C4973|'%$S': marked as deprecated|  
|Compiler warning C4974|'%$S': marked as deprecated|  
|Compiler warning C4981|Warbird: function '%$pD' marked as __forceinline not inlined because it contains exception semantics|  
|Compiler warning (level 3) C4985|symbol name': attributes not present on previous declaration.|  
|[Compiler Warning C4986](../../error-messages/compiler-warnings/compiler-warning-c4986.md)|'%$pS': exception specification does not match previous declaration|  
|Compiler warning (level 4) C4987|nonstandard extension used: 'throw (...)'|  
|Compiler warning (level 4) C4988|'%$S': variable declared outside class/function scope|  
|Compiler warning C4989|'%s': type has conflicting definitions.|  
|Compiler warning C4990|Warbird: %s|  
|Compiler warning C4991|Warbird: function '%$pD' marked as __forceinline not inlined because protection level of inlinee is greater than the parent|  
|Compiler warning C4992|Warbird: function '%$pD' marked as __forceinline not inlined because it contains inline assembly which cannot be protected|  
|[Compiler Warning (level 3) C4995](../../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md)|'function': name was marked as #pragma deprecated|  
|[Compiler Warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md)|'%$pS': %$*|  
|Compiler warning (level 1) C4997|'class': coclass does not implement a COM interface or pseudo-interface|  
|Compiler warning (level 1) C4998|EXPECTATION FAILED: %s(%d)|  
|Compiler warning C4999|UNKNOWN WARNING %$N Please choose the Technical Support command on the Visual C++ %$N Help menu, or open the Technical Support help file for more information|