---
title: "runtime_checks | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["vc-pragma.runtime_checks", "runtime_checks_CPP"]
dev_langs: ["C++"]
helpviewer_keywords: ["runtime_checks pragma", "pragmas, runtime_checks"]
ms.assetid: ae50b43f-f88d-47ad-a2db-3389e9e7df5b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# runtime_checks
Disables or restores the [/RTC](../build/reference/rtc-run-time-error-checks.md) settings.  

## Syntax  

```
#pragma runtime_checks( "[runtime_checks]", {restore | off} )
```  

## Remarks  

You cannot enable a run-time check that was not enabled with a compiler option. For example, if you do not specify `/RTCs`, specifying `#pragma runtime_checks( "s", restore)` will not enable stack frame verification.  

The **runtime_checks** pragma must appear outside a function and takes effect at the first function defined after the pragma is seen. The *restore* and *off* arguments turn options specified in the **runtime_checks** on or off.  

The **runtime_checks** can be zero or more of the parameters shown in the following table.  

### Parameters of the runtime_checks Pragma  

|Parameter(s)|Type of run-time check|
|--------------------|-----------------------------|
|*s*|Enables stack (frame) verification.|
|*c*|Reports when a value is assigned to a smaller data type that results in a data loss.|
|*u*|Reports when a variable is used before it is defined.|  

These are the same letters used with the `/RTC` compiler option. For example:  

```
#pragma runtime_checks( "sc", restore )
```  

Using the **runtime_checks** pragma with the empty string (**""**) is a special form of the directive:  

- When you use the *off* parameter, it turns the run-time error checks, listed in the table above, off.  

- When you use the *restore* parameter, it resets the run-time error checks to those that you specified with the `/RTC` compiler option.  

```
#pragma runtime_checks( "", off )
.
.
.
#pragma runtime_checks( "", restore )
```  

## See Also  

[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   