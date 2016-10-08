---
title: "Compiler Warning (level 1) C4378"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: d08e11ef-891a-4752-9a5e-360e7394acf7
caps.latest.revision: 6
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
# Compiler Warning (level 1) C4378
Must obtain function pointers to run initializers; consider System::ModuleHandle::ResolveMethodHandle  
  
 Under **/clr**, initializer symbols contain function tokens, not functions pointers.  You need to convert tokens to pointers using <xref:System.ModuleHandle.ResolveMethodHandle?qualifyHint=False>.  
  
## Example  
 The following sample generates C4378.  
  
```  
// C4378.cpp  
// compile with: /W1 /clr /c  
typedef void (__cdecl *PF)(void);  
int cxpf = 0;   // number of destructors to call  
PF pfx[200];   // ptrs to those dtors, watch for overflow  
  
int myexit (PF pf) {  
   pfx[cxpf++] = pf;  
   return 0;  
}  
  
struct A {  
   A() {}  
   ~A() {}  
};  
  
A aaaa;   
  
#pragma data_seg(".mine$a")  
PF InitSegStart = (PF)1;  
#pragma data_seg(".mine$z")  
PF InitSegEnd = (PF)1;  
#pragma data_seg()  
  
void InitializeObjects () {  
   PF *x = &InitSegStart;  
   for (++x ; x < &InitSegEnd ; ++x)  
      if (*x)  
         (*x)();  
}  
  
#pragma init_seg(".mine$m",myexit)   // C4378  
A bbbb;   // crash  
  
int main () {  
   InitializeObjects();  
}  
```  
  
## Example  
 The following sample shows how to resolve C4378.  
  
```  
// C4378_b.cpp  
// compile with: /clr  
#pragma warning(disable:4378)  
using namespace System;  
typedef void (__cdecl *PF)(void);  
typedef void (__clrcall * CLRPF)(void);  
  
int cxpf = 0;  // number of destructors we need to call  
PF pfx[200];   // ptrs to those dtors. Watch out for overflow!  
  
ref class TypeClassHolder {  
public:  
   static TypeClassHolder ^typeClass = gcnew TypeClassHolder();  
};  
  
CLRPF FuncTokenToFuncPtr(PF tknFunc) {  
   ModuleHandle type =   
      Type::GetTypeFromHandle(Type::GetTypeHandle(TypeClassHolder::typeClass))->Module->ModuleHandle;  
   return (CLRPF)type.ResolveMethodHandle((int)(size_t)(tknFunc)).GetFunctionPointer().ToPointer();  
}  
  
int myexit (PF pf) {  
   pfx[cxpf++] = pf;  
   return 0;  
}  
  
struct A {  
   A() {}  
   ~A() {}  
};  
  
A aaaa;   
  
#pragma data_seg(".mine$a")  
PF InitSegStart = (PF)1;  
#pragma data_seg(".mine$z")  
PF InitSegEnd = (PF)1;  
#pragma data_seg()  
  
void InitializeObjects () {  
   PF *x = &InitSegStart;  
   for (++x ; x < &InitSegEnd ; ++x)  
      if(*x) {  
         CLRPF realppfunc;  
         realppfunc = FuncTokenToFuncPtr(*x);  
         (realppfunc)();  
      }  
}  
  
#pragma init_seg(".mine$m",myexit)  
A bbbb; // constructor call succeeds  
  
int main () {  
   InitializeObjects();  
}  
```