---
description: "Learn more about: ATL Path functions"
title: "ATL Path functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["ATL, path"]
f1_keywords: ["ATLPATH/ATL::ATLPath::AddBackslash", "ATLPATH/ATL::ATLPath::AddExtension", "ATLPATH/ATL::ATLPath::Append", "ATLPATH/ATL::ATLPath::BuildRoot", "ATLPATH/ATL::ATLPath::Canonicalize", "ATLPATH/ATL::ATLPath::Combine", "ATLPATH/ATL::ATLPath::CommonPrefix", "ATLPATH/ATL::ATLPath::CompactPath", "ATLPATH/ATL::ATLPath::CompactPathEx", "ATLPATH/ATL::ATLPath::FileExists", "ATLPATH/ATL::ATLPath::FindExtension", "ATLPATH/ATL::ATLPath::FindFileName", "ATLPATH/ATL::ATLPath::GetDriveNumber", "ATLPATH/ATL::ATLPath::IsDirectory", "ATLPATH/ATL::ATLPath::IsFileSpec", "ATLPATH/ATL::ATLPath::IsPrefix", "ATLPATH/ATL::ATLPath::IsRelative", "ATLPATH/ATL::ATLPath::IsRoot", "ATLPATH/ATL::ATLPath::IsSameRoot", "ATLPATH/ATL::ATLPath::IsUNC", "ATLPATH/ATL::ATLPath::IsUNCServer", "ATLPATH/ATL::ATLPath::IsUNCServerShare", "ATLPATH/ATL::ATLPath::MakePretty", "ATLPATH/ATL::ATLPath::MatchSpec", "ATLPATH/ATL::ATLPath::QuoteSpaces", "ATLPATH/ATL::ATLPath::RelativePathTo", "ATLPATH/ATL::ATLPath::RemoveArgs", "ATLPATH/ATL::ATLPath::RemoveBackslash", "ATLPATH/ATL::ATLPath::RemoveBlanks", "ATLPATH/ATL::ATLPath::RemoveExtension", "ATLPATH/ATL::ATLPath::RemoveFileSpec", "ATLPATH/ATL::ATLPath::RenameExtension", "ATLPATH/ATL::ATLPath::SkipRoot", "ATLPATH/ATL::ATLPath::StripPath", "ATLPATH/ATL::ATLPath::StripToRoot", "ATLPATH/ATL::ATLPath::UnquoteSpaces"]
ms.assetid: d1ec2b8d-7ec7-43ea-90dd-0a740d2a742b
---
# ATL Path functions

ATL provides the ATLPath class for manipulating paths in the form of [CPathT](cpatht-class.md). This code can be found in atlpath.h.

## Related Classes

|Class|Description|
|-|-|
|[CPathT Class](cpatht-class.md)|This class represents a path.|

## Related Typedefs

|Typedef|Description|
|-|-|
|`CPath`|A specialization of [CPathT](cpatht-class.md) using `CString`.|
|`CPathA`|A specialization of [CPathT](cpatht-class.md) using `CStringA`.|
|`CPathW`|A specialization of [CPathT](cpatht-class.md) using `CStringW`.|

## Functions

|Function|Description|
|-|-|
|[ATLPath::AddBackslash](#addbackslash)|This function is an overloaded wrapper for [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).|
|[ATLPath::AddExtension](#addextension)|This function is an overloaded wrapper for [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).|
|[ATLPath::Append](#append)|This function is an overloaded wrapper for [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).|
|[ATLPath::BuildRoot](#buildroot)|This function is an overloaded wrapper for [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).|
|[ATLPath::Canonicalize](#canonicalize)|This function is an overloaded wrapper for [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).|
|[ATLPath::Combine](#combine)|This function is an overloaded wrapper for [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).|
|[ATLPath::CommonPrefix](#commonprefix)|This function is an overloaded wrapper for [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).|
|[ATLPath::CompactPath](#compactpath)|This function is an overloaded wrapper for [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).|
|[ATLPath::CompactPathEx](#compactpathex)|This function is an overloaded wrapper for [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).|
|[ATLPath::FileExists](#fileexists)|This function is an overloaded wrapper for [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).|
|[ATLPath::FindExtension](#findextension)|This function is an overloaded wrapper for [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).|
|[ATLPath::FindFileName](#findfilename)|This function is an overloaded wrapper for [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).|
|[ATLPath::GetDriveNumber](#getdrivenumber)|This function is an overloaded wrapper for [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).|
|[ATLPath::IsDirectory](#isdirectory)|This function is an overloaded wrapper for [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).|
|[ATLPath::IsFileSpec](#isfilespec)|This function is an overloaded wrapper for [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).|
|[ATLPath::IsPrefix](#isprefix)|This function is an overloaded wrapper for [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).|
|[ATLPath::IsRelative](#isrelative)|This function is an overloaded wrapper for [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).|
|[ATLPath::IsRoot](#isroot)|This function is an overloaded wrapper for [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).|
|[ATLPath::IsSameRoot](#issameroot)|This function is an overloaded wrapper for [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).|
|[ATLPath::IsUNC](#isunc)|This function is an overloaded wrapper for [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).|
|[ATLPath::IsUNCServer](#isuncserver)|This function is an overloaded wrapper for [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).|
|[ATLPath::IsUNCServerShare](#isuncservershare)|This function is an overloaded wrapper for [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).|
|[ATLPath::MakePretty](#makepretty)|This function is an overloaded wrapper for [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).|
|[ATLPath::MatchSpec](#matchspec)|This function is an overloaded wrapper for [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).|
|[ATLPath::QuoteSpaces](#quotespaces)|This function is an overloaded wrapper for [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).|
|[ATLPath::RelativePathTo](#relativepathto)|This function is an overloaded wrapper for [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).|
|[ATLPath::RemoveArgs](#removeargs)|This function is an overloaded wrapper for [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).|
|[ATLPath::RemoveBackslash](#removebackslash)|This function is an overloaded wrapper for [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).|
|[ATLPath::RemoveBlanks](#removeblanks)|This function is an overloaded wrapper for [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).|
|[ATLPath::RemoveExtension](#removeextension)|This function is an overloaded wrapper for [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).|
|[ATLPath::RemoveFileSpec](#removefilespec)|This function is an overloaded wrapper for [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).|
|[ATLPath::RenameExtension](#renameextension)|This function is an overloaded wrapper for [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).|
|[ATLPath::SkipRoot](#skiproot)|This function is an overloaded wrapper for [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).|
|[ATLPath::StripPath](#strippath)|This function is an overloaded wrapper for [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).|
|[ATLPath::StripToRoot](#striptoroot)|This function is an overloaded wrapper for [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).|
|[ATLPath::UnquoteSpaces](#unquotespaces)|This function is an overloaded wrapper for [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).|

## Requirements

**Header:** atlpath.h

## <a name="addbackslash"></a> ATLPath::AddBackSlash

This function is an overloaded wrapper for [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).

### Syntax

```cpp
inline char* AddBackslash(char* pszPath);
inline wchar_t* AddBackslash(wchar_t* pszPath);
```

### Remarks

See [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw) for details.

## <a name="addextension"></a> ATLPath::AddExtension

This function is an overloaded wrapper for [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).

### Syntax

```cpp
inline BOOL AddExtension(char* pszPath, const char* pszExtension);
inline BOOL AddExtension(wchar_t* pszPath, const wchar_t* pszExtension);
```

### Remarks

See [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw) for details.

## <a name="append"></a> ATLPath::Append

This function is an overloaded wrapper for [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).

### Syntax

```cpp
inline BOOL Append(char* pszPath, const char* pszMore);
inline BOOL Append(wchar_t* pszPath, const wchar_t* pszMore);
```

### Remarks

See [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw) for details.

## <a name="buildroot"></a> ATLPath::BuildRoot

This function is an overloaded wrapper for [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).

### Syntax

```cpp
inline char* BuildRoot(char* pszPath, int iDrive);
inline wchar_t* BuildRoot(wchar_t* pszPath, int iDrive);
```

### Remarks

See [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw) for details.

## <a name="canonicalize"></a> ATLPath::Canonicalize

This function is an overloaded wrapper for [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).

### Syntax

```cpp
inline BOOL Canonicalize(char* pszDest, const char* pszSrc);
inline BOOL Canonicalize(wchar_t* pszDest, const wchar_t* pszSrc);
```

### Remarks

See [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew) for details.

## <a name="combine"></a> ATLPath::Combine

This function is an overloaded wrapper for [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).

### Syntax

```cpp
inline char* Combine(
   char* pszDest,
   const char* pszDir,
   const char* pszFile
);

inline wchar_t* Combine(
   wchar_t* pszDest,
   const wchar_t* pszDir,
   const wchar_t* pszFile);
```

### Remarks

See PathCombine for details.

## <a name="commonprefix"></a> ATLPath::CommonPrefix

This function is an overloaded wrapper for [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).

### Syntax

```cpp
inline int CommonPrefix(
   const char* pszFile1,
   const char* pszFile2,
   char* pszDest);

inline int CommonPrefix(
   const wchar_t* pszFile1,
   const wchar_t* pszFile2,
   wchar_t* pszDest);
```

### Remarks

See [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw) for details.

## <a name="compactpath"></a> ATLPath::CompactPath

This function is an overloaded wrapper for [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).

### Syntax

```cpp
inline BOOL CompactPath(
   HDC hDC,
   char* pszPath,
   UINT dx);

inline BOOL CompactPath(
   HDC hDC,
   wchar_t* pszPath,
   UINT dx);
```

### Remarks

See [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw) for details.

## <a name="compactpathex"></a> ATLPath::CompactPathEx

This function is an overloaded wrapper for [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).

### Syntax

```cpp
inline BOOL CompactPathEx(
   char* pszDest,
   const char* pszSrc,
   UINT nMaxChars,
   DWORD dwFlags);

inline BOOL CompactPathEx(
   wchar_t* pszDest,
   const wchar_t* pszSrc,
   UINT nMaxChars,
   DWORD dwFlags);
```

### Remarks

See [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw) for details.

## <a name="fileexists"></a> ATLPath::FileExists

This function is an overloaded wrapper for [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).

### Syntax

```cpp
inline BOOL FileExists(const char* pszPath);
inline BOOL FileExists(const wchar_t* pszPath);
```

### Remarks

See [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw) for details.

## <a name="findextension"></a> ATLPath::FindExtension

This function is an overloaded wrapper for [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).

### Syntax

```cpp
inline char* FindExtension(const char* pszPath);
inline wchar_t* FindExtension(const wchar_t* pszPath);
```

### Remarks

See [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw) for details.

## <a name="findfilename"></a> ATLPath::FindFileName

This function is an overloaded wrapper for [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).

### Syntax

```cpp
inline char* FindFileName(const char* pszPath);
inline wchar_t* FindFileName(const wchar_t* pszPath);
```

### Remarks

See [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew) for details.

## <a name="getdrivenumber"></a> ATLPath::GetDriveNumber

This function is an overloaded wrapper for [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).

### Syntax

```cpp
inline int GetDriveNumber(const char* pszPath);
inline int GetDriveNumber(const wchar_t* pszPath);
```

### Remarks

See [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw) for details.

## <a name="isdirectory"></a> ATLPath::IsDirectory

This function is an overloaded wrapper for [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).

```cpp
inline BOOL IsDirectory(const char* pszPath);
inline BOOL IsDirectory(const wchar_t* pszPath);
```

### Remarks

See PathIsDirectory for details.

## <a name="isfilespec"></a> ATLPath::IsFileSpec

This function is an overloaded wrapper for [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).

### Syntax

```cpp
inline BOOL IsFileSpec(const char* pszPath);
inline BOOL IsFileSpec(const wchar_t* pszPath);
```

### Remarks

See [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw) for details.

## <a name="isprefix"></a> ATLPath::IsPrefix

This function is an overloaded wrapper for [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).

### Syntax

```cpp
inline BOOL IsPrefix(const char* pszPrefix, const char* pszPath);
inline BOOL IsPrefix(const wchar_t* pszPrefix, const wchar_t* pszPath);
```

### Remarks

See [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw) for details.

## <a name="isrelative"></a> ATLPath::IsRelative

This function is an overloaded wrapper for [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).

### Syntax

```cpp
inline BOOL IsRelative(const char* pszPath);
inline BOOL IsRelative(const wchar_t* pszPath);
```

### Remarks

See [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew) for details.

## <a name="isroot"></a> ATLPath::IsRoot

This function is an overloaded wrapper for [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).

### Syntax

```cpp
inline BOOL IsRoot(const char* pszPath);
inline BOOL IsRoot(const wchar_t* pszPath);
```

### Remarks

See [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw) for details.

## <a name="issameroot"></a> ATLPath::IsSameRoot

This function is an overloaded wrapper for [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).

### Syntax

```cpp
inline BOOL IsSameRoot(const char* pszPath1, const char* pszPath2);
inline BOOL IsSameRoot(const wchar_t* pszPath1, const wchar_t* pszPath2);
```

### Remarks

See [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw) for details.

## <a name="isunc"></a> ATLPath::IsUNC

This function is an overloaded wrapper for [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).

### Syntax

```cpp
inline BOOL IsUNC(const char* pszPath);
inline BOOL IsUNC(const wchar_t* pszPath);
```

### Remarks

See [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw) for details.

## <a name="isuncserver"></a> ATLPath::IsUNCServer

This function is an overloaded wrapper for [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).

### Syntax

```cpp
inline BOOL IsUNCServer(const char* pszPath);
inline BOOL IsUNCServer(const wchar_t* pszPath);
```

### Remarks

See [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw) for details.

## <a name="isuncservershare"></a> ATLPath::IsUNCServerShare

This function is an overloaded wrapper for [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).

### Syntax

```cpp
inline BOOL IsUNCServerShare(const char* pszPath);
inline BOOL IsUNCServerShare(const wchar_t* pszPath);
```

### Remarks

See [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew) for details.

## <a name="makepretty"></a> ATLPath::MakePretty

This function is an overloaded wrapper for [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).

### Syntax

```cpp
inline BOOL MakePretty(char* pszPath);
inline BOOL MakePretty(wchar_t* pszPath);
```

### Remarks

See [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw) for details.

## <a name="matchspec"></a> ATLPath::MatchSpec

This function is an overloaded wrapper for [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).

### Syntax

```cpp
inline BOOL MatchSpec(const char* pszPath, const char* pszSpec);
inline BOOL MatchSpec(const wchar_t* pszPath, const wchar_t* pszSpec);
```

### Remarks

See [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw) for details.

## <a name="quotespaces"></a> ATLPath::QuoteSpaces

This function is an overloaded wrapper for [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).

### Syntax

```cpp
inline void QuoteSpaces(char* pszPath);
inline void QuoteSpaces(wchar_t* pszPath);
```

### Remarks

See [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw) for details.

## <a name="relativepathto"></a> ATLPath::RelativePathTo

This function is an overloaded wrapper for [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).

### Syntax

```cpp
inline BOOL RelativePathTo(
   char* pszPath,
   const char* pszFrom,
   DWORD dwAttrFrom,
   const char* pszTo,
   DWORD dwAttrTo);

inline BOOL RelativePathTo(
   wchar_t* pszPath,
   const wchar_t* pszFrom,
   DWORD dwAttrFrom,
   const wchar_t* pszTo,
   DWORD dwAttrTo);
```

### Remarks

See [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow) for details.

## <a name="removeargs"></a> ATLPath::RemoveArgs

This function is an overloaded wrapper for [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).

### Syntax

```cpp
inline void RemoveArgs(char* pszPath);
inline void RemoveArgs(wchar_t* pszPath);
```

### Remarks

See [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw) for details.

## <a name="removebackslash"></a> ATLPath::RemoveBackslash

This function is an overloaded wrapper for [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).

### Syntax

```cpp
inline char* RemoveBackslash(char* pszPath);
inline wchar_t* RemoveBackslash(wchar_t* pszPath);
```

### Remarks

See [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw) for details.

## <a name="removeblanks"></a> ATLPath::RemoveBlanks

This function is an overloaded wrapper for [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).

### Syntax

```cpp
inline void RemoveBlanks(char* pszPath);
inline void RemoveBlanks(wchar_t* pszPath);
```

### Remarks

See [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw) for details.

## <a name="removeextension"></a> ATLPath::RemoveExtension

This function is an overloaded wrapper for [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).

### Syntax

```cpp
inline void RemoveExtension(char* pszPath);
inline void RemoveExtension(wchar_t* pszPath);
```

### Remarks

See [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw) for details.

## <a name="removefilespec"></a> ATLPath::RemoveFileSpec

This function is an overloaded wrapper for [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).

### Syntax

```cpp
inline BOOL RemoveFileSpec(char* pszPath);
inline BOOL RemoveFileSpec(wchar_t* pszPath);
```

### Remarks

See [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw) for details.

## <a name="renameextension"></a> ATLPath::RenameExtension

This function is an overloaded wrapper for [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).

### Syntax

```cpp
inline BOOL RenameExtension(char* pszPath, const char* pszExt);
inline BOOL RenameExtension(wchar_t* pszPath, const wchar_t* pszExt);
```

### Remarks

See [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw) for details.

## <a name="skiproot"></a> ATLPath::SkipRoot

This function is an overloaded wrapper for [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).

### Syntax

```cpp
inline char* SkipRoot(const char* pszPath);
inline wchar_t* SkipRoot(const wchar_t* pszPath);
```

### Remarks

See [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw) for details.

## <a name="strippath"></a> ATLPath::StripPath

This function is an overloaded wrapper for [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).

### Syntax

```cpp
inline void StripPath(char* pszPath);
inline void StripPath(wchar_t* pszPath);
```

### Remarks

See [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw) for details.

## <a name="striptoroot"></a> ATLPath::StripToRoot

This function is an overloaded wrapper for [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).

### Syntax

```cpp
inline BOOL StripToRoot(char* pszPath);
inline BOOL StripToRoot(wchar_t* pszPath);
```

### Remarks

See [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw) for details.

## <a name="unquotespaces"></a> ATLPath::UnquoteSpaces

This function is an overloaded wrapper for [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).

### Syntax

```cpp
inline void UnquoteSpaces(char* pszPath);
inline void UnquoteSpaces(wchar_t* pszPath);
```

### Remarks

See [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw) for details.
