---
title: "How to: Hold Object Reference in Unmanaged Memory"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "object references, in native functions"
  - "objects [C++], reference in native functions"
  - "references, to objects in native functions"
  - "gcroot keyword [C++], object reference in native function"
ms.assetid: a61eb8ce-3982-477d-8d3d-2173fd57166d
caps.latest.revision: 8
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
# How to: Hold Object Reference in Unmanaged Memory
You can use gcroot.h, which wraps \<xref:System.Runtime.InteropServices.GCHandle>, to hold a CLR object reference in unmanaged memory. Alternatively, you can use `GCHandle` directly.  
  
## Example  
  
```  
// hold_object_reference.cpp  
// compile with: /clr  
#include "gcroot.h"  
using namespace System;  
  
#pragma managed  
class StringWrapper {  
  
private:  
   gcroot<String ^ > x;  
  
public:  
   StringWrapper() {  
      String ^ str = gcnew String("ManagedString");  
      x = str;  
   }  
  
   void PrintString() {  
      String ^ targetStr = x;  
      Console::WriteLine("StringWrapper::x == {0}", targetStr);  
   }  
};  
#pragma unmanaged  
int main() {  
   StringWrapper s;  
   s.PrintString();  
}  
```  
  
 **StringWrapper::x == ManagedString**   
## Example  
 `GCHandle` gives you a means to hold a managed object reference in unmanaged memory.  You use the \<xref:System.Runtime.InteropServices.GCHandle.Alloc*> method to create an opaque handle to a managed object and \<xref:System.Runtime.InteropServices.GCHandle.Free*> to release it. Also, the \<xref:System.Runtime.InteropServices.GCHandle.Target*> method allows you to obtain the object reference back from the handle in managed code.  
  
```  
// hold_object_reference_2.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma managed  
class StringWrapper {  
   IntPtr m_handle;  
public:  
   StringWrapper() {  
      String ^ str = gcnew String("ManagedString");  
      m_handle = static_cast<IntPtr>(GCHandle::Alloc(str));  
   }  
   ~StringWrapper() {  
      static_cast<GCHandle>(m_handle).Free();  
   }  
  
   void PrintString() {  
      String ^ targetStr = safe_cast< String ^ >(static_cast<GCHandle>(m_handle).Target);  
      Console::WriteLine("StringWrapper::m_handle == {0}", targetStr);  
   }  
};  
  
#pragma unmanaged  
int main() {  
   StringWrapper s;   
   s.PrintString();  
}  
```  
  
 **StringWrapper::m_handle == ManagedString**   
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../cli/using-c---interop--implicit-pinvoke-.md)