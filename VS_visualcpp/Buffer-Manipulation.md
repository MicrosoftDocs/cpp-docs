---
title: "Buffer Manipulation"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 164f4860-ce66-412c-8291-396fbd70f03e
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
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
# Buffer Manipulation
Use these routines to work with areas of memory on a byte-by-byte basis.  
  
### Buffer-Manipulation Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[_memccpy](../VS_visualcpp/_memccpy.md)|Copy characters from one buffer to another until given character or given number of characters has been copied|[System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx), [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)|  
|[memchr, wmemchr](../VS_visualcpp/memchr--wmemchr.md)|Return pointer to first occurrence, within specified number of characters, of given character in buffer|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[memcmp, wmemcmp](../VS_visualcpp/memcmp--wmemcmp.md)|Compare specified number of characters from two buffers|[System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx), [System::String::Equals](https://msdn.microsoft.com/en-us/library/system.string.equals.aspx)|  
|[memcpy, wmemcpy](../VS_visualcpp/memcpy--wmemcpy.md), [memcpy_s, wmemcpy_s](../VS_visualcpp/memcpy_s--wmemcpy_s.md)|Copy specified number of characters from one buffer to another|[System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx), [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)|  
|[_memicmp, _memicmp_l](../VS_visualcpp/_memicmp--_memicmp_l.md)|Compare specified number of characters from two buffers without regard to case|[System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx), [System::String::Equals](https://msdn.microsoft.com/en-us/library/system.string.equals.aspx)|  
|[memmove, wmemmove](../VS_visualcpp/memmove--wmemmove.md),[memmove_s, wmemmove_s](../VS_visualcpp/memmove_s--wmemmove_s.md)|Copy specified number of characters from one buffer to another|[System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx)|  
|[memset, wmemset](../VS_visualcpp/memset--wmemset.md)|Use given character to initialize specified number of bytes in the buffer|[System::Buffer::SetByte](https://msdn.microsoft.com/en-us/library/system.buffer.setbyte.aspx)|  
|[_swab](../VS_visualcpp/_swab.md)|Swap bytes of data and store them at specified location|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
 When the source and target areas overlap, only `memmove` is guaranteed to copy the full source properly.  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)