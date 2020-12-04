---
description: "Learn more about: General Project Properties (Android C++)"
title: "General Project Properties (Android C++)"
ms.date: "10/23/2017"
ms.assetid: 65f4868b-b864-4989-a275-1e51869ef599
f1_keywords:
  - VC.Project.VCConfiguration.Android.OutputDirectory
  - VC.Project.VCConfiguration.Android.IntermediateDirectory
  - VC.Project.VCConfiguration.Android.TargetName
  - VC.Project.VCConfiguration.Android.TargetExt
  - VC.Project.VCConfiguration.Android.DeleteExtensionsOnClean
  - VC.Project.VCConfiguration.Android.BuildLogFile
  - VC.Project.VCConfiguration.Android.PlatformToolset
  - VC.Project.VCConfiguration.Android.ConfigurationType
  - VC.Project.VCConfiguration.UseOfSTL
  - VC.Project.VCConfiguration.ThumbMode
---
# General Project Properties (Android C++)

| Property | Description | Choices |
|--|--|--|
| Output Directory | Specifies a relative path to the output file directory; can include environment variables. |
| Intermediate Directory | Specifies a relative path to the intermediate file directory; can include environment variables. |
| Target Name | Specifies a file name that this project generates. |
| Target Extension | Specifies a file extension that this project generates. (Example: *.exe* or *.dll*) |
| Extensions to Delete on Clean | Semi-colon delimited wildcard specification for which files in the intermediate directory to delete on clean or rebuild. |
| Build Log File | Specifies the build log file to write to when build logging is enabled. |
| Platform Toolset | Specifies the toolset used for building the current configuration; If not set, the default toolset is used |
| Configuration Type | Specifies the type of output this configuration generates. | **Dynamic Library (.so)** - Dynamic Library (*.so*)<br>**Static library (.a)** - Static Library (*.a*)<br>**Utility** - Utility<br>**Makefile** - Makefile<br> |
| Target API Level | Android NDK API Level targeted by this configuration. |
| Use of STL | Specifies which C++ Standard Library to use for this configuration. | **Minimal C++ runtime library (system)**<br>**C++ runtime static library (gabi++_static)**<br>**C++ runtime shared library (gabi++_shared)**<br>**STLport runtime static library (stlport_static)**<br>**STLport runtime shared library (stlport_shared)**<br>**GNU STL static library (gnustl_static)**<br>**GNU STL shared library (gnustl_shared)**<br>**LLVM libc++ static library (c++_static)**<br>**LLVM libc++ shared library (c++_shared)**<br> |
| Thumb Mode | Generate code that executes for thumb microarchitecture. This is applicable for arm architecture only. | **Thumb**<br>**Arm**<br>**Disabled**<br> |
