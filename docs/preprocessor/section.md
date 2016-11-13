---
title: "section | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "section_CPP"
  - "vc-pragma.section"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, section"
  - "section pragma"
ms.assetid: c67215e9-2c4a-4b0f-b691-2414d2e2d96f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# section
Creates a section in an .obj file.  
  
## Syntax  
  
```  
  
#pragma section( "section-name" [, attributes] )  
```  
  
## Remarks  
 The meaning of the terms *segment* and *section* are interchangeable in this topic.  
  
 Once a section is defined, it remains valid for the remainder of the compilation. However, you must use [__declspec(allocate)](../cpp/allocate.md) or nothing will be placed in the section.  
  
 *section-name* is a required parameter that will be the name of the section. The name must not conflict with any standard section names. See [/SECTION](../build/reference/section-specify-section-attributes.md) for a list of names you should not use when creating a section.  
  
 `attributes` is an optional parameter consisting of one or more comma-separated attributes that you want to assign to the section. Possible `attributes` are:  
  
 **read**  
 Allows read operations on data.  
  
 **write**  
 Allows write operations on data.  
  
 **execute**  
 Allows code to be executed.  
  
 **shared**  
 Shares the section among all processes that load the image.  
  
 **nopage**  
 Marks the section as not pageable; useful for Win32 device drivers.  
  
 **nocache**  
 Marks the section as not cacheable; useful for Win32 device drivers.  
  
 **discard**  
 Marks the section as discardable; useful for Win32 device drivers.  
  
 **remove**  
 Marks the section as not memory-resident; virtual device drivers (V*x*D) only.  
  
 If you do not specify attributes, the section will have read and write attributes.  
  
## Example  
 In the following example, the first instruction identifies the section and its attributes. The integer `j` is not put into `mysec` because it was not declared with `__declspec(allocate)`; `j` goes into the data section. The integer `i` does go into `mysec` as a result of its `__declspec(allocate)` storage-class attribute.  
  
```  
// pragma_section.cpp  
#pragma section("mysec",read,write)  
int j = 0;  
  
__declspec(allocate("mysec"))  
int i = 0;  
  
int main(){}  
```  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)