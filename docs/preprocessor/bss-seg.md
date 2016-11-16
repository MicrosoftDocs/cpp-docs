---
title: "bss_seg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.bss_seg"
  - "bss_seg_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, bss_seg"
  - "bss_seg pragma"
ms.assetid: 755f0154-de51-4778-97d3-c9b24e445079
caps.latest.revision: 6
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
# bss_seg
Specifies the segment where uninitialized variables are stored in the .obj file.  
  
## Syntax  
  
```  
  
#pragma bss_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## Remarks  
 Obj files can be viewed with the [dumpbin](../build/reference/dumpbin-command-line.md) application. The default segment in the .obj file for uninitialized data is .bss. In some cases use of **bss_seg** can speed load times by grouping uninitialized data into one section.  
  
 **bss_seg** with no parameters resets the segment to .bss.  
  
 **push**(optional)  
 Puts a record on the internal compiler stack. A **push** can have an *identifier* and *segment-name*.  
  
 **pop** (optional)  
 Removes a record from the top of the internal compiler stack.  
  
 *identifier* (optional)  
 When used with **push**, assigns a name to the record on the internal compiler stack. When used with **pop**, pops records off the internal stack until *identifier* is removed; if *identifier* is not found on the internal stack, nothing is popped.  
  
 *identifier* enables multiple records to be popped with a single **pop** command.  
  
 *"segment-name"*(optional)  
 The name of a segment*.* When used with **pop**, the stack is popped and *segment-name* becomes the active segment name.  
  
 *"segment-class"* (optional)  
 Included for compatibility with C++ prior to version 2.0. It is ignored.  
  
## Example  
  
```  
// pragma_directive_bss_seg.cpp  
int i;                     // stored in .bss  
#pragma bss_seg(".my_data1")  
int j;                     // stored in "my_data1"  
  
#pragma bss_seg(push, stack1, ".my_data2")     
int l;                     // stored in "my_data2"  
  
#pragma bss_seg(pop, stack1)   // pop stack1 from stack  
int m;                     // stored in "stack_data1"  
  
int main() {  
}  
```  
  
 You can also specify sections for initialized data ([data_seg](../preprocessor/data-seg.md)), functions ([code_seg](../preprocessor/code-seg.md)), and const variables ([const_seg](../preprocessor/const-seg.md)).  
  
 Data allocated using the **bss_seg** pragma does not retain any information about its location.  
  
 See [/SECTION](../build/reference/section-specify-section-attributes.md) for a list of names you should not use when creating a section.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)