---
title: "Cloud and Web Programming in Visual C++ | Microsoft Docs"
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
ms.assetid: b63611f1-9723-44d0-ba7f-c3ebef341313
caps.latest.revision: 13
author: "ghogen"
ms.author: "ghogen"
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
# Cloud and Web Programming in Visual C++
In C++, you have several options for connecting to the web and the cloud.  
  
 [Windows Azure Mobile Services](http://www.windowsazure.com/develop/mobile/)  
 Provides native APIs that you can use in Windows Store apps or Windows desktop apps to connect to Windows Azure Mobile Services. Although most of the examples on the website are in C#, you can also use C++. For more information, see [Quickstart: Adding a mobile service using C++](http://msdn.microsoft.com/library/windows/apps/dn263181.aspx).  
  
 [Live REST Interface](http://msdn.microsoft.com/library/live/hh243648.aspx)  
 Provides REST endpoints that you can use in Windows Store apps, Windows desktop apps, or C++ Linux applications to connect to [Live](http://msdn.microsoft.com/live/ff519582) services such as SkyDrive, Outlook.com, and Skype. C++ apps use these endpoints directly rather than going through the Live SDK, which is for .NET apps only.  
  
 [C++ REST SDK (Codename "Casablanca")](cpp-rest-sdk-codename-casablanca.md)  
 Provides convenient asynchronous HTTP wrapper methods that are designed for cross-platform compatibility and for use in desktop apps on operating systems back to Windows 7 and Windows Server 2012. You can also use these in Universal Windows Platform apps; however, for apps that target only Universal Windows Platform, we recommend that you use the `Windows::Web:HttpClient` class. The C++ REST SDK (codename "Casablanca") also provides helper classes that support REST calls and convert JSON data into C++ types. The SDK is available on [CodePlex](http://casablanca.codeplex.com/) and it contains sample files such as [live_connect.h](http://casablanca.codeplex.com/SourceControl/latest#Release/collateral/Samples/WindowsLiveAuth/live_connect.h), which provides helper methods for connecting to [Live](http://msdn.microsoft.com/live/ff519582) services.  
  
 [Windows::Web::Http::HttpClient](https://msdn.microsoft.com/en-us/library/windows/apps/windows.web.http.httpclient.aspx)  
 A Windows Runtime HTTP client class modeled on the .NET Framework class of the same name in the System.Web namespace. `HttpClient` fully supports asynchronous upload and download over HTTP, and pipeline filters that enable the insertion of custom HTTP handlers into the pipeline. The Windows SDK includes sample filters for metered networks, OAuth authentication, and more.  
  
 [IXMLHTTPRequest2 interface](http://msdn.microsoft.com/library/windows/apps/hh831151.aspx)  
 Provides a native COM interface that you can use in Windows Store apps or Windows desktop apps to connect to the Internet over HTTP and issue GET, PUT, and other HTTP commands. For more information, see [Walkthrough: Connecting Using Tasks and XML HTTP Requests](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md).  
  
 [Windows Internet (WinInet)](http://msdn.microsoft.com/library/windows/desktop/aa385331\(v=vs.85\).aspx)  
 Windows API that you can use in Windows desktop apps to connect to the Internet.  
  
## See Also  
 [Visual C++](../visual-cpp-in-visual-studio.md)   
 [Connecting to networks and web services (Windows Store apps using C#/VB/C++ and XAML)](http://msdn.microsoft.com/library/windows/apps/br229573.aspx)