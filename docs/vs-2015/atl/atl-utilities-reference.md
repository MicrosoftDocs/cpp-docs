---
title: "ATL Utilities Reference | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: dd8a2888-34f4-461e-9bf4-834218f9b95b
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Utilities Reference
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ATL Utilities Reference](https://docs.microsoft.com/cpp/atl/atl-utilities-reference).  
  
  
ATL provides code for manipulating paths and URLs in the form of [CPathT](../atl/reference/cpatht-class.md) and [CUrl](../atl/reference/curl-class.md). A thread pool, [CThreadPool](../atl/reference/cthreadpool-class.md), can be used in your applications. This code can be found in atlpath.h and atlutil.h.  
  
### Classes  
  
|||  
|-|-|  
|[CPathT Class](../atl/reference/cpatht-class.md)|This class represents a path.|  
|[CDebugReportHook Class](../atl/reference/cdebugreporthook-class.md)|Use this class to send debug reports to a named pipe.|  
|[CNonStatelessWorker Class](../atl/reference/cnonstatelessworker-class.md)|Receives requests from a thread pool and passes them on to a worker object that is created and destroyed on each request.|  
|[CNoWorkerThread Class](../atl/reference/cnoworkerthread-class.md)|Use this class as the argument for the `MonitorClass` template parameter to cache classes if you want to disable dynamic cache maintenance.|  
|[CThreadPool Class](../atl/reference/cthreadpool-class.md)|This class provides a pool of worker threads that process a queue of work items.|  
|[CUrl Class](../atl/reference/curl-class.md)|This class represents a URL. It allows you to manipulate each element of the URL independently of the others whether parsing an existing URL string or building a string from scratch.|  
|[CWorkerThread Class](../atl/reference/cworkerthread-class.md)|This class creates a worker thread or uses an existing one, waits on one or more kernel object handles, and executes a specified client function when one of the handles is signaled.|  
  
### Typedefs  
  
|||  
|-|-|  
|[CPath](http://msdn.microsoft.com/library/80db7964-9948-406b-ae9d-8cf11cfbbe28)|A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CString`.|  
|[CPathA](http://msdn.microsoft.com/library/5e3ac7a5-f94b-405f-8ea8-e0ab8ee78e22)|A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CStringA`.|  
|[CPathW](http://msdn.microsoft.com/library/554fd5a9-11e8-4374-ac6c-dfb0093f22ad)|A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CStringW`.|  
|[ATL_URL_PORT](http://msdn.microsoft.com/library/11aeed23-5948-410b-9ce4-c7670a1151f6)|The type used by [CUrl](../atl/reference/curl-class.md) for specifying a port number.|  
  
### Enums  
  
|||  
|-|-|  
|[ATL_URL_SCHEME](~/atl/reference/atl-url-scheme-enum.md)|The members of this enumeration provide constants for the schemes understood by [CUrl](../atl/reference/curl-class.md).|  
  
### Functions  
  
|||  
|-|-|  
|[AtlCanonicalizeUrl](http://msdn.microsoft.com/library/80015d95-081d-4bbb-a176-77670cdb16e8)|Call this function to canonicalize a URL, which includes converting unsafe characters and spaces into escape sequences.|  
|[AtlCombineUrl](http://msdn.microsoft.com/library/c5bb1b78-6eb3-4a27-92ad-0e48d8d5846a)|Call this function to combine a base URL and a relative URL into a single, canonical URL.|  
|[AtlEscapeUrl](http://msdn.microsoft.com/library/e4413300-dd10-43ad-9eaf-772e58398316)|Call this function to convert all unsafe characters to escape sequences.|  
|[AtlGetDefaultUrlPort](http://msdn.microsoft.com/library/d894e370-0236-4f19-b4a1-eba50c07550b)|Call this function to get the default port number associated with a particular internet protocol or scheme.|  
|[AtlHexValue](http://msdn.microsoft.com/library/503446a2-a363-49f4-9fd6-f39071959cdd)|Call this function to get the numeric value of a hexadecimal digit.|  
|[AtlIsUnsafeUrlChar](http://msdn.microsoft.com/library/bf434973-0530-48ea-86cc-f40551e4d4a3)|Call this function to find out whether a character is safe for use in a URL.|  
|[AtlUnescapeUrl](http://msdn.microsoft.com/library/f6174219-3f95-4446-bc39-8e4bd1520eb2)|Call this function to convert escaped characters back to their original values.|  
|[SystemTimeToHttpDate](http://msdn.microsoft.com/library/3e240f32-1d64-422d-a281-31b2d1273962)|Call this function to convert a system time to a string in a format suitable for using in HTTP headers.|  
|[ATLPath::AddBackslash]$$brokenlink$$(../Topic/ATLPath%20Class.md#addbackslash)|This function is an overloaded wrapper for [PathAddBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773561).|  
|[ATLPath::AddExtension]$$brokenlink$$(../Topic/ATLPath%20Class.md#addextension)|This function is an overloaded wrapper for [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563).|  
|[ATLPath::Append]$$brokenlink$$(../Topic/ATLPath%20Class.md#append)|This function is an overloaded wrapper for [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565).|  
|[ATLPath::BuildRoot]$$brokenlink$$../Topic/ATLPath%20Class.md#buildroot)|This function is an overloaded wrapper for [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567).|  
|[ATLPath::Canonicalize]$$brokenlink$$(../Topic/ATLPath%20Class.md#canonicalize)|This function is an overloaded wrapper for [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569).|  
|[ATLPath::Combine]$$brokenlink$$(../Topic/ATLPath%20Class.md#combine)|This function is an overloaded wrapper for [PathCombine](http://msdn.microsoft.com/library/windows/desktop/bb773571).|  
|[ATLPath::CommonPrefix]$$brokenlink$$(../Topic/ATLPath%20Class.md#commonprefix)|This function is an overloaded wrapper for [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574).|  
|[ATLPath::CompactPath]$$brokenlink$$(../Topic/ATLPath%20Class.md#compactpath)|This function is an overloaded wrapper for [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575).|  
|[ATLPath::CompactPathEx]$$brokenlink$$(../Topic/ATLPath%20Class.md#compactpathex)|This function is an overloaded wrapper for [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578).|  
|[ATLPath::FileExists]$$brokenlink$$(../Topic/ATLPath%20Class.md#fileexists)|This function is an overloaded wrapper for [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584).|  
|[ATLPath::FindExtension]$$brokenlink$$(../Topic/ATLPath%20Class.md#findextension)|This function is an overloaded wrapper for [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587).|  
|[ATLPath::FindFileName]$$brokenlink$$(../Topic/ATLPath%20Class.md#findfilename)|This function is an overloaded wrapper for [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589).|  
|[ATLPath::GetDriveNumber]$$brokenlink$$(../Topic/ATLPath%20Class.md#getdrivenumber)|This function is an overloaded wrapper for [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612).|  
|[ATLPath::IsDirectory]$$brokenlink$$(../Topic/ATLPath%20Class.md#isdirectory)|This function is an overloaded wrapper for [PathIsDirectory](http://msdn.microsoft.com/library/windows/desktop/bb773621).|  
|[ATLPath::IsFileSpec]$$brokenlink$$(../Topic/ATLPath%20Class.md#isfilespec)|This function is an overloaded wrapper for [PathIsFileSpec]$$brokenlink$$(http://msdn.microsoft.com/library/windows/desktop/bb773627).|  
|[ATLPath::IsPrefix]$$brokenlink$$(../Topic/ATLPath%20Class.md#isprefix)|This function is an overloaded wrapper for [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650).|  
|[ATLPath::IsRelative]$$brokenlink$$(../Topic/ATLPath%20Class.md#isrelative)|This function is an overloaded wrapper for [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660).|  
|[ATLPath::IsRoot]$$brokenlink$$(../Topic/ATLPath%20Class.md#isroot)|This function is an overloaded wrapper for [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674).|  
|[ATLPath::IsSameRoot]$$brokenlink$$(../Topic/ATLPath%20Class.md#issameroot)|This function is an overloaded wrapper for [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687).|  
|[ATLPath::IsUNC]$$brokenlink$$(../Topic/ATLPath%20Class.md#isunc)|This function is an overloaded wrapper for [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712).|  
|[ATLPath::IsUNCServer]$$brokenlink$$(../Topic/ATLPath%20Class.md#isuncserver)|This function is an overloaded wrapper for [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722).|  
|[ATLPath::IsUNCServerShare]$$brokenlink$$(../Topic/ATLPath%20Class.md#isuncservershare)|This function is an overloaded wrapper for [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723).|  
|[ATLPath::MakePretty]$$brokenlink$$(../Topic/ATLPath%20Class.md#makepretty)|This function is an overloaded wrapper for [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725).|  
|[ATLPath::MatchSpec]$$brokenlink$$(../Topic/ATLPath%20Class.md#matchspec)|This function is an overloaded wrapper for [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727).|  
|[ATLPath::QuoteSpaces]$$brokenlink$$(../Topic/ATLPath%20Class.md#quotespaces)|This function is an overloaded wrapper for [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739).|  
|[ATLPath::RelativePathTo]$$brokenlink$$(../Topic/ATLPath%20Class.md#relativepathto)|This function is an overloaded wrapper for [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740).|  
|[ATLPath::RemoveArgs]$$brokenlink$$(../Topic/ATLPath%20Class.md#removeargs)|This function is an overloaded wrapper for [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742).|  
|[ATLPath::RemoveBackslash]$$brokenlink$$(../Topic/ATLPath%20Class.md#removebackslash)|This function is an overloaded wrapper for [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743).|  
|[ATLPath::RemoveBlanks]$$brokenlink$$(../Topic/ATLPath%20Class.md#removeblanks)|This function is an overloaded wrapper for [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745).|  
|[ATLPath::RemoveExtension]$$brokenlink$$(../Topic/ATLPath%20Class.md#removeextension)|This function is an overloaded wrapper for [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746).|  
|[ATLPath::RemoveFileSpec]$$brokenlink$$(../Topic/ATLPath%20Class.md#removefilespec)|This function is an overloaded wrapper for [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748).|  
|[ATLPath::RenameExtension]$$brokenlink$$(../Topic/ATLPath%20Class.md#renameextension)|This function is an overloaded wrapper for [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749).|  
|[ATLPath::SkipRoot]$$brokenlink$$(../Topic/ATLPath%20Class.md#skiproot)|This function is an overloaded wrapper for [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754).|  
|[ATLPath::StripPath]$$brokenlink$$(../Topic/ATLPath%20Class.md#strippath)|This function is an overloaded wrapper for [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756).|  
|[ATLPath::StripToRoot]$$brokenlink$$(../Topic/ATLPath%20Class.md#striptoroot)|This function is an overloaded wrapper for [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757).|  
|[ATLPath::UnquoteSpaces]$$brokenlink$$(../Topic/ATLPath%20Class.md#unquotespaces)|This function is an overloaded wrapper for [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763).|  
  
### Macros  
  
|||  
|-|-|  
|[ATL_URL Flags](http://msdn.microsoft.com/library/76e8cc5c-4e17-4eb1-ac29-a94d5256c4a7)|These flags modify the behavior of [AtlEscapeUrl](http://msdn.microsoft.com/library/e4413300-dd10-43ad-9eaf-772e58398316) and [AtlCanonicalizeUrl](http://msdn.microsoft.com/library/80015d95-081d-4bbb-a176-77670cdb16e8) .|  
|[ATL_WORKER_THREAD_WAIT](http://msdn.microsoft.com/library/4d209004-47f4-4c6a-98b4-aee49ffb0911)|This macro defines the default value in milliseconds that [CWorkerThread::Shutdown](../atl/reference/cworkerthread-class.md#shutdown) will wait for the worker thread to shut down.|  
|[ATLS_DEFAULT_THREADPOOLSHUTDOWNTIMEOUT](http://msdn.microsoft.com/library/c1e660a7-d490-42af-bbe1-ded76e80cc10)|This macro defines the default time in milliseconds that [CThreadPool](../atl/reference/cthreadpool-class.md) will wait for a thread to shut down.|  
|[ATLS_DEFAULT_THREADSPERPROC](http://msdn.microsoft.com/library/e0dcf107-72a9-4122-abb4-83c63aa7d571)|This macro defines the default number of threads per processor used by [CThreadPool](../atl/reference/cthreadpool-class.md).|  
  
## See Also  
 [Concepts](../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../atl/atl-com-desktop-components.md)
d



