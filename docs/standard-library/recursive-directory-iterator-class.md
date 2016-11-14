---
title: "recursive_directory_iterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::tr2::sys::recursive_directory_iterator"
dev_langs: 
  - "C++"
ms.assetid: 79a061bd-5b64-404c-97e8-749c888c2ced
caps.latest.revision: 15
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
# recursive_directory_iterator Class
describes an input iterator that sequences through the filenames in a directory, possibly descending into subdirectories recursively. For an iterator X, the expression *X evaluates to an object of class directory_entry that wraps the filename and anything known about its status.  
  
 For more information and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).  
  
## Syntax  
  
```  
class recursive_directory_iterator;  
```  
  
## Remarks  
 The template class stores:  
  
1.  an object of type stack<pair\<directory_iterator, path>>, called mystack here for the purposes of exposition, which represents the nest of directories to be sequenced  
  
2.  an object of type directory_entry called myentry here, which represents the current filename in the directory sequence  
  
3.  an object of type bool, called no_push here, which records whether recursive descent into subdirectories is disabled  
  
4.  an object of type directory_options, called myoptions here, which records the options established at construction  
  
 A default constructed object of type recursive_directory_entry has an end-of-sequence iterator at mystack.top().first and represents the end-of-sequence iterator.For example, given the directory abc with entries def (a directory), def/ghi, and jkl, the code:  
  
```  
for (recursive_directory_iterator next(path("abc")), end; next != end; ++next)  
    visit(next->path());
```  
  
 will call visit with the arguments `path("abc/def/ghi") and path("abc/jkl").`You can qualify sequencing through a directory subtree in two ways:  
  
1.  A directory symlink will be scanned only if you construct a recursive_directory_iterator with a directory_options argument whose value is directory_options::follow_directory_symlink.  
  
2.  If you call disable_recursion_pending then a subsequent directory encountered during an increment will not be recursively scanned.  
  
## recursive_directory_iterator::depth  
  
```  
int depth() const;
```  
  
 Returns mystack.size() - 1, so pval is at depth zero.  
  
## recursive_directory_iterator::disable_recursion_pending  
  
```  
void disable_recursion_pending();
```  
  
 The member function stores true in no_push.  
  
## recursive_directory_iterator::operator!=  
  
```  
bool operator!=(const recursive_directory_iterator& right) const;
```  
  
 The member operator returns !(*this == right).  
  
## recursive_directory_iterator::operator=  
  
```  
recursive_directory_iterator& operator=(const recursive_directory_iterator&) = default;  
recursive_directory_iterator& operator=(recursive_directory_iterator&&) noexcept = default;  
```  
  
 The defaulted member assignment operators behave as expected.  
  
## recursive_directory_iterator::operator==  
  
```  
bool operator==(const recursive_directory_iterator& right) const;
```  
  
 The member operator returns true only if both *this and right are end-of-sequence iterators or both are not end-of-sequence-iterators.  
  
## recursive_directory_iterator::operator*  
  
```  
const directory_entry& operator*() const;
```  
  
 The member operator returns myentry.  
  
## recursive_directory_iterator::operator->  
  
```  
const directory_entry * operator->() const;
```  
  
 Returns &**this.  
  
## recursive_directory_iterator::operator++  
  
```  
recursive_directory_iterator& operator++();

recursive_directory_iterator& operator++(int);
```  
  
 The first member function calls increment(), then returns *this. The second member function makes a copy of the object, calls increment(), then returns the copy.  
  
## recursive_directory_iterator::options  
  
```  
directory_options options() const;
```  
  
 Returns myoptions.  
  
## recursive_directory_iterator::pop  
  
```  
void pop();
```  
  
 If depth() == 0 the object becomes an end-of-sequence iterator. Otherwise, the member function terminates scanning of the current (deepest) directory and resumes at the next lower depth.  
  
## recursive_directory_iterator::recursion_pending  
  
```  
bool recursion_pending() const;
```  
  
 Returns !no_push.  
  
## recursive_directory_iterator::recursive_directory_iterator  
  
```  
recursive_directory_iterator() noexcept;  
explicit recursive_directory_iterator(const path& pval);

recursive_directory_iterator(const path& pval,  
    error_code& ec) noexcept;  
recursive_directory_iterator(const path& pval,  
    directory_options opts);

recursive_directory_iterator(const path& pval,  
    directory_options opts,  
    error_code& ec) noexcept;  
recursive_directory_iterator(const recursive_directory_iterator&) = default;  
recursive_directory_iterator(recursive_directory_iterator&&) noexcept = default;  
```  
  
 The first constructor produces an end-of-sequence iterator. The second and third constructors store false in no_push and directory_options::none in myoptions, then attempt to open and read pval as a directory. If successful, they initialize mystack and myentry to designate the first non-directory filename in the nested sequence; otherwise they produce an end-of-sequence iterator.  
  
 The fourth and fifth constructors behave the same as the second and third, except that they first store opts in myoptions. The defaulted construtors behave as expected.  
  
## recursive_directory_iterator::increment  
  
```  
recursive_directory_iterator& increment(error_code& ec) noexcept;  
```  
  
 The function attempts to advance to the next filename in the nested sequence. If successful, it stores that filename in myentry; otherwise it produces an end-of-sequence iterator.  
  
## Requirements  
 **Header:** filesystem  
  
 **Namespace:** std::tr2::sys  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<filesystem>](../standard-library/filesystem.md)   
 [File System Navigation (C++)](../standard-library/file-system-navigation.md)

