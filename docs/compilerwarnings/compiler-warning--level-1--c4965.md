---
title: "Compiler Warning (level 1) C4965"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C4965"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4965"
ms.assetid: 47f3f6dc-459b-4a25-9947-f394c8966cb5
caps.latest.revision: 14
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
# Compiler Warning (level 1) C4965
implicit box of integer 0; use nullptr or explicit cast  
  
 Visual C++ features implicit boxing of value types. An instruction that resulted in a null assignment using Managed Extensions for C++ now becomes an assignment to a boxed int.  
  
 For more information, see [Boxing](../windows/boxing---c---component-extensions-.md).  
  
## Example  
 The following sample generates C4965.  
  
```  
// C4965.cpp  
// compile with: /clr /W1  
int main() {  
   System::Object ^o = 0;   // C4965  
  
   // the previous line is the same as the following line  
   // using Managed Extensions for C++  
   // System::Object *o = __box(0);  
  
   // OK  
   System::Object ^o2 = nullptr;  
   System::Object ^o3 = safe_cast<System::Object^>(0);  
}  
```