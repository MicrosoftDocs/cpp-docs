---
title: "CMakeSettings.json schema reference"
ms.date: "03/05/2019"
helpviewer_keywords: ["CMake in Visual C++"]
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
---
# CMakeSettings.json schema reference

The `cmakesettings.json` file contains information that specifies how Visual Studio should interact with CMake to build a project for a specified platform. Use this file to store information such as environment variables or arguments for the cmake.exe environment .

## Environments

The `environments` array contains a list of `items` of type `object` which define an "environment." An environment may be used to apply a set of variables to a `configuration`. Each item in the `environments` array consists of:

- `namespace`: names the environment so that its variables can be referenced from a configuration in the form `namespace.variable`. The default environment  object is called `env` and is populated with certain system environment variables including `%USERPROFILE%`.
- `environment`: uniquely identifies this group of variables. Allows the group to be inherited later in an `inheritEnvironments` entry.
- `groupPriority`: An integer that specifies the priority of these variables when evaluating them. Higher number items are evaluated first.
- `inheritEnvironments`: An array of values that specify the set of environments that are inherited by this group. Any custom environment can be used, or these predefined environments:
 
  - linux_arm: Target ARM Linux remotely.
  - linux_x64: Target x64 Linux remotely.
  - linux_x86: Target x86 Linux remotely.
  - msvc_arm: Target ARM Windows with the MSVC compiler.
  - msvc_arm_x64: Target ARM Windows with the 64-bit MSVC compiler.
  - msvc_arm64: Target ARM64 Windows with the MSVC compiler.
  - msvc_arm64_x64: Target ARM64 Windows with the 64-bit MSVC compiler.
  - msvc_x64: Target x64 Windows with the MSVC compiler.
  - msvc_x64_x64: Target x64 Windows with the 64-bit MSVC compiler.
  - msvc_x86: Target x86 Windows with the MSVC compiler.
  - msvc_x86_x64: Target x86 Windows with the 64-bit MSVC compiler.

## Configurations

The `configurations` array consists of objects that represent CMake configurations that apply to the CMakeLists.txt file in the same folder. You can use these objects to define multiple build configurations and conveniently switch between them in the IDE. 

A `configuration` has these properties:
- `name`: names the configuration.
- `description`: description of this configuration that will appear in menus.
- `generator`: specifies CMake generator to use for this configuration. May be one of:

  - Visual Studio 15 2017
  - Visual Studio 15 2017 Win64
  - Visual Studio 15 2017 ARM
  - Visual Studio 14 2015
  - Visual Studio 14 2015 Win64
  - Visual Studio 14 2015 ARM
  - Unix Makefiles
  - Ninja

- `configurationType`: specifies the build type configuration for the selected generator. May be one of:
 
  - Debug
  - Release
  - MinSizeRel
  - RelWithDebInfo
 
- `inheritEnvironments`: specifies one or more environments that this configuration depends on. May be any custom environment  or one of the predefined environments.
- `buildRoot`:  specifiesThe directory in which CMake generates build scripts for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`."
- `installRoot`: specifies the directory in which CMake generates install targets for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`."
- `cmakeCommandArgs`: specifies additional command-line options passed to CMake when invoked to generate the cache."
- `cmakeToolchain`: specifies the toolchain file. This is passed to CMake using -DCMAKE_TOOLCHAIN_FILE."
- `buildCommandArgs`: specifies native build switches passed to CMake after --build --."
- `ctestCommandArgs`: specifies additional command-line options passed to CTest when running the tests."
- `codeAnalysisRuleset`: specifies the ruleset to use when running code analysis. This can be a full path or the file name of a ruleset file installed by Visual Studio."
- `intelliSenseMode`: specifies the mode used for computing intellisense information". May be one of:
 
  - windows-msvc-x86
  - windows-msvc-x64
  - windows-msvc-arm
  - windows-msvc-arm64
  - android-clang-x86
  - android-clang-x64
  - android-clang-arm
  - android-clang-arm64
  - ios-clang-x86
  - ios-clang-x64
  - ios-clang-arm
  - ios-clang-arm64
  - windows-clang-x86
  - windows-clang-x64
  - windows-clang-arm
  - windows-clang-arm64
  - linux-gcc-x86
  - linux-gcc-x64
  - linux-gcc-arm"

- `cacheRoot`: specifies the path to a CMake cache. This directory should contain an existing CMakeCache.txt file.
- `remoteMachineName`: specifies the name of the remote Linux machine that hosts CMake, builds, and the debugger. Use the Connection Manager for adding new Linux machines. Supported macros include `${defaultRemoteMachineName}`.
- `remoteCopySourcesOutputVerbosity`: specifies the verbosity level of the source copying operation to the remote machine. May be one of ""Normal", "Verbose", or "Diagnostic".
- `remoteCopySourcesConcurrentCopies`: specifies the number of concurrent copies used during the synchronization of the sources to the remote machine.
- `remoteCopySourcesMethod`: specifies the method to copy files to the remote machine. May be "rsync" or "sftp".
- `remoteCMakeListsRoot`: specifies the directory on the remote machine that contains the CMake project. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteBuildRoot`: specifies the directory on the remote machine in which CMake generates build scripts for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteInstallRoot`: specifies the directory on the remote machine in which CMake generates install targets for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, and `${env.VARIABLE}` where `VARIABLE` is an environment variable that has been defined at the system, user, or session level.
- `remoteCopySources`: A `boolean` that specifies whether Visual Studio should copy source files to the remote machine. The default is true. Set to false if you manage file synchronization yourself.
- `remoteCopyBuildOutput`: A `boolean` that specifies whether to copy the build outputs from the remote system.
- `rsyncCommandArgs`: specifies a set of additional command-line options passed to rsync.
- `remoteCopySourcesExclusionList`: A `array` that specifies a list of paths to be excluded when copying source files`: a path can be the name of a file/directory, or a path relative to root of the copy. Wildcards \\\"*\\\" and \\\"?\\\" can be used for glob pattern matching.
- `cmakeExecutable`: specifies the full path to the CMake program executable, including the file name and extension.
- `remotePreGenerateCommand`: specifies the command to run before running CMake to parse the CMakeLists.txt file.
- `remotePrebuildCommand`: specifies the command to run on the remote machine before building.
- `remotePostbuildCommand`: specifies the command to run on the remote machine after building.
- `variables`: A `array` that specifies variables that are passed to CMake as -Dname1=value1 -Dname2=value2, and so on. 


