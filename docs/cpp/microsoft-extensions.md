---
description: "Learn more about: Microsoft Extensions"
title: "Microsoft Extensions"
ms.date: "11/04/2016"
helpviewer_keywords: ["Microsoft extensions to C/C++"]
ms.assetid: 68654516-24ef-4f33-aae2-175f86cc1979
---
# Microsoft Extensions

*`asm-statement`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__asm`** *`assembly-instruction`* **`;`**<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__asm {`** *`assembly-instruction-list`*  **`} ;`**<sub>opt</sub>

*`assembly-instruction-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`assembly-instruction`* **`;`**<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`assembly-instruction`* **`;`** *`assembly-instruction-list`* **`;`**<sub>opt</sub>

*`ms-modifier-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`ms-modifier`* *`ms-modifier-list`*<sub>opt</sub>

*`ms-modifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__cdecl`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__fastcall`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__stdcall`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__syscall`** (reserved for future implementations)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__oldcall`** (reserved for future implementations)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__unaligned`** (reserved for future implementations)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`based-modifier`*

*`based-modifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__based (`** *`based-type`* **`)`**

*`based-type`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`name`*
