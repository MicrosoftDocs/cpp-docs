---
title: "MASM Operators reference"
ms.date: 07/15/2020
helpviewer_keywords: ["MASM (Microsoft Macro Assembler), operators reference", "operators [MASM]"]
ms.assetid: c069cab7-d6b0-4f82-a6ce-0ca3fc7e6428
---
# MASM Operators reference

## Arithmetic

:::row:::
   :::column span="":::
      [`*` (multiply)](operator-multiply.md)<br/>[`+` (add)](operator-add.md)<br/>[`-` (subtract or negate)](operator-subtract-2.md)
   :::column-end:::
   :::column span="":::
      [`.` (field)](operator-dot.md)<br/>[`/` (divide)](operator-subtract-1.md)
   :::column-end:::
   :::column span="":::
      [`[]` (index)](operator-brackets.md)<br/>[`MOD` (remainder)](operator-mod.md)
   :::column-end:::
:::row-end:::

## Control Flow

:::row:::
   :::column span="":::
      [`!` (runtime logical not)](operator-logical-not-masm-run-time.md)<br/>[`!=` (runtime not equal)](operator-not-equal-masm.md)<br/>[`||` (runtime logical or)](operator-logical-or.md)<br/>[`&&` (runtime logical and)](operator-logical-and-masm-run-time.md)<br/>[`<` (runtime less than)](operator-less-than-masm-run-time.md)
   :::column-end:::
   :::column span="":::
      [`<=` (runtime less or equal)](operator-less-or-equal-masm-run-time.md)<br/>[`==` (runtime equal)](operator-equal-masm-run-time.md)<br/>[`>` (runtime greater than)](operator-greater-than-masm-run-time.md)<br/>[`>=` (runtime greater or equal)](operator-greater-or-equal-masm-run-time.md)<br/>[`&` (runtime bitwise and)](operator-bitwise-and.md)
   :::column-end:::
   :::column span="":::
      [`CARRY?` (runtime carry test)](operator-carry-q.md)<br/>[`OVERFLOW?` (runtime overflow test)](operator-overflow-q.md)<br/>[`PARITY?` (runtime parity test)](operator-parity-q.md)<br/>[`SIGN?` (runtime sign test)](operator-sign-q.md)<br/>[`ZERO?` (runtime zero test)](operator-zero-q.md)
   :::column-end:::
:::row-end:::

## Logical and Shift

:::row:::
   :::column span="":::
      [`AND` (bitwise and)](operator-and.md)<br/>[`NOT` (bitwise not)](operator-not.md)
   :::column-end:::
   :::column span="":::
      [`OR` (bitwise or)](operator-or.md)<br/>[`SHL` (shift bits left)](operator-shl.md)
   :::column-end:::
   :::column span="":::
      [`SHR` (shift bits right)](operator-shr.md)<br/>[`XOR` (bitwise exclusive or)](operator-xor.md)
   :::column-end:::
:::row-end:::

## Macro

:::row:::
   :::column span="":::
      [`!` (character literal)](operator-logical-not-masm.md)<br/>[`%` (treat as text)](operator-percent.md)
   :::column-end:::
   :::column span="":::
      [`;;` (treat as comment)](operator-semicolons.md)<br/>[`< >` (treat as one literal)](operator-literal.md)
   :::column-end:::
   :::column span="":::
      [`& &` (substitute parameter value)](operator-logical-and-masm.md)
   :::column-end:::
:::row-end:::

## Miscellaneous

:::row:::
   :::column span="":::
      [`' '` (treat as string)](operator-single-quote.md)<br/>[`" "` (treat as string)](operator-double-quote.md)<br/>`:` (local label definition)
   :::column-end:::
   :::column span="":::
      `::` (register segment and offset)<br/>`::` (global label definition)
   :::column-end:::
   :::column span="":::
      [`;` (treat as comment)](operator-semicolon.md)<br/>[`DUP` (repeat declaration)](operator-dup.md)
   :::column-end:::
:::row-end:::

## Record

:::row:::
   :::column span="":::
      [`MASK` (get record or field bitmask)](operator-mask.md)
   :::column-end:::
   :::column span="2":::
      [`WIDTH` (get record or field width)](operator-width.md)
   :::column-end:::
:::row-end:::

## Relational

:::row:::
   :::column span="":::
      [`EQ` (equal)](operator-eq.md)<br/>[`GE` (greater or equal)](operator-ge.md)
   :::column-end:::
   :::column span="":::
      [`GT` (greater than)](operator-gt.md)<br/>[`LE` (less or equal)](operator-le.md)
   :::column-end:::
   :::column span="":::
      [`LT` (less than)](operator-lt.md)<br/>[`NE` (not equal)](operator-ne.md)
   :::column-end:::
:::row-end:::

## Segment

:::row:::
   :::column span="":::
      [`:` (segment override)](operator-colon.md)<br/>`::` (register segment and offset)<br/>[`IMAGEREL` (image relative offset)](operator-imagerel.md)
   :::column-end:::
   :::column span="":::
      [`LROFFSET` (loader resolved offset)](operator-lroffset.md)<br/>[`OFFSET` (segment relative offset)](operator-offset.md)
   :::column-end:::
   :::column span="":::
      [`SECTIONREL` (section relative offset)](operator-sectionrel.md)<br/>[`SEG` (get segment)](operator-seg.md)
   :::column-end:::
:::row-end:::

## Type

:::row:::
   :::column span="":::
      [`HIGH` (high 8 bits of lowest 16 bits)](operator-high.md)<br/>[`HIGH32` (high 32 bits of 64 bits)](operator-high32.md)<br/>[`HIGHWORD` (high 16 bits of lowest 32 bits)](operator-highword.md)<br/>[`LENGTH` (number of elements in array)](operator-length.md)<br/>[`LENGTHOF` (number of elements in array)](operator-lengthof.md)<br/>[`LOW` (low 8 bits)](operator-low.md)
   :::column-end:::
   :::column span="":::
      [`LOW32` (low 32 bits)](operator-low32.md)<br/>[`LOWWORD` (low 16 bits)](operator-lowword.md)[`OPATTR` (get argument type info)]<br/>(operator-opattr.md)<br/>[`PTR` (pointer to or as type)](operator-ptr.md)<br/>[`SHORT` (mark short label type)](operator-short.md)
   :::column-end:::
   :::column span="":::
      [`SIZE` (size of type or variable)](operator-size.md)<br/>[`SIZEOF` (size of type or variable)](operator-sizeof.md)<br/>[`THIS` (current location)](operator-this.md)<br/>[`TYPE` (get expression type)](operator-type.md)<br/>[`.TYPE` (get argument type info)](operator-dot-type.md)
   :::column-end:::
:::row-end:::

## See also

[Microsoft Macro Assembler Reference](microsoft-macro-assembler-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
