---
title: "ATL Path functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["ATL, path"]
f1_keywords: ["ATLPATH/ATL::ATLPath::AddBackslash", "ATLPATH/ATL::ATLPath::AddExtension", "ATLPATH/ATL::ATLPath::Append", "ATLPATH/ATL::ATLPath::BuildRoot", "ATLPATH/ATL::ATLPath::Canonicalize", "ATLPATH/ATL::ATLPath::Combine", "ATLPATH/ATL::ATLPath::CommonPrefix", "ATLPATH/ATL::ATLPath::CompactPath", "ATLPATH/ATL::ATLPath::CompactPathEx", "ATLPATH/ATL::ATLPath::FileExists", "ATLPATH/ATL::ATLPath::FindExtension", "ATLPATH/ATL::ATLPath::FindFileName", "ATLPATH/ATL::ATLPath::GetDriveNumber", "ATLPATH/ATL::ATLPath::IsDirectory", "ATLPATH/ATL::ATLPath::IsFileSpec", "ATLPATH/ATL::ATLPath::IsPrefix", "ATLPATH/ATL::ATLPath::IsRelative", "ATLPATH/ATL::ATLPath::IsRoot", "ATLPATH/ATL::ATLPath::IsSameRoot", "ATLPATH/ATL::ATLPath::IsUNC", "ATLPATH/ATL::ATLPath::IsUNCServer", "ATLPATH/ATL::ATLPath::IsUNCServerShare", "ATLPATH/ATL::ATLPath::MakePretty", "ATLPATH/ATL::ATLPath::MatchSpec", "ATLPATH/ATL::ATLPath::QuoteSpaces", "ATLPATH/ATL::ATLPath::RelativePathTo", "ATLPATH/ATL::ATLPath::RemoveArgs", "ATLPATH/ATL::ATLPath::RemoveBackslash", "ATLPATH/ATL::ATLPath::RemoveBlanks", "ATLPATH/ATL::ATLPath::RemoveExtension", "ATLPATH/ATL::ATLPath::RemoveFileSpec", "ATLPATH/ATL::ATLPath::RenameExtension", "ATLPATH/ATL::ATLPath::SkipRoot", "ATLPATH/ATL::ATLPath::StripPath", "ATLPATH/ATL::ATLPath::StripToRoot", "ATLPATH/ATL::ATLPath::UnquoteSpaces"]
ms.assetid: d1ec2b8d-7ec7-43ea-90dd-0a740d2a742b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ATL Path functions

ATL provides the ATLPath class for manipulating paths in the form of [CPathT](cpatht-class.md). This code can be found in atlpath.h.

### Related Classes

|||
|-|-|
|[CPathT Class](cpatht-class.md)|This class represents a path.|

### Related Typedefs

|||
|-|-|
|`CPath`|A specialization of [CPathT](cpatht-class.md) using `CString`.|
|`CPathA`|A specialization of [CPathT](cpatht-class.md) using `CStringA`.|
|`CPathW`|A specialization of [CPathT](cpatht-class.md) using `CStringW`.|

### Functions

|||
|-|-|
|[ATLPath::AddBackslash](#addbackslash)|This function is an overloaded wrapper for [PathAddBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddbackslasha).|
|[ATLPath::AddExtension](#addextension)|This function is an overloaded wrapper for [PathAddExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddextensiona).|
|[ATLPath::Append](#append)|This function is an overloaded wrapper for [PathAppend](/windows/desktop/api/shlwapi/nf-shlwapi-pathappenda).|
|[ATLPath::BuildRoot](#buildroot)|This function is an overloaded wrapper for [PathBuildRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathbuildroota).|
|[ATLPath::Canonicalize](#canonicalize)|This function is an overloaded wrapper for [PathCanonicalize](/windows/desktop/api/shlwapi/nf-shlwapi-pathcanonicalizea).|
|[ATLPath::Combine](#combine)|This function is an overloaded wrapper for [PathCombine](/windows/desktop/api/shlwapi/nf-shlwapi-pathcombinea).|
|[ATLPath::CommonPrefix](#commonprefix)|This function is an overloaded wrapper for [PathCommonPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathcommonprefixa).|
|[ATLPath::CompactPath](#compactpath)|This function is an overloaded wrapper for [PathCompactPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpatha).|
|[ATLPath::CompactPathEx](#compactpathex)|This function is an overloaded wrapper for [PathCompactPathEx](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpathexa).|
|[ATLPath::FileExists](#fileexists)|This function is an overloaded wrapper for [PathFileExists](/windows/desktop/api/shlwapi/nf-shlwapi-pathfileexistsa).|
|[ATLPath::FindExtension](#findextension)|This function is an overloaded wrapper for [PathFindExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindextensiona).|
|[ATLPath::FindFileName](#findfilename)|This function is an overloaded wrapper for [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea).|
|[ATLPath::GetDriveNumber](#getdrivenumber)|This function is an overloaded wrapper for [PathGetDriveNumber](/windows/desktop/api/shlwapi/nf-shlwapi-pathgetdrivenumbera).|
|[ATLPath::IsDirectory](#isdirectory)|This function is an overloaded wrapper for [PathIsDirectory](/windows/desktop/api/shlwapi/nf-shlwapi-pathisdirectorya).|
|[ATLPath::IsFileSpec](#isfilespec)|This function is an overloaded wrapper for [PathIsFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathisfilespeca).|
|[ATLPath::IsPrefix](#isprefix)|This function is an overloaded wrapper for [PathIsPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathisprefixa).|
|[ATLPath::IsRelative](#isrelative)|This function is an overloaded wrapper for [PathIsRelative](/windows/desktop/api/shlwapi/nf-shlwapi-pathisrelativea).|
|[ATLPath::IsRoot](#isroot)|This function is an overloaded wrapper for [PathIsRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathisroota).|
|[ATLPath::IsSameRoot](#issameroot)|This function is an overloaded wrapper for [PathIsSameRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathissameroota).|
|[ATLPath::IsUNC](#isunc)|This function is an overloaded wrapper for [PathIsUNC](/windows/desktop/api/shlwapi/nf-shlwapi-pathisunca).|
|[ATLPath::IsUNCServer](#isuncserver)|This function is an overloaded wrapper for [PathIsUNCServer](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncservera).|
|[ATLPath::IsUNCServerShare](#isuncservershare)|This function is an overloaded wrapper for [PathIsUNCServerShare](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncserversharea).|
|[ATLPath::MakePretty](#makepretty)|This function is an overloaded wrapper for [PathMakePretty](/windows/desktop/api/shlwapi/nf-shlwapi-pathmakeprettya).|
|[ATLPath::MatchSpec](#matchspec)|This function is an overloaded wrapper for [PathMatchSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathmatchspeca).|
|[ATLPath::QuoteSpaces](#quotespaces)|This function is an overloaded wrapper for [PathQuoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathquotespacesa).|
|[ATLPath::RelativePathTo](#relativepathto)|This function is an overloaded wrapper for [PathRelativePathTo](/windows/desktop/api/shlwapi/nf-shlwapi-pathrelativepathtoa).|
|[ATLPath::RemoveArgs](#removeargs)|This function is an overloaded wrapper for [PathRemoveArgs](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveargsa).|
|[ATLPath::RemoveBackslash](#removebackslash)|This function is an overloaded wrapper for [PathRemoveBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovebackslasha).|
|[ATLPath::RemoveBlanks](#removeblanks)|This function is an overloaded wrapper for [PathRemoveBlanks](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveblanksa).|
|[ATLPath::RemoveExtension](#removeextension)|This function is an overloaded wrapper for [PathRemoveExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveextensiona).|
|[ATLPath::RemoveFileSpec](#removefilespec)|This function is an overloaded wrapper for [PathRemoveFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovefilespeca).|
|[ATLPath::RenameExtension](#renameextension)|This function is an overloaded wrapper for [PathRenameExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathrenameextensiona).|
|[ATLPath::SkipRoot](#skiproot)|This function is an overloaded wrapper for [PathSkipRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathskiproota).|
|[ATLPath::StripPath](#strippath)|This function is an overloaded wrapper for [PathStripPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathstrippatha).|
|[ATLPath::StripToRoot](#striptoroot)|This function is an overloaded wrapper for [PathStripToRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathstriptoroota).|
|[ATLPath::UnquoteSpaces](#unquotespaces)|This function is an overloaded wrapper for [PathUnquoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathunquotespacesa).|

## Requirements

**Header:** atlpath.h

## <a name="addbackslash"></a> ATLPath::AddBackSlash

This function is an overloaded wrapper for [PathAddBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddbackslasha).

### Syntax

```
inline char* AddBackslash(char* pszPath);
inline wchar_t* AddBackslash(wchar_t* pszPath);
```

### Remarks

See [PathAddBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddbackslasha) for details.

## <a name="addextension"></a> ATLPath::AddExtension

This function is an overloaded wrapper for [PathAddExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddextensiona).

### Syntax

```
inline BOOL AddExtension(char* pszPath, const char* pszExtension);
inline BOOL AddExtension(wchar_t* pszPath, const wchar_t* pszExtension);
```

### Remarks

See [PathAddExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathaddextensiona) for details.

## <a name="append"></a> ATLPath::Append

This function is an overloaded wrapper for [PathAppend](/windows/desktop/api/shlwapi/nf-shlwapi-pathappenda).

### Syntax

```
inline BOOL Append(char* pszPath, const char* pszMore);
inline BOOL Append(wchar_t* pszPath, const wchar_t* pszMore);
```

### Remarks

See [PathAppend](/windows/desktop/api/shlwapi/nf-shlwapi-pathappenda) for details.

## <a name="buildroot"></a> ATLPath::BuildRoot

This function is an overloaded wrapper for [PathBuildRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathbuildroota).

### Syntax

```
inline char* BuildRoot(char* pszPath, int iDrive);
inline wchar_t* BuildRoot(wchar_t* pszPath, int iDrive);
```

### Remarks

See [PathBuildRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathbuildroota) for details.

## <a name="canonicalize"></a> ATLPath::Canonicalize

This function is an overloaded wrapper for [PathCanonicalize](/windows/desktop/api/shlwapi/nf-shlwapi-pathcanonicalizea).

### Syntax

```
inline BOOL Canonicalize(char* pszDest, const char* pszSrc);
inline BOOL Canonicalize(wchar_t* pszDest, const wchar_t* pszSrc);
```

### Remarks

See [PathCanonicalize](/windows/desktop/api/shlwapi/nf-shlwapi-pathcanonicalizea) for details.

## <a name="combine"></a> ATLPath::Combine

This function is an overloaded wrapper for [PathCombine](/windows/desktop/api/shlwapi/nf-shlwapi-pathcombinea).

### Syntax

```
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

This function is an overloaded wrapper for [PathCommonPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathcommonprefixa).

### Syntax

```
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

See [PathCommonPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathcommonprefixa) for details.

## <a name="compactpath"></a> ATLPath::CompactPath

This function is an overloaded wrapper for [PathCompactPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpatha).

### Syntax

```
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

See [PathCompactPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpatha) for details.

## <a name="compactpathex"></a> ATLPath::CompactPathEx

This function is an overloaded wrapper for [PathCompactPathEx](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpathexa).

### Syntax

```
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

See [PathCompactPathEx](/windows/desktop/api/shlwapi/nf-shlwapi-pathcompactpathexa) for details.

## <a name="fileexists"></a> ATLPath::FileExists

This function is an overloaded wrapper for [PathFileExists](/windows/desktop/api/shlwapi/nf-shlwapi-pathfileexistsa).

### Syntax

```
inline BOOL FileExists(const char* pszPath);
inline BOOL FileExists(const wchar_t* pszPath);
```

### Remarks

See [PathFileExists](/windows/desktop/api/shlwapi/nf-shlwapi-pathfileexistsa) for details.

## <a name="findextension"></a> ATLPath::FindExtension

This function is an overloaded wrapper for [PathFindExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindextensiona).

### Syntax

```
inline char* FindExtension(const char* pszPath);
inline wchar_t* FindExtension(const wchar_t* pszPath);
```

### Remarks

See [PathFindExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindextensiona) for details.

## <a name="findfilename"></a> ATLPath::FindFileName

This function is an overloaded wrapper for [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea).

### Syntax

```
inline char* FindFileName(const char* pszPath);
inline wchar_t* FindFileName(const wchar_t* pszPath);
```

### Remarks

See [PathFindFileName](/windows/desktop/api/shlwapi/nf-shlwapi-pathfindfilenamea) for details.

## <a name="getdrivenumber"></a> ATLPath::GetDriveNumber

This function is an overloaded wrapper for [PathGetDriveNumber](/windows/desktop/api/shlwapi/nf-shlwapi-pathgetdrivenumbera).

### Syntax

```
inline int GetDriveNumber(const char* pszPath);
inline int GetDriveNumber(const wchar_t* pszPath);
```

### Remarks

See [PathGetDriveNumber](/windows/desktop/api/shlwapi/nf-shlwapi-pathgetdrivenumbera) for details.

## <a name="isdirectory"></a>  ATLPath::IsDirectory

This function is an overloaded wrapper for [PathIsDirectory](/windows/desktop/api/shlwapi/nf-shlwapi-pathisdirectorya).

```
inline BOOL IsDirectory(const char* pszPath);
inline BOOL IsDirectory(const wchar_t* pszPath);
```
### Remarks

See PathIsDirectory for details.

## <a name="isfilespec"></a> ATLPath::IsFileSpec

This function is an overloaded wrapper for [PathIsFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathisfilespeca).

### Syntax

```
inline BOOL IsFileSpec(const char* pszPath);
inline BOOL IsFileSpec(const wchar_t* pszPath);
```

### Remarks

See [PathIsFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathisfilespeca) for details.

## <a name="isprefix"></a> ATLPath::IsPrefix

This function is an overloaded wrapper for [PathIsPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathisprefixa).

### Syntax

```
inline BOOL IsPrefix(const char* pszPrefix, const char* pszPath);
inline BOOL IsPrefix(const wchar_t* pszPrefix, const wchar_t* pszPath);
```

### Remarks

See [PathIsPrefix](/windows/desktop/api/shlwapi/nf-shlwapi-pathisprefixa) for details.

## <a name="isrelative"></a> ATLPath::IsRelative

This function is an overloaded wrapper for [PathIsRelative](/windows/desktop/api/shlwapi/nf-shlwapi-pathisrelativea).

### Syntax

```
inline BOOL IsRelative(const char* pszPath);
inline BOOL IsRelative(const wchar_t* pszPath);
```

### Remarks

See [PathIsRelative](/windows/desktop/api/shlwapi/nf-shlwapi-pathisrelativea) for details.

## <a name="isroot"></a> ATLPath::IsRoot

This function is an overloaded wrapper for [PathIsRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathisroota).

### Syntax

```
inline BOOL IsRoot(const char* pszPath);
inline BOOL IsRoot(const wchar_t* pszPath);
```

### Remarks

See [PathIsRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathisroota) for details.

## <a name="issameroot"></a> ATLPath::IsSameRoot

This function is an overloaded wrapper for [PathIsSameRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathissameroota).

### Syntax

```
inline BOOL IsSameRoot(const char* pszPath1, const char* pszPath2);
inline BOOL IsSameRoot(const wchar_t* pszPath1, const wchar_t* pszPath2);
```

### Remarks

See [PathIsSameRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathissameroota) for details.

## <a name="isunc"></a> ATLPath::IsUNC

This function is an overloaded wrapper for [PathIsUNC](/windows/desktop/api/shlwapi/nf-shlwapi-pathisunca).

### Syntax

```
inline BOOL IsUNC(const char* pszPath);
inline BOOL IsUNC(const wchar_t* pszPath);
```

### Remarks

See [PathIsUNC](/windows/desktop/api/shlwapi/nf-shlwapi-pathisunca) for details.

## <a name="isuncserver"></a> ATLPath::IsUNCServer

This function is an overloaded wrapper for [PathIsUNCServer](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncservera).

### Syntax

```
inline BOOL IsUNCServer(const char* pszPath);
inline BOOL IsUNCServer(const wchar_t* pszPath);
```

### Remarks

See [PathIsUNCServer](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncservera) for details.

## <a name="isuncservershare"></a> ATLPath::IsUNCServerShare

This function is an overloaded wrapper for [PathIsUNCServerShare](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncserversharea).

### Syntax

```
inline BOOL IsUNCServerShare(const char* pszPath);
inline BOOL IsUNCServerShare(const wchar_t* pszPath);
```

### Remarks

See [PathIsUNCServerShare](/windows/desktop/api/shlwapi/nf-shlwapi-pathisuncserversharea) for details.

## <a name="makepretty"></a> ATLPath::MakePretty

This function is an overloaded wrapper for [PathMakePretty](/windows/desktop/api/shlwapi/nf-shlwapi-pathmakeprettya).

### Syntax

```
inline BOOL MakePretty(char* pszPath);
inline BOOL MakePretty(wchar_t* pszPath);
```

### Remarks

See [PathMakePretty](/windows/desktop/api/shlwapi/nf-shlwapi-pathmakeprettya) for details.

## <a name="matchspec"></a> ATLPath::MatchSpec

This function is an overloaded wrapper for [PathMatchSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathmatchspeca).

### Syntax

```
inline BOOL MatchSpec(const char* pszPath, const char* pszSpec);
inline BOOL MatchSpec(const wchar_t* pszPath, const wchar_t* pszSpec);
```

### Remarks

See [PathMatchSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathmatchspeca) for details.

## <a name="quotespaces"></a> ATLPath::QuoteSpaces

This function is an overloaded wrapper for [PathQuoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathquotespacesa).

### Syntax

```
inline void QuoteSpaces(char* pszPath);
inline void QuoteSpaces(wchar_t* pszPath);
```

### Remarks

See [PathQuoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathquotespacesa) for details.

## <a name="relativepathto"></a> ATLPath::RelativePathTo

This function is an overloaded wrapper for [PathRelativePathTo](/windows/desktop/api/shlwapi/nf-shlwapi-pathrelativepathtoa).

### Syntax

```
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

See [PathRelativePathTo](/windows/desktop/api/shlwapi/nf-shlwapi-pathrelativepathtoa) for details.

## <a name="removeargs"></a> ATLPath::RemoveArgs

This function is an overloaded wrapper for [PathRemoveArgs](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveargsa).

### Syntax

```
inline void RemoveArgs(char* pszPath);
inline void RemoveArgs(wchar_t* pszPath);
```

### Remarks

See [PathRemoveArgs](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveargsa) for details.

## <a name="removebackslash"></a> ATLPath::RemoveBackslash

This function is an overloaded wrapper for [PathRemoveBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovebackslasha).

### Syntax

```
inline char* RemoveBackslash(char* pszPath);
inline wchar_t* RemoveBackslash(wchar_t* pszPath);
```

### Remarks

See [PathRemoveBackslash](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovebackslasha) for details.

## <a name="removeblanks"></a> ATLPath::RemoveBlanks

This function is an overloaded wrapper for [PathRemoveBlanks](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveblanksa).

### Syntax

```
inline void RemoveBlanks(char* pszPath);
inline void RemoveBlanks(wchar_t* pszPath);
```

### Remarks

See [PathRemoveBlanks](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveblanksa) for details.

## <a name="removeextension"></a> ATLPath::RemoveExtension

This function is an overloaded wrapper for [PathRemoveExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveextensiona).

### Syntax

```
inline void RemoveExtension(char* pszPath);
inline void RemoveExtension(wchar_t* pszPath);
```

### Remarks

See [PathRemoveExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathremoveextensiona) for details.

## <a name="removefilespec"></a> ATLPath::RemoveFileSpec

This function is an overloaded wrapper for [PathRemoveFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovefilespeca).

### Syntax

```
inline BOOL RemoveFileSpec(char* pszPath);
inline BOOL RemoveFileSpec(wchar_t* pszPath);
```

### Remarks

See [PathRemoveFileSpec](/windows/desktop/api/shlwapi/nf-shlwapi-pathremovefilespeca) for details.

## <a name="renameextension"></a> ATLPath::RenameExtension

This function is an overloaded wrapper for [PathRenameExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathrenameextensiona).

### Syntax

```
inline BOOL RenameExtension(char* pszPath, const char* pszExt);
inline BOOL RenameExtension(wchar_t* pszPath, const wchar_t* pszExt);
```

### Remarks

See [PathRenameExtension](/windows/desktop/api/shlwapi/nf-shlwapi-pathrenameextensiona) for details.

## <a name="skiproot"></a> ATLPath::SkipRoot

This function is an overloaded wrapper for [PathSkipRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathskiproota).

### Syntax

```
inline char* SkipRoot(const char* pszPath);
inline wchar_t* SkipRoot(const wchar_t* pszPath);
```

### Remarks

See [PathSkipRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathskiproota) for details.

## <a name="strippath"></a> ATLPath::StripPath

This function is an overloaded wrapper for [PathStripPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathstrippatha).

### Syntax

```
inline void StripPath(char* pszPath);
inline void StripPath(wchar_t* pszPath);
```

### Remarks

See [PathStripPath](/windows/desktop/api/shlwapi/nf-shlwapi-pathstrippatha) for details.

## <a name="striptoroot"></a> ATLPath::StripToRoot

This function is an overloaded wrapper for [PathStripToRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathstriptoroota).

### Syntax

```
inline BOOL StripToRoot(char* pszPath);
inline BOOL StripToRoot(wchar_t* pszPath);
```

### Remarks

See [PathStripToRoot](/windows/desktop/api/shlwapi/nf-shlwapi-pathstriptoroota) for details.

## <a name="unquotespaces"></a> ATLPath::UnquoteSpaces

This function is an overloaded wrapper for [PathUnquoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathunquotespacesa).

### Syntax

```
inline void UnquoteSpaces(char* pszPath);
inline void UnquoteSpaces(wchar_t* pszPath);
```

### Remarks

See [PathUnquoteSpaces](/windows/desktop/api/shlwapi/nf-shlwapi-pathunquotespacesa) for details.

