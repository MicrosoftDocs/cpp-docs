---
title: "Explicit Overrides (C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "virtual functions, explicit overrides"
  - "overriding, functions"
  - "derived classes, virtual functions"
  - "explicit virtual function overrides"
  - "explicit override of virtual function"
ms.assetid: ee583234-5cda-4e90-b55e-3f9fbf079ced
caps.latest.revision: 10
ms.author: "mblome"
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
# Explicit Overrides (C++)
**Microsoft Specific**  
  
 If the same virtual function is declared in two or more [interfaces](../cpp/__interface.md) and if a class is derived from these interfaces, you can explicitly override each virtual function.  
  
 For information on explicit overrides in managed code using the new managed syntax, see [Explicit Overrides](../windows/explicit-overrides---c---component-extensions-.md).  
  
 **END Microsoft Specific**  
  
## Example  
 The following code example illustrates how to use explicit overrides:  
  
```  
// deriv_ExplicitOverrides.cpp  
// compile with: /GR  
extern "C" int printf_s(const char *, ...);  
  
__interface IMyInt1 {  
   void mf1();  
   void mf1(int);  
   void mf2();  
   void mf2(int);  
};  
  
__interface IMyInt2 {  
   void mf1();  
   void mf1(int);  
   void mf2();  
   void mf2(int);  
};  
  
class CMyClass : public IMyInt1, public IMyInt2 {  
public:  
   void IMyInt1::mf1() {  
      printf_s("In CMyClass::IMyInt1::mf1()\n");  
   }  
  
   void IMyInt1::mf1(int) {  
      printf_s("In CMyClass::IMyInt1::mf1(int)\n");  
   }  
  
   void IMyInt1::mf2();  
   void IMyInt1::mf2(int);  
  
   void IMyInt2::mf1() {  
      printf_s("In CMyClass::IMyInt2::mf1()\n");  
   }  
  
   void IMyInt2::mf1(int) {  
         printf_s("In CMyClass::IMyInt2::mf1(int)\n");  
   }  
  
   void IMyInt2::mf2();  
   void IMyInt2::mf2(int);  
};  
  
void CMyClass::IMyInt1::mf2() {  
   printf_s("In CMyClass::IMyInt1::mf2()\n");  
}  
  
void CMyClass::IMyInt1::mf2(int) {  
   printf_s("In CMyClass::IMyInt1::mf2(int)\n");  
}  
  
void CMyClass::IMyInt2::mf2() {  
   printf_s("In CMyClass::IMyInt2::mf2()\n");  
}  
  
void CMyClass::IMyInt2::mf2(int) {  
   printf_s("In CMyClass::IMyInt2::mf2(int)\n");  
}  
  
int main() {  
   IMyInt1 *pIMyInt1 = new CMyClass();  
   IMyInt2 *pIMyInt2 = dynamic_cast<IMyInt2 *>(pIMyInt1);  
  
   pIMyInt1->mf1();  
   pIMyInt1->mf1(1);  
   pIMyInt1->mf2();  
   pIMyInt1->mf2(2);  
   pIMyInt2->mf1();  
   pIMyInt2->mf1(3);  
   pIMyInt2->mf2();  
   pIMyInt2->mf2(4);  
  
   // Cast to a CMyClass pointer so that the destructor gets called  
      CMyClass *p = dynamic_cast<CMyClass *>(pIMyInt1);  
      delete p;  
}  
```  
  
 **In CMyClass::IMyInt1::mf1()**  
**In CMyClass::IMyInt1::mf1(int)**  
**In CMyClass::IMyInt1::mf2()**  
**In CMyClass::IMyInt1::mf2(int)**  
**In CMyClass::IMyInt2::mf1()**  
**In CMyClass::IMyInt2::mf1(int)**  
**In CMyClass::IMyInt2::mf2()**  
**In CMyClass::IMyInt2::mf2(int)**   
## See Also  
 [Inheritance](../cpp/inheritance---c---.md)