---
title: "&lt;filesystem&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FILESYSTEM/std::experimental::filesystem::v1::operator=="
  - "std::experimental::filesystem::v1::operator=="
  - "FILESYSTEM/std::experimental::filesystem::v1::operator!="
  - "std::experimental::filesystem::v1::operator!="
  - "FILESYSTEM/std::experimental::filesystem::v1::operator<"
  - "std::experimental::filesystem::v1::operator<"
  - "FILESYSTEM/std::experimental::filesystem::v1::operator<="
  - "std::experimental::filesystem::v1::operator<="
  - "FILESYSTEM/std::experimental::filesystem::v1::operator>"
  - "std::experimental::filesystem::v1::operator>"
  - "FILESYSTEM/std::experimental::filesystem::v1::operator>="
  - "std::experimental::filesystem::v1::operator>="
  - "FILESYSTEM/std::experimental::filesystem::v1::operator/"
  - "std::experimental::filesystem::v1::operator/"
  - "FILESYSTEM/std::experimental::filesystem::v1::operator<<"
  - "std::experimental::filesystem::v1::operator<<"
  - "FILESYSTEM/std::experimental::filesystem::v1::operator>>"
  - "std::experimental::filesystem::v1::operator>>"
dev_langs: 
  - "C++"
ms.assetid: 102c4833-aa3b-41a8-8998-f5003c546bfd
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;filesystem&gt; operators
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;filesystem&gt; operators](https://docs.microsoft.com/cpp/standard-library/filesystem-operators).  
  
The operators perform a lexical comparison of two paths as strings. Use the **equivalent** function to determine whether two paths (for example a relative path and an absolute path) refer to the same file or directory on disk.  
  
```  
C:\root> D:\root: false  
C:\root> C:\root\sub: false  
C:\root> C:\roo: true  
```  
  
 For more information, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).  
  
## operator==  
  
```  
bool operator==(const path& left, const path& right) noexcept;  
```  
  
 The function returns left.native() == right.native().  
  
## operator!=  
  
```  
bool operator!=(const path& left, const path& right) noexcept;  
```  
  
 The function returns !(left == right).  
  
## operator<  
  
```  
bool operator<(const path& left, const path& right) noexcept;  
```  
  
 The function returns left.native() < right.native().  
  
## operator<=  
  
```  
bool operator<=(const path& left, const path& right) noexcept;  
```  
  
 The function returns !(right \< left).  
  
## operator>  
  
```  
bool operator>(const path& left, const path& right) noexcept;  
```  
  
 The function returns right \< left.  
  
## operator>=  
  
```  
bool operator>=(const path& left, const path& right) noexcept;  
```  
  
 The function returns !(left < right).  
  
## operator/  
  
```  
path operator/(const path& left, const path& right);
```  
  
 The function executes:  
  
```  
basic_string<Elem, Traits> str;  
path ans = left;  
return (ans /= right);
```  
  
## operator<<  
  
```  
template <class Elem, class Traits>  
basic_ostream<Elem, Traits>& operator<<(basic_ostream<Elem, Traits>& os, const path& pval);
```  
  
 The function returns os << pval.string\<Elem, Traits>().  
  
## operator>>  
  
```  
template <class Elem, class Traits>  
basic_istream<Elem, Traits>& operator<<(basic_istream<Elem, Traits>& is, const path& pval);
```  
  
 The function executes:  
  
```  
basic_string<Elem, Traits> str;  
is>> str;  
pval = str;  
return (is);
```  
  
## See Also  
 [path Class (C++ Standard Template Library)](../standard-library/path-class-cpp-standard-template-library.md)   
 [File System Navigation (C++)](../standard-library/file-system-navigation.md)   
 [\<filesystem>](../standard-library/filesystem.md)





