---
title: "perms Enumeration"
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
ms.assetid: 94d4d669-db45-432d-9576-489a138896ec
caps.latest.revision: 9
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
# perms Enumeration
Flags for file permissions. The supported values are essentially “readonly” and all. For a readonly file, none of the *_write bits are set. Otherwise the `all` bit (0x0777) is set.  
  
## Syntax  
  
```vb  
enum class perms {    // names for permissions    none = 0,    owner_read = 0400,    // S_IRUSR    owner_write = 0200,    // S_IWUSR    owner_exec = 0100,    // S_IXUSR    owner_all = 0700,    // S_IRWXU    group_read = 040,    // S_IRGRP    group_write = 020,    // S_IWGRP    group_exec = 010,    // S_IXGRP    group_all = 070,    // S_IRWXG    others_read = 04,    // S_IROTH    others_write = 02,    // S_IWOTH    others_exec = 01,    // S_IXOTH    others_all = 07,    // S_IRWXO    all = 0777,    set_uid = 04000,    // S_ISUID    set_gid = 02000,    // S_ISGID    sticky_bit = 01000,    // S_ISVTX    mask = 07777,    unknown = 0xFFFF,    add_perms = 0x10000,    remove_perms = 0x20000,    resolve_symlinks = 0x40000    };  
```  
  
## Requirements  
 <filesystem\>  
  
## See Also  
 [File System Navigation (C++)](../VS_visualcpp/File-System-Navigation.md)   
 [<filesystem\>](../VS_visualcpp/-filesystem-.md)