---
description: "Learn more about: Environment Variables for Profile-Guided Optimizations"
title: "Environment Variables for Profile-Guided Optimizations"
ms.date: "03/14/2018"
helpviewer_keywords: ["profile-guided optimizations, environment variables"]
ms.assetid: f95a6d1e-49a4-4802-a144-092026b600a3
---
# Environment Variables for Profile-Guided Optimizations

There are three environment variables that affect test scenarios on an image created with **/LTCG:PGI** for profile-guided optimizations:

- **PogoSafeMode** specifies whether to use fast mode or safe mode for application profiling.

- **VCPROFILE_ALLOC_SCALE** adds additional memory for use by the profiler.

- **VCPROFILE_PATH** lets you specify the folder used for .pgc files.

**The PogoSafeMode and VCPROFILE_ALLOC_SCALE environment variables are deprecated starting in Visual Studio 2015.** The linker options [/GENPROFILE or /FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) and  [/USEPROFILE](reference/useprofile.md) specify the same linker behavior as these environment variables.

## PogoSafeMode

This environment variable is deprecated. Use the **EXACT** or **NOEXACT** arguments to **/GENPROFILE** or **/FASTGENPROFILE** to control this behavior.

Clear or set the **PogoSafeMode** environment variable to specify whether to use fast mode or safe mode for application profiling on x86 systems.

Profile-guided optimization (PGO) has two possible modes during the profiling phase: *fast mode* and *safe mode*. When profiling is in fast mode, it uses the **INC** instruction to increase data counters. The **INC** instruction is faster but is not thread-safe. When profiling is in safe mode, it uses the **LOCK INC** instruction to increase data counters. The **LOCK INC** instruction has the same functionality as the **INC** instruction has, and is thread-safe, but it is slower than the **INC** instruction.

By default, PGO profiling operates in fast mode. **PogoSafeMode** is only required if you want to use safe mode.

To run PGO profiling in safe mode, you must either use the environment variable **PogoSafeMode** or the linker switch **/PogoSafeMode**, depending on the system. If you are performing the profiling on an x64 computer, you must use the linker switch. If you are performing the profiling on an x86 computer, you may use the linker switch or set the **PogoSafeMode** environment variable to any value before you start the optimization process.

### PogoSafeMode syntax

> **set PogoSafeMode**[**=**_value_]

Set **PogoSafeMode** to any value to enable safe mode. Set without a value to clear a previous value and re-enable fast mode.

## VCPROFILE_ALLOC_SCALE

This environment variable is deprecated. Use the **MEMMIN** and **MEMMAX** arguments to **/GENPROFILE** or **/FASTGENPROFILE** to control this behavior.

Modify the **VCPROFILE_ALLOC_SCALE** environment variable to change the amount of memory allocated to hold the profile data. In rare cases, there will not be enough memory available to support gathering profile data when running test scenarios. In those cases, you can increase the amount of memory by setting **VCPROFILE_ALLOC_SCALE**. If you receive an error message during a test run that indicates that you have insufficient memory, assign a larger value to **VCPROFILE_ALLOC_SCALE**, until the test runs complete with no out-of-memory errors.

### VCPROFILE_ALLOC_SCALE syntax

> **set VCPROFILE_ALLOC_SCALE**[__=__*scale_value*]

The *scale_value* parameter is a scaling factor for the amount of memory you want for running test scenarios.  The default is 1. For example, this command line sets the scale factor to 2:

`set VCPROFILE_ALLOC_SCALE=2`

## VCPROFILE_PATH

Use the **VCPROFILE_PATH** environment variable to specify the directory to create .pgc files. By default, .pgc files are created in the same directory as the binary being profiled. However, if the absolute path of the binary does not exist, as may be the case when you run profile scenarios on a different machine from where the binary was built, you can set **VCPROFILE_PATH** to a path that exists on the target machine.

### VCPROFILE_PATH syntax

> **set VCPROFILE_PATH**[**=**_path_]

Set the *path* parameter to the directory path in which to add .pgc files. For example, this command line sets the folder to C:\profile:

`set VCPROFILE_PATH=c:\profile`

## See also

[Profile-Guided Optimizations](profile-guided-optimizations.md)<br/>
[/GENPROFILE and /FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/USEPROFILE](reference/useprofile.md)<br/>
