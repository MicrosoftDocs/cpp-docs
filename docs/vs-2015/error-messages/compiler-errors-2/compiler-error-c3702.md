---
title: "Compiler Error C3702 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3702"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3702"
ms.assetid: 14fcc20e-4404-45d7-be54-e4f09332fa5a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3702
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3702](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3702).  
  
  
function' : ATL is required for COM events  
  
 You attempted to use COM events without including the necessary ATL header files.  
  
 The following sample generates C3702:  
  
```  
// C3702.cpp  
// uncomment the following line to resolve  
// #define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
#include <atlctl.h>  
  
[module(dll, name=idid, uuid="12341234-1234-1234-1234-123412341234")];  
  
[object]  
__interface IEvents : IUnknown  
{  
   HRESULT event1([in] int i);  
};  
  
[dual]  
__interface IBase  
{  
   HRESULT fireEvents();  
};  
  
[coclass, event_source(com)]  
class CEventSrc : public IBase  
{  
   public:  
   __event __interface IEvents;  
  
   HRESULT fireEvents()  
   {  
      HRESULT hr = IEvents_event1(123);  
      return hr;  
   }  
};   // C3702  
  
int main() {  
}  
```

