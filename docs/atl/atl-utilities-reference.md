---
description: "Learn more about: ATL utilities reference"
title: "ATL utilities reference"
ms.date: "11/04/2016"
ms.assetid: dd8a2888-34f4-461e-9bf4-834218f9b95b
---
# ATL utilities reference

ATL provides code for manipulating paths and URLs in the form of [CPathT](../atl/reference/cpatht-class.md) and [CUrl](../atl/reference/curl-class.md). A thread pool, [CThreadPool](../atl/reference/cthreadpool-class.md), can be used in your applications. This code can be found in atlpath.h and atlutil.h.

## Classes

| &nbsp; | &nbsp; |
|--|--|
| [CPathT class](../atl/reference/cpatht-class.md) | This class represents a path. |
| [CDebugReportHook class](../atl/reference/cdebugreporthook-class.md) | Use this class to send debug reports to a named pipe. |
| [CNonStatelessWorker class](../atl/reference/cnonstatelessworker-class.md) | Receives requests from a thread pool and passes them on to a worker object that is created and destroyed on each request. |
| [CNoWorkerThread class](../atl/reference/cnoworkerthread-class.md) | Use this class as the argument for the `MonitorClass` template parameter to cache classes if you want to disable dynamic cache maintenance. |
| [CThreadPool class](../atl/reference/cthreadpool-class.md) | This class provides a pool of worker threads that process a queue of work items. |
| [CUrl class](../atl/reference/curl-class.md) | This class represents a URL. It allows you to manipulate each element of the URL independently of the others whether parsing an existing URL string or building a string from scratch. |
| [CWorkerThread class](../atl/reference/cworkerthread-class.md) | This class creates a worker thread or uses an existing one, waits on one or more kernel object handles, and executes a specified client function when one of the handles is signaled. |

## Typedefs

| &emsp; | &emsp; |
|--|--|
| [CPath](../atl/reference/atl-typedefs.md#cpath) | A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CString`. |
| [CPathA](../atl/reference/atl-typedefs.md#cpatha) | A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CStringA`. |
| [CPathW](../atl/reference/atl-typedefs.md#cpathw) | A specialization of [CPathT](../atl/reference/cpatht-class.md) using `CStringW`. |
| [ATL_URL_PORT](../atl/reference/atl-typedefs.md#atl_url_port) | The type used by [CUrl](../atl/reference/curl-class.md) for specifying a port number. |

## Enums

| &emsp; | &emsp; |
|--|--|
| [ATL_URL_SCHEME](../atl/reference/atl-url-scheme-enum.md) | The members of this enumeration provide constants for the schemes understood by [CUrl](../atl/reference/curl-class.md). |

## Functions

| &emsp; | &emsp; |
|--|--|
| [AtlCanonicalizeUrl](../atl/reference/atl-http-utility-functions.md#atlcanonicalizeurl) | Call this function to canonicalize a URL, which includes converting unsafe characters and spaces into escape sequences. |
| [AtlCombineUrl](../atl/reference/atl-http-utility-functions.md#atlcombineurl) | Call this function to combine a base URL and a relative URL into a single, canonical URL. |
| [AtlEscapeUrl](../atl/reference/atl-http-utility-functions.md#atlescapeurl) | Call this function to convert all unsafe characters to escape sequences. |
| [AtlGetDefaultUrlPort](../atl/reference/atl-http-utility-functions.md#atlgetdefaulturlport) | Call this function to get the default port number associated with a particular internet protocol or scheme. |
| [AtlHexValue](../atl/reference/atl-text-encoding-functions.md#atlhexvalue) | Call this function to get the numeric value of a hexadecimal digit. |
| [AtlIsUnsafeUrlChar](../atl/reference/atl-http-utility-functions.md#atlisunsafeurlchar) | Call this function to find out whether a character is safe for use in a URL. |
| [AtlUnescapeUrl](../atl/reference/atl-http-utility-functions.md#atlunescapeurl) | Call this function to convert escaped characters back to their original values. |
| [SystemTimeToHttpDate](../atl/reference/atl-http-utility-functions.md#systemtimetohttpdate) | Call this function to convert a system time to a string in a format suitable for using in HTTP headers. |
| [ATLPath::AddBackslash](../atl/reference/atl-path-functions.md#addbackslash) | This function is an overloaded wrapper for [PathAddBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddbackslasha |
| ). |
| [ATLPath::AddExtension](../atl/reference/atl-path-functions.md#addextension) | This function is an overloaded wrapper for [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw). |
| [ATLPath::Append](../atl/reference/atl-path-functions.md#append) | This function is an overloaded wrapper for [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw). |
| [ATLPath::BuildRoot](../atl/reference/atl-path-functions.md#buildroot) | This function is an overloaded wrapper for [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw). |
| [ATLPath::Canonicalize](../atl/reference/atl-path-functions.md#canonicalize) | This function is an overloaded wrapper for [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew). |
| [ATLPath::Combine](../atl/reference/atl-path-functions.md#combine) | This function is an overloaded wrapper for [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew). |
| [ATLPath::CommonPrefix](../atl/reference/atl-path-functions.md#commonprefix) | This function is an overloaded wrapper for [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw). |
| [ATLPath::CompactPath](../atl/reference/atl-path-functions.md#compactpath) | This function is an overloaded wrapper for [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw). |
| [ATLPath::CompactPathEx](../atl/reference/atl-path-functions.md#compactpathex) | This function is an overloaded wrapper for [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw). |
| [ATLPath::FileExists](../atl/reference/atl-path-functions.md#fileexists) | This function is an overloaded wrapper for [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw). |
| [ATLPath::FindExtension](../atl/reference/atl-path-functions.md#findextension) | This function is an overloaded wrapper for [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw). |
| [ATLPath::FindFileName](../atl/reference/atl-path-functions.md#findfilename) | This function is an overloaded wrapper for [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew). |
| [ATLPath::GetDriveNumber](../atl/reference/atl-path-functions.md#getdrivenumber) | This function is an overloaded wrapper for [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw). |
| [ATLPath::IsDirectory](../atl/reference/atl-path-functions.md#isdirectory) | This function is an overloaded wrapper for [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw). |
| [ATLPath::IsFileSpec](../atl/reference/atl-path-functions.md#isfilespec) | This function is an overloaded wrapper for [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw). |
| [ATLPath::IsPrefix](../atl/reference/atl-path-functions.md#isprefix) | This function is an overloaded wrapper for [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw). |
| [ATLPath::IsRelative](../atl/reference/atl-path-functions.md#isrelative) | This function is an overloaded wrapper for [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew). |
| [ATLPath::IsRoot](../atl/reference/atl-path-functions.md#isroot) | This function is an overloaded wrapper for [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw). |
| [ATLPath::IsSameRoot](../atl/reference/atl-path-functions.md#issameroot) | This function is an overloaded wrapper for [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw). |
| [ATLPath::IsUNC](../atl/reference/atl-path-functions.md#isunc) | This function is an overloaded wrapper for [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw). |
| [ATLPath::IsUNCServer](../atl/reference/atl-path-functions.md#isuncserver) | This function is an overloaded wrapper for [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw). |
| [ATLPath::IsUNCServerShare](../atl/reference/atl-path-functions.md#isuncservershare) | This function is an overloaded wrapper for [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew). |
| [ATLPath::MakePretty](../atl/reference/atl-path-functions.md#makepretty) | This function is an overloaded wrapper for [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw). |
| [ATLPath::MatchSpec](../atl/reference/atl-path-functions.md#matchspec) | This function is an overloaded wrapper for [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw). |
| [ATLPath::QuoteSpaces](../atl/reference/atl-path-functions.md#quotespaces) | This function is an overloaded wrapper for [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw). |
| [ATLPath::RelativePathTo](../atl/reference/atl-path-functions.md#relativepathto) | This function is an overloaded wrapper for [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow). |
| [ATLPath::RemoveArgs](../atl/reference/atl-path-functions.md#removeargs) | This function is an overloaded wrapper for [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw). |
| [ATLPath::RemoveBackslash](../atl/reference/atl-path-functions.md#removebackslash) | This function is an overloaded wrapper for [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw). |
| [ATLPath::RemoveBlanks](../atl/reference/atl-path-functions.md#removeblanks) | This function is an overloaded wrapper for [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw). |
| [ATLPath::RemoveExtension](../atl/reference/atl-path-functions.md#removeextension) | This function is an overloaded wrapper for [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw). |
| [ATLPath::RemoveFileSpec](../atl/reference/atl-path-functions.md#removefilespec) | This function is an overloaded wrapper for [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw). |
| [ATLPath::RenameExtension](../atl/reference/atl-path-functions.md#renameextension) | This function is an overloaded wrapper for [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw). |
| [ATLPath::SkipRoot](../atl/reference/atl-path-functions.md#skiproot) | This function is an overloaded wrapper for [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw). |
| [ATLPath::StripPath](../atl/reference/atl-path-functions.md#strippath) | This function is an overloaded wrapper for [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw). |
| [ATLPath::StripToRoot](../atl/reference/atl-path-functions.md#striptoroot) | This function is an overloaded wrapper for [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw). |
| [ATLPath::UnquoteSpaces](../atl/reference/atl-path-functions.md#unquotespaces) | This function is an overloaded wrapper for [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw). |

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)<br/>
[ATL COM desktop components](../atl/atl-com-desktop-components.md)
