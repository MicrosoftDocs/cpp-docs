---
title: "Using IDispEventSimpleImpl"
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
ms.assetid: 8640ad1a-4bd0-40a5-b5e4-7322685d7aab
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
# Using IDispEventSimpleImpl
When using `IDispEventSimpleImpl` to handle events, you will need to:  
  
-   Derive your class from [IDispEventSimpleImpl](../VS_visualcpp/IDispEventSimpleImpl-Class.md).  
  
-   Add an [event sink map](../Topic/BEGIN_SINK_MAP.md) to your class.  
  
-   Define [_ATL_FUNC_INFO](../VS_visualcpp/_ATL_FUNC_INFO-Structure.md) structures describing the events.  
  
-   Add entries to the event sink map using the [SINK_ENTRY_INFO](../Topic/SINK_ENTRY_INFO.md) macro.  
  
-   Implement the methods that you're interested in handling.  
  
-   Advise and unadvise the event source.  
  
## Example  
 The example below shows you how to handle the **DocumentChange** event fired by Word's **Application** object. This event is defined as a method on the **ApplicationEvents** dispinterface.  
  
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
  
 The only information from the type library actually used in this example is the CLSID of the Word **Application** object and the IID of the **ApplicationEvents** interface. This information is only used at compile time.  
  
 The following code appears in Simple.h. The relevant code is noted by comments:  
  
 [!CODE [NVC_ATL_EventHandlingSample#3](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_EventHandlingSample#3)]  
  
 The following code is from Simple.cpp:  
  
 [!CODE [NVC_ATL_EventHandlingSample#4](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_EventHandlingSample#4)]  
  
## See Also  
 [Event Handling](../VS_visualcpp/Event-Handling-and-ATL.md)   
 [ATLEventHandling Sample](../VS_visualcpp/Visual-C---Samples.md)