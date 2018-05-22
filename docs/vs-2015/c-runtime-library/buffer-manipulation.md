---
title: "Buffer Manipulation | Microsoft Docs"
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
  - "c.memory"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "buffers, manipulation routines"
  - "buffers"
ms.assetid: 164f4860-ce66-412c-8291-396fbd70f03e
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Buffer Manipulation
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Buffer Manipulation](https://docs.microsoft.com/cpp/c-runtime-library/buffer-manipulation).  
  
Use these routines to work with areas of memory on a byte-by-byte basis.  
  
### Buffer-Manipulation Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[_memccpy](../c-runtime-library/reference/memccpy.md)|Copy characters from one buffer to another until given character or given number of characters has been copied|[System::Buffer::BlockCopy](https://msdn.microsoft.com/library/system.buffer.blockcopy.aspx), [System::String::Copy](https://msdn.microsoft.com/library/system.string.copy.aspx)|  
|[memchr, wmemchr](../c-runtime-library/reference/memchr-wmemchr.md)|Return pointer to first occurrence, within specified number of characters, of given character in buffer|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[memcmp, wmemcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|Compare specified number of characters from two buffers|[System::String::Compare](https://msdn.microsoft.com/library/system.string.compare.aspx), [System::String::Equals](https://msdn.microsoft.com/library/system.string.equals.aspx)|  
|[memcpy, wmemcpy](../c-runtime-library/reference/memcpy-wmemcpy.md), [memcpy_s, wmemcpy_s](../c-runtime-library/reference/memcpy-s-wmemcpy-s.md)|Copy specified number of characters from one buffer to another|[System::Buffer::BlockCopy](https://msdn.microsoft.com/library/system.buffer.blockcopy.aspx), [System::String::Copy](https://msdn.microsoft.com/library/system.string.copy.aspx)|  
|[_memicmp, _memicmp_l](../c-runtime-library/reference/memicmp-memicmp-l.md)|Compare specified number of characters from two buffers without regard to case|[System::String::Compare](https://msdn.microsoft.com/library/system.string.compare.aspx), [System::String::Equals](https://msdn.microsoft.com/library/system.string.equals.aspx)|  
|[memmove, wmemmove](../c-runtime-library/reference/memmove-wmemmove.md),[memmove_s, wmemmove_s](../c-runtime-library/reference/memmove-s-wmemmove-s.md)|Copy specified number of characters from one buffer to another|[System::Buffer::BlockCopy](https://msdn.microsoft.com/library/system.buffer.blockcopy.aspx)|  
|[memset, wmemset](../c-runtime-library/reference/memset-wmemset.md)|Use given character to initialize specified number of bytes in the buffer|[System::Buffer::SetByte](https://msdn.microsoft.com/library/system.buffer.setbyte.aspx)|  
|[_swab](../c-runtime-library/reference/swab.md)|Swap bytes of data and store them at specified location|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
  
 When the source and target areas overlap, only `memmove` is guaranteed to copy the full source properly.  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)





