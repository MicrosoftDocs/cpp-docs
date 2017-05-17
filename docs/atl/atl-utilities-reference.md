---
title: "ATL Utilities Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: dd8a2888-34f4-461e-9bf4-834218f9b95b
caps.latest.revision: 8
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
# ATL Utilities Reference
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
|[CPath](../atl/reference/atl-typedefs.md#cpath)|A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CString`.|  
|[CPathA](../atl/reference/atl-typedefs.md#cpatha)|A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CStringA`.|  
|[CPathW](../atl/reference/atl-typedefs.md#cpathw)|A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CStringW`.|  
|[ATL_URL_PORT](../atl/reference/atl-typedefs.md#atl_url_port)|The type used by [CUrl](../atl/reference/curl-class.md) for specifying a port number.|  
  
### Enums  
  
|||  
|-|-|  
|[ATL_URL_SCHEME](../atl/reference/atl-url-scheme-enum.md)|The members of this enumeration provide constants for the schemes understood by [CUrl](../atl/reference/curl-class.md).|  
  
### Functions  
  
|||  
|-|-|  
|[AtlCanonicalizeUrl](../atl/reference/atl-http-utility-functions.md#atlcanonicalizeurl)|Call this function to canonicalize a URL, which includes converting unsafe characters and spaces into escape sequences.|  
|[AtlCombineUrl](../atl/reference/atl-http-utility-functions.md#atlcombineurl)|Call this function to combine a base URL and a relative URL into a single, canonical URL.|  
|[AtlEscapeUrl](../atl/reference/atl-http-utility-functions.md#atlescapeurl)|Call this function to convert all unsafe characters to escape sequences.|  
|[AtlGetDefaultUrlPort](../atl/reference/atl-http-utility-functions.md#atlgetdefaulturlport)|Call this function to get the default port number associated with a particular internet protocol or scheme.|  
|[AtlHexValue](../atl/reference/atl-text-encoding-functions.md#atlhexvalue)|Call this function to get the numeric value of a hexadecimal digit.|  
|[AtlIsUnsafeUrlChar](../atl/reference/atl-http-utility-functions.md#atlisunsafeurlchar)|Call this function to find out whether a character is safe for use in a URL.|  
|[AtlUnescapeUrl](../atl/reference/atl-http-utility-functions.md#atlunescapeurl)|Call this function to convert escaped characters back to their original values.|  
|[SystemTimeToHttpDate](../atl/reference/atl-http-utility-functions.md#systemtimetohttpdate)|Call this function to convert a system time to a string in a format suitable for using in HTTP headers.|  

|[ATLPath::AddBackslash](../atl/reference/atl-path-functions.md#addbackslash)|This function is an overloaded wrapper for [PathAddBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773561).|  
|[ATLPath::AddExtension](../atl/reference/atl-path-functions.md#addextension)|This function is an overloaded wrapper for [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563).|  
|[ATLPath::Append](../atl/reference/atl-path-functions.md#append)|This function is an overloaded wrapper for [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565).|  
|[ATLPath::BuildRoot](../atl/reference/atl-path-functions.md#buildroot)|This function is an overloaded wrapper for [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567).|  
|[ATLPath::Canonicalize](../atl/reference/atl-path-functions.md#canonicalize)|This function is an overloaded wrapper for [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569).|  
|[ATLPath::Combine](../atl/reference/atl-path-functions.md#combine)|This function is an overloaded wrapper for [PathCombine](http://msdn.microsoft.com/library/windows/desktop/bb773571).|  
|[ATLPath::CommonPrefix](../atl/reference/atl-path-functions.md#commonprefix)|This function is an overloaded wrapper for [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574).|  
|[ATLPath::CompactPath](../atl/reference/atl-path-functions.md#compactpath)|This function is an overloaded wrapper for [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575).|  
|[ATLPath::CompactPathEx](../atl/reference/atl-path-functions.md#compactpathex)|This function is an overloaded wrapper for [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578).|  
|[ATLPath::FileExists](../atl/reference/atl-path-functions.md#fileexists)|This function is an overloaded wrapper for [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584).|  
|[ATLPath::FindExtension](../atl/reference/atl-path-functions.md#findextension)|This function is an overloaded wrapper for [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587).|  
|[ATLPath::FindFileName](../atl/reference/atl-path-functions.md#findfilename)|This function is an overloaded wrapper for [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589).|  
|[ATLPath::GetDriveNumber](../atl/reference/atl-path-functions.md#getdrivenumber)|This function is an overloaded wrapper for [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612).|  
|[ATLPath::IsDirectory](../atl/reference/atl-path-functions.md#isdirectory)|This function is an overloaded wrapper for [PathIsDirectory](http://msdn.microsoft.com/library/windows/desktop/bb773621).|  
|[ATLPath::IsFileSpec](../atl/reference/atl-path-functions.md#isfilespec)|This function is an overloaded wrapper for [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627).|  
|[ATLPath::IsPrefix](../atl/reference/atl-path-functions.md#isprefix)|This function is an overloaded wrapper for [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650).|  
|[ATLPath::IsRelative](../atl/reference/atl-path-functions.md#isrelative)|This function is an overloaded wrapper for [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660).|  
|[ATLPath::IsRoot](../atl/reference/atl-path-functions.md#isroot)|This function is an overloaded wrapper for [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674).|  
|[ATLPath::IsSameRoot](../atl/reference/atl-path-functions.md#issameroot)|This function is an overloaded wrapper for [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687).|  
|[ATLPath::IsUNC](../atl/reference/atl-path-functions.md#isunc)|This function is an overloaded wrapper for [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712).|  
|[ATLPath::IsUNCServer](../atl/reference/atl-path-functions.md#isuncserver)|This function is an overloaded wrapper for [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722).|  
|[ATLPath::IsUNCServerShare](../atl/reference/atl-path-functions.md#isuncservershare)|This function is an overloaded wrapper for [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723).|  
|[ATLPath::MakePretty](../atl/reference/atl-path-functions.md#makepretty)|This function is an overloaded wrapper for [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725).|  
|[ATLPath::MatchSpec](../atl/reference/atl-path-functions.md#matchspec)|This function is an overloaded wrapper for [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727).|  
|[ATLPath::QuoteSpaces](../atl/reference/atl-path-functions.md#quotespaces)|This function is an overloaded wrapper for [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739).|  
|[ATLPath::RelativePathTo](../atl/reference/atl-path-functions.md#relativepathto)|This function is an overloaded wrapper for [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740).|  
|[ATLPath::RemoveArgs](../atl/reference/atl-path-functions.md#removeargs)|This function is an overloaded wrapper for [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742).|  
|[ATLPath::RemoveBackslash](../atl/reference/atl-path-functions.md#removebackslash)|This function is an overloaded wrapper for [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743).|  
|[ATLPath::RemoveBlanks](../atl/reference/atl-path-functions.md#removeblanks)|This function is an overloaded wrapper for [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745).|  
|[ATLPath::RemoveExtension](../atl/reference/atl-path-functions.md#removeextension)|This function is an overloaded wrapper for [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746).|  
|[ATLPath::RemoveFileSpec](../atl/reference/atl-path-functions.md#removefilespec)|This function is an overloaded wrapper for [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748).|  
|[ATLPath::RenameExtension](../atl/reference/atl-path-functions.md#renameextension)|This function is an overloaded wrapper for [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749).|  
|[ATLPath::SkipRoot](../atl/reference/atl-path-functions.md#skiproot)|This function is an overloaded wrapper for [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754).|  
|[ATLPath::StripPath](../atl/reference/atl-path-functions.md#strippath)|This function is an overloaded wrapper for [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756).|  
|[ATLPath::StripToRoot](../atl/reference/atl-path-functions.md#striptoroot)|This function is an overloaded wrapper for [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757).|  
|[ATLPath::UnquoteSpaces](../atl/reference/atl-path-functions.md#unquotespaces)|This function is an overloaded wrapper for [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763).|  
  

## See Also  
 [Concepts](../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../atl/atl-com-desktop-components.md)
