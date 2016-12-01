---
title: "History of DCOM | Microsoft Docs"
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
  - "Remote Automation, DCOM"
  - "DCOM, about DCOM"
  - "DCOM"
ms.assetid: c21aa0ea-1396-4b52-b77f-88fb0fdd2a5c
caps.latest.revision: 9
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
# History of DCOM
When Automation was first introduced in early 1993, it was capable of being used only between applications running on the same machine. However, because it shared the same underpinnings as the rest of OLE, that is, COM (or Component Object Model), it was always intended that it would become "remotable" when COM itself was updated to include remoting capabilities. It was also planned that the transition from purely local operation to distributed operation would require little or no change to existing code.  
  
 So what does "remoting" mean Local COM dictated that the consumer of an interface reside and execute on the same machine as the provider of that interface. For example, Microsoft Visual Basic could control a copy of Microsoft Excel on your desktop machine, but it was not capable of directing the execution of Excel on another machine. With the development of distributed COM, the consumer of an interface no longer needs to reside on the same machine as that on which the interface provider executes.  
  
 Once COM was adapted to work across a network, then any interface that was not tied to a local execution model (some interfaces have inherent reliance on local machine facilities, such as those drawing interfaces whose methods have handles to device contexts as parameters) would have the capability of being distributed. An interface consumer would make a request for a given interface; that interface may be provided by an instance of an object running (or to be run) on a different machine. The distribution mechanism inside COM would connect the consumer to the provider in such a way that method calls made by the consumer would appear at the provider end, where they would be executed. Any return values would then be sent back to the consumer. To all intents and purposes, the act of distribution is transparent to both the consumer and the provider.  
  
 Such a variety of COM does now exist. DCOM (for "distributed COM") has shipped with versions of Windows NT beginning with version 4.0 and including Windows 2000. Since late 1996, it has also been available for Windows 9x. In both cases, DCOM comprises a set of replacement and additional DLLs, with some utilities, which provide both local and remote COM capabilities. It is therefore now an inherent part of Win32-based platforms, and will be made available on other platforms by other organizations over time.  
  
## In This Section  
 [Where Does Remote Automation Fit In](where-does-remote-automation-fit-in-q.md)  
  
 [What Does Remote Automation Provide](what-does-remote-automation-provide-q.md)  
  
## See Also  
 [Remote Automation](../mfc/remote-automation.md)
