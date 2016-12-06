---
title: "How to: Send a Message at a Regular Interval | Microsoft Docs"
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
  - "timer class, example"
  - "sending messages at regular intervals [Concurrency Runtime]"
ms.assetid: 4b60ea6c-97c8-4d69-9f7b-ad79f3548026
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Send a Message at a Regular Interval
This example shows how to use the concurrency::[timer class](../../parallel/concrt/reference/timer-class.md) to send a message at a regular interval.  
  
## Example  

 The following example uses a `timer` object to report progress during a lengthy operation. This example links the `timer` object to a [concurrency::call](../../parallel/concrt/reference/call-class.md) object. The `call` object prints a progress indicator to the console at a regular interval. The [concurrency::timer::start](reference/timer-class.md#start) method runs the timer on a separate context. The `perform_lengthy_operation` function calls the [concurrency::wait](reference/concurrency-namespace-functions.md#wait) function on the main context to simulate a time-consuming operation.  

  
 [!code-cpp[concrt-report-progress#1](../../parallel/concrt/codesnippet/cpp/how-to-send-a-message-at-a-regular-interval_1.cpp)]  
  
 This example produces the following sample output:  
  
```Output  
Performing a lengthy operation..........done.  
```  
  
## Compiling the Code  
 Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `report-progress.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe /EHsc report-progress.cpp**  
  
## See Also  
 [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)   
 [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Message Passing Functions](../../parallel/concrt/message-passing-functions.md)
