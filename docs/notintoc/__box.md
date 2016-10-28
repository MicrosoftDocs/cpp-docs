---
title: "__box"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "__box"
  - "__box_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__box keyword"
  - "boxing"
  - "unboxing"
  - "boxing, __box keyword"
ms.assetid: 935b4a4d-fc45-484c-87c6-d95cfc67cc9d
caps.latest.revision: 10
ms.author: "mblome"
manager: "douge"
translation.priority.mt: 
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
# __box
> [!NOTE]
>  This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [Boxing](../windows/boxing---c---component-extensions-.md) for information on using the equivalent functionality in the new syntax.  
  
 Creates a managed copy of a __value class object.  
  
## Syntax  
  
```  
  
__box(  
value-class identifier  
)  
  
```  
  
## Remarks  
 The `__box` keyword is used to create a managed object (derived from **System::ValueType**) from an existing __value class object. When the `__box` keyword is applied to a \__value class:  
  
-   A managed object is allocated on the common language runtime heap.  
  
-   The current value of the __value class object is bit-wise copied into the managed object.  
  
-   The address of the new managed object is returned.  
  
 This process is known as boxing. This enables any __value class object to be used in generic routines that work for any managed object because the managed object indirectly inherits from **System::Object** (since **System::ValueType** inherits from **System::Object**).  
  
> [!NOTE]
>  The newly created boxed object is a copy of the __value class object. Therefore, modifications to the value of the boxed object do not affect the contents of the \__value class object.  
  
## Example  
 Here's is an example that does boxing and unboxing:  
  
```  
// keyword__box.cpp  
// compile with: /clr:oldSyntax  
#using < mscorlib.dll >  
using namespace System;  
  
int main() {  
  Int32 i = 1;  
  System::Object* obj = __box(i);  
  Int32 j = *dynamic_cast<__box Int32*>(obj);  
}  
```  
  
 In the following example, an unmanaged value type (`V`) is boxed and passed as a managed parameter to the `Positive` function.  
  
```  
// keyword__box2.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__value struct V {  
   int i;  
};  
void Positive(Object*) {}   // expects a managed class  
  
int main() {  
   V v={10};   // allocate and initialize  
   Console::WriteLine(v.i);  
  
   // copy to the common language runtime heap  
   __box V* pBoxedV = __box(v);  
   Positive(pBoxedV);   // treat as a managed class  
  
   pBoxedV->i = 20;   // update the boxed version  
   Console::WriteLine(pBoxedV->i);  
}  
```  
  
 **10**  
**20**