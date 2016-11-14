---
title: "Compiler Warning (Level 1) C4743 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4743"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4743"
ms.assetid: 2ee76ea3-77f3-4c2f-9a57-0751823c89fd
caps.latest.revision: 11
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
# Compiler Warning (Level 1) C4743
'*type*' has different size in '*file1*' and '*file2*': *number* and *number* bytes  
  
 An external variable referenced or defined in two files has different types in those files, and the compiler determined that the size of the variable in *file1* differs from the size of the variable in *file2*.  
  
 There is important case when this warning can be emitted for C++. If you declare the same types with the same name in two different files, if those declarations contain virtual functions, and if the declarations are not the same, then the compiler can emit warning C4744 for the virtual function tables. The warning occurs because there are two different sized virtual function tables for the same type, and linker must choose one of them to incorporate into the executable.  It is possible that this can result in your program calling the wrong virtual function.  
  
 To resolve this warning, either use the same type definition or use different names for the types or variables.  
  
## Example  
 This sample contains one definition of the type.  
  
```  
// C4743a.cpp  
// compile with: /c  
class C {  
public:  
    virtual void f1(void);  
    virtual void f2(void);  
    virtual void f3(void);  
};  
  
void C::f1(void) {}  
void C::f2(void) {}  
void C::f3(void) {}  
C q;  
```  
  
## Example  
 The following sample generates C4743.  
  
```  
// C4743b.cpp  
// compile with: C4743a.cpp /W1 /GL /O2  
// C4743 expected  
class C {  
public:  
    virtual void f1(void);  
    virtual void f2(void);  
    virtual void f3(void);  
    virtual void f4(void);  
    virtual void f5(void);  
};  
  
void C::f4(void) {}  
void C::f5(void) {}  
C x;  
  
int main() {}   
```