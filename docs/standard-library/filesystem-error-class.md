---
title: "filesystem_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::experimental::filesystem::filesystem_error"
dev_langs: 
  - "C++"
ms.assetid: c53aac27-c1fa-43e4-8967-48ea8ba1f172
caps.latest.revision: 13
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
# filesystem_error Class
A base class for all exceptions that are thrown to report a low-level system overflow.  
  
## Syntax  
  
```  
class filesystem_error    : public system_error;  
```  
  
## Remarks  
 The class serves as the base class for all exceptions thrown to report an error in \<filesystem> functions. It stores an object of type string, called mymesg here for the purposes of exposition. It also stores two objects of type path, called mypval1 and mypval2.  
  
## filesystem_error::filesystem_error  
  
```  
filesystem_error(const string& what_arg,
    error_code ec);

filesystem_error(const string& what_arg,  
    const path& pval1,
    error_code ec);

filesystem_error(const string& what_arg,  
    const path& pval1,
    const path& pval2,
    error_code ec);
```  
  
 The first constructor constructs its message from what_arg and ec. The second constructor also constructs its message from pval1, which it stores in mypval1. The third constructor also constructs its message from pval1, which it stores in mypval1, and from pval2, which it stores in mypval2.  
  
## filesystem_error::path1  
  
```  
const path& path1() const noexcept;  
```  
  
 The member function returns mypval1  
  
## filesystem_error::path2  
  
```  
const path& path2() const noexcept;  
```  
  
 The member function returns mypval2  
  
## filesystem_error::what  
  
```  
const char *what() const noexcept;  
```  
  
 The member function returns a pointer to an NTBS, preferably composed from runtime_error::what(), system_error::what(), mymesg, mypval1.native_string(), and mypval2.native_string().  
  
## Requirements  
 **Header:** filesystem  
  
 **Namespace:** std::experimental::filesystem  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [system_error Class](../standard-library/system-error-class.md)   
 [\<filesystem>](../standard-library/filesystem.md)   
 [\<exception>](../standard-library/exception.md)

