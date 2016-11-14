---
title: "Purpose of Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributes [C++], about attributes"
ms.assetid: 3aff8bfa-a2a3-4fcb-a2c6-1d96a2b4c68d
caps.latest.revision: 7
author: "mikeblome"
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
# Purpose of Attributes
Attributes extend C++ in directions not currently possible without breaking the classic structure of the language. Attributes allow providers (separate DLLs) to extend language functionality dynamically. The primary goal of attributes is to simplify the authoring of COM components, in addition to increasing the productivity level of the component developer. Attributes can be applied to nearly any C++ construct, such as classes, data members, or member functions. The following is a highlight of benefits provided by this new technology:  
  
-   Exposes a familiar and simple calling convention.  
  
-   Uses inserted code, which, unlike macros, is recognized by the debugger.  
  
-   Allows easy derivation from base classes without burdensome implementation details.  
  
-   Replaces the large amount of IDL code required by a COM component with a few concise attributes.  
  
 For example, to implement a simple event sink for a generic ATL class, you could apply the [event_receiver](../windows/event-receiver.md) attribute to a specific class such as `CMyReceiver`. The **event_receiver** attribute is then compiled by the Visual C++ compiler, which inserts the proper code into the object file.  
  
```  
[event_receiver(com)]  
class CMyReceiver   
{  
   void handler1(int i) { ... }  
   void handler2(int i, float j) { ... }  
}  
```  
  
 You can then set up the **CMyReceiver** methods `handler1` and `handler2` to handle events (using the intrinsic function [__hook](../cpp/hook.md)) from an event source, which you can create using [event_source](../windows/event-source.md).  
  
## See Also  
 [Concepts](../windows/attributed-programming-concepts.md)