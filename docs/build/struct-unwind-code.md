---
title: "struct UNWIND_CODE | Microsoft Docs"
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
ms.assetid: 104955d8-7e33-4c5a-b0c6-3254648f0af3
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
# struct UNWIND_CODE
The unwind code array is used to record the sequence of operations in the prolog that affect the nonvolatile registers and RSP. Each code item has the following format:  
  
|||  
|-|-|  
|UBYTE|Offset in prolog|  
|UBYTE: 4|Unwind operation code|  
|UBYTE: 4|Operation info|  
  
 The array is sorted by descending order of offset in the prolog.  
  
 **Offset in prolog**  
 Offset from the beginning of the prolog of the end of the instruction that performs this operation, plus 1 (that is, the offset of the start of the next instruction).  
  
 **Unwind operation code**  
 Note: Certain operation codes require an unsigned offset to a value in the local stack frame. This offset is from the start (lowest address) of the fixed stack allocation. If the Frame Register field in the UNWIND_INFO is zero, this offset is from RSP. If the Frame Register field is nonzero, this is the offset from where RSP was located when the FP reg was established. This equals the FP reg minus the FP reg offset (16 * the scaled frame register offset in the UNWIND_INFO). If an FP reg is used, then any unwind code taking an offset must only be used after the FP reg is established in the prolog.  
  
 For all opcodes except UWOP_SAVE_XMM128 and UWOP_SAVE_XMM128_FAR, the offset will always be a multiple of 8, because all stack values of interest are stored on 8 byte boundaries (the stack itself is always 16-byte aligned). For operation codes that take a short offset (less than 512K), the final USHORT in the nodes for this code holds the offset divided by 8. For operation codes that take a long offset (512K <= offset < 4GB), the final two USHORT nodes for this code hold the offset (in little-endian format).  
  
 For the opcodes UWOP_SAVE_XMM128 and UWOP_SAVE_XMM128_FAR, the offset will always be a multiple of 16, since all 128-bit XMM operations must occur on 16-byte aligned memory. Therefore, a scale factor of 16 is used for UWOP_SAVE_XMM128, permitting offsets of less than 1M.  
  
 The unwind operation code is one of the following:  
  
 UWOP_PUSH_NONVOL (0)1 node  
  
 Push a nonvolatile integer register, decrementing RSP by 8. The operation info is the number of the register. Note that, because of the constraints on epilogs, UWOP_PUSH_NONVOL unwind codes must appear first in the prolog and correspondingly, last in the unwind code array. This relative ordering applies to all other unwind codes except UWOP_PUSH_MACHFRAME.  
  
 UWOP_ALLOC_LARGE (1)2 or 3 nodes  
  
 Allocate a large-sized area on the stack. There are two forms. If the operation info equals 0, then the size of the allocation divided by 8 is recorded in the next slot, allowing an allocation up to 512K – 8. If the operation info equals 1, then the unscaled size of the allocation is recorded in the next two slots in little-endian format, allowing allocations up to 4GB – 8.  
  
 UWOP_ALLOC_SMALL (2)1 node  
  
 Allocate a small-sized area on the stack. The size of the allocation is the operation info field * 8 + 8, allowing allocations from 8 to 128 bytes.  
  
 The unwind code for a stack allocation should always use the shortest possible encoding:  
  
|||  
|-|-|  
|**Allocation Size**|**Unwind Code**|  
|8 to 128 bytes|UWOP_ALLOC_SMALL|  
|136 to 512K-8 bytes|UWOP_ALLOC_LARGE, operation info = 0|  
|512K to 4G–8 bytes|UWOP_ALLOC_LARGE, operation info = 1|  
  
 UWOP_SET_FPREG (3)1 node  
  
 Establish the frame pointer register by setting the register to some offset of the current RSP. The offset is equal to the Frame Register offset (scaled) field in the UNWIND_INFO * 16, allowing offsets from 0 to 240. The use of an offset permits establishing a frame pointer that points to the middle of the fixed stack allocation, helping code density by allowing more accesses to use short instruction forms. Note that the operation info field is reserved and should not be used.  
  
 UWOP_SAVE_NONVOL (4)2 nodes  
  
 Save a nonvolatile integer register on the stack using a MOV instead of a PUSH. This is primarily used for shrink-wrapping, where a nonvolatile register is saved to the stack in a position that was previously allocated. The operation info is the number of the register. The scaled-by-8 stack offset is recorded in the next unwind operation code slot, as described in the note above.  
  
 UWOP_SAVE_NONVOL_FAR (5)3 nodes  
  
 Save a nonvolatile integer register on the stack with a long offset, using a MOV instead of a PUSH. This is primarily used for shrink-wrapping, where a nonvolatile register is saved to the stack in a position that was previously allocated. The operation info is the number of the register. The unscaled stack offset is recorded in the next two unwind operation code slots, as described in the note above.  
  
 UWOP_SAVE_XMM128 (8)2 nodes  
  
 Save all 128 bits of a nonvolatile XMM register on the stack. The operation info is the number of the register. The scaled-by-16 stack offset is recorded in the next slot.  
  
 UWOP_SAVE_XMM128_FAR (9)3 nodes  
  
 Save all 128 bits of a nonvolatile XMM register on the stack with a long offset. The operation info is the number of the register. The unscaled stack offset is recorded in the next two slots.  
  
 UWOP_PUSH_MACHFRAME (10)1 node  
  
 Push a machine frame.  This is used to record the effect of a hardware interrupt or exception. There are two forms. If the operation info equals 0, the following has been pushed on the stack:  
  
|||  
|-|-|  
|RSP+32|SS|  
|RSP+24|Old RSP|  
|RSP+16|EFLAGS|  
|RSP+8|CS|  
|RSP|RIP|  
  
 If the operation info equals 1, then the following has instead been pushed:  
  
|||  
|-|-|  
|RSP+40|SS|  
|RSP+32|Old RSP|  
|RSP+24|EFLAGS|  
|RSP+16|CS|  
|RSP+8|RIP|  
|RSP|Error code|  
  
 This unwind code will always appear in a dummy prolog, which is never actually executed but instead appears before the real entry point of an interrupt routine, and exists only to provide a place to simulate the push of a machine frame. UWOP_PUSH_MACHFRAME records that simulation, which indicates the machine has conceptually done the following:  
  
 Pop RIP return address from top of stack into *Temp*  
  
 Push SS  
  
 Push old RSP  
  
 Push EFLAGS  
  
 Push CS  
  
 Push *Temp*  
  
 Push Error Code (if op info equals 1)  
  
 The simulated UWOP_PUSH_MACHFRAME operation decrements RSP by 40 (op info equals 0) or 48 (op info equals 1).  
  
 **Operation info**  
 The meaning of these 4 bits depends upon the operation code. To encode a general-purpose (integer) register, the following mapping is used:  
  
|||  
|-|-|  
|0|RAX|  
|1|RCX|  
|2|RDX|  
|3|RBX|  
|4|RSP|  
|5|RBP|  
|6|RSI|  
|7|RDI|  
|8 to 15|R8 to R15|  
  
## See Also  
 [Unwind Data for Exception Handling, Debugger Support](../build/unwind-data-for-exception-handling-debugger-support.md)