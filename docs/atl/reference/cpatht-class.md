---
description: "Learn more about: CPathT Class"
title: "CPathT Class"
ms.date: "03/27/2019"
f1_keywords: ["CPathT", "ATLPATH/ATL::CPathT", "ATLPATH/ATL::CPathT::PCXSTR", "ATLPATH/ATL::CPathT::PXSTR", "ATLPATH/ATL::CPathT::XCHAR", "ATLPATH/ATL::CPathT::CPathT", "ATLPATH/ATL::CPathT::AddBackslash", "ATLPATH/ATL::CPathT::AddExtension", "ATLPATH/ATL::CPathT::Append", "ATLPATH/ATL::CPathT::BuildRoot", "ATLPATH/ATL::CPathT::Canonicalize", "ATLPATH/ATL::CPathT::Combine", "ATLPATH/ATL::CPathT::CommonPrefix", "ATLPATH/ATL::CPathT::CompactPath", "ATLPATH/ATL::CPathT::CompactPathEx", "ATLPATH/ATL::CPathT::FileExists", "ATLPATH/ATL::CPathT::FindExtension", "ATLPATH/ATL::CPathT::FindFileName", "ATLPATH/ATL::CPathT::GetDriveNumber", "ATLPATH/ATL::CPathT::GetExtension", "ATLPATH/ATL::CPathT::IsDirectory", "ATLPATH/ATL::CPathT::IsFileSpec", "ATLPATH/ATL::CPathT::IsPrefix", "ATLPATH/ATL::CPathT::IsRelative", "ATLPATH/ATL::CPathT::IsRoot", "ATLPATH/ATL::CPathT::IsSameRoot", "ATLPATH/ATL::CPathT::IsUNC", "ATLPATH/ATL::CPathT::IsUNCServer", "ATLPATH/ATL::CPathT::IsUNCServerShare", "ATLPATH/ATL::CPathT::MakePretty", "ATLPATH/ATL::CPathT::MatchSpec", "ATLPATH/ATL::CPathT::QuoteSpaces", "ATLPATH/ATL::CPathT::RelativePathTo", "ATLPATH/ATL::CPathT::RemoveArgs", "ATLPATH/ATL::CPathT::RemoveBackslash", "ATLPATH/ATL::CPathT::RemoveBlanks", "ATLPATH/ATL::CPathT::RemoveExtension", "ATLPATH/ATL::CPathT::RemoveFileSpec", "ATLPATH/ATL::CPathT::RenameExtension", "ATLPATH/ATL::CPathT::SkipRoot", "ATLPATH/ATL::CPathT::StripPath", "ATLPATH/ATL::CPathT::StripToRoot", "ATLPATH/ATL::CPathT::UnquoteSpaces", "ATLPATH/ATL::CPathT::m_strPath"]
helpviewer_keywords: ["CPathT class"]
ms.assetid: eba4137d-1fd2-4b44-a2e1-0944db64df3c
---
# CPathT Class

This class represents a path.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <typename StringType>
class CPathT
```

#### Parameters

*StringType*<br/>
The ATL/MFC string class to use for the path (see [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)).

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CPathT::PCXSTR](#pcxstr)|A constant string type.|
|[CPathT::PXSTR](#pxstr)|A string type.|
|[CPathT::XCHAR](#xchar)|A character type.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPathT::CPathT](#cpatht)|The constructor for the path.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPathT::AddBackslash](#addbackslash)|Call this method to add a backslash to the end of a string to create the correct syntax for a path.|
|[CPathT::AddExtension](#addextension)|Call this method to add a file extension to a path.|
|[CPathT::Append](#append)|Call this method to append a string to the current path.|
|[CPathT::BuildRoot](#buildroot)|Call this method to create a root path from a given drive number.|
|[CPathT::Canonicalize](#canonicalize)|Call this method to convert the path to canonical form.|
|[CPathT::Combine](#combine)|Call this method to concatenate a string representing a directory name and a string representing a file path name into one path.|
|[CPathT::CommonPrefix](#commonprefix)|Call this method to determine whether the specified path shares a common prefix with the current path.|
|[CPathT::CompactPath](#compactpath)|Call this method to truncate a file path to fit within a given pixel width by replacing path components with ellipsis.|
|[CPathT::CompactPathEx](#compactpathex)|Call this method to truncate a file path to fit within a given number of characters by replacing path components with ellipsis.|
|[CPathT::FileExists](#fileexists)|Call this method to check whether the file at this path name exists.|
|[CPathT::FindExtension](#findextension)|Call this method to find the position of the file extension within the path.|
|[CPathT::FindFileName](#findfilename)|Call this method to find the position of the file name within the path.|
|[CPathT::GetDriveNumber](#getdrivenumber)|Call this method to search the path for a drive letter within the range of 'A' to 'Z' and return the corresponding drive number.|
|[CPathT::GetExtension](#getextension)|Call this method to get the file extension from the path.|
|[CPathT::IsDirectory](#isdirectory)|Call this method to check whether the path is a valid directory.|
|[CPathT::IsFileSpec](#isfilespec)|Call this method to search a path for any path-delimiting characters (for example, ':' or '\\' ). If there are no path-delimiting characters present, the path is considered to be a File Spec path.|
|[CPathT::IsPrefix](#isprefix)|Call this method to determine whether a path contains a valid prefix of the type passed by *pszPrefix*.|
|[CPathT::IsRelative](#isrelative)|Call this method to determine if the path is relative.|
|[CPathT::IsRoot](#isroot)|Call this method to determine if the path is a directory root.|
|[CPathT::IsSameRoot](#issameroot)|Call this method to determine whether another path has a common root component with the current path.|
|[CPathT::IsUNC](#isunc)|Call this method to determine whether the path is a valid UNC (universal naming convention) path for a server and share.|
|[CPathT::IsUNCServer](#isuncserver)|Call this method to determine whether the path is a valid UNC (universal naming convention) path for a server only.|
|[CPathT::IsUNCServerShare](#isuncservershare)|Call this method to determine whether the path is a valid UNC (universal naming convention) share path, \\\ *server*\ *share*.|
|[CPathT::MakePretty](#makepretty)|Call this method to convert a path to all lowercase characters to give the path a consistent appearance.|
|[CPathT::MatchSpec](#matchspec)|Call this method to search the path for a string containing a wildcard match type.|
|[CPathT::QuoteSpaces](#quotespaces)|Call this method to enclose the path in quotation marks if it contains any spaces.|
|[CPathT::RelativePathTo](#relativepathto)|Call this method to create a relative path from one file or folder to another.|
|[CPathT::RemoveArgs](#removeargs)|Call this method to remove any command-line arguments from the path.|
|[CPathT::RemoveBackslash](#removebackslash)|Call this method to remove the trailing backslash from the path.|
|[CPathT::RemoveBlanks](#removeblanks)|Call this method to remove all leading and trailing spaces from the path.|
|[CPathT::RemoveExtension](#removeextension)|Call this method to remove the file extension from the path, if there is one.|
|[CPathT::RemoveFileSpec](#removefilespec)|Call this method to remove the trailing file name and backslash from the path, if it has them.|
|[CPathT::RenameExtension](#renameextension)|Call this method to replace the file name extension in the path with a new extension. If the file name does not contain an extension, the extension will be attached to the end of the string.|
|[CPathT::SkipRoot](#skiproot)|Call this method to parse a path, ignoring the drive letter or UNC server/share path parts.|
|[CPathT::StripPath](#strippath)|Call this method to remove the path portion of a fully qualified path and file name.|
|[CPathT::StripToRoot](#striptoroot)|Call this method to remove all parts of the path except for the root information.|
|[CPathT::UnquoteSpaces](#unquotespaces)|Call this method to remove quotation marks from the beginning and end of a path.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CPathT::operator const StringType &](#operator_const_stringtype_amp)|This operator allows the object to be treated like a string.|
|[CPathT::operator CPathT::PCXSTR](#operator_cpatht__pcxstr)|This operator allows the object to be treated like a string.|
|[CPathT::operator StringType &](#operator_stringtype_amp)|This operator allows the object to be treated like a string.|
|[CPathT::operator +=](#operator_add_eq)|This operator appends a string to the path.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPathT::m_strPath](#m_strpath)|The path.|

## Remarks

`CPath`, `CPathA`, and `CPathW` are instantiations of `CPathT` defined as follows:

`typedef CPathT< CString > CPath;`

`typedef CPathT< CStringA > CPathA;`

`typedef CPathT< CStringW > CPathW;`

## Requirements

**Header:** atlpath.h

## <a name="addbackslash"></a> CPathT::AddBackslash

Call this method to add a backslash to the end of a string to create the correct syntax for a path. If the path already has a trailing backslash, no backslash will be added.

```cpp
void AddBackslash();
```

### Remarks

For more information, see [PathAddBackSlash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).

## <a name="addextension"></a> CPathT::AddExtension

Call this method to add a file extension to a path.

```
BOOL AddExtension(PCXSTR pszExtension);
```

### Parameters

*pszExtension*<br/>
The file extension to add.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

For more information, see [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).

## <a name="append"></a> CPathT::Append

Call this method to append a string to the current path.

```
BOOL Append(PCXSTR pszMore);
```

### Parameters

*pszMore*<br/>
The string to append.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

For more information, see [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).

## <a name="buildroot"></a> CPathT::BuildRoot

Call this method to create a root path from a given drive number.

```cpp
void BuildRoot(int iDrive);
```

### Parameters

*iDrive*<br/>
The drive number (0 is A:, 1 is B:, and so on).

### Remarks

For more information, see [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).

## <a name="canonicalize"></a> CPathT::Canonicalize

Call this method to convert the path to canonical form.

```cpp
void Canonicalize();
```

### Remarks

For more information, see [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).

## <a name="combine"></a> CPathT::Combine

Call this method to concatenate a string representing a directory name and a string representing a file path name into one path.

```cpp
void Combine(PCXSTR pszDir, PCXSTR  pszFile);
```

### Parameters

*pszDir*<br/>
The directory path.

*pszFile*<br/>
The file path.

### Remarks

For more information, see [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).

## <a name="commonprefix"></a> CPathT::CommonPrefix

Call this method to determine whether the specified path shares a common prefix with the current path.

```
CPathT<StringType> CommonPrefix(PCXSTR pszOther);
```

### Parameters

*pszOther*<br/>
The path to compare to the current one.

### Return Value

Returns the common prefix.

### Remarks

A prefix is one of these types: "C:\\\\", ".", "..", "..\\\\". For more information, see [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).

## <a name="compactpath"></a> CPathT::CompactPath

Call this method to truncate a file path to fit within a given pixel width by replacing path components with ellipsis.

```
BOOL CompactPath(HDC hDC, UINT nWidth);
```

### Parameters

*hDC*<br/>
The device context used for font metrics.

*nWidth*<br/>
The width, in pixels, that the string will be forced to fit in.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

For more information, see [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).

## <a name="compactpathex"></a> CPathT::CompactPathEx

Call this method to truncate a file path to fit within a given number of characters by replacing path components with ellipsis.

```
BOOL CompactPathEx(UINT nMaxChars, DWORD dwFlags = 0);
```

### Parameters

*nMaxChars*<br/>
The maximum number of characters to be contained in the new string, including the terminating NULL character.

*dwFlags*<br/>
Reserved.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

For more information, see [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).

## <a name="cpatht"></a> CPathT::CPathT

The constructor.

```
CPathT(PCXSTR pszPath);
CPathT(const CPathT<StringType>& path);
CPathT() throw();
```

### Parameters

*pszPath*<br/>
The pointer to a path string.

*path*<br/>
The path string.

## <a name="fileexists"></a> CPathT::FileExists

Call this method to check whether the file at this path name exists.

```
BOOL FileExists() const;
```

### Return Value

Returns TRUE if the file exists, FALSE otherwise.

### Remarks

For more information, see [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).

## <a name="findextension"></a> CPathT::FindExtension

Call this method to find the position of the file extension within the path.

```
int FindExtension() const;
```

### Return Value

Returns the position of the "." preceding the extension. If no extension is found, returns -1.

### Remarks

For more information, see [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).

## <a name="findfilename"></a> CPathT::FindFileName

Call this method to find the position of the file name within the path.

```
int FindFileName() const;
```

### Return Value

Returns the position of the file name. If no file name is found, returns -1.

### Remarks

For more information, see [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).

## <a name="getdrivenumber"></a> CPathT::GetDriveNumber

Call this method to search the path for a drive letter within the range of 'A' to 'Z' and return the corresponding drive number.

```
int GetDriveNumber() const;
```

### Return Value

Returns the drive number as an integer from 0 through 25 (corresponding to 'A' through 'Z') if the path has a drive letter, or -1 otherwise.

### Remarks

For more information, see [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).

## <a name="getextension"></a> CPathT::GetExtension

Call this method to get the file extension from the path.

```
StringType GetExtension() const;
```

### Return Value

Returns the file extension.

## <a name="isdirectory"></a> CPathT::IsDirectory

Call this method to check whether the path is a valid directory.

```
BOOL IsDirectory() const;
```

### Return Value

Returns a non-zero value (16) if the path is a directory, FALSE otherwise.

### Remarks

For more information, see [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).

## <a name="isfilespec"></a> CPathT::IsFileSpec

Call this method to search a path for any path-delimiting characters (for example, ':' or '\\' ). If there are no path-delimiting characters present, the path is considered to be a File Spec path.

```
BOOL IsFileSpec() const;
```

### Return Value

Returns TRUE if there are no path-delimiting characters within the path, or FALSE if there are path-delimiting characters.

### Remarks

For more information, see [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).

## <a name="isprefix"></a> CPathT::IsPrefix

Call this method to determine whether a path contains a valid prefix of the type passed by *pszPrefix*.

```
BOOL IsPrefix(PCXSTR pszPrefix) const;
```

### Parameters

*pszPrefix*<br/>
The prefix for which to search. A prefix is one of these types: "C:\\\\", ".", "..", "..\\\\".

### Return Value

Returns TRUE if the path contains the prefix, or FALSE otherwise.

### Remarks

For more information, see [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).

## <a name="isrelative"></a> CPathT::IsRelative

Call this method to determine if the path is relative.

```
BOOL IsRelative() const;
```

### Return Value

Returns TRUE if the path is relative, or FALSE if it is absolute.

### Remarks

For more information, see [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).

## <a name="isroot"></a> CPathT::IsRoot

Call this method to determine if the path is a directory root.

```
BOOL IsRoot() const;
```

### Return Value

Returns TRUE if the path is a root, or FALSE otherwise.

### Remarks

For more information, see [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).

## <a name="issameroot"></a> CPathT::IsSameRoot

Call this method to determine whether another path has a common root component with the current path.

```
BOOL IsSameRoot(PCXSTR pszOther) const;
```

### Parameters

*pszOther*<br/>
The other path.

### Return Value

Returns TRUE if both strings have the same root component, or FALSE otherwise.

### Remarks

For more information, see [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).

## <a name="isunc"></a> CPathT::IsUNC

Call this method to determine whether the path is a valid UNC (universal naming convention) path for a server and share.

```
BOOL IsUNC() const;
```

### Return Value

Returns TRUE if the path is a valid UNC path, or FALSE otherwise.

### Remarks

For more information, see [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).

## <a name="isuncserver"></a> CPathT::IsUNCServer

Call this method to determine whether the path is a valid UNC (universal naming convention) path for a server only.

```
BOOL IsUNCServer() const;
```

### Return Value

Returns TRUE if the string is a valid UNC path for a server only (no share name), or FALSE otherwise.

### Remarks

For more information, see [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).

## <a name="isuncservershare"></a> CPathT::IsUNCServerShare

Call this method to determine whether the path is a valid UNC (universal naming convention) share path, \\\ *server*\ *share*.

```
BOOL IsUNCServerShare() const;
```

### Return Value

Returns TRUE if the path is in the form \\\ *server*\ *share*, or FALSE otherwise.

### Remarks

For more information, see [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).

## <a name="m_strpath"></a> CPathT::m_strPath

The path.

```
StringType m_strPath;
```

### Remarks

`StringType` is the template parameter to `CPathT`.

## <a name="makepretty"></a> CPathT::MakePretty

Call this method to convert a path to all lowercase characters to give the path a consistent appearance.

```
BOOL MakePretty();
```

### Return Value

Returns TRUE if the path has been converted, or FALSE otherwise.

### Remarks

For more information, see [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).

## <a name="matchspec"></a> CPathT::MatchSpec

Call this method to search the path for a string containing a wildcard match type.

```
BOOL MatchSpec(PCXSTR pszSpec) const;
```

### Parameters

*pszSpec*<br/>
Pointer to a null-terminated string with the file type for which to search. For example, to test whether the file at the current path is a DOC file, *pszSpec* should be set to "*.doc".

### Return Value

Returns TRUE if the string matches, or FALSE otherwise.

### Remarks

For more information, see [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).

## <a name="operator_add_eq"></a> CPathT::operator +=

This operator appends a string to the path.

```
CPathT<StringType>& operator+=(PCXSTR pszMore);
```

### Parameters

*pszMore*<br/>
The string to append.

### Return Value

Returns the updated path.

## <a name="operator_const_stringtype_amp"></a> CPathT::operator const StringType &amp;

This operator allows the object to be treated like a string.

```
operator const StringType&() const throw();
```

### Return Value

Returns a string representing the current path managed by this object.

## <a name="operator_cpatht__pcxstr"></a> CPathT::operator CPathT::PCXSTR

This operator allows the object to be treated like a string.

```
operator PCXSTR() const throw();
```

### Return Value

Returns a string representing the current path managed by this object.

## <a name="operator_stringtype_amp"></a> CPathT::operator StringType &amp;

This operator allows the object to be treated like a string.

```
operator StringType&() throw();
```

### Return Value

Returns a string representing the current path managed by this object.

## <a name="pcxstr"></a> CPathT::PCXSTR

A constant string type.

```
typedef StringType::PCXSTR PCXSTR;
```

### Remarks

`StringType` is the template parameter to `CPathT`.

## <a name="pxstr"></a> CPathT::PXSTR

A string type.

```
typedef StringType::PXSTR PXSTR;
```

### Remarks

`StringType` is the template parameter to `CPathT`.

## <a name="quotespaces"></a> CPathT::QuoteSpaces

Call this method to enclose the path in quotation marks if it contains any spaces.

```cpp
void QuoteSpaces();
```

### Remarks

For more information, see [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).

## <a name="relativepathto"></a> CPathT::RelativePathTo

Call this method to create a relative path from one file or folder to another.

```
BOOL RelativePathTo(
    PCXSTR pszFrom,
    DWORD dwAttrFrom,
    PCXSTR pszTo,
    DWORD dwAttrTo);
```

### Parameters

*pszFrom*<br/>
The start of the relative path.

*dwAttrFrom*<br/>
The File attributes of *pszFrom*. If this value contains FILE_ATTRIBUTE_DIRECTORY, *pszFrom* is assumed to be a directory; otherwise, *pszFrom* is assumed to be a file.

*pszTo*<br/>
The end point of the relative path.

*dwAttrTo*<br/>
The File attributes of *pszTo*. If this value contains FILE_ATTRIBUTE_DIRECTORY, *pszTo* is assumed to be a directory; otherwise, *pszTo* is assumed to be a file.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

For more information, see [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).

## <a name="removeargs"></a> CPathT::RemoveArgs

Call this method to remove any command-line arguments from the path.

```cpp
void RemoveArgs();
```

### Remarks

For more information, see [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).

## <a name="removebackslash"></a> CPathT::RemoveBackslash

Call this method to remove the trailing backslash from the path.

```cpp
void RemoveBackslash();
```

### Remarks

For more information, see [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).

## <a name="removeblanks"></a> CPathT::RemoveBlanks

Call this method to remove all leading and trailing spaces from the path.

```cpp
void RemoveBlanks();
```

### Remarks

For more information, see [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).

## <a name="removeextension"></a> CPathT::RemoveExtension

Call this method to remove the file extension from the path, if there is one.

```cpp
void RemoveExtension();
```

### Remarks

For more information, see [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).

## <a name="removefilespec"></a> CPathT::RemoveFileSpec

Call this method to remove the trailing file name and backslash from the path, if it has them.

```
BOOL RemoveFileSpec();
```

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

For more information, see [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).

## <a name="renameextension"></a> CPathT::RenameExtension

Call this method to replace the file name extension in the path with a new extension. If the file name does not contain an extension, the extension will be attached to the end of the path.

```
BOOL RenameExtension(PCXSTR pszExtension);
```

### Parameters

*pszExtension*<br/>
The new file name extension, preceded by a "." character.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

For more information, see [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).

## <a name="skiproot"></a> CPathT::SkipRoot

Call this method to parse a path, ignoring the drive letter or UNC (universal naming convention) server/share path parts.

```
int SkipRoot() const;
```

### Return Value

Returns the position of the beginning of the subpath that follows the root (drive letter or UNC server/share).

### Remarks

For more information, see [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).

## <a name="strippath"></a> CPathT::StripPath

Call this method to remove the path portion of a fully qualified path and file name.

```cpp
void StripPath();
```

### Remarks

For more information, see [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).

## <a name="striptoroot"></a> CPathT::StripToRoot

Call this method to remove all parts of the path except for the root information.

```
BOOL StripToRoot();
```

### Return Value

Returns TRUE if a valid drive letter was found in the path, or FALSE otherwise.

### Remarks

For more information, see [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).

## <a name="unquotespaces"></a> CPathT::UnquoteSpaces

Call this method to remove quotation marks from the beginning and end of a path.

```cpp
void UnquoteSpaces();
```

### Remarks

For more information, see [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).

## <a name="xchar"></a> CPathT::XCHAR

A character type.

```
typedef StringType::XCHAR XCHAR;
```

### Remarks

`StringType` is the template parameter to `CPathT`.

## See also

[Classes](../../atl/reference/atl-classes.md)<br/>
[CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md)
