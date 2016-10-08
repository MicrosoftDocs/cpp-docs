---
title: "Using IDispEventImpl"
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
ms.topic: article
ms.assetid: 82d53b61-9d0d-45c5-aff9-2fafa468a9ca
caps.latest.revision: 10
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
# Using IDispEventImpl
When using `IDispEventImpl` to handle events, you will need to:  
  
-   Derive your class from [IDispEventImpl](../VS_visualcpp/IDispEventImpl-Class.md).  
  
-   Add an [event sink map](../Topic/BEGIN_SINK_MAP.md) to your class.  
  
-   Add entries to the event sink map using the [SINK_ENTRY](../Topic/SINK_ENTRY.md) or [SINK_ENTRY_EX](../Topic/SINK_ENTRY_EX.md) macro.  
  
-   Implement the methods that you're interested in handling.  
  
-   Advise and unadvise the event source.  
  
## Example  
 The example below shows how to handle the **DocumentChange** event fired by Word's **Application** object. This event is defined as a method on the **ApplicationEvents** dispinterface.  
  
 The example is from the [ATLEventHandling sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 `[`  
  
 `uuid(000209F7-0000-0000-C000-000000000046),`  
  
 `hidden`  
  
 `]`  
  
 `dispinterface ApplicationEvents {`  
  
 `properties:`  
  
 `methods:`  
  
 `[id(0x00000001), restricted, hidden]`  
  
 `void Startup();`  
  
 `[id(0x00000002)]`  
  
 `void Quit();`  
  
 `[id(0x00000003)]`  
  
 `void DocumentChange();`  
  
 `};`  
  
 The example uses `#import` to generate the required header files from Word's type library. If you want to use this example with other versions of Word, you must specify the correct mso dll file. For example, Office 2000 provides mso9.dll and OfficeXP provides mso.dll. This code is simplified from stdafx.h:  
  
 [!CODE [NVC_ATL_EventHandlingSample#1](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_EventHandlingSample#1)]  
  
 The following code appears in NotSoSimple.h. The relevant code is noted by comments:  
  
 [!CODE [NVC_ATL_EventHandlingSample#2](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_EventHandlingSample#2)]  
  
## See Also  
 [Event Handling](../VS_visualcpp/Event-Handling-and-ATL.md)   
 [ATLEventHandling Sample](../VS_visualcpp/Visual-C---Samples.md)