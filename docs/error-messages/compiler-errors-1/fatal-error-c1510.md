---
title: "Fatal Error C1510 | Microsoft Docs"
ms.custom: ""
ms.date: "04/11/2017"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1510"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1510"]
ms.assetid: 150c827f-9514-41a9-8d7e-82f820749bcb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1510

Cannot open language resource clui.dll

The compiler can't load the language resource DLL.

There are two common causes for this issue. When using the 32-bit compiler and tools, you may see this error for large projects that use more than 2GB of memory during a link. A possible solution on 64-bit Windows systems is to use the 64-bit native or cross compiler and tools to generate your code. This takes advantage of the larger memory space available to 64-bit apps. If you must use a 32-bit compiler because you are running on a 32-bit system, in some cases you can increase the amount of memory available to the linker to 3GB. For more information, see [4-Gigabyte Tuning: BCDEdit and Boot.ini](https://msdn.microsoft.com/library/vs/alm/bb613473\(v=vs.85\).aspx) and the [BCDEdit /set increaseuserva](https://msdn.microsoft.com/library/ff542202.aspx) command.

The other common cause is a broken or incomplete Visual Studio installation. In this case, run the installer again to repair or reinstall Visual Studio.
