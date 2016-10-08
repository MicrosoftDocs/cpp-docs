---
title: "Walkthrough: Connecting Using Tasks and XML HTTP Requests"
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
ms.assetid: e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3
caps.latest.revision: 15
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Walkthrough: Connecting Using Tasks and XML HTTP Requests
This example shows how to use the [IXMLHTTPRequest2](assetId:///bbc11c4a-aecf-4d6d-8275-3e852e309908) and [IXMLHTTPRequest2Callback](assetId:///aa4b3f4c-6e28-458b-be25-6cce8865fc71) interfaces together with tasks to send HTTP GET and POST requests to a web service in a Windows 8.x Store app. By combining `IXMLHTTPRequest2` together with tasks, you can write code that composes with other tasks. For example, you can use the download task as part of a chain of tasks. The download task can also respond when work is canceled.  
  
> [!TIP]
>  You can also use the C++ REST SDK to perform HTTP requests from a Windows 8.x Store app using C++ app or from a desktop C++ app. For more info, see [C++ REST SDK (Codename "Casablanca")](../VS_visualcpp/C---REST-SDK--Codename--Casablanca--.md).  
  
 For more information about tasks, see [Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md). For more information about how to use tasks in a Windows 8.x Store app, see [Asynchronous programming in C++](assetId:///512700b7-7863-44cc-93a2-366938052f31) and [Creating Asynchronous Operations in C++ for Windows Store Apps](../VS_visualcpp/Creating-Asynchronous-Operations-in-C---for-Windows-Store-Apps.md).  
  
 This document first shows how to create `HttpRequest` and its supporting classes. It then shows how to use this class from a Windows 8.x Store app that uses C++ and XAML.  
  
 For a more complete example that uses the `HttpReader` class described in this document, see [Developing Bing Maps Trip Optimizer, a Windows Store app in JavaScript and C++](../Topic/Developing%20Bing%20Maps%20Trip%20Optimizer,%20a%20Windows%20Store%20app%20in%20JavaScript%20and%20C++.md). For another example that uses `IXMLHTTPRequest2` but does not use tasks, see [Quickstart: Connecting using XML HTTP Request (IXMLHTTPRequest2)](assetId:///cc7aed53-b2c5-4d83-b85d-cff2f5ba7b35).  
  
> [!TIP]
>  `IXMLHTTPRequest2` and `IXMLHTTPRequest2Callback` are the interfaces that we recommend for use in a Windows 8.x Store app. You can also adapt this example for use in a desktop app.  
  
## Prerequisites  
  
## Defining the HttpRequest, HttpRequestBuffersCallback, and HttpRequestStringCallback Classes  
 When you use the `IXMLHTTPRequest2` interface to create web requests over HTTP, you implement the `IXMLHTTPRequest2Callback` interface to receive the server response and react to other events. This example defines the `HttpRequest` class to create web requests, and the `HttpRequestBuffersCallback` and `HttpRequestStringCallback` classes to process responses. The `HttpRequestBuffersCallback` and `HttpRequestStringCallback` classes support the `HttpRequest` class; you work only with the `HttpRequest` class from application code.  
  
 The `GetAsync`, `PostAsync` methods of the `HttpRequest` class enable you to start HTTP GET and POST operations, respectively. These methods use the `HttpRequestStringCallback` class to read the server response as a string. The `SendAsync` and `ReadAsync` methods enable you to stream large content in chunks. These methods each return [concurrency::task](../VS_visualcpp/task-Class--Concurrency-Runtime-.md) to represent the operation. The `GetAsync` and `PostAsync` methods produce `task<std::wstring>` value, where the `wstring` part represents the server’s response. The `SendAsync` and `ReadAsync` methods produce `task<void>` values; these tasks complete when the send and read operations complete.  
  
 Because the `IXMLHTTPRequest2` interfaces act asynchronously, this example uses [concurrency::task_completion_event](../VS_visualcpp/task_completion_event-Class.md) to create a task that completes after the callback object completes or cancels the download operation. The `HttpRequest` class creates a task-based continuation from this task to set the final result. The `HttpRequest` class uses a task-based continuation to ensure that the continuation task runs even if the previous task produces an error or is canceled. For more information about task-based continuations, see [Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md)  
  
 To support cancellation, the `HttpRequest`, `HttpRequestBuffersCallback`, and `HttpRequestStringCallback` classes use cancellation tokens. The `HttpRequestBuffersCallback` and `HttpRequestStringCallback` classes use the [concurrency::cancellation_token::register_callback](../Topic/cancellation_token::register_callback%20Method.md) method to enable the task completion event to respond to cancellation. This cancellation callback aborts the download. For more info about cancellation, see [Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md).  
  
#### To Define the HttpRequest Class  
  
1.  Use the Visual C++ **Blank App (XAML)** template to create a blank XAML app project. This example names the project `UsingIXMLHTTPRequest2`.  
  
2.  Add to the project a header file that is named HttpRequest.h and a source file that is named HttpRequest.cpp.  
  
3.  In pch.h, add this code:  
  
     [!CODE [concrt-using-ixhr2#1](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#1)]  
  
4.  In HttpRequest.h, add this code:  
  
     [!CODE [concrt-using-ixhr2#2](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#2)]  
  
5.  In HttpRequest.cpp, add this code:  
  
     [!CODE [concrt-using-ixhr2#3](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#3)]  
  
## Using the HttpRequest Class in a Windows 8.x Store App  
 This section demonstrates how to use the `HttpRequest` class in a Windows 8.x Store app. The app provides an input box that defines a URL resource, and button commands that perform GET and POST operations, and a button command that cancels the current operation.  
  
#### To Use the HttpRequest Class  
  
1.  In MainPage.xaml, define the [StackPanel](http://msdn.microsoft.com/library/windows/apps/xaml/windows.ui.xaml.controls.stackpanel.aspx) element as follows.  
  
     [!CODE [concrt-using-ixhr2#A1](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#a1)]  
  
2.  In MainPage.xaml.h, add this `#include` directive:  
  
     [!CODE [concrt-using-ixhr2#A2](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#a2)]  
  
3.  In MainPage.xaml.h, add these `private` member variables to the `MainPage` class:  
  
     [!CODE [concrt-using-ixhr2#A3](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#a3)]  
  
4.  In MainPage.xaml.h, declare the `private` method `ProcessHttpRequest`:  
  
     [!CODE [concrt-using-ixhr2#A4](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#a4)]  
  
5.  In MainPage.xaml.cpp, add these `using` statements:  
  
     [!CODE [concrt-using-ixhr2#A5](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#a5)]  
  
6.  In MainPage.xaml.cpp, implement the `GetButton_Click`, `PostButton_Click`, and `CancelButton_Click` methods of the `MainPage` class.  
  
     [!CODE [concrt-using-ixhr2#A6](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#a6)]  
  
    > [!TIP]
    >  If your app does not require support for cancellation, pass [concurrency::cancellation_token::none](../Topic/cancellation_token::none%20Method.md) to the `HttpRequest::GetAsync` and `HttpRequest::PostAsync` methods.  
  
7.  In MainPage.xaml.cpp, implement the `MainPage::ProcessHttpRequest` method.  
  
     [!CODE [concrt-using-ixhr2#A7](../CodeSnippet/VS_Snippets_ConcRT/concrt-using-ixhr2/concrt-using-ixhr2#a7)]  
  
8.  In the project properties, under **Linker**, **Input**, specify `shcore.lib` and `msxml6.lib`.  
  
 Here is the running app:  
  
 ![The running Windows Store app](../VS_visualcpp/media/ConcRT_UsingIXHR2.png "ConcRT_UsingIXHR2")  
  
## Next Steps  
 [Concurrency Runtime Walkthroughs](../VS_visualcpp/Concurrency-Runtime-Walkthroughs.md)  
  
## See Also  
 [Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md)   
 [Cancellation](../VS_visualcpp/Cancellation-in-the-PPL.md)   
 [Asynchronous programming in C++](assetId:///512700b7-7863-44cc-93a2-366938052f31)   
 [Creating Asynchronous Operations in C++ for Windows Store Apps](../VS_visualcpp/Creating-Asynchronous-Operations-in-C---for-Windows-Store-Apps.md)   
 [Quickstart: Connecting using XML HTTP Request (IXMLHTTPRequest2)](assetId:///cc7aed53-b2c5-4d83-b85d-cff2f5ba7b35)   
 [task Class (Concurrency Runtime)](../VS_visualcpp/task-Class--Concurrency-Runtime-.md)   
 [task_completion_event Class](../VS_visualcpp/task_completion_event-Class.md)   
 [IXMLHTTPRequest2](assetId:///bbc11c4a-aecf-4d6d-8275-3e852e309908)   
 [IXMLHTTPRequest2Callback](assetId:///aa4b3f4c-6e28-458b-be25-6cce8865fc71)