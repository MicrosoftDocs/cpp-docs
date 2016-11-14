---
title: "directory_iterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::experimental::filesystem::directory_iterator"
  - "directory_iterator"
  - "filesystem/std::experimental::filesystem::_Directory_iterator::_Directory_iterator"
  - "filesystem/std::experimental::filesystem::directory_iterator"
  - "FILESYSTEM/std::experimental::filesystem::directory_iterator::directory_iterator"
  - "std::experimental::filesystem::directory_iterator::directory_iterator"
  - "FILESYSTEM/std::experimental::filesystem::directory_iterator::increment"
  - "std::experimental::filesystem::directory_iterator::increment"
  - "FILESYSTEM/std::experimental::filesystem::directory_iterator::operator="
  - "std::experimental::filesystem::directory_iterator::operator="
  - "FILESYSTEM/std::experimental::filesystem::directory_iterator::operator=="
  - "std::experimental::filesystem::directory_iterator::operator=="
  - "FILESYSTEM/std::experimental::filesystem::directory_iterator::operator!="
  - "std::experimental::filesystem::directory_iterator::operator!="
  - "FILESYSTEM/std::experimental::filesystem::directory_iterator::operator*"
  - "std::experimental::filesystem::directory_iterator::operator*"
  - "FILESYSTEM/std::experimental::filesystem::directory_iterator::operator->"
  - "std::experimental::filesystem::directory_iterator::operator->"
  - "FILESYSTEM/std::experimental::filesystem::directory_iterator::operator++"
  - "std::experimental::filesystem::directory_iterator::operator++"
dev_langs: 
  - "C++"
ms.assetid: dca2ecf8-3e69-4644-a83d-705061e10cc8
caps.latest.revision: 19
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
# directory_iterator Class
Describes an input iterator that sequences through the filenames in a directory. For an iterator X, the expression *X evaluates to an object of class directory_entry that wraps the filename and anything known about its status.  
  
 The class stores an object of type path, called mydir here for the purposes of exposition, which represents the name of the directory to be sequenced, and an object of type directory_entry called myentry here, which represents the current filename in the directory sequence. A default constructed object of type directory_entry has an empty mydir pathname and represents the end-of-sequence iterator.  
  
 For example, given the directory abc with entries def and ghi, the code:  
  
 `for (directory_iterator next(path("abc")), end; next != end; ++next)     visit(next->path());`  
  
 will call visit with the arguments path("abc/def") and path("abc/ghi").  
  
 For more information and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).  
  
## Syntax  
  
```  
class directory_iterator;  
```  
  
## directory_iterator::directory_iterator  
  
```  
directory_iterator() noexcept;  
explicit directory_iterator(const path& pval);

directory_iterator(const path& pval, error_code& ec) noexcept;  
directory_iterator(const directory_iterator&) = default;  
directory_iterator(directory_iterator&&) noexcept = default;  
```  
  
 The first constructor produces an end-of-sequence iterator. The second and third constructors store pval in mydir, then attempt to open and read mydir as a directory. If successful, they store the first filename in the directory in myentry; otherwise they produce an end-of-sequence iterator.  
  
 The defaulted construtors behave as expected.  
  
## directory_iterator::increment  
  
```  
directory_iterator& increment(error_code& ec) noexcept;  
```  
  
 The function attempts to advance to the next filename in the directory. If successful, it stores that filename in myentry; otherwise it produces an end-of-sequence iterator.  
  
## directory_iterator::operator!=  
  
```  
bool operator!=(const directory_iterator& right) const;
```  
  
 The member operator returns !(*this == right).  
  
## directory_iterator::operator=  
  
```  
directory_iterator& operator=(const directory_iterator&) = default;  
directory_iterator& operator=(directory_iterator&&) noexcept = default;  
```  
  
 The defaulted member assignment operators behave as expected.  
  
## directory_iterator::operator==  
  
```  
bool operator==(const directory_iterator& right) const;
```  
  
 The member operator returns true only if both *this and right are end-of-sequence iterators or both are not end-of-sequence-iterators.  
  
## directory_iterator::operator*  
  
```  
const directory_entry& operator*() const;
```  
  
 The member operator returns myentry.  
  
## directory_iterator::operator->  
  
```  
const directory_entry * operator->() const;
```  
  
 The member function returns &**this.  
  
## directory_iterator::operator++  
  
```  
directory_iterator& operator++();
directory_iterator& operator++(int);
```  
  
 The first member function calls increment(), then returns *this. The second member function makes a copy of the object, calls increment(), then returns the copy.  
  
## Requirements  
 **Header:** \<experimental/filesystem>  
  
 **Namespace:** std::experimental::filesystem  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<filesystem>](../standard-library/filesystem.md)   
 [File System Navigation (C++)](../standard-library/file-system-navigation.md)

