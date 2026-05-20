---
title: x64 Unwind Information V3
description: Exception Handling Unwind Information V3 - Preview Specification
ms.date: 05/18/2026
author: pmsjt
ms.author: pedrot
ms.reviewer: pedrot
---

# Exception Handling Unwind Information V3

## Scope

Unwind Information V3 adds support for the Intel APX (Advanced Performance Extensions). It also brings additional flexibility to the code generation allowed in both function prologues and epilogues, enabling compilers to better optimize functions as a whole.

Unwind V3 is required for code supporting APX. Non-APX enabled code should still use the [conventional (pre-V3) Unwind Information](../build/exception-handling-x64.md).

> [!WARNING]
> Unwind Information V3 is a preview specification. There's still a risk of breaking changes or omissions. Code produced under this guidance should itself be considered preview code.

## Terminology

| Term | Definition |
|------|------------|
| **Fragment** | A contiguous region of machine code described by a single `RUNTIME_FUNCTION` / `UNWIND_INFO_V3` pair. A function might consist of a *main fragment* and zero or more *subfragments* chained together. For more information, see [Chained unwind info structures](../build/exception-handling-x64.md#chained-unwind-info-structures). |
| **WOD** | The Winding Operation Descriptor is a variable-length packed encoding of a single unwind operation (push, alloc, save, and so on). |
| **WOD pool** | The byte array within the payload that stores all WODs for a fragment's prolog and epilog(s). |
| **IP Offset** | The unsigned byte offset of an instruction relative to the start of the prolog or epilog. |
| **Payload** | The variable-length region immediately after the 4-byte `UNWIND_INFO_V3` header, sized by `PayloadWords` 16-bit words. Contains the large prolog extension, prolog IP offsets, epilog descriptors (with their IP offsets), and the WOD pool. |
| **RVA** | Relative Virtual Address is the offset from the base address of the image at load time. |

## Overall Object-File Layout

Unwind V3 reuses the existing PE/COFF `.pdata` and `.xdata` section conventions unchanged:

```
.pdata   - sorted array of IMAGE_AMD64_RUNTIME_FUNCTION_ENTRY (12 bytes each)
.xdata   - UNWIND_INFO_V3 structures referenced by .pdata entries
```

Each `RUNTIME_FUNCTION` entry is:

| Offset | Size | Field |
|--------|------|-------|
| 0 | 4 | `BeginAddress` - RVA of fragment start |
| 4 | 4 | `EndAddress` - RVA of first byte past fragment end |
| 8 | 4 | `UnwindInfoAddress` - RVA of `UNWIND_INFO_V3` in `.xdata` |

No changes from V1 or V2.

## `UNWIND_INFO_V3` Header

All multi-byte fields are little-endian. Bit 0 is the LSB of each byte.

| Byte | Bits | Field | Width |
|------|------|-------|-------|
| 0 | [2:0] | `Version` (= 3) | 3 bits |
| 0 | [7:3] | `Flags` | 5 bits |
| 1 | [7:0] | `SizeOfProlog` | 8 bits |
| 2 | [7:0] | `PayloadWords` | 8 bits |
| 3 | [4:0] | `NumberOfOps` | 5 bits |
| 3 | [7:5] | `NumberOfEpilogs` | 3 bits |

### Field Semantics

| Field | Description |
|-------|-------------|
| `Version` | Must be `3`. |
| `Flags` | Same flag definitions as V1 or V2: `UNW_FLAG_EHANDLER` (0x01), `UNW_FLAG_UHANDLER` (0x02), `UNW_FLAG_CHAININFO` (0x04). New in V3: `UNW_FLAG_LARGE` (0x08). Bit 4 reserved (zero). |
| `SizeOfProlog` | Byte offset to the start of the first instruction that isn't part of the prolog. When `UNW_FLAG_LARGE` is set, this 8-bit field is the low byte of a 16-bit prolog size. For more information on the 16-bit form, see [`UNW_FLAG_LARGE` and `UNWIND_INFO_LARGE_V3`](#unw_flag_large-and-unwind_info_large_v3). |
| `PayloadWords` | Number of 16-bit words of payload following this header. The payload contains prolog IP offsets, all epilog descriptors (including their IP offsets), and the WOD pool. Doesn't include the exception-handler RVA or chained `RUNTIME_FUNCTION` that might follow. The algorithm to locate the handler/chain data is the same as V1 or V2: `header + 4 + PayloadWords * 2`, DWORD-aligned. |
| `NumberOfOps` | Count of WODs in the prolog (0–31). Zero means no prolog. If a function needs more than 31 prolog operations, use a subfragment. |
| `NumberOfEpilogs` | Count of `EPILOG_INFO_V3` descriptors that follow the prolog IP offsets (0–7). Zero means no epilogs in this fragment. If more than 7 are needed, use a subfragment. |

### `UNW_FLAG_LARGE` and `UNWIND_INFO_LARGE_V3`

When `UNW_FLAG_LARGE` is set in the header `Flags`, the first byte of the payload is a 1-byte `UNWIND_INFO_LARGE_V3` extension:

| Byte | Bits | Field | Width |
|------|------|-------|-------|
| 0 | [7:0] | `SizeOfPrologHighByte` | 8 bits |

`SizeOfPrologHighByte` is combined with `UNWIND_INFO_V3.SizeOfProlog` to form a 16-bit prolog size: `SizeOfProlog16 = (SizeOfPrologHighByte << 8) | SizeOfProlog`.

Additionally, when `UNW_FLAG_LARGE` is set:

- Prolog IP offset entries are 16-bit unsigned (2 bytes each) instead of 8-bit.

The `UNWIND_INFO_LARGE_V3` byte is part of the payload and is included in `PayloadWords`. The handler-offset formula remains unchanged.

This flag is only necessary for prologs exceeding 255 bytes.

### Locating Exception Handler / Chain Info

Identical to V1 or V2:

```
handler_offset = ALIGN_UP(sizeof(UNWIND_INFO_V3) + PayloadWords * 2, 4)
```

If `UNW_FLAG_EHANDLER` or `UNW_FLAG_UHANDLER` is set, a 4-byte handler RVA is at `handler_offset`, followed by language-specific handler data.

If `UNW_FLAG_CHAININFO` is set, a 12-byte `RUNTIME_FUNCTION` is at `handler_offset`.

## Payload Layout

Immediately after the 4-byte header, the payload is arranged in the following order (all packed, `#pragma pack(1)` semantics):

1. `UNWIND_INFO_LARGE_V3` - 1 byte, present only if `UNW_FLAG_LARGE` is set.
1. Prolog IP Offsets - `NumberOfOps` bytes (or 16-bit words if `UNW_FLAG_LARGE`).
1. For each epilog (repeated `NumberOfEpilogs` times):
   - `EPILOG_INFO_V3` descriptor.
   - `EPILOG_INFO_EX_V3` or `EPILOG_INFO_LARGE_EX_V3` extended descriptor (present only when `NumberOfOps > 0`).
   - IP Offset array - `NumberOfOps` bytes (or 16-bit words if `EPILOG_INFO_LARGE`).
1. WOD Pool - remaining bytes.

Total size = `PayloadWords` × 2 bytes (may include padding to fill words).

### Prolog IP Offsets

An array of `NumberOfOps` entries. Each entry is an unsigned byte giving the IP offset from the start of the fragment of the instruction that performs the corresponding unwind operation. When `UNW_FLAG_LARGE` is set, each entry is an unsigned 16-bit word instead.

**Ordering:** The first entry corresponds to the operation closest to the function body (the *last* prolog instruction with an unwind effect). The last entry corresponds to the operation closest to the function entry point (the *first* prolog instruction). This matches the V1 or V2 convention of listing unwind codes in reverse execution order. The prolog WODs always start at byte offset zero of the WOD pool, and this same ordering applies.

### Epilog Descriptors

Zero or more `EPILOG_INFO_V3` structures follow the prolog IP offsets. Each can have an optional `EPILOG_INFO_EX_V3` (or `EPILOG_INFO_LARGE_EX_V3` when the `EPILOG_INFO_LARGE` flag is set) plus its own variable-size IP offset array, of size `NumberOfOps`:

#### When `NumberOfOps > 0` (full descriptor)

**Standard form** (`EPILOG_INFO_LARGE` not set):

`EPILOG_INFO_V3`:

| Byte | Bits | Field | Width |
|------|------|-------|-------|
| 0 | [2:0] | `Flags` | 3 bits |
| 0 | [7:3] | `NumberOfOps` | 5 bits |
| 1–2 | [15:0] | `EpilogOffset` | 16-bit signed |

`EPILOG_INFO_EX_V3`:

| Byte | Bits | Field | Width |
|------|------|-------|-------|
| 0–1 | [15:0] | `FirstOp` | 16-bit unsigned |
| 2 | [7:0] | `IpOffsetOfLastInstruction` | 8 bits unsigned |
| 3 .. | - | IP Offset array | `NumberOfOps` bytes, unsigned |

**Large form** (`EPILOG_INFO_LARGE` set):

`EPILOG_INFO_V3`:

| Byte | Bits | Field | Width |
|------|------|-------|-------|
| 0 | [2:0] | `Flags` | 3 bits |
| 0 | [7:3] | `NumberOfOps` | 5 bits |
| 1–2 | [15:0] | `EpilogOffset` | 16-bit signed |

`EPILOG_INFO_LARGE_EX_V3`:

| Byte | Bits | Field | Width |
|------|------|-------|-------|
| 0–1 | [15:0] | `FirstOp` | 16-bit unsigned |
| 2–3 | [15:0] | `IpOffsetOfLastInstruction` | 16 bits unsigned |
| 4 .. | - | IP Offset array | `NumberOfOps` × 2 bytes, unsigned 16-bit |

#### When `NumberOfOps == 0` (inherited descriptor)

`EPILOG_INFO_V3`:

| Byte | Bits | Field | Width |
|------|------|-------|-------|
| 0 | [2:0] | `Flags` | 3 bits |
| 0 | [7:3] | `NumberOfOps` (= 0) | 5 bits |
| 1–2 | [15:0] | `EpilogOffset` | 16-bit signed |

The `Flags` bits 0 and 1, `FirstOp`, `IpOffsetOfLastInstruction`, and IP offset array are inherited from the immediately preceding `EPILOG_INFO_V3`.

#### Epilog Field Semantics

| Field | Description |
|-------|-------------|
| `Flags` | Bit 0: `EPILOG_INFO_PARENT_FRAGMENT_TRANSFER` - set if this epilog transfers control back to the parent fragment (for example, via JMP) rather than returning to the caller. Bit 1: `EPILOG_INFO_LARGE` - when set, the extended descriptor uses `EPILOG_INFO_LARGE_EX_V3` (16-bit `IpOffsetOfLastInstruction`) and each IP offset entry is 16-bit, accommodating epilogs exceeding 255 bytes. Bit 2: reserved (zero). |
| `NumberOfOps` | Number of WODs for this epilog (0–31). Zero is a special value meaning "inherit from previous epilog descriptor." |
| `EpilogOffset` | 16-bit signed displacement to the first instruction of this epilog. For the first epilog descriptor: positive values are byte offsets from the fragment start, and negative values are byte offsets from the fragment tail, that is, the first byte past the end. For subsequent epilog descriptors: delta from the start of the previous epilog. All epilogs must use the same sign - either all sorted ascending from start, or all sorted descending from tail. |
| `FirstOp` | Byte index into the WOD pool where the first WOD for this epilog resides. This is a byte offset, not a WOD index. Epilogs may share WODs with the prolog or with each other by pointing into the same pool region. |
| `IpOffsetOfLastInstruction` | Unsigned byte offset from the epilog start of the last instruction in the epilog, typically RET, or JMP. 8-bit in `EPILOG_INFO_EX_V3`; 16-bit in `EPILOG_INFO_LARGE_EX_V3`. The unwinder uses this value to determine where the epilog ends and the function body resumes. |

#### Epilog IP Offsets

Immediately after each full epilog descriptor (when `NumberOfOps > 0`), an array of `NumberOfOps` entries gives the IP offset of each epilog instruction that has a corresponding WOD. Each entry is an unsigned byte, or an unsigned 16-bit word when `EPILOG_INFO_LARGE` is set. Ordering: first entry = operation closest to the body (first epilog instruction with an unwind effect), last entry = operation closest to the control-transfer instruction.

### WOD Pool

The remaining bytes in the payload form the WOD pool. The prolog's WODs implicitly start at byte offset 0 of this pool. Each epilog's WOD list start at the byte offset given by its `FirstOp` field. WODs are packed with no alignment or padding between them.

The number of WODs consumed for the prolog is `UNWIND_INFO_V3.NumberOfOps`. The number consumed for each epilog is its respective `EPILOG_INFO_V3.NumberOfOps` (or inherited).

## WOD Encoding Reference

WODs are variable-length (1–5 bytes), packed with `#pragma pack(1)`. The opcode is encoded in the **low-order bits** of the first byte. Decoding requires multi-level bit inspection.

### Opcode Dispatch Table

To decode a WOD, read the first byte and test its low bits in the following order:

| Test | Opcode Value | WOD Type | Size |
|------|--------------|----------|------|
| `byte[0] == 0x00` | 0 | `WOD_SET_FPREG` | 2 bytes |
| `byte[0] == 0x01` | 1 | `WOD_ALLOC_HUGE` | 5 bytes |
| `byte[0] == 0x02` | 2 | `WOD_ALLOC_LARGE` | 3 bytes |
| `byte[0] == 0x03` | 3 | `WOD_PUSH_CANONICAL_FRAME` | 2 bytes |
| `(byte[0] & 0x07) == 0x04` | 4 | `WOD_PUSH` | 1 byte |
| `(byte[0] & 0x07) == 0x05` | 5 | `WOD_SAVE_NONVOL_FAR` | 5 bytes |
| `(byte[0] & 0x07) == 0x06` | 6 | `WOD_SAVE_NONVOL` | 3 bytes |
| `(byte[0] & 0x07) == 0x07` | 7 | `WOD_PUSH_CONSECUTIVE_2` | 1 byte |
| `(byte[0] & 0x0F) == 0x08` | 8 | `WOD_ALLOC_SMALL` | 1 byte |
| `(byte[0] & 0x0F) == 0x09` | 9 | `WOD_SAVE_XMM128_FAR` | 5 bytes |
| `(byte[0] & 0x0F) == 0x0A` | 10 | `WOD_SAVE_XMM128` | 3 bytes |
| `(byte[0] & 0x3F) == 0x20` | 32 | `WOD_PUSH2` | 2 bytes |

** WOD decoding algorithm (pseudocode):**

```c
uint8_t b0 = pool[offset];
uint8_t op3 = b0 & 0x07;

switch (op3)
{
case 4: return WOD_PUSH;           // 3-bit opcode = 100b
case 5: return WOD_SAVE_NONVOL_FAR;// 3-bit opcode = 101b
case 6: return WOD_SAVE_NONVOL;    // 3-bit opcode = 110b
case 7: return WOD_PUSH_CONSECUTIVE_2; // 3-bit opcode = 111b
default: break; // bits[2:0] are 0b000, 0b001, 0b010, or 0b011
}

uint8_t op4 = b0 & 0x0F;
switch (op4)
{
case 0x08: return WOD_ALLOC_SMALL;
case 0x09: return WOD_SAVE_XMM128_FAR;
case 0x0A: return WOD_SAVE_XMM128;
default: break;
}

uint8_t op6 = b0 & 0x3F;
if (op6 == 0x20) return WOD_PUSH2;

// 8-bit opcode (full byte match)
switch (b0)
{
case 0x00: return WOD_SET_FPREG;
case 0x01: return WOD_ALLOC_HUGE;
case 0x02: return WOD_ALLOC_LARGE;
case 0x03: return WOD_PUSH_CANONICAL_FRAME;
default:   return INVALID;
}
```

### WOD layouts (Bit-Level)

All bit positions are numbered LSB-first within each byte. Multi-byte integer fields are little-endian.

#### `WOD_PUSH` - 1 byte

```
Byte 0: [2:0] = 100b (opcode 4)
        [7:3] = Register (5 bits, AMD64 integer register number)
```

**Effect:** `PUSH <reg>` adjusts RSP by 8 and stores register.

#### `WOD_PUSH2` - 2 bytes

```
Byte 0: [5:0] = 100000b (opcode 32)
        [7:6] = Register1[1:0] (low 2 bits)
Byte 1: [2:0] = Register1[4:2] (high 3 bits)
        [7:3] = Register2 (5 bits)
```

**Effect:** `PUSH2 <reg1>, <reg2>` pushes two registers with a single instruction (APX). Adjusts RSP by 16.

#### `WOD_PUSH_CONSECUTIVE_2` - 1 byte

```
Byte 0: [2:0] = 111b (opcode 7)
        [7:3] = Register (5 bits)
```

**Effect:** Pushes `Register` and `Register+1` consecutively. Adjusts `RSP` by 16 total. `Register` value must be limited to [0, 30], as value of 31 would place `Register+1` out of bounds.

#### `WOD_ALLOC_SMALL` - 1 byte

```
Byte 0: [3:0] = 1000b (opcode 8)
        [7:4] = Size (4 bits)
```

**Actual allocation:** `(Size + 1) * 8` bytes. Range: 8–128 bytes in steps
of 8.

#### `WOD_ALLOC_LARGE` - 3 bytes

```
Byte 0: [7:0] = 0x02 (opcode 2)
Bytes 1–2: Size (16-bit unsigned, little-endian)
```

**Actual allocation:** `Size * 8` bytes. Range: up to 524,280 bytes.

#### `WOD_ALLOC_HUGE` - 5 bytes

```
Byte 0: [7:0] = 0x01 (opcode 1)
Bytes 1–4: Size (32-bit unsigned, little-endian)
```

**Actual allocation:** Raw byte count (no scaling). Range: up to 4 GiB.

#### `WOD_SET_FPREG` - 2 bytes

```
Byte 0: [7:0] = 0x00 (opcode 0)
Byte 1: [3:0] = Register (4 bits, 0–15)
        [7:4] = Offset (4 bits)
```

**Effect:** Establishes a frame pointer. `<reg> = RSP + Offset * 16`.

#### `WOD_SAVE_NONVOL` - 3 bytes

```
Byte 0: [2:0] = 110b (opcode 6)
        [7:3] = Register (5 bits)
Bytes 1–2: Displacement (16-bit unsigned, little-endian)
```

**Effect:** `MOV [RSP + Displacement * 8], <reg>` saves a nonvolatile
integer register to the stack.

#### `WOD_SAVE_NONVOL_FAR` - 5 bytes

```
Byte 0: [2:0] = 101b (opcode 5)
        [7:3] = Register (5 bits)
Bytes 1–4: Displacement (32-bit unsigned, little-endian)
```

**Effect:** Same as `WOD_SAVE_NONVOL` but with a 32-bit unscaled byte displacement. Used when the offset doesn't fit in 16 bits scaled by 8.

#### `WOD_SAVE_XMM128` - 3 bytes

```
Byte 0: [3:0] = 1010b (opcode 10)
        [7:4] = Register (4 bits, XMM0–XMM15)
Bytes 1–2: Displacement (16-bit unsigned, little-endian)
```

**Effect:** `MOVAPS [RSP + Displacement * 16], <xmm>` saves a 128-bit
XMM register.

#### `WOD_SAVE_XMM128_FAR` - 5 bytes

```
Byte 0: [3:0] = 1001b (opcode 9)
        [7:4] = Register (4 bits, XMM0–XMM15)
Bytes 1–4: Displacement (32-bit unsigned, little-endian)
```

**Effect:** Same as `WOD_SAVE_XMM128` but with a 32-bit unscaled byte displacement.

#### `WOD_PUSH_CANONICAL_FRAME` - 2 bytes

```
Byte 0: [7:0] = 0x03 (opcode 3)
Byte 1: [7:0] = Type (8 bits)
```

**Effect:** Indicates the hardware/OS pushed a canonical frame onto the stack. Type values distinguish:
- Machine frame without error code
- Machine frame with error code
- Machine frame with shadow-stack push
- Context record

(Exact type values are defined by the OS; consult the Windows SDK headers.)

### Opcode Constant Summary

```c
#define WOD_OP_SET_FPREG              0   // 8-bit opcode, 2 bytes
#define WOD_OP_ALLOC_HUGE             1   // 8-bit opcode, 5 bytes
#define WOD_OP_ALLOC_LARGE            2   // 8-bit opcode, 3 bytes
#define WOD_OP_PUSH_CANONICAL_FRAME   3   // 8-bit opcode, 2 bytes
#define WOD_OP_PUSH                   4   // 3-bit opcode, 1 byte
#define WOD_OP_SAVE_NONVOL_FAR        5   // 3-bit opcode, 5 bytes
#define WOD_OP_SAVE_NONVOL            6   // 3-bit opcode, 3 bytes
#define WOD_OP_PUSH_CONSECUTIVE_2     7   // 3-bit opcode, 1 byte
#define WOD_OP_ALLOC_SMALL            8   // 4-bit opcode, 1 byte
#define WOD_OP_SAVE_XMM128_FAR        9   // 4-bit opcode, 5 bytes
#define WOD_OP_SAVE_XMM128           10   // 4-bit opcode, 3 bytes
#define WOD_OP_PUSH2                 32   // 6-bit opcode, 2 bytes
```

### Register Encoding

Integer registers use the standard AMD64 numbering (5 bits, 0–31):

| Value | Register |
|-------|----------|
| 0 | RAX |
| 1 | RCX |
| 2 | RDX |
| 3 | RBX |
| 4 | RSP |
| 5 | RBP |
| 6 | RSI |
| 7 | RDI |
| 8 - 15 | R8 - R15
| 16 - 31 | R16 - R31 (APX) |

XMM register fields are 4 bits (0–15), mapping directly to XMM0–XMM15.
