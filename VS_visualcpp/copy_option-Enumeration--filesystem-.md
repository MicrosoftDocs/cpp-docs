---
title: "copy_option Enumeration &lt;filesystem&gt;"
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
ms.assetid: 351bcdc5-a013-440a-a1d2-d34dfbd92540
caps.latest.revision: 18
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
# copy_option Enumeration &lt;filesystem&gt;
An enumeration of bitmask values that is used with [copy](assetId:///4af7a9b0-8861-45ed-b84e-0307f0669d60) and [copy_file](assetId:///4af7a9b0-8861-45ed-b84e-0307f0669d60) functions to specify behavior.  
  
## Syntax  
  
```  
enum class copy_options {      
    none = 0,  
    skip_existing = 1,  
    overwrite_existing = 2,  
    update_existing = 4,  
    recursive = 8,  
    copy_symlinks = 16,  
    skip_symlinks = 32,  
    directories_only = 64,  
    create_symlinks = 128,  
    create_hard_links = 256  
    };  
```  
  
## Members  
  
### Values  
  
|`Name`|Description|  
|------------|-----------------|  
|`none`|Perform the default behavior for the operation.|  
|`skip_existing`|Do not copy if the file already exists, do not report an error.|  
|`overwrite_existing`|Overwrite the file if it already exists.|  
|`update_existing`|Overwrite the file if it already exists and is older than the replacement.|  
|`recursive`|Recursively copy subdirectories and their contents.|  
|`copy_symlinks`|Copy symbolic links as symbolic links, instead of copying the files they point to.|  
|`skip_symlinks`|Ignore symbolic links.|  
|`directories_only`|Only iterate over directories, ignore files.|  
|`create_symlinks`|Make symbolic links instead of copying files. An absolute path must be used as the source path unless the destination is the current directory.|  
|`create_hard_links`|Make hard links instead of copying files.|  
  
## Requirements  
 **Header:** <experimental/filesystem>  
  
 **Namespace:** std::experimental::filesystem::copy_option  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [<filesystem\>](../VS_visualcpp/-filesystem-.md)