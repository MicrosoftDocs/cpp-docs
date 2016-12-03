---
title: "CPathT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CPathT"
  - "CPathT"
  - "ATL::CPathT<StringType>"
  - "ATL::CPathT"
  - "ATL.CPathT<StringType>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPathT class"
ms.assetid: eba4137d-1fd2-4b44-a2e1-0944db64df3c
caps.latest.revision: 20
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
# CPathT Class
This class represents a path.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <typename StringType>
class CPathT
```  
  
#### Parameters  
 `StringType`  
 The ATL/MFC string class to use for the path (see [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)).  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CPathT::PCXSTR](#cpatht__pcxstr)|A constant string type.|  
|[CPathT::PXSTR](#cpatht__pxstr)|A string type.|  
|[CPathT::XCHAR](#cpatht__xchar)|A character type.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPathT::CPathT](#cpatht__cpatht)|The constructor for the path.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPathT::AddBackslash](#cpatht__addbackslash)|Call this method to add a backslash to the end of a string to create the correct syntax for a path.|  
|[CPathT::AddExtension](#cpatht__addextension)|Call this method to add a file extension to a path.|  
|[CPathT::Append](#cpatht__append)|Call this method to append a string to the current path.|  
|[CPathT::BuildRoot](#cpatht__buildroot)|Call this method to create a root path from a given drive number.|  
|[CPathT::Canonicalize](#cpatht__canonicalize)|Call this method to convert the path to canonical form.|  
|[CPathT::Combine](#cpatht__combine)|Call this method to concatenate a string representing a directory name and a string representing a file path name into one path.|  
|[CPathT::CommonPrefix](#cpatht__commonprefix)|Call this method to determine whether the specified path shares a common prefix with the current path.|  
|[CPathT::CompactPath](#cpatht__compactpath)|Call this method to truncate a file path to fit within a given pixel width by replacing path components with ellipses.|  
|[CPathT::CompactPathEx](#cpatht__compactpathex)|Call this method to truncate a file path to fit within a given number of characters by replacing path components with ellipses.|  
|[CPathT::FileExists](#cpatht__fileexists)|Call this method to check whether the file at this path name exists.|  
|[CPathT::FindExtension](#cpatht__findextension)|Call this method to find the position of the file extension within the path.|  
|[CPathT::FindFileName](#cpatht__findfilename)|Call this method to find the position of the file name within the path.|  
|[CPathT::GetDriveNumber](#cpatht__getdrivenumber)|Call this method to search the path for a drive letter within the range of 'A' to 'Z' and return the corresponding drive number.|  
|[CPathT::GetExtension](#cpatht__getextension)|Call this method to get the file extension from the path.|  
|[CPathT::IsDirectory](#cpatht__isdirectory)|Call this method to check whether the path is a valid directory.|  
|[CPathT::IsFileSpec](#cpatht__isfilespec)|Call this method to search a path for any path-delimiting characters (for example, ':' or '\\' ). If there are no path-delimiting characters present, the path is considered to be a File Spec path.|  
|[CPathT::IsPrefix](#cpatht__isprefix)|Call this method to determine whether a path contains a valid prefix of the type passed by `pszPrefix`.|  
|[CPathT::IsRelative](#cpatht__isrelative)|Call this method to determine if the path is relative.|  
|[CPathT::IsRoot](#cpatht__isroot)|Call this method to determine if the path is a directory root.|  
|[CPathT::IsSameRoot](#cpatht__issameroot)|Call this method to determine whether another path has a common root component with the current path.|  
|[CPathT::IsUNC](#cpatht__isunc)|Call this method to determine whether the path is a valid UNC (universal naming convention) path for a server and share.|  
|[CPathT::IsUNCServer](#cpatht__isuncserver)|Call this method to determine whether the path is a valid UNC (universal naming convention) path for a server only.|  
|[CPathT::IsUNCServerShare](#cpatht__isuncservershare)|Call this method to determine whether the path is a valid UNC (universal naming convention) share path, \\\ *server*\ *share*.|  
|[CPathT::MakePretty](#cpatht__makepretty)|Call this method to convert a path to all lowercase characters to give the path a consistent appearance.|  
|[CPathT::MatchSpec](#cpatht__matchspec)|Call this method to search the path for a string containing a wildcard match type.|  
|[CPathT::QuoteSpaces](#cpatht__quotespaces)|Call this method to enclose the path in quotation marks if it contains any spaces.|  
|[CPathT::RelativePathTo](#cpatht__relativepathto)|Call this method to create a relative path from one file or folder to another.|  
|[CPathT::RemoveArgs](#cpatht__removeargs)|Call this method to remove any command-line arguments from the path.|  
|[CPathT::RemoveBackslash](#cpatht__removebackslash)|Call this method to remove the trailing backslash from the path.|  
|[CPathT::RemoveBlanks](#cpatht__removeblanks)|Call this method to remove all leading and trailing spaces from the path.|  
|[CPathT::RemoveExtension](#cpatht__removeextension)|Call this method to remove the file extension from the path, if there is one.|  
|[CPathT::RemoveFileSpec](#cpatht__removefilespec)|Call this method to remove the trailing file name and backslash from the path, if it has them.|  
|[CPathT::RenameExtension](#cpatht__renameextension)|Call this method to replace the file name extension in the path with a new extension. If the file name does not contain an extension, the extension will be attached to the end of the string.|  
|[CPathT::SkipRoot](#cpatht__skiproot)|Call this method to parse a path, ignoring the drive letter or UNC server/share path parts.|  
|[CPathT::StripPath](#cpatht__strippath)|Call this method to remove the path portion of a fully qualified path and file name.|  
|[CPathT::StripToRoot](#cpatht__striptoroot)|Call this method to remove all parts of the path except for the root information.|  
|[CPathT::UnquoteSpaces](#cpatht__unquotespaces)|Call this method to remove quotation marks from the beginning and end of a path.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CPathT::operator const StringType &](#cpatht__operator_const_stringtype_amp)|This operator allows the object to be treated like a string.|  
|[CPathT::operator CPathT::PCXSTR](#cpatht__operator_cpatht__pcxstr)|This operator allows the object to be treated like a string.|  
|[CPathT::operator StringType &](#cpatht__operator_stringtype)|This operator allows the object to be treated like a string.|  
|[CPathT::operator +=](#cpatht__operator_add_eq)|This operator appends a string to the path.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPathT::m_strPath](#cpatht__m_strpath)|The path.|  
  
## Remarks  
 `CPath`, `CPathA`, and `CPathW` are instantiations of `CPathT` defined as follows:  
  
 `typedef CPathT< CString > CPath;`  
  
 `typedef CPathT< CStringA > CPathA;`  
  
 `typedef CPathT< CStringW > CPathW;`  
  
## Requirements  
 **Header:** atlpath.h  
  
##  <a name="cpatht__addbackslash"></a>  CPathT::AddBackslash  
 Call this method to add a backslash to the end of a string to create the correct syntax for a path. If the path already has a trailing backslash, no backslash will be added.  
  
```
void AddBackslash();
```  
  
### Remarks  
 For more information, see [PathAddBackSlash](http://msdn.microsoft.com/library/windows/desktop/bb773561).  
  
##  <a name="cpatht__addextension"></a>  CPathT::AddExtension  
 Call this method to add a file extension to a path.  
  
```
BOOL AddExtension(PCXSTR    pszExtension);
```  
  
### Parameters  
 `pszExtension`  
 The file extension to add.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 For more information, see [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563).  
  
##  <a name="cpatht__append"></a>  CPathT::Append  
 Call this method to append a string to the current path.  
  
```
BOOL Append(PCXSTR    pszMore);
```  
  
### Parameters  
 `pszMore`  
 The string to append.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 For more information, see [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565).  
  
##  <a name="cpatht__buildroot"></a>  CPathT::BuildRoot  
 Call this method to create a root path from a given drive number.  
  
```
void BuildRoot(int    iDrive);
```  
  
### Parameters  
 *iDrive*  
 The drive number (0 is A:, 1 is B:, and so on).  
  
### Remarks  
 For more information, see [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567).  
  
##  <a name="cpatht__canonicalize"></a>  CPathT::Canonicalize  
 Call this method to convert the path to canonical form.  
  
```
void Canonicalize();
```  
  
### Remarks  
 For more information, see [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569).  
  
##  <a name="cpatht__combine"></a>  CPathT::Combine  
 Call this method to concatenate a string representing a directory name and a string representing a file path name into one path.  
  
```
void Combine(
    PCXSTR
pszDir,
 PCXSTR   pszFile);
```  
  
### Parameters  
 `pszDir`  
 The directory path.  
  
 *pszFile*  
 The file path.  
  
### Remarks  
 For more information, see [PathCombine](http://msdn.microsoft.com/library/windows/desktop/bb773571).  
  
##  <a name="cpatht__commonprefix"></a>  CPathT::CommonPrefix  
 Call this method to determine whether the specified path shares a common prefix with the current path.  
  
```
CPathT<StringType> CommonPrefix(PCXSTR    pszOther);
```  
  
### Parameters  
 `pszOther`  
 The path to compare to the current one.  
  
### Return Value  
 Returns the common prefix.  
  
### Remarks  
 A prefix is one of these types: "C:\\\\", ".", "..", "..\\\\". For more information, see [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574).  
  
##  <a name="cpatht__compactpath"></a>  CPathT::CompactPath  
 Call this method to truncate a file path to fit within a given pixel width by replacing path components with ellipses.  
  
```
BOOL CompactPath(
    HDC
hDC,
 UINT   nWidth);
```  
  
### Parameters  
 `hDC`  
 The device context used for font metrics.  
  
 `nWidth`  
 The width, in pixels, that the string will be forced to fit in.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 For more information, see [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575).  
  
##  <a name="cpatht__compactpathex"></a>  CPathT::CompactPathEx  
 Call this method to truncate a file path to fit within a given number of characters by replacing path components with ellipses.  
  
```
BOOL CompactPathEx(
    UINT
nMaxChars,
 DWORD
dwFlags = 0);
```  
  
### Parameters  
 `nMaxChars`  
 The maximum number of characters to be contained in the new string, including the terminating NULL character.  
  
 `dwFlags`  
 Reserved.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 For more information, see [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578).  
  
##  <a name="cpatht__cpatht"></a>  CPathT::CPathT  
 The constructor.  
  
```
CPathT(PCXSTR    pszPath);

CPathT(const CPathT<StringType>& path);

CPathT() throw();
```  
  
### Parameters  
 *pszPath*  
 The pointer to a path string.  
  
 *path*  
 The path string.  
  
##  <a name="cpatht__fileexists"></a>  CPathT::FileExists  
 Call this method to check whether the file at this path name exists.  
  
```
BOOL FileExists() const;
```  
  
### Return Value  
 Returns TRUE if the file exists, FALSE otherwise.  
  
### Remarks  
 For more information, see [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584).  
  
##  <a name="cpatht__findextension"></a>  CPathT::FindExtension  
 Call this method to find the position of the file extension within the path.  
  
```
int FindExtension() const;
```  
  
### Return Value  
 Returns the position of the "." preceding the extension. If no extension is found, returns –1.  
  
### Remarks  
 For more information, see [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587).  
  
##  <a name="cpatht__findfilename"></a>  CPathT::FindFileName  
 Call this method to find the position of the file name within the path.  
  
```
int FindFileName() const;
```  
  
### Return Value  
 Returns the position of the file name. If no file name is found, returns –1.  
  
### Remarks  
 For more information, see [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589).  
  
##  <a name="cpatht__getdrivenumber"></a>  CPathT::GetDriveNumber  
 Call this method to search the path for a drive letter within the range of 'A' to 'Z' and return the corresponding drive number.  
  
```
int GetDriveNumber() const;
```  
  
### Return Value  
 Returns the drive number as an integer from 0 through 25 (corresponding to 'A' through 'Z') if the path has a drive letter, or -1 otherwise.  
  
### Remarks  
 For more information, see [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612).  
  
##  <a name="cpatht__getextension"></a>  CPathT::GetExtension  
 Call this method to get the file extension from the path.  
  
```
StringType GetExtension() const;
```  
  
### Return Value  
 Returns the file extension.  
  
##  <a name="cpatht__isdirectory"></a>  CPathT::IsDirectory  
 Call this method to check whether the path is a valid directory.  
  
```
BOOL IsDirectory() const;
```  
  
### Return Value  
 Returns a non-zero value (16) if the path is a directory, `FALSE` otherwise.  
  
### Remarks  
 For more information, see [PathIsDirectory](http://msdn.microsoft.com/library/windows/desktop/bb773621).  
  
##  <a name="cpatht__isfilespec"></a>  CPathT::IsFileSpec  
 Call this method to search a path for any path-delimiting characters (for example, ':' or '\\' ). If there are no path-delimiting characters present, the path is considered to be a File Spec path.  
  
```
BOOL IsFileSpec() const;
```  
  
### Return Value  
 Returns TRUE if there are no path-delimiting characters within the path, or FALSE if there are path-delimiting characters.  
  
### Remarks  
 For more information, see [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627).  
  
##  <a name="cpatht__isprefix"></a>  CPathT::IsPrefix  
 Call this method to determine whether a path contains a valid prefix of the type passed by `pszPrefix`.  
  
```
BOOL IsPrefix(PCXSTR    pszPrefix) const;
```  
  
### Parameters  
 `pszPrefix`  
 The prefix for which to search. A prefix is one of these types: "C:\\\\", ".", "..", "..\\\\".  
  
### Return Value  
 Returns TRUE if the path contains the prefix, or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650).  
  
##  <a name="cpatht__isrelative"></a>  CPathT::IsRelative  
 Call this method to determine if the path is relative.  
  
```
BOOL IsRelative() const;
```  
  
### Return Value  
 Returns TRUE if the path is relative, or FALSE if it is absolute.  
  
### Remarks  
 For more information, see [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660).  
  
##  <a name="cpatht__isroot"></a>  CPathT::IsRoot  
 Call this method to determine if the path is a directory root.  
  
```
BOOL IsRoot() const;
```  
  
### Return Value  
 Returns TRUE if the path is a root, or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674).  
  
##  <a name="cpatht__issameroot"></a>  CPathT::IsSameRoot  
 Call this method to determine whether another path has a common root component with the current path.  
  
```
BOOL IsSameRoot(PCXSTR    pszOther) const;
```  
  
### Parameters  
 `pszOther`  
 The other path.  
  
### Return Value  
 Returns TRUE if both strings have the same root component, or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687).  
  
##  <a name="cpatht__isunc"></a>  CPathT::IsUNC  
 Call this method to determine whether the path is a valid UNC (universal naming convention) path for a server and share.  
  
```
BOOL IsUNC() const;
```  
  
### Return Value  
 Returns TRUE if the path is a valid UNC path, or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712).  
  
##  <a name="cpatht__isuncserver"></a>  CPathT::IsUNCServer  
 Call this method to determine whether the path is a valid UNC (universal naming convention) path for a server only.  
  
```
BOOL IsUNCServer() const;
```  
  
### Return Value  
 Returns TRUE if the string is a valid UNC path for a server only (no share name), or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722).  
  
##  <a name="cpatht__isuncservershare"></a>  CPathT::IsUNCServerShare  
 Call this method to determine whether the path is a valid UNC (universal naming convention) share path, \\\ *server*\ *share*.  
  
```
BOOL IsUNCServerShare() const;
```  
  
### Return Value  
 Returns TRUE if the path is in the form \\\ *server*\ *share*, or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723).  
  
##  <a name="cpatht__m_strpath"></a>  CPathT::m_strPath  
 The path.  
  
```
StringType m_strPath;
```  
  
### Remarks  
 `StringType` is the template parameter to `CPathT`.  
  
##  <a name="cpatht__makepretty"></a>  CPathT::MakePretty  
 Call this method to convert a path to all lowercase characters to give the path a consistent appearance.  
  
```
BOOL MakePretty();
```  
  
### Return Value  
 Returns TRUE if the path has been converted, or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725).  
  
##  <a name="cpatht__matchspec"></a>  CPathT::MatchSpec  
 Call this method to search the path for a string containing a wildcard match type.  
  
```
BOOL MatchSpec(PCXSTR    pszSpec) const;
```  
  
### Parameters  
 `pszSpec`  
 Pointer to a null-terminated string with the file type for which to search. For example, to test whether the file at the current path is a DOC file, `pszSpec` should be set to "*.doc".  
  
### Return Value  
 Returns TRUE if the string matches, or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727).  
  
##  <a name="cpatht__operator_add_eq"></a>  CPathT::operator +=  
 This operator appends a string to the path.  
  
```
CPathT<StringType>& operator+=(PCXSTR    pszMore);
```  
  
### Parameters  
 `pszMore`  
 The string to append.  
  
### Return Value  
 Returns the updated path.  
  
##  <a name="cpatht__operator_const_stringtype_amp"></a>  CPathT::operator const StringType &amp;  
 This operator allows the object to be treated like a string.  
  
```
    operatorconst StringType&() const throw();
```  
  
### Return Value  
 Returns a string representing the current path managed by this object.  
  
##  <a name="cpatht__operator_cpatht__pcxstr"></a>  CPathT::operator CPathT::PCXSTR  
 This operator allows the object to be treated like a string.  
  
```
    operatorPCXSTR() const throw();
```  
  
### Return Value  
 Returns a string representing the current path managed by this object.  
  
##  <a name="cpatht__operator_stringtype__amp"></a>  CPathT::operator StringType &amp;  
 This operator allows the object to be treated like a string.  
  
```
    operatorStringType&() throw();
```  
  
### Return Value  
 Returns a string representing the current path managed by this object.  
  
##  <a name="cpatht__pcxstr"></a>  CPathT::PCXSTR  
 A constant string type.  
  
```
typedef StringType::PCXSTR PCXSTR;
```  
  
### Remarks  
 `StringType` is the template parameter to `CPathT`.  
  
##  <a name="cpatht__pxstr"></a>  CPathT::PXSTR  
 A string type.  
  
```
typedef StringType::PXSTR PXSTR;
```  
  
### Remarks  
 `StringType` is the template parameter to `CPathT`.  
  
##  <a name="cpatht__quotespaces"></a>  CPathT::QuoteSpaces  
 Call this method to enclose the path in quotation marks if it contains any spaces.  
  
```
void QuoteSpaces();
```  
  
### Remarks  
 For more information, see [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739).  
  
##  <a name="cpatht__relativepathto"></a>  CPathT::RelativePathTo  
 Call this method to create a relative path from one file or folder to another.  
  
```
BOOL RelativePathTo(
    PCXSTR
pszFrom,
 DWORD
dwAttrFrom,
    PCXSTR
pszTo,
 DWORD   dwAttrTo);
```  
  
### Parameters  
 `pszFrom`  
 The start of the relative path.  
  
 *dwAttrFrom*  
 The File attributes of `pszFrom`. If this value contains FILE_ATTRIBUTE_DIRECTORY, `pszFrom` is assumed to be a directory; otherwise, `pszFrom` is assumed to be a file.  
  
 `pszTo`  
 The end point of the relative path.  
  
 *dwAttrTo*  
 The File attributes of `pszTo`. If this value contains FILE_ATTRIBUTE_DIRECTORY, `pszTo` is assumed to be a directory; otherwise, `pszTo` is assumed to be a file.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 For more information, see [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740).  
  
##  <a name="cpatht__removeargs"></a>  CPathT::RemoveArgs  
 Call this method to remove any command-line arguments from the path.  
  
```
void RemoveArgs();
```  
  
### Remarks  
 For more information, see [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742).  
  
##  <a name="cpatht__removebackslash"></a>  CPathT::RemoveBackslash  
 Call this method to remove the trailing backslash from the path.  
  
```
void RemoveBackslash();
```  
  
### Remarks  
 For more information, see [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743).  
  
##  <a name="cpatht__removeblanks"></a>  CPathT::RemoveBlanks  
 Call this method to remove all leading and trailing spaces from the path.  
  
```
void RemoveBlanks();
```  
  
### Remarks  
 For more information, see [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745).  
  
##  <a name="cpatht__removeextension"></a>  CPathT::RemoveExtension  
 Call this method to remove the file extension from the path, if there is one.  
  
```
void RemoveExtension();
```  
  
### Remarks  
 For more information, see [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746).  
  
##  <a name="cpatht__removefilespec"></a>  CPathT::RemoveFileSpec  
 Call this method to remove the trailing file name and backslash from the path, if it has them.  
  
```
BOOL RemoveFileSpec();
```  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 For more information, see [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748).  
  
##  <a name="cpatht__renameextension"></a>  CPathT::RenameExtension  
 Call this method to replace the file name extension in the path with a new extension. If the file name does not contain an extension, the extension will be attached to the end of the path.  
  
```
BOOL RenameExtension(PCXSTR    pszExtension);
```  
  
### Parameters  
 `pszExtension`  
 The new file name extension, preceded by a "." character.  
  
### Return Value  
 Returns TRUE on success, FALSE on failure.  
  
### Remarks  
 For more information, see [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749).  
  
##  <a name="cpatht__skiproot"></a>  CPathT::SkipRoot  
 Call this method to parse a path, ignoring the drive letter or UNC (universal naming convention) server/share path parts.  
  
```
int SkipRoot() const;
```  
  
### Return Value  
 Returns the position of the beginning of the subpath that follows the root (drive letter or UNC server/share).  
  
### Remarks  
 For more information, see [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754).  
  
##  <a name="cpatht__strippath"></a>  CPathT::StripPath  
 Call this method to remove the path portion of a fully qualified path and file name.  
  
```
void StripPath();
```  
  
### Remarks  
 For more information, see [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756).  
  
##  <a name="cpatht__striptoroot"></a>  CPathT::StripToRoot  
 Call this method to remove all parts of the path except for the root information.  
  
```
BOOL StripToRoot();
```  
  
### Return Value  
 Returns TRUE if a valid drive letter was found in the path, or FALSE otherwise.  
  
### Remarks  
 For more information, see [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757).  
  
##  <a name="cpatht__unquotespaces"></a>  CPathT::UnquoteSpaces  
 Call this method to remove quotation marks from the beginning and end of a path.  
  
```
void UnquoteSpaces();
```  
  
### Remarks  
 For more information, see [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763).  
  
##  <a name="cpatht__xchar"></a>  CPathT::XCHAR  
 A character type.  
  
```
typedef StringType::XCHAR XCHAR;
```  
  
### Remarks  
 `StringType` is the template parameter to `CPathT`.  
  
## See Also  
 [Classes](../../atl/reference/atl-classes.md)   
 [CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md)