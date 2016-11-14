---
title: "init_seg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.init_seg"
  - "init_seg_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, init_seg"
  - "init_seg pragma"
  - "data segment initializing [C++]"
ms.assetid: 40a5898a-5c85-4aa9-8d73-3d967eb13610
caps.latest.revision: 13
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
# init_seg
**C++ Specific**  
  
 Specifies a keyword or code section that affects the order in which startup code is executed.  
  
## Syntax  
  
```  
  
#pragma init_seg({ compiler | lib | user | "section-name" [, func-name]} )  
```  
  
## Remarks  
 The meaning of the terms *segment* and *section* are interchangeable in this topic.  
  
 Because initialization of global static objects can involve executing code, you must specify a keyword that defines when the objects are to be constructed. It is particularly important to use the **init_seg** pragma in dynamic-link libraries (DLLs) or libraries requiring initialization.  
  
 The options to the **init_seg** pragma are:  
  
 **compiler**  
 Reserved for Microsoft C run-time library initialization. Objects in this group are constructed first.  
  
 **lib**  
 Available for third-party class-library vendors' initializations. Objects in this group are constructed after those marked as **compiler** but before any others.  
  
 **user**  
 Available to any user. Objects in this group are constructed last.  
  
 *section-name*  
 Allows explicit specification of the initialization section. Objects in a user-specified *section-name* are not implicitly constructed; however, their addresses are placed in the section named by *section-name*.  
  
 The section name you give will contain pointers to helper functions that will construct the global objects declared in that module after the pragma.  
  
 For a list of names you should not use when creating a section, see [/SECTION](../build/reference/section-specify-section-attributes.md).  
  
 *func-name*  
 Specifies a function to be called in place of `atexit` when the program exits. This helper function also calls [atexit](../c-runtime-library/reference/atexit.md) with a pointer to the destructor for the global object. If you specify a function identifier in the pragma of the form,  
  
```  
int __cdecl myexit (void (__cdecl *pf)(void))  
```  
  
 then your function will be called instead of the C run-time library's `atexit`. This allows you to build a list of the destructors that will need to be called when you are ready to destroy the objects.  
  
 If you need to defer initialization (for example, in a DLL) you may choose to specify the section name explicitly. You must then call the constructors for each static object.  
  
 There are no quotes around the identifier for the `atexit` replacement.  
  
 Your objects will still be placed in the sections defined by the other XXX_seg pragmas.  
  
 The objects that are declared in the module will not be automatically initialized by the C run-time. You will need to do that yourself.  
  
 By default, `init_seg` sections are read only. If the section name is .CRT, the compiler will silently change the attribute to read only, even if it is marked as read, write.  
  
 You cannot specify **init_seg** more than once in a translation unit.  
  
 Even if your object does not have a user-defined constructor, a constructor not explicitly defined in code, the compiler may generate one (for example to bind v-table pointers).  Therefore, your code will have to call the compiler-generated constructor.  
  
## Example  
  
```  
// pragma_directive_init_seg.cpp  
#include <stdio.h>  
#pragma warning(disable : 4075)  
  
typedef void (__cdecl *PF)(void);  
int cxpf = 0;   // number of destructors we need to call  
PF pfx[200];    // pointers to destructors.  
  
int myexit (PF pf) {  
   pfx[cxpf++] = pf;  
   return 0;  
}  
  
struct A {  
   A() { puts("A()"); }  
   ~A() { puts("~A()"); }  
};  
  
// ctor & dtor called by CRT startup code   
// because this is before the pragma init_seg  
A aaaa;   
  
// The order here is important.  
// Section names must be 8 characters or less.  
// The sections with the same name before the $  
// are merged into one section. The order that  
// they are merged is determined by sorting  
// the characters after the $.  
// InitSegStart and InitSegEnd are used to set  
// boundaries so we can find the real functions  
// that we need to call for initialization.  
  
#pragma section(".mine$a", read)  
__declspec(allocate(".mine$a")) const PF InitSegStart = (PF)1;  
  
#pragma section(".mine$z",read)  
__declspec(allocate(".mine$z")) const PF InitSegEnd = (PF)1;  
  
// The comparison for 0 is important.  
// For now, each section is 256 bytes. When they  
// are merged, they are padded with zeros. You  
// can't depend on the section being 256 bytes, but  
// you can depend on it being padded with zeros.  
  
void InitializeObjects () {  
   const PF *x = &InitSegStart;  
   for (++x ; x < &InitSegEnd ; ++x)  
      if (*x) (*x)();  
}  
  
void DestroyObjects () {  
   while (cxpf>0) {  
      --cxpf;  
      (pfx[cxpf])();  
   }  
}  
  
// by default, goes into a read only section  
#pragma init_seg(".mine$m", myexit)  
  
A bbbb;   
A cccc;  
  
int main () {  
   InitializeObjects();  
   DestroyObjects();  
}  
```  
  
```Output  
A()  
A()  
A()  
~A()  
~A()  
~A()  
```  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)