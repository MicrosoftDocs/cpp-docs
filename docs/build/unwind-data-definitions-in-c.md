---
title: "Unwind Data Definitions in C | Microsoft Docs"
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
ms.assetid: 93cb6430-e4cf-43f5-ab60-3b57d1273b2c
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
# Unwind Data Definitions in C
The following is a C description of the unwind data:  
  
```  
typedef enum _UNWIND_OP_CODES {  
    UWOP_PUSH_NONVOL = 0, /* info == register number */  
    UWOP_ALLOC_LARGE,     /* no info, alloc size in next 2 slots */  
    UWOP_ALLOC_SMALL,     /* info == size of allocation / 8 - 1 */  
    UWOP_SET_FPREG,       /* no info, FP = RSP + UNWIND_INFO.FPRegOffset*16 */  
    UWOP_SAVE_NONVOL,     /* info == register number, offset in next slot */  
    UWOP_SAVE_NONVOL_FAR, /* info == register number, offset in next 2 slots */  
    UWOP_SAVE_XMM128,     /* info == XMM reg number, offset in next slot */  
    UWOP_SAVE_XMM128_FAR, /* info == XMM reg number, offset in next 2 slots */  
    UWOP_PUSH_MACHFRAME   /* info == 0: no error-code, 1: error-code */  
} UNWIND_CODE_OPS;  
  
typedef union _UNWIND_CODE {  
    struct {  
        UBYTE CodeOffset;  
        UBYTE UnwindOp : 4;  
        UBYTE OpInfo   : 4;  
    };  
    USHORT FrameOffset;  
} UNWIND_CODE, *PUNWIND_CODE;  
  
#define UNW_FLAG_EHANDLER  0x01  
#define UNW_FLAG_UHANDLER  0x02  
#define UNW_FLAG_CHAININFO 0x04  
  
typedef struct _UNWIND_INFO {  
    UBYTE Version       : 3;  
    UBYTE Flags         : 5;  
    UBYTE SizeOfProlog;  
    UBYTE CountOfCodes;  
    UBYTE FrameRegister : 4;  
    UBYTE FrameOffset   : 4;  
    UNWIND_CODE UnwindCode[1];  
/*  UNWIND_CODE MoreUnwindCode[((CountOfCodes + 1) & ~1) - 1];  
*   union {  
*       OPTIONAL ULONG ExceptionHandler;  
*       OPTIONAL ULONG FunctionEntry;  
*   };  
*   OPTIONAL ULONG ExceptionData[]; */  
} UNWIND_INFO, *PUNWIND_INFO;  
  
typedef struct _RUNTIME_FUNCTION {  
    ULONG BeginAddress;  
    ULONG EndAddress;  
    ULONG UnwindData;  
} RUNTIME_FUNCTION, *PRUNTIME_FUNCTION;  
  
#define GetUnwindCodeEntry(info, index) \  
    ((info)->UnwindCode[index])  
  
#define GetLanguageSpecificDataPtr(info) \  
    ((PVOID)&GetUnwindCodeEntry((info),((info)->CountOfCodes + 1) & ~1))  
  
#define GetExceptionHandler(base, info) \  
    ((PEXCEPTION_HANDLER)((base) + *(PULONG)GetLanguageSpecificDataPtr(info)))  
  
#define GetChainedFunctionEntry(base, info) \  
    ((PRUNTIME_FUNCTION)((base) + *(PULONG)GetLanguageSpecificDataPtr(info)))  
  
#define GetExceptionDataPtr(info) \  
    ((PVOID)((PULONG)GetLanguageSpecificData(info) + 1)  
```  
  
## See Also  
 [Exception Handling (x64)](../build/exception-handling-x64.md)