---
title: "PgoAutoSweep | Microsoft Docs"
ms.custom: ""
ms.date: "03/14/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
f1_keywords: ["PgoAutoSweep", "PogoAutoSweepA", "PogoAutoSweepW"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# PgoAutoSweep

PgoAutoSweep is a function that can be called from your code to perform the same action as the [pgosweep](pgosweep.md) command line tool. It's used in profile-guided optimization training to write all profile data from the running program to a .pgc file.

## Syntax

```cpp
void PgoAutoSweep(const char* name);    // ANSI/MBCS
void PgoAutoSweep(const wchar_t* name); // UNICODE
```

### Parameters

*name*<br/>
An identifying string for the saved .pgc file.

## Remarks

You can call `PgoAutoSweep` from your application to save and reset the profile data at any point at runtime.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`PgoAutoSweep`|\<pgobootrun.h>|

The executable must include the pgobootrun.lib file in the linked libraries.

## Example

The example below creates two .PGC files. The first contains data that describes the runtime behavior until `count` is equal to 3, and the second contains the data collected after this point until application termination.

```cpp
#include <stdio.h>
#include <windows.h>
#include <pgobootrun.h>

int count = 10;
int g = 0;

void func2(void)
{
    printf("hello from func2 %d\n", count);
    Sleep(2000);
}

void func1(void)
{
    printf("hello from func1 %d\n", count);
    Sleep(2000);
}
void main(void) 
{
    while (count--)
    {
        if(g)
            func2();
        else
            func1();
        if (count == 3) 
        {
            PgoAutoSweep("func1");
            g = 1;
        }
    }
    PgoAutoSweep("func2");
}
```

## See also

[Tools for Manual Profile-Guided Optimization](../../build/reference/tools-for-manual-profile-guided-optimization.md)
