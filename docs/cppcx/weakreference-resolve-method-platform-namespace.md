---
title: "WeakReference::Resolve Method (Platform namespace) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/WeakReference::Resolve"
ms.assetid: 78bbcadd-89d0-4863-a4e8-1d84040eed7d
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WeakReference::Resolve Method (Platform namespace)
Returns a handle to the original ref class, or `nullptr` if the object no longer exists.  
  
## Syntax  
  
```cpp  
  
template<typename T>  
T^ Resolve() const  
```  
  
#### Parameters  
  
## Property Value/Return Value  
 A handle to the ref class that the WeakReference object was previously associated with, or nullptr.  
  
## Remarks  
  
## Example  
 This is the description for a Code Example.  
  
```  
  
Bar^ bar = ref new Bar();  
//use bar...  
  
if (bar != nullptr)  
{  
    WeakReference wr(bar);  
    Bar^ newReference = wr.Resolve<Bar>();  
}  
```  
  
 Note that the type parameter is T, not T^.  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)