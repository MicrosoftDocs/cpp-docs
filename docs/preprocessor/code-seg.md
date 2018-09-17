---
title: "code_seg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["code_seg_CPP", "vc-pragma.code_seg"]
dev_langs: ["C++"]
helpviewer_keywords: ["pragmas, code_seg", "code_seg pragma"]
ms.assetid: bf4faac1-a511-46a6-8d9e-456851d97d56
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# code_seg
Specifies the text segment where functions are stored in the .obj file.  
  
## Syntax  
  
```  
#pragma code_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
### Paramters
  
**push**<br/>
(Optional) Puts a record on the internal compiler stack. A **push** can have an *identifier* and *segment-name*.  
  
**pop**<br/>
(Optional) Removes a record from the top of the internal compiler stack.  
  
*identifier*<br/>
(Optional) When used with **push**, assigns a name to the record on the internal compiler stack. When used with **pop**, pops records off the internal stack until *identifier* is removed; if *identifier* is not found on the internal stack, nothing is popped.  
  
*identifier* enables multiple records to be popped with just one **pop** command.  
  
"*segment-name*"<br/>  
(Optional) The name of a segment. When used with **pop**, the stack is popped and *segment-name* becomes the active text segment name.  
  
"*segment-class*"<br/>
(Optional) Ignored, but included for compatibility with versions of C++ earlier than version 2.0.  
  
## Remarks  
 
The **code_seg** pragma directive does not control placement of object code generated for instantiated templates, nor code generated implicitly by the compiler—for example, special member functions. We recommend that you use the [__declspec(code_seg(...))](../cpp/code-seg-declspec.md) attribute instead because it gives you control over placement of all object code. This includes compiler-generated code.  
  
A *segment* in an .obj file is a named block of data that's loaded into memory as a unit. A *text segment* is a segment that contains executable code. In this article, the terms *segment* and *section* are used interchangeably.  
  
The **code_seg** pragma directive tells the compiler to put all subsequent object code from the translation unit into a text segment named *segment-name*. By default, the text segment used for functions in an .obj file is named .text.  
  
A **code_seg** pragma directive without parameters resets the text segment name for the subsequent object code to .text.  

You can use the [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) application to view .obj files. Versions of DUMPBIN for each supported target architecture are included with Visual Studio.  
  
## Example  

This example shows how to use the **code_seg** pragma directive to control where object code is put:  
  
```cpp  
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
  
For a list of names that should not be used to create a section, see [/SECTION](../build/reference/section-specify-section-attributes.md).  
  
You can also specify sections for initialized data ([data_seg](../preprocessor/data-seg.md)), uninitialized data ([bss_seg](../preprocessor/bss-seg.md)), and const variables ([const_seg](../preprocessor/const-seg.md)).  
  
## See Also  
 
[code_seg (__declspec)](../cpp/code-seg-declspec.md)   
[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)