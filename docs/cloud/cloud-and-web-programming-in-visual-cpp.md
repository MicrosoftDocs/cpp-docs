---
title: "Cloud and Web Programming in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-azure"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: b63611f1-9723-44d0-ba7f-c3ebef341313
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Cloud and Web Programming in Visual C++

In C++, you have several options for connecting to the web and the cloud.

## Cloud programming options

- [Windows Azure Mobile Services](http://www.windowsazure.com/develop/mobile/)

   Provides native APIs that you can use in Universal Windows Platform (UWP) apps or Windows desktop apps to connect to Windows Azure Mobile Services. Although most of the examples on the website are in C#, you can also use C++. For more information, see [Quickstart: Adding a mobile service using C++](https://msdn.microsoft.com/library/windows/apps/dn263181.aspx).

- [Microsoft Azure Storage Client Library for C++](https://blogs.msdn.microsoft.com/windowsazurestorage/2015/04/29/microsoft-azure-storage-client-library-for-c-v1-0-0-general-availability/)

   The Azure Storage Client Library for C++ provides a comprehensive API for working with Azure storage, including but not limited to the following abilities:

  - Create, read, delete, and list blob containers, tables, and queues.
  - Create, read, delete, list and copy blobs plus read and write blob ranges.
  - Insert, delete, replace, merge, and query entities in an Azure table.
  - Enqueue and dequeue messages in an Azure queue.
  - Lazily list containers, blobs, tables, and queues, and lazily query entities

- [OneDrive API](https://dev.onedrive.com/README.htm)

   The OneDrive API provides a set of HTTP services to connect your application to files and folders in Office 365 and SharePoint Server 2016.

- [C++ REST SDK (Codename "Casablanca")](https://github.com/Microsoft/cpprestsdk)

   Provides a modern, cross-platform, asynchronous API for interacting with REST services.

  - Perform REST calls against any HTTP server, with built-in support for JSON document parsing and serialization
  - Supports OAuth 1 and 2, including a local redirect listener
  - Make Websockets connections against remote services
  - A fully asynchronous task API based on PPL, including a built-in threadpool

   Supports Windows Desktop (7+), Windows Server (2012+), Universal Windows Platform, Linux, OSX, Android, and iOS. 

- [Windows::Web::Http::HttpClient](https://msdn.microsoft.com/library/windows/apps/windows.web.http.httpclient.aspx)

   A Windows Runtime HTTP client class modeled on the .NET Framework class of the same name in the System.Web namespace. `HttpClient` fully supports asynchronous upload and download over HTTP, and pipeline filters that enable the insertion of custom HTTP handlers into the pipeline. The Windows SDK includes sample filters for metered networks, OAuth authentication, and more. For apps that target only Universal Windows Platform, we recommend that you use the `Windows::Web:HttpClient` class. 

- [IXMLHTTPRequest2 interface](/previous-versions/windows/desktop/api/msxml6/nn-msxml6-ixmlhttprequest2)

   Provides a native COM interface that you can use in Windows Runtime apps or Windows desktop apps to connect to the Internet over HTTP and issue GET, PUT, and other HTTP commands. For more information, see [Walkthrough: Connecting Using Tasks and XML HTTP Requests](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md).

- [Windows Internet (WinInet)](https://msdn.microsoft.com/library/windows/desktop/aa385331\(v=vs.85\).aspx)

   Windows API that you can use in Windows desktop apps to connect to the Internet.

## See also

[Visual C++](../visual-cpp-in-visual-studio.md) <br/>
[Networks and web services](/windows/uwp/networking/)
