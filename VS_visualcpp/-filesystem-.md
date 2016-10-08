---
title: "&lt;filesystem&gt;"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5005753b-46fa-43e1-8d4e-1b38617d3cfd
caps.latest.revision: 25
manager: ghogen
translation.priority.mt: 
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
# &lt;filesystem&gt;
Include the header <filesystem\> for access to classes and functions that manipulate and retrieve information about paths, files and directories.  
  
## Syntax  
  
```cpp  
#include <experimental/filesystem> // C++-standard header file name  
#include <filesystem> // Microsoft-specific implementation header file name  
using namespace std::experimental::filesystem::v1;  
```  
  
> [!IMPORTANT]
>  As of the release of Visual Studio 2015, the <experimental/filesystem> header was not yet a C++ standard. Visual C++ 2015 implemented the final draft standard, found in [ISO/IEC JTC 1/SC 22/WG 21 N4100](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4100.pdf).  
  
 This header supports filesystems for one of two broad classes of host operating systems: Microsoft Windows and Posix.  
  
 While most functionality is common to both operating systems, this document identifies where differences occur. For example:  
  
-   Windows supports multiple root names, such as c: or \\\network_name. A filesystem consists of a forest of trees, each with its own root directory, such as c:\ or \\\network_name\\, and each with its own current directory, for completing a relative pathname (one that is not an absolute pathname).  
  
-   Posix supports a single tree, with no root name, the single root directory /, and a single current directory.  
  
 Another significant difference is the native representation of pathnames:  
  
-   Windows uses a null-terminated sequence of wchar_t, encoded as UTF-16 (one or two elements for each character).  
  
-   Posix uses a null-terminated sequence of char, encoded as UTF-8 (one or more elements for each character).  
  
-   An object of class path stores the pathname in native form, but supports easy conversion between this stored form and several external forms:  
  
    -   A null-terminated sequence of char, encoded as favored by the operating system.  
  
    -   A null-terminated sequence of char, encoded as UTF-8.  
  
    -   A null-terminated sequence of wchar_t, encoded as favored by the operating system.  
  
    -   A null-terminated sequence of char16_t, encoded as UTF-16.  
  
    -   A null-terminated sequence of char32_t, encoded as UTF-32.  
  
 Interconversions between these representations are mediated, as needed, by the use of one or more `codecvt` facets. If a specific locale object is not designated, these facets are obtained from the global locale.  
  
 Another difference is the detail with which each operating system lets you specify file or directory access permissions:  
  
1.  Windows records whether a file is read only or writable, an attribute that has no meaning for directories.  
  
2.  Posix records whether a file can be read, written, or executed (scanned if a directory), by the owner, by the owner's group, or by everybody, plus a few other permissions.  
  
 Common to both systems is the structure imposed on a pathname once you get past the root name. For the pathname c:/abc/xyz/def.ext:  
  
-   The root name is c:.  
  
-   The root directory is /.  
  
-   The root path is c:/.  
  
-   The relative path is abc/xyz/def.ext.  
  
-   The parent path is c:/abc/xyz.  
  
-   The filename is def.ext.  
  
-   The stem is def.  
  
-   The extension is .ext.  
  
 A minor difference is the **preferred separator**, between the sequence of directories in a pathname. Both operating systems let you write a forward slash /, but in some contexts Windows prefers a backslash \\.  
  
 Finally, an important feature of path objects is that you can use them wherever a filename argument is required in the classes defined in the header <fstream\>.  
  
 For more information and code examples, see [File System Navigation (C++)](../VS_visualcpp/File-System-Navigation.md).  
  
## Classes  
  
|Name|Description|  
|----------|-----------------|  
|[directory_entry Class](../VS_visualcpp/directory_entry-Class.md)|Describes an object that is returned by a `directory_iterator` or a `recursive_directory_iterator` and contains a path.|  
|[directory_iterator Class](../VS_visualcpp/directory_iterator-Class.md)|Describes an input iterator that sequences through the file names in a file-system directory.|  
|[filesystem_error Class](../VS_visualcpp/filesystem_error-Class.md)|A base class for exceptions that are thrown to report a low-level system overflow.|  
|[path Class](../VS_visualcpp/path-Class--C---Standard-Template-Library-.md)|Defines a class that stores an object of template type `String` that is suitable for use as a file name.|  
|[recursive_directory_iterator Class](../VS_visualcpp/recursive_directory_iterator-Class.md)|Describes an input iterator that sequences through the file names in a file-system directory. The iterator can also descend into subdirectories.|  
|[file_status Class](../VS_visualcpp/file_status-Class.md)|Wraps a `file_type`.|  
  
## Structs  
  
|Name|Description|  
|----------|-----------------|  
|[space_info Structure](../VS_visualcpp/space_info-Structure.md)|Holds information about a volume.|  
  
## Functions  
 [<filesystem\> functions](../VS_visualcpp/-filesystem--functions.md)  
  
## Operators  
 [<filesystem\> operators](../VS_visualcpp/-filesystem--operators.md)  
  
## Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[copy_option Enumeration](../VS_visualcpp/copy_option-Enumeration--filesystem-.md)|An enumeration that is used with [copy_file](assetId:///4af7a9b0-8861-45ed-b84e-0307f0669d60) and determines behavior if a destination file already exists.|  
|[directory_options Enumeration](../VS_visualcpp/directory_options-Enumeration.md)|An enumeration that specifies options for directory iterators.|  
|[file_type Enumeration](../VS_visualcpp/file_type-Enumeration.md)|An enumeration for file types.|  
|[perms Enumeration](../VS_visualcpp/perms-Enumeration.md)|A bitmask type used to convey permissions and options to permissions|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)