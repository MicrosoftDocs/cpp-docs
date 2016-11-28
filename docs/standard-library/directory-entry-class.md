---
title: "directory_entry Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::experimental::filesystem::directory_entry"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::operator const std::experimental::filesystem::path &"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::directory_entry"
  - "std::experimental::filesystem::directory_entry::directory_entry"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::operator="
  - "std::experimental::filesystem::directory_entry::operator="
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::assign"
  - "std::experimental::filesystem::directory_entry::assign"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::replace_filename"
  - "std::experimental::filesystem::directory_entry::replace_filename"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::path"
  - "std::experimental::filesystem::directory_entry::path"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::status"
  - "std::experimental::filesystem::directory_entry::status"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::symlink_status"
  - "std::experimental::filesystem::directory_entry::symlink_status"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::operator<"
  - "std::experimental::filesystem::directory_entry::operator<"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::operator=="
  - "std::experimental::filesystem::directory_entry::operator=="
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::operator!="
  - "std::experimental::filesystem::directory_entry::operator!="
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::operator<="
  - "std::experimental::filesystem::directory_entry::operator<="
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::operator>"
  - "std::experimental::filesystem::directory_entry::operator>"
  - "FILESYSTEM/std::experimental::filesystem::directory_entry::operator>="
  - "std::experimental::filesystem::directory_entry::operator>="
dev_langs: 
  - "C++"
ms.assetid: 1827c67b-4137-4548-adb0-f955f7acaf08
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# directory_entry Class
Describes an object that is returned by `*X`, where *X* is a [directory_iterator](../standard-library/directory-iterator-class.md) or a [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md).  
  
## Syntax  
  
```  
class directory_entry;  
```  
  
## Remarks  
 The class stores an object of type [path](../standard-library/path-class.md). The stored `path` can be an instance of the [path Class](../standard-library/path-class.md) or of a type that is derived from `path`. It also stores two [file_type](../standard-library/filesystem-enumerations.md#filesystem__file_type) values; one that represents what is known about the status of the stored file name, and another that represents what is known about the symbolic link status of the file name.  
  
 For more information and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).  
  
## assign  
  
```  
void assign(const std::experimental::filesystem::path& pval,  
    file_status stat_arg = file_status(),  
    file_status symstat_arg = file_status());
```  
  
 The member function assigns pval to mypath, stat to mystat, and symstat to mysymstat.  
  
## directory_entry  
  
```  
directory_entry() = default;  
directory_entry(const directory_entry&) = default;  
directory_entry(directory_entry&&) noexcept = default;  
explicit directory_entry(const std::experimental::filesystem::path& pval,  
    file_status stat_arg = file_status(),  
    file_status symstat_arg = file_status());
```  
  
 The defaulted constructors behave as expected. The fourth constructor initializes mypath to pval, mystat to stat_arg, and mysymstat to symstat_arg.  
  
## operator!=  
  
```  
bool operator!=(const directory_entry& right) const noexcept;  
```  
  
 The member function returns !(*this == right).  
  
## operator=  
  
```  
directory_entry& operator=(const directory_entry&) = default;  
directory_entry& operator=(directory_entry&&) noexcept = default;  
```  
  
 The defaulted member assignment operators behave as expected.  
  
## operator==  
  
```  
bool operator==(const directory_entry& right) const noexcept;  
```  
  
 The member function returns mypath == right.mypath.  
  
## operator<  
  
```  
 
bool operator<(const directory_entry& right) const noexcept;  
```  
  
 The member function returns mypath < right.mypath.  
  
## operator<=  
  
```  
bool operator<=(const directory_entry& right) const noexcept;  
```  
  
 The member function returns !(right \< *this).  
  
## operator>  
  
```  
bool operator>(const directory_entry& right) const noexcept;  
```  
  
 The member function returns right \< *this.  
  
## operator>=  
  
```  
bool operator>=(const directory_entry& right) const noexcept;  
```  
  
 The member function returns !(*this < right).  
  
## operator const path_type&  
  
``` 
 operator const std::experimental::filesystem::path&() const; 
```  
  
 The member operator returns mypath.  
  
## path  
  
```  
const std::experimental::filesystem::path& path() const noexcept;  
```  
  
 The member function returns mypath.  
  
## replace_filename  
  
```  
void replace_filename(
    const std::experimental::filesystem::path& pval,  
    file_status stat_arg = file_status(),  
    file_status symstat_arg = file_status());
```  
  
 The member function replaces mypath with mypath.parent_path() / pval, mystat with stat_arg, and mysymstat with symstat_arg  
  
## status  
  
```  
file_status status() const; 
file_status status(error_code& ec) const noexcept;  
```  
  
 Both member functions return mystat possibly first altered as follows:  
  
1.  If status_known(mystat) then do nothing.  
  
2.  Otherwise, if !status_known(mysymstat) && !is_symlink(mysymstat) then mystat = mysymstat.  
  
## symlink_status  
  
```  
file_status symlink_status() const; 
file_status symlink_status(error_code& ec) const noexcept;  
```  
  
 Both member functions return mysymstat possibly first altered as follows:If status_known(mysymstat) then do nothing. Otherwise, mysymstat = symlink_status(mypval).  
  
## Requirements  
 **Header:** \<experimental/filesystem>  
  
 **Namespace:** std::experimental::filesystem  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<filesystem>](../standard-library/filesystem.md)

