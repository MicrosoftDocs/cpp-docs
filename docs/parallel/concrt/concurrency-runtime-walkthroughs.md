---
title: "Concurrency Runtime Walkthroughs | Microsoft Docs"
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
  - "walkthroughs [Concurrency Runtime]"
  - "Concurrency Runtime, walkthroughs"
ms.assetid: 7374c5e9-54eb-44bf-9ed9-5e190cfd290b
caps.latest.revision: 14
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
# Concurrency Runtime Walkthroughs
The scenario-based topics in this section show how to use many of the features of the Concurrency Runtime.  
  
## In This Section  
 [Walkthrough: Connecting Using Tasks and XML HTTP Requests](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)  
 Shows how to use the [IXMLHTTPRequest2](http://msdn.microsoft.com/en-us/bbc11c4a-aecf-4d6d-8275-3e852e309908) and [IXMLHTTPRequest2Callback](http://msdn.microsoft.com/en-us/aa4b3f4c-6e28-458b-be25-6cce8865fc71) interfaces together with tasks to send HTTP GET and POST requests to a web service in a [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app.  
  
 [Walkthrough: Creating an Agent-Based Application](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)  
 Describes how to create a basic agent-based application.  
  
 [Walkthrough: Creating a Dataflow Agent](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)  
 Demonstrates how to create agent-based applications that are based on dataflow, instead of on control flow.  
  
 [Walkthrough: Creating an Image-Processing Network](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)  
 Demonstrates how to create a network of asynchronous message blocks that perform image processing.  
  
 [Walkthrough: Implementing Futures](../../parallel/concrt/walkthrough-implementing-futures.md)  
 Shows how to asynchronously compute values for later use.  
  
 [Walkthrough: Using join to Prevent Deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)  
 Uses the dining philosophers problem to illustrate how to use the [concurrency::join](../../parallel/concrt/reference/join-class.md) class to prevent deadlock in your application.  
  
 [Walkthrough: Removing Work from a User-Interface Thread](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)  
 Demonstrates how to improve the performance of an MFC application that draws the Mandelbrot fractal.  
  
 [Walkthrough: Using the Concurrency Runtime in a COM-Enabled Application](../../parallel/concrt/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application.md)  
 Demonstrates how to use the Concurrency Runtime in an application that uses the Component Object Model (COM).  
  
 [Walkthrough: Adapting Existing Code to Use Lightweight Tasks](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md)  
 Shows how to adapt existing code that uses the Windows API to create and execute a thread to use a lightweight task.  
  
 [Walkthrough: Creating a Custom Message Block](../../parallel/concrt/walkthrough-creating-a-custom-message-block.md)  
 Describes how to create a custom message block type that orders incoming messages by priority.  
  
## Related Sections  
 [Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)  
 Introduces the concurrent programming framework for Visual C++.

