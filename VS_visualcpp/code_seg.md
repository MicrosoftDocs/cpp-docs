---
title: "code_seg"
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
ms.assetid: bf4faac1-a511-46a6-8d9e-456851d97d56
caps.latest.revision: 9
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
# code_seg
Specifies the text segment where functions are stored in the .obj file.  
  
## Syntax  
  
```  
#pragma code_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## Remarks  
 The `code_seg` pragma directive does not control placement of object code generated for instantiated templates, nor code generated implicitly by the compiler—for example, special member functions. We recommend that you use the [__declspec(code_seg(...))](../VS_visualcpp/code_seg--__declspec-.md) attribute instead because it gives you control over placement of all object code. This includes compiler-generated code.  
  
 A *segment* in an .obj file is a named block of data that's loaded into memory as a unit. A *text segment* is a segment that contains executable code. In this article, the terms *segment* and *section* are used interchangeably.  
  
 The `code_seg` pragma directive tells the compiler to put all subsequent object code from the translation unit into a text segment named `segment-name`. By default, the text segment used for functions in an .obj file is named .text.  
  
 A `code_seg` pragma directive without parameters resets the text segment name for the subsequent object code to .text.  
  
 **Push** (optional)  
 Puts a record on the internal compiler stack. A **push** can have an `identifier` and `segment-name`.  
  
 **pop** (optional)  
 Removes a record from the top of the internal compiler stack.  
  
 `identifier` (optional)  
 When used with **push**, assigns a name to the record on the internal compiler stack. When used with **pop**, pops records off the internal stack until `identifier` is removed; if `identifier` is not found on the internal stack, nothing is popped.  
  
 `identifier` enables multiple records to be popped with just one **pop** command.  
  
 "`segment-name`" (optional)  
 The name of a segment. When used with **pop**, the stack is popped and `segment-name` becomes the active text segment name.  
  
 "`segment-class`" (optional)  
 Ignored, but included for compatibility with versions of C++ earlier than version 2.0.  
  
 You can use the [DUMPBIN.EXE](../VS_visualcpp/DUMPBIN-Command-Line.md) application to view .obj files. Versions of DUMPBIN for each supported target architecture are included with Visual Studio.  
  
## Example  
 This example shows how to use the `code_seg` pragma directive to control where object code is put:  
  
```  
// pragma_directive_code_seg.cpp  
void func1() {                  // stored in .text  
}  
  
#pragma code_seg(".my_data1")  
void func2() {                  // stored in my_data1  
}  
  
#pragma code_seg(push, r1, ".my_data2")  
void func3() {                  // stored in my_data2  
}  
  
#pragma code_seg(pop, r1)      // stored in my_data1  
void func4() {  
}  
  
int main() {  
}  
```  
  
 For a list of names that should not be used to create a section, see [/SECTION](../VS_visualcpp/-SECTION--Specify-Section-Attributes-.md).  
  
 You can also specify sections for initialized data ([data_seg](../VS_visualcpp/data_seg.md)), uninitialized data ([bss_seg](../VS_visualcpp/bss_seg.md)), and const variables ([const_seg](../VS_visualcpp/const_seg.md)).  
  
## See Also  
 [code_seg (__declspec)](../VS_visualcpp/code_seg--__declspec-.md)   
 [Pragma Directives and the __Pragma Keyword](../VS_visualcpp/Pragma-Directives-and-the-__Pragma-Keyword.md)