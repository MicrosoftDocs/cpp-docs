---
description: "Learn more about: BSCMAKE Error BK1503"
title: "BSCMAKE Error BK1503"
ms.date: "11/04/2016"
f1_keywords: ["BK1503"]
helpviewer_keywords: ["BK1503"]
ms.assetid: e6582344-b91e-486f-baf3-4f9028d83c3b
---
# BSCMAKE Error BK1503

cannot write to file 'filename' [: reason]

BSCMAKE combines the .sbr files generated during compilation into one browser database. If the resulting browser database exceeds 64 MB, or if the number of input (.sbr) files exceeds 4092, this error will be emitted.

If the problem is caused by more than 4092 .sbr files, you must reduce the number of input files. From within Visual Studio, this can be accomplished by [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) your entire project, then recheck on a file by file basis.

If the problem is caused by a .bsc file larger than 64MB, reducing the number of .sbr files as input will decrease the size of the resulting .bsc file. In addition, the amount of browse information may be reduced through the use of the /Em (Exclude Macro Expanded Symbols), /El (Exclude Local Variables), and /Es (Exclude System Files).

## See also

[BSCMAKE Options](../../build/reference/bscmake-options.md)
