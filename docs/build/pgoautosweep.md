---
description: "Learn more about: PgoAutoSweep"
title: "PgoAutoSweep"
ms.date: "07/02/2019"
f1_keywords: ["PgoAutoSweep", "PogoAutoSweepA", "PogoAutoSweepW"]
---
# PgoAutoSweep

`PgoAutoSweep` saves the current profile counter information to a file, and then resets the counters. Use the function during profile-guided optimization training to write all profile data from the running program to a `.pgc` file for later use in the optimization build.

## Syntax

```cpp
void PgoAutoSweep(const char* name);    // ANSI/MBCS
void PgoAutoSweep(const wchar_t* name); // UNICODE
```

### Parameters

*name*<br/>
An identifying string for the saved `.pgc` file.

## Remarks

You can call `PgoAutoSweep` from your application to save and reset the profile data at any point during application execution. In an instrumented build, `PgoAutoSweep` captures the current profiling data, saves it in a file, and resets the profile counters. It's the equivalent of calling the [pgosweep](pgosweep.md) command at a specific point in your executable. In an optimized build, `PgoAutoSweep` is a no-op.

The saved profile counter data is placed in a file named *base_name*-*name*!*value*.pgc, where *base_name* is the base name of the executable, *name* is the parameter passed to `PgoAutoSweep`, and *value* is a unique value, usually a monotonically increasing number, to prevent file name collisions.

The `.pgc` files created by `PgoAutoSweep` must be merged into a `.pgd` file to be used to create an optimized executable. You can use the [pgomgr](pgomgr.md) command to perform the merge.

You can pass the name of the merged `.pgd` file to the linker during the optimization build by using the **PGD=**_filename_ argument to the [/USEPROFILE](reference/useprofile.md) linker option, or by using the deprecated **/PGD** linker option. If you merge the `.pgc` files into a file named *base_name*.pgd, you do not need to specify the filename on the command line, because the linker picks up this file name by default.

The `PgoAutoSweep` function maintains the thread-safety setting specified when the instrumented build is created. If you use the default setting or specify the **NOEXACT** argument to the [/GENPROFILE or /FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) linker option, calls to `PgoAutoSweep` are not thread-safe. The **EXACT** argument creates a thread-safe and more accurate, but slower, instrumented executable.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`PgoAutoSweep`|\<pgobootrun.h>|

The executable must include the pgobootrun.lib file in the linked libraries. This file is included in your Visual Studio installation, in the VC libraries directory for each supported architecture.

## Example

The example below uses `PgoAutoSweep` to create two `.pgc` files at different points during execution. The first contains data that describes the runtime behavior until `count` is equal to 3, and the second contains the data collected after this point until just before application termination.

```cpp
// pgoautosweep.cpp
// Compile by using: cl /c /GL /W4 /EHsc /O2 pgoautosweep.cpp
// Link to instrument: link /LTCG /genprofile pgobootrun.lib pgoautosweep.obj
// Run to generate data: pgoautosweep
// Merge data by using command line pgomgr tool:
// pgomgr /merge pgoautosweep-func1!1.pgc pgoautosweep-func2!1.pgc pgoautosweep.pgd
// Link to optimize: link /LTCG /useprofile pgobootrun.lib pgoautosweep.obj

#include <iostream>
#include <windows.h>
#include <pgobootrun.h>

void func2(int count)
{
    std::cout << "hello from func2 " << count << std::endl;
    Sleep(2000);
}

void func1(int count)
{
    std::cout << "hello from func1 " << count << std::endl;
    Sleep(2000);
}

int main()
{
    int count = 10;
    while (count--)
    {
        if (count < 3)
            func2(count);
        else
        {
            func1(count);
            if (count == 3)
            {
                PgoAutoSweep("func1");
            }
        }
    }
    PgoAutoSweep("func2");
}
```

In a developer command prompt, compile the code to an object file by using this command:

`cl /c /GL /W4 /EHsc /O2 pgoautosweep.cpp`

Then generate an instrumented build for training by using this command:

`link /LTCG /genprofile pgobootrun.lib pgoautosweep.obj`

Run the instrumented executable to capture the training data. The data output by the calls to `PgoAutoSweep` is saved in files named pgoautosweep-func1!1.pgc and pgoautosweep-func2!1.pgc. The output of the program should look like this as it runs:

```Output
hello from func1 9
hello from func1 8
hello from func1 7
hello from func1 6
hello from func1 5
hello from func1 4
hello from func1 3
hello from func2 2
hello from func2 1
hello from func2 0
```

Merge the saved data into a profile training database by running the **pgomgr** command:

`pgoautosweep-func1!1.pgc pgoautosweep-func2!1.pgc`

The output of this command looks something like this:

```Output
Microsoft (R) Profile Guided Optimization Manager 14.13.26128.0
Copyright (C) Microsoft Corporation. All rights reserved.

Merging pgoautosweep-func1!1.pgc
pgoautosweep-func1!1.pgc: Used  3.8% (22304 / 589824) of total space reserved.  0.0% of the counts were dropped due to overflow.
Merging pgoautosweep-func2!1.pgc
pgoautosweep-func2!1.pgc: Used  3.8% (22424 / 589824) of total space reserved.  0.0% of the counts were dropped due to overflow.
```

Now you can use this training data to generate an optimized build. Use this command to build the optimized executable:

`link /LTCG /useprofile pgobootrun.lib pgoautosweep.obj`

```Output
Microsoft (R) Incremental Linker Version 14.13.26128.0
Copyright (C) Microsoft Corporation.  All rights reserved.

Merging pgoautosweep!1.pgc
pgoautosweep!1.pgc: Used  3.9% (22904 / 589824) of total space reserved.  0.0% of the counts were dropped due to overflow.
  Reading PGD file 1: pgoautosweep.pgd
Generating code

0 of 0 ( 0.0%) original invalid call sites were matched.
0 new call sites were added.
294 of 294 (100.00%) profiled functions will be compiled for speed
348 of 1239 inline instances were from dead/cold paths
294 of 294 functions (100.0%) were optimized using profile data
16870 of 16870 instructions (100.0%) were optimized using profile data
Finished generating code
```

## See also

[Profile-Guided Optimizations](profile-guided-optimizations.md)<br/>
[pgosweep](pgosweep.md)<br/>
