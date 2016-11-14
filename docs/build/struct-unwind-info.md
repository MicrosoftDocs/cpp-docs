---
title: "struct UNWIND_INFO | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: f0aee906-a1b9-44cc-a8ad-463637bd5411
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
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
# struct UNWIND_INFO
The unwind data info structure is used to record the effects a function has on the stack pointer and where the nonvolatile registers are saved on the stack:  
  
|||  
|-|-|  
|UBYTE: 3|Version|  
|UBYTE: 5|Flags|  
|UBYTE|Size of prolog|  
|UBYTE|Count of unwind codes|  
|UBYTE: 4|Frame Register|  
|UBYTE: 4|Frame Register offset (scaled)|  
|USHORT * n|Unwind codes array|  
|variable|Can either be of form (1) or (2) below|  
  
 (1)  Exception Handler  
  
|||  
|-|-|  
|ULONG|Address of exception handler|  
|variable|Language-specific handler data (optional)|  
  
 (2)  Chained Unwind Info  
  
|||  
|-|-|  
|ULONG|Function start address|  
|ULONG|Function end address|  
|ULONG|Unwind info address|  
  
 The UNWIND_INFO structure must be DWORD aligned in memory. The meaning of each field is as follows:  
  
 **Version**  
 Version number of the unwind data, currently 1.  
  
 **Flags**  
 Three flags are currently defined:  
  
 UNW_FLAG_EHANDLER   The function has an exception handler that should be called when looking for functions that need to examine exceptions.  
  
 UNW_FLAG_UHANDLER   The function has a termination handler that should be called when unwinding an exception.  
  
 UNW_FLAG_CHAININFO   This unwind info structure is not the primary one for the procedure. Instead, the chained unwind info entry is the contents of a previous RUNTIME_FUNCTION entry. See the following text for an explanation of chained unwind info structures. If this flag is set, then the UNW_FLAG_EHANDLER and UNW_FLAG_UHANDLER flags must be cleared. Also, the frame register and fixed-stack allocation fields must have the same values as in the primary unwind info.  
  
 **Size of prolog**  
 Length of the function prolog in bytes.  
  
 **Count of unwind codes**  
 This is the number of slots in the unwind codes array. Note that some unwind codes (for example, UWOP_SAVE_NONVOL) require more than one slot in the array.  
  
 **Frame register**  
 If nonzero, then the function uses a frame pointer, and this field is the number of the nonvolatile register used as the frame pointer, using the same encoding for the operation info field of UNWIND_CODE nodes.  
  
 **Frame register offset (scaled)**  
 If the frame register field is nonzero, then this is the scaled offset from RSP that is applied to the FP reg when it is established. The actual FP reg is set to RSP + 16 * this number, allowing offsets from 0 to 240. This permits pointing the FP reg into the middle of the local stack allocation for dynamic stack frames, allowing better code density through shorter instructions (more instructions can use the 8-bit signed offset form).  
  
 **Unwind codes array**  
 This is an array of items that explains the effect of the prolog on the nonvolatile registers and RSP. See the section on UNWIND_CODE for the meanings of individual items. For alignment purposes, this array will always have an even number of entries, with the final entry potentially unused (in which case the array will be one longer than indicated by the count of unwind codes field).  
  
 **Address of exception handler**  
 This is an image-relative pointer to either the function's language-specific exception/termination handler (if flag UNW_FLAG_CHAININFO is clear and one of the flags UNW_FLAG_EHANDLER or UNW_FLAG_UHANDLER is set).  
  
 **Language-specific handler data**  
 This is the function's language-specific exception handler data. The format of this data is unspecified and completely determined by the specific exception handler in use.  
  
 **Chained Unwind Info**  
 If flag UNW_FLAG_CHAININFO is set then the UNWIND_INFO structure ends with three UWORDs.  These UWORDs represent the RUNTIME_FUNCTION information for the function of the chained unwind.  
  
## See Also  
 [Unwind Data for Exception Handling, Debugger Support](../build/unwind-data-for-exception-handling-debugger-support.md)