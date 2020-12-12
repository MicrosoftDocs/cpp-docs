---
description: "Learn more about: Walkthrough: Connecting Using Tasks and XML HTTP Requests"
title: "Walkthrough: Connecting Using Tasks and XML HTTP Requests"
ms.date: "04/25/2019"
helpviewer_keywords: ["connecting to web services, UWP apps [C++]", "IXMLHTTPRequest2 and tasks, example", "IXHR2 and tasks, example"]
ms.assetid: e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3
---
# Walkthrough: Connecting Using Tasks and XML HTTP Requests

This example shows how to use the [IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2) and [IXMLHTTPRequest2Callback](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2callback) interfaces together with tasks to send HTTP GET and POST requests to a web service in a Universal Windows Platform (UWP) app. By combining `IXMLHTTPRequest2` together with tasks, you can write code that composes with other tasks. For example, you can use the download task as part of a chain of tasks. The download task can also respond when work is canceled.

> [!TIP]
> You can also use the C++ REST SDK to perform HTTP requests from a UWP app using C++ app or from a desktop C++ app. For more info, see [C++ REST SDK (Codename "Casablanca")](https://github.com/Microsoft/cpprestsdk).

For more information about tasks, see [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md). For more information about how to use tasks in a UWP app, see [Asynchronous programming in C++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps) and [Creating Asynchronous Operations in C++ for UWP Apps](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).

This document first shows how to create `HttpRequest` and its supporting classes. It then shows how to use this class from a UWP app that uses C++ and XAML.

For an example that uses `IXMLHTTPRequest2` but does not use tasks, see [Quickstart: Connecting using XML HTTP Request (IXMLHTTPRequest2)](/previous-versions/windows/apps/hh770550\(v=win.10\)).

> [!TIP]
> `IXMLHTTPRequest2` and `IXMLHTTPRequest2Callback` are the interfaces that we recommend for use in a UWP app. You can also adapt this example for use in a desktop app.

## Prerequisites

UWP support is optional in Visual Studio 2017 and later. To install it, open the Visual Studio Installer from the Windows Start menu and choose the version of Visual Studio you are using. Click the **Modify** button and make sure the **UWP Development** tile is checked. Under **Optional Components** make sure that **C++ UWP Tools** is checked. Use v141 for Visual Studio 2017 or v142 for Visual Studio 2019.

## Defining the HttpRequest, HttpRequestBuffersCallback, and HttpRequestStringCallback Classes

When you use the `IXMLHTTPRequest2` interface to create web requests over HTTP, you implement the `IXMLHTTPRequest2Callback` interface to receive the server response and react to other events. This example defines the `HttpRequest` class to create web requests, and the `HttpRequestBuffersCallback` and `HttpRequestStringCallback` classes to process responses. The `HttpRequestBuffersCallback` and `HttpRequestStringCallback` classes support the `HttpRequest` class; you work only with the `HttpRequest` class from application code.

The `GetAsync`, `PostAsync` methods of the `HttpRequest` class enable you to start HTTP GET and POST operations, respectively. These methods use the `HttpRequestStringCallback` class to read the server response as a string. The `SendAsync` and `ReadAsync` methods enable you to stream large content in chunks. These methods each return [concurrency::task](../../parallel/concrt/reference/task-class.md) to represent the operation. The `GetAsync` and `PostAsync` methods produce `task<std::wstring>` value, where the `wstring` part represents the server’s response. The `SendAsync` and `ReadAsync` methods produce `task<void>` values; these tasks complete when the send and read operations complete.

Because the `IXMLHTTPRequest2` interfaces act asynchronously, this example uses [concurrency::task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) to create a task that completes after the callback object completes or cancels the download operation. The `HttpRequest` class creates a task-based continuation from this task to set the final result. The `HttpRequest` class uses a task-based continuation to ensure that the continuation task runs even if the previous task produces an error or is canceled. For more information about task-based continuations, see [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

To support cancellation, the `HttpRequest`, `HttpRequestBuffersCallback`, and `HttpRequestStringCallback` classes use cancellation tokens. The `HttpRequestBuffersCallback` and `HttpRequestStringCallback` classes use the [concurrency::cancellation_token::register_callback](reference/cancellation-token-class.md#register_callback) method to enable the task completion event to respond to cancellation. This cancellation callback aborts the download. For more info about cancellation, see [Cancellation](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).

### To Define the HttpRequest Class

1. From the main menu, choose **File** > **New** > **Project**.

1. Use the C++ **Blank App (Universal Windows)** template to create a blank XAML app project. This example names the project `UsingIXMLHTTPRequest2`.

1. Add to the project a header file that is named HttpRequest.h and a source file that is named HttpRequest.cpp.

1. In pch.h, add this code:

   [!code-cpp[concrt-using-ixhr2#1](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_1.h)]

1. In HttpRequest.h, add this code:

   [!code-cpp[concrt-using-ixhr2#2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_2.h)]

1. In HttpRequest.cpp, add this code:

   [!code-cpp[concrt-using-ixhr2#3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_3.cpp)]

## Using the HttpRequest Class in a UWP App

This section demonstrates how to use the `HttpRequest` class in a UWP app. The app provides an input box that defines a URL resource, and button commands that perform GET and POST operations, and a button command that cancels the current operation.

### To Use the HttpRequest Class

1. In MainPage.xaml, define the [StackPanel](/uwp/api/windows.ui.xaml.controls.stackpanel) element as follows.

   [!code-xml[concrt-using-ixhr2#A1](../../parallel/concrt/codesnippet/xaml/walkthrough-connecting-using-tasks-and-xml-http-requests_4.xaml)]

1. In MainPage.xaml.h, add this `#include` directive:

   [!code-cpp[concrt-using-ixhr2#A2](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_5.h)]

1. In MainPage.xaml.h, add these **`private`** member variables to the `MainPage` class:

   [!code-cpp[concrt-using-ixhr2#A3](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_6.h)]

1. In MainPage.xaml.h, declare the **`private`** method `ProcessHttpRequest`:

   [!code-cpp[concrt-using-ixhr2#A4](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_7.h)]

1. In MainPage.xaml.cpp, add these **`using`** statements:

   [!code-cpp[concrt-using-ixhr2#A5](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_8.cpp)]

1. In MainPage.xaml.cpp, implement the `GetButton_Click`, `PostButton_Click`, and `CancelButton_Click` methods of the `MainPage` class.

   [!code-cpp[concrt-using-ixhr2#A6](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_9.cpp)]

   > [!TIP]
   > If your app does not require support for cancellation, pass [concurrency::cancellation_token::none](reference/cancellation-token-class.md#none) to the `HttpRequest::GetAsync` and `HttpRequest::PostAsync` methods.

1. In MainPage.xaml.cpp, implement the `MainPage::ProcessHttpRequest` method.

   [!code-cpp[concrt-using-ixhr2#A7](../../parallel/concrt/codesnippet/cpp/walkthrough-connecting-using-tasks-and-xml-http-requests_10.cpp)]

1. In the project properties, under **Linker**, **Input**, specify `shcore.lib` and `msxml6.lib`.

Here is the running app:

![The running Windows Runtime app](../../parallel/concrt/media/concrt_usingixhr2.png "The running Windows Runtime app")

## Next Steps

[Concurrency Runtime Walkthroughs](../../parallel/concrt/concurrency-runtime-walkthroughs.md)

## See also

[Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Cancellation in the PPL](cancellation-in-the-ppl.md)<br/>
[Asynchronous programming in C++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps)<br/>
[Creating Asynchronous Operations in C++ for UWP Apps](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md)<br/>
[Quickstart: Connecting using XML HTTP Request (IXMLHTTPRequest2)](/previous-versions/windows/apps/hh770550\(v=win.10\))
[task Class (Concurrency Runtime)](../../parallel/concrt/reference/task-class.md)<br/>
[task_completion_event Class](../../parallel/concrt/reference/task-completion-event-class.md)
