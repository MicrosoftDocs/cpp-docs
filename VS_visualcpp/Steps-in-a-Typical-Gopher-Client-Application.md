---
title: "Steps in a Typical Gopher Client Application"
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
ms.assetid: 3e4e1869-5da0-453d-8ba9-b648c894bb90
caps.latest.revision: 7
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
# Steps in a Typical Gopher Client Application
The following table shows the steps you might perform in a typical gopher client application.  
  
|Your goal|Actions you take|Effects|  
|---------------|----------------------|-------------|  
|Begin a gopher session.|Create a [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Initializes WinInet and connects to server.|  
|Connect to a gopher server.|Use [CInternetSession::GetGopherConnection](../Topic/CInternetSession::GetGopherConnection.md).|Returns a [CGopherConnection](../VS_visualcpp/CGopherConnection-Class.md) object.|  
|Find the first resource in the gopher.|Use [CGopherFileFind::FindFile](../Topic/CGopherFileFind::FindFile.md).|Finds the first file. Returns FALSE if no files are found.|  
|Find the next resource in the gopher.|Use [CGopherFileFind::FindNextFile](../Topic/CGopherFileFind::FindNextFile.md).|Finds the next file. Returns FALSE if the file is not found.|  
|Open the file found by **FindFile** or `FindNextFile` for reading.|Get a gopher locator using [CGopherFileFind::GetLocator](../Topic/CGopherFileFind::GetLocator.md). Use [CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md).|Opens the file specified by the locator. `OpenFile` returns a [CGopherFile](../VS_visualcpp/CGopherFile-Class.md) object.|  
|Open a file using a gopher locator you supply.|Create a gopher locator using [CGopherConnection::CreateLocator](../Topic/CGopherConnection::CreateLocator.md). Use [CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md).|Opens the file specified by the locator. `OpenFile` returns a [CGopherFile](../VS_visualcpp/CGopherFile-Class.md) object.|  
|Read from the file.|Use [CGopherFile](../VS_visualcpp/CGopherFile-Class.md).|Reads the specified number of bytes, using a buffer you supply.|  
|Handle exceptions.|Use the [CInternetException](../VS_visualcpp/CInternetException-Class.md) class.|Handles all common Internet exception types.|  
|End the gopher session.|Dispose of the [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.|Automatically cleans up open file handles and connections.|  
  
## See Also  
 [Win32 Internet Extensions (WinInet)](../VS_visualcpp/Win32-Internet-Extensions--WinInet-.md)   
 [Prerequisites for Internet Client Classes](../VS_visualcpp/Prerequisites-for-Internet-Client-Classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../VS_visualcpp/Writing-an-Internet-Client-Application-Using-MFC-WinInet-Classes.md)