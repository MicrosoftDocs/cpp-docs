---
title: "Running Remote Automation Using AUTOCLIK and AUTODRIV | Microsoft Docs"
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
  - "AUTOCLIK sample [MFC]"
ms.assetid: 8900c0de-8dba-4f0a-8d9e-7db77a1f4f46
caps.latest.revision: 10
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
# Running Remote Automation Using AUTOCLIK and AUTODRIV
AUTOCLIK is a simple Automation server sample application that you can use as a base from which to learn more about Remote Automation. AUTODRIV is a simple Automation client application that drives AUTOCLIK. You can use them to demonstrate Remote Automation.  
  
#### To install AUTOCLIK.EXE on two machines and drive it using Remote Automation  
  
1.  Install the [AUTOCLIK](../visual-cpp-samples.md) sample application onto your development machine.  
  
2.  Build AUTOCLIK.EXE.  
  
3.  Run AUTOCLIK.EXE in standalone fashion and then shut it down. This will register it as an Automation server.  
  
4.  Copy AUTOCLIK.EXE to a remote machine, run it there, and then shut it down.  
  
5.  Run AUTODRIV.EXE on the local machine and verify that running it starts AUTOCLIK.EXE. To find out more about AUTODRIV.EXE, see [AUTOCLIK](../visual-cpp-samples.md).  
  
6.  On the remote machine, start AUTMGR32.EXE (Automation Manager).  
  
7.  On the remote machine, start RACMGR32.EXE (Remote Automation Connection Manager).  
  
8.  In the Remote Automation Connection Manager, select AutoClik.Document from the **OLE Classes** list.  
  
9. Choose a system security policy from the **Client Access** tab to grant client access to AutoClik.Document.  
  
10. On the local machine, start RACMGR32.EXE and select AutoClik.Document from the **OLE Classes** list.  
  
11. From the **Server Connection** tab, choose both the network address of the remote machine and the appropriate network protocol.  
  
12. With AutoClik.Document still selected in the **OLE Classes** list box, choose the **Remote** command from the `Register` menu.  
  
13. On the local machine, run AUTODRIV.EXE or the equivalent AUTOCLIK.MAK Visual Basic project if you want to have a Visual Basic, rather than an MFC, client.  
  
 On the remote machine, you should now be able to see AUTOCLIK executing commands initiated from the local client.  
  
## See Also  
 [Remote Automation](../mfc/remote-automation.md)

