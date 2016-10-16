---
title: "ATL Utilities Reference"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: dd8a2888-34f4-461e-9bf4-834218f9b95b
caps.latest.revision: 6
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
# ATL Utilities Reference
ATL provides code for manipulating paths and URLs in the form of [CPathT](../atl/cpatht-class.md) and [CUrl](../atl/curl-class.md). A thread pool, [CThreadPool](../atl/cthreadpool-class.md), can be used in your applications. This code can be found in atlpath.h and atlutil.h.  
  
### Classes  
  
|||  
|-|-|  
|[CPathT Class](../atl/cpatht-class.md)|This class represents a path.|  
|[CDebugReportHook Class](../atl/cdebugreporthook-class.md)|Use this class to send debug reports to a named pipe.|  
|[CNonStatelessWorker Class](../atl/cnonstatelessworker-class.md)|Receives requests from a thread pool and passes them on to a worker object that is created and destroyed on each request.|  
|[CNoWorkerThread Class](../atl/cnoworkerthread-class.md)|Use this class as the argument for the `MonitorClass` template parameter to cache classes if you want to disable dynamic cache maintenance.|  
|[CThreadPool Class](../atl/cthreadpool-class.md)|This class provides a pool of worker threads that process a queue of work items.|  
|[CUrl Class](../atl/curl-class.md)|This class represents a URL. It allows you to manipulate each element of the URL independently of the others whether parsing an existing URL string or building a string from scratch.|  
|[CWorkerThread Class](../atl/cworkerthread-class.md)|This class creates a worker thread or uses an existing one, waits on one or more kernel object handles, and executes a specified client function when one of the handles is signaled.|  
  
### Typedefs  
  
|||  
|-|-|  
|[CPath](../Topic/CPath.md)|A specialization of [CPathT](../atl/cpatht-class.md) using `CString`.|  
|[CPathA](../Topic/CPathA.md)|A specialization of [CPathT](../atl/cpatht-class.md) using `CStringA`.|  
|[CPathW](../Topic/CPathW.md)|A specialization of [CPathT](../atl/cpatht-class.md) using `CStringW`.|  
|[ATL_URL_PORT](../Topic/ATL_URL_PORT.md)|The type used by [CUrl](../atl/curl-class.md) for specifying a port number.|  
  
### Enums  
  
|||  
|-|-|  
|[ATL_URL_SCHEME](../Topic/ATL_URL_SCHEME.md)|The members of this enumeration provide constants for the schemes understood by [CUrl](../atl/curl-class.md).|  
  
### Functions  
  
|||  
|-|-|  
|[AtlCanonicalizeUrl](../Topic/AtlCanonicalizeUrl.md)|Call this function to canonicalize a URL, which includes converting unsafe characters and spaces into escape sequences.|  
|[AtlCombineUrl](../Topic/AtlCombineUrl.md)|Call this function to combine a base URL and a relative URL into a single, canonical URL.|  
|[AtlEscapeUrl](../Topic/AtlEscapeUrl.md)|Call this function to convert all unsafe characters to escape sequences.|  
|[AtlGetDefaultUrlPort](../Topic/AtlGetDefaultUrlPort.md)|Call this function to get the default port number associated with a particular internet protocol or scheme.|  
|[AtlHexValue](../Topic/AtlHexValue.md)|Call this function to get the numeric value of a hexadecimal digit.|  
|[AtlIsUnsafeUrlChar](../Topic/AtlIsUnsafeUrlChar.md)|Call this function to find out whether a character is safe for use in a URL.|  
|[AtlUnescapeUrl](../Topic/AtlUnescapeUrl.md)|Call this function to convert escaped characters back to their original values.|  
|[SystemTimeToHttpDate](../Topic/SystemTimeToHttpDate.md)|Call this function to convert a system time to a string in a format suitable for using in HTTP headers.|  
|[ATLPath::AddBackslash](../Topic/ATLPath::AddBackslash.md)|This function is an overloaded wrapper for [PathAddBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773561).|  
|[ATLPath::AddExtension](../Topic/ATLPath::AddExtension.md)|This function is an overloaded wrapper for [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563).|  
|[ATLPath::Append](../Topic/ATLPath::Append.md)|This function is an overloaded wrapper for [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565).|  
|[ATLPath::BuildRoot](../Topic/ATLPath::BuildRoot.md)|This function is an overloaded wrapper for [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567).|  
|[ATLPath::Canonicalize](../Topic/ATLPath::Canonicalize.md)|This function is an overloaded wrapper for [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569).|  
|[ATLPath::Combine](../Topic/ATLPath::Combine.md)|This function is an overloaded wrapper for [PathCombine](http://msdn.microsoft.com/library/windows/desktop/bb773571).|  
|[ATLPath::CommonPrefix](../Topic/ATLPath::CommonPrefix.md)|This function is an overloaded wrapper for [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574).|  
|[ATLPath::CompactPath](../Topic/ATLPath::CompactPath.md)|This function is an overloaded wrapper for [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575).|  
|[ATLPath::CompactPathEx](../Topic/ATLPath::CompactPathEx.md)|This function is an overloaded wrapper for [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578).|  
|[ATLPath::FileExists](../Topic/ATLPath::FileExists.md)|This function is an overloaded wrapper for [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584).|  
|[ATLPath::FindExtension](../Topic/ATLPath::FindExtension.md)|This function is an overloaded wrapper for [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587).|  
|[ATLPath::FindFileName](../Topic/ATLPath::FindFileName.md)|This function is an overloaded wrapper for [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589).|  
|[ATLPath::GetDriveNumber](../Topic/ATLPath::GetDriveNumber.md)|This function is an overloaded wrapper for [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612).|  
|[ATLPath::IsDirectory](../Topic/ATLPath::IsDirectory.md)|This function is an overloaded wrapper for [PathIsDirectory](http://msdn.microsoft.com/library/windows/desktop/bb773621).|  
|[ATLPath::IsFileSpec](../Topic/ATLPath::IsFileSpec.md)|This function is an overloaded wrapper for [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627).|  
|[ATLPath::IsPrefix](../Topic/ATLPath::IsPrefix.md)|This function is an overloaded wrapper for [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650).|  
|[ATLPath::IsRelative](../Topic/ATLPath::IsRelative.md)|This function is an overloaded wrapper for [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660).|  
|[ATLPath::IsRoot](../Topic/ATLPath::IsRoot.md)|This function is an overloaded wrapper for [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674).|  
|[ATLPath::IsSameRoot](../Topic/ATLPath::IsSameRoot.md)|This function is an overloaded wrapper for [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687).|  
|[ATLPath::IsUNC](../Topic/ATLPath::IsUNC.md)|This function is an overloaded wrapper for [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712).|  
|[ATLPath::IsUNCServer](../Topic/ATLPath::IsUNCServer.md)|This function is an overloaded wrapper for [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722).|  
|[ATLPath::IsUNCServerShare](../Topic/ATLPath::IsUNCServerShare.md)|This function is an overloaded wrapper for [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723).|  
|[ATLPath::MakePretty](../Topic/ATLPath::MakePretty.md)|This function is an overloaded wrapper for [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725).|  
|[ATLPath::MatchSpec](../Topic/ATLPath::MatchSpec.md)|This function is an overloaded wrapper for [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727).|  
|[ATLPath::QuoteSpaces](../Topic/ATLPath::QuoteSpaces.md)|This function is an overloaded wrapper for [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739).|  
|[ATLPath::RelativePathTo](../Topic/ATLPath::RelativePathTo.md)|This function is an overloaded wrapper for [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740).|  
|[ATLPath::RemoveArgs](../Topic/ATLPath::RemoveArgs.md)|This function is an overloaded wrapper for [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742).|  
|[ATLPath::RemoveBackslash](../Topic/ATLPath::RemoveBackslash.md)|This function is an overloaded wrapper for [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743).|  
|[ATLPath::RemoveBlanks](../Topic/ATLPath::RemoveBlanks.md)|This function is an overloaded wrapper for [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745).|  
|[ATLPath::RemoveExtension](../Topic/ATLPath::RemoveExtension.md)|This function is an overloaded wrapper for [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746).|  
|[ATLPath::RemoveFileSpec](../Topic/ATLPath::RemoveFileSpec.md)|This function is an overloaded wrapper for [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748).|  
|[ATLPath::RenameExtension](../Topic/ATLPath::RenameExtension.md)|This function is an overloaded wrapper for [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749).|  
|[ATLPath::SkipRoot](../Topic/ATLPath::SkipRoot.md)|This function is an overloaded wrapper for [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754).|  
|[ATLPath::StripPath](../Topic/ATLPath::StripPath.md)|This function is an overloaded wrapper for [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756).|  
|[ATLPath::StripToRoot](../Topic/ATLPath::StripToRoot.md)|This function is an overloaded wrapper for [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757).|  
|[ATLPath::UnquoteSpaces](../Topic/ATLPath::UnquoteSpaces.md)|This function is an overloaded wrapper for [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763).|  
  
### Macros  
  
|||  
|-|-|  
|[ATL_URL Flags](../Topic/ATL_URL%20Flags.md)|These flags modify the behavior of [AtlEscapeUrl](../Topic/AtlEscapeUrl.md) and [AtlCanonicalizeUrl](../Topic/AtlCanonicalizeUrl.md) .|  
|[ATL_WORKER_THREAD_WAIT](../Topic/ATL_WORKER_THREAD_WAIT.md)|This macro defines the default value in milliseconds that [CWorkerThread::Shutdown](../Topic/CWorkerThread::Shutdown.md) will wait for the worker thread to shut down.|  
|[ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT](../Topic/ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT.md)|This macro defines the default time in milliseconds that [CThreadPool](../atl/cthreadpool-class.md) will wait for a thread to shut down.|  
|[ATLS_DEFAULT_THREADSPERPROC](../Topic/ATLS_DEFAULT_THREADSPERPROC.md)|This macro defines the default number of threads per processor used by [CThreadPool](../atl/cthreadpool-class.md).|  
  
## See Also  
 [Concepts](../atl/active-template-library--atl--concepts.md)   
 [ATL COM Desktop Components](../atl/atl-com-desktop-components.md)