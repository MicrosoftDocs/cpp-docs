---
description: "Learn more about: IF1 and IF2"
title: "IF1 and IF2"
ms.date: "11/21/2019"
f1_keywords: ["IF2", "IF1"]
helpviewer_keywords: ["IF2 directive", "IF2 directive"]
ms.assetid: a0f75564-b51b-4e39-ad3b-f7421e7ecad6
---
# IF1 and IF2

**IF1** block is evaluated on first assembly pass.

**IF2** block is evaluated on every assembly pass if **OPTION:SETIF2** is **TRUE**.

## Syntax

> **IF1;;**

> **IF2;;**

## Remarks

See [IF](if-masm.md) for complete syntax.

Unlike version 5.1, MASM 6.1 and above do most of its work on its first pass, then performs as many subsequent passes as necessary. In contrast, MASM 5.1 always assembles in two source passes. As a result, you may need to revise or delete some pass-dependent constructs under MASM 6.1 and above.

### Two-Pass Directives

To assure compatibility, MASM 6.1 and above support 5.1 directives referring to two passes. These include **.ERR1**, **.ERR2**, **IF1**, **IF2**, **ELSEIF1**, and **ELSEIF2**. For second-pass constructs, you must specify [OPTION SETIF2](option-masm.md). Without **OPTION SETIF2**, the **IF2** and **.ERR2** directives cause an error:

```output
.ERR2 not allowed : single-pass assembler
```

MASM 6.1 and above handle first-pass constructs differently. It treats the **.ERR1** directive as **.ERR**, and the **IF1** directive as **IF**.

## See also

[Directives reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
