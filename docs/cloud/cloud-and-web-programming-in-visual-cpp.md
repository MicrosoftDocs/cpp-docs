---
description: "Learn more about: Cloud and Web Programming in Visual C++"
title: "Cloud and Web Programming in Visual C++"
ms.date: "05/14/2019"
ms.assetid: b63611f1-9723-44d0-ba7f-c3ebef341313
ms.topic: "overview"
---
# Cloud and Web Programming in Visual C++

In C++, you have several options for connecting to the web and the cloud.

## Microsoft Azure SDKs and REST services

- [Microsoft Azure Storage Client Library for C++](https://azure.github.io/azure-storage-cpp/)

  The Azure Storage Client Library for C++ provides a comprehensive API for working with Azure storage, including but not limited to the following abilities:

  - Create, read, delete, and list blob containers, tables, and queues.
  - Create, read, delete, list and copy blobs plus read and write blob ranges.
  - Insert, delete, replace, merge, and query entities in an Azure table.
  - Enqueue and dequeue messages in an Azure queue.
  - Lazily list containers, blobs, tables, and queues, and lazily query entities

- The ANSI C99 [Azure IoT Hub SDKs](/azure/iot-hub/iot-hub-devguide-sdks) for Internet of Things enable IoT applications to run on the device or on the backend.

- [OneDrive and SharePoint in Microsoft Graph](https://dev.onedrive.com/README.htm)

  The OneDrive API provides a set of HTTP services to connect your application to files and folders in Microsoft 365 and SharePoint Server 2016.

## Windows and cross-platform networking APIs

- [C++ REST SDK (Code name "Casablanca")](https://github.com/Microsoft/cpprestsdk)

  Provides a modern, cross-platform, asynchronous API for interacting with REST services.

  - Perform REST calls against any HTTP server, with built-in support for JSON document parsing and serialization
  - Supports OAuth 1 and 2, including a local redirect listener
  - Make WebSockets connections against remote services
  - A fully asynchronous task API based on PPL, including a built-in thread pool

  Supports Windows Desktop (7+), Windows Server (2012+), Universal Windows Platform, Linux, OSX, Android, and iOS.

- [Windows::Web::Http::HttpClient](/uwp/api/windows.web.http.httpclient)

  A Windows Runtime HTTP client class modeled on the .NET Framework class of the same name in the System.Web namespace. `HttpClient` fully supports asynchronous upload and download over HTTP, and pipeline filters that enable the insertion of custom HTTP handlers into the pipeline. The Windows SDK includes sample filters for metered networks, OAuth authentication, and more. For apps that target only Universal Windows Platform, we recommend that you use the `Windows::Web:HttpClient` class.

- [IXMLHTTPRequest2 interface](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2)

  Provides a native COM interface that you can use in Windows Runtime apps or Windows desktop apps to connect to the Internet over HTTP and issue GET, PUT, and other HTTP commands. For more information, see [Walkthrough: Connecting Using Tasks and XML HTTP Requests](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md).

- [Windows Internet (WinInet)](/windows/win32/WinInet/portal)

  Windows API that you can use in Windows desktop apps to connect to the Internet.

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md) <br/>
[Microsoft Azure C and C++ Developer Center](https://azure.microsoft.com/develop/cpp/) <br/>
[Networks and web services (UWP)](/windows/uwp/networking/)
