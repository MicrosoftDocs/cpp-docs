---
description: "Schema reference for `CMakePresets.json` and `CMakeUserPresets.json` Microsoft vendor maps"
title: "CMakeUserPresets.json"
ms.date: 02/07/2022
helpviewer_keywords: ["CMake in Visual C++"]
---
# `CMakePresets.json` and `CMakeUserPresets.json` Microsoft vendor maps

CMake supports two files, *`CMakePresets.json`* and *`CMakeUserPresets.json`*, that allow users to specify common configure, build, and test options and share them with others.

*`CMakePresets.json`* and *`CMakeUserPresets.json`* can be used to drive CMake in Visual Studio, in Visual Studio Code, in a Continuous Integration (CI) pipeline, and from the command line.

*`CMakePresets.json`* is intended to save project-wide builds, and *`CMakeUserPresets.json`* is intended for developers to save their own local builds. The schema for both files is identical.

*`CMakePresets.json`* and *`CMakeUserPresets.json`* support vendor maps to store vendor-specific information. Microsoft maintains two vendor maps with options specific to Visual Studio and Visual Studio Code. Here we document two Microsoft vendor maps and vendor macros. For more information about the rest of the schema, see the official [CMake documentation](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html). It includes information about Configure Presets, Build Presets, and Test Presets.

For more information about how to use *`CMakePresets.json`* in Visual Studio, see [Configure and build with CMake Presets in Visual Studio](cmake-presets-vs.md)

For more information about how to use *`CMakePresets.json`* in Visual Studio Code, see [Configure and build with CMake Presets in VS Code](https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/cmake-presets.md)

## Visual Studio Settings vendor map

One vendor map with the vendor URI `microsoft.com/VisualStudioSettings/CMake/<version>` is allowed per Configure Preset and contains options specific to CMake integration in Visual Studio and Visual Studio Code. All options in the vendor map apply to Visual Studio. Options that apply to both Visual Studio and Visual Studio Code have been explicitly marked.

All settings in the Visual Studio Settings vendor map are optional and inherited from Configure Presets specified by the `inherits` key. Only options that have been modified are written to the file. The Visual Studio Settings vendor map is supported by both *`CMakePresets.json`* and *`CMakeUserPresets.json`*.

The options in the Visual Studio Settings vendor map don't affect the construction of the CMake or CTest command line. It's so the same *`CMakePresets.json`* file can be used to drive CMake with Visual Studio, Visual Studio Code, and from the command line. The exceptions are the `cacheRoot` and `cmakeGenerateCommand` options. These options are specific to the [Open Existing Cache](https://devblogs.microsoft.com/cppblog/open-existing-cmake-caches-in-visual-studio/) scenario in Visual Studio and can't be reproduced from the command line.

| Setting | Description |
|--|--|
| `hostOS` | An array of supported operating systems (OS). Accepted values are `Windows`, `Linux`, and `macOS`.<br><br>The value of `hostOS` is used by Visual Studio and Visual Studio Code to hide Configure Presets that don't apply to the OS of the target system and provide a better user experience.<br><br>If `hostOS` is unspecified, then Visual Studio and Visual Studio Code will always show all Configure Presets for selection. This field can also be a string, which is equivalent to an array containing one string<br><br>This option is supported by both Visual Studio and Visual Studio Code. |
| `intelliSenseMode` | Specifies the mode used for computing IntelliSense information in Visual Studio with the format `<target>-<toolset>-<arch>`. <br><br>Accepted values:<br><br> `android-clang-arm`<br> `android-clang-arm64`<br> `android-clang-x6`<br> `android-clang-x86`<br> `ios-clang-ar`<br> `ios-clang-arm64`<br> `ios-clang-x6`<br> `ios-clang-x86`<br> `linux-gcc-arm`<br> `linux-gcc-x64`<br> `linux-gcc-x86`<br> `windows-clang-arm`<br> `windows-clang-arm64`<br> `windows-clang-x64`<br> `windows-clang-x86`<br> `windows-msvc-arm`<br> `windows-msvc-arm64`<br> `windows-msvc-x64`<br> `windows-msvc-x86`<br><br>If `intelliSenseMode` is unspecified, then Visual Studio uses the IntelliSense mode that matches your specified compilers and target architecture. `intelliSenseMode` is often used to provide improved IntelliSense for cross-compilation.<br><br>In Visual Studio 2019, you must explicitly specify a clang IntelliSense mode when building with clang or clang-cl. |
| `intelliSenseOptions` | A map of extra IntelliSense configuration options.<br><br>`useCompilerDefaults`: A `bool` that specifies whether to use the compiler default defines and include paths for IntelliSense. Should only be `false` if the compilers in use don't support gcc-style arguments. Defaults to `true`.<br><br>`additionalCompilerArgs`: An array of extra options to control IntelliSense in Visual Studio. This option supports macro expansion. |
| `enableMicrosoftCodeAnalysis` | A `bool` that enables Microsoft code analysis in Visual Studio when building with `cl` or `clang-cl`. Defaults to `false`. |
| `codeAnalysisRuleset` | Specifies the ruleset to use when running Microsoft code analysis in Visual Studio. You can use a path to a ruleset file, or the name of a ruleset file installed with Visual Studio. This option supports macro expansion. |
| `disableExternalAnalysis` | A `bool` that specifies whether code analysis should run on external headers in Visual Studio. |
| `codeAnalysisExternalRuleset` | Specifies the ruleset to use when running Microsoft code analysis on external header in Visual Studio. You can use a path to a ruleset file, or the name of a ruleset file installed with Visual Studio. This option supports macro expansion. |
| `enableClangTidyCodeAnalysis` | A bool that enables clang-tidy code analysis in Visual Studio when building with `clang-cl`. Defaults to `false`. |
| `clangTidyChecks` | A comma-separated list of warnings passed to clang-tidy when running clang-tidy code analysis in Visual Studio. Wildcards are allowed, and the `-` prefix will remove checks. |
| `cacheRoot` | Specifies the path to a CMake cache. This directory should contain an existing *`CMakeCache.txt`* file. This key is only supported by the Open Existing Cache scenario in Visual Studio. This option supports macro expansion. |
| `cmakeGenerateCommand` | A command-line tool (specified as a command-line program and arguments, for example, **`gencache.bat debug`**) to generate the CMake cache. This command runs in the shell using the specified environment of the preset when CMake configure is invoked. This key is only supported by the [Open Existing Cache](https://devblogs.microsoft.com/cppblog/open-existing-cmake-caches-in-visual-studio/) scenario in Visual Studio. This option supports macro expansion. |

## Visual Studio Remote Settings vendor map

One vendor map with the vendor URI `microsoft.com/VisualStudioRemoteSettings/CMake/<version>` is allowed per Configure Preset and contains options specific to remote development in Visual Studio. Remote development means you're invoking CMake on a remote SSH connection or WSL. None of the options in the Visual Studio Remote Settings vendor map apply to Visual Studio Code.

All settings in the Visual Studio Remote Settings vendor map are optional and inherited from Configure Presets specified by the `inherits` key. Only options that have been modified are written to the file. The Visual Studio Remote Settings vendor map is supported by both *`CMakePresets.json`* and *`CMakeUserPresets.json`*.

The options in the Visual Studio Settings vendor map don't affect the construction of the CMake or CTest command line. It's so the same *`CMakePresets.json`* file can be used to drive CMake with Visual Studio, Visual Studio Code, and from the command line.

Many of the options in the Visual Studio Remote Settings vendor map are ignored when targeting WSL1. It's because the WSL1 toolset executes all commands locally and relies on Windows drives mounted under the `/mnt` folder to access local source files from WSL1. No source file copy is required. Options that are ignored when targeting WSL1 have been explicitly marked.

| Setting | Description |
|--|--|
| `sourceDir` | Path to the directory on the remote system where the project will be copied. Defaults to `$env{HOME}/.vs/$ms{projectDirName}`. This option supports macro expansion.<br><br>In remote copy scenarios, the macro `${sourceDir}` evaluates to the project source directory on the remote system and not the project source directory on the Windows machine. Remote copy scenarios include targeting a remote SSH connection. In these cases, the project source directory on the remote system is determined by the value of `sourceDir` in the Visual Studio Remote Settings vendor map. This option is ignored when targeting WSL1. |
| `copySources` | If `true`, Visual Studio will copy sources from Windows to the remote system. Set to `false` if you manage file synchronization yourself. Defaults to `true`. This option is ignored when targeting WSL1. |
| `copySourcesOptions` | An object of options related to the source copy from Windows to the remote system. This object is ignored when targeting WSL1.<br><br>`copySourcesOptions.exclusionList`: A list of paths to be excluded when copying source files to the remote system. A path can be the name of a file or directory, or a relative path from the root of the copy. Defaults to `[ ".vs", ".git", "out" ]`. This option supports macro expansion.<br><br>`copySourcesOptions.method`: The method used to copy source files to the remote system. Accepted values are `rsync` and `sftp`. Defaults to `rsync`.<br><br>`copySourcesOptions.concurrentCopies`: The number of concurrent copies used during the synchronization of sources to the remote system. Defaults to `5`.<br><br>`copySourcesOptions.outputVerbosity`: The verbosity level of source copy operations to the remote system. Accepted levels are `Normal`, `Verbose`, and `Diagnostic`. Defaults to `Normal`. |
| `rsyncCommandArgs` | A list of command-line arguments passed to `rsync`. Defaults to `[ "-t", "--delete", "--delete-excluded" ]`. This option supports macro expansion and is ignored when targeting WSL1. |
| `copyBuildOutput` | Specifies whether to copy build output from the remote system back to Windows. Defaults to `false`. This option is ignored when targeting WSL1. |
| `copyOptimizations` | An object of options related to source copy optimizations. These options are ignored when targeting WSL1.<br><br>`copyOptimizations.maxSmallChange`: The maximum number of files to copy using sftp instead of rsync. Defaults to 10.<br><br>`copyOptimizations.useOptimizations`: Specifies the copy optimizations in use. Accepted values are no copy optimizations (`None`), rsync only optimizations (`RsyncOnly`), or rsync and sftp optimizations (`RsyncAndSftp`). Defaults to `RsyncAndSftp`.<br><br>`copyOptimizations.rsyncSingleDirectoryCommandArgs`: A list of command-line arguments passed to rsync when copying the contents of a single directory to the remote system. Defaults to `[ "-t", "-d" ]`. This option supports macro expansion. |
| `copyAdditionalIncludeDirectoriesList` | A list of paths to remote header directories to be copied locally for IntelliSense. This option supports macro expansion. |
| `copyExcludeDirectoriesList` | A list of paths to remote header directories to not be copied locally for IntelliSense. This option supports macro expansion. |
| `forceWSL1Toolset` | If `true`, Visual Studio will always use the WSL1 toolset when targeting WSL from Visual Studio. The WSL1 toolset executes all commands locally and relies on Windows drives mounted under the `/mnt` folder to access local source files from WSL. These options may be slower with WSL2. Defaults to `false`.<br><br>The WSL1 toolset will always be used in Visual Studio 2019 version 16.10. This option will be relevant once native support for WSL2 is available. |

## Remote pre-build and post-build events

Options for a `remotePrebuildEvent` and `remotePostbuildEvent` have been deprecated with the adoption of *`CMakePresets.json`*.

Encode pre-build, pre-link, and post-build events in your *`CMakeLists.txt`* using [`add_custom_command`](https://cmake.org/cmake/help/latest/command/add_custom_command.html#build-events). It ensures the same behavior when building with Visual Studio and from the command line.

If you need behavior that is specific to Visual Studio, you can add a custom remote task in *`tasks.vs.json`*. To get started, right-click on your root *`CMakeLists.txt`* in the **Solution Explorer** from **Folder View** and select **Configure Tasks**.  You can then [add a new remote task](./tasks-vs-json-schema-reference-cpp.md#remote-properties) to your *`tasks.vs.json`* file.

The following remote task creates a directory called test on the remote Linux system:

```json
{
      "taskLabel": "mkdir",
      "appliesTo": "CMakeLists.txt",
      "type": "remote",
      "command": "mkdir test",
      "remoteMachineName": "localhost"
  }
```

Right-click on any *`CMakeLists.txt`* and select the **mkdir** option to execute this task.

The value of `remoteMachineName` must match the Host Name of a connection in the **Connection Manager**.

## Microsoft vendor macros

The two Microsoft vendor maps, `Visual Studio Settings` and `Visual Studio Remote Settings`, support all the macros defined by CMake. Our vendor maps support all the macros defined by CMake. For more information, see [cmake-presets Macro Expansion](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html#macro-expansion). All macros and environment variables are expanded before being passed to CMake.

Visual Studio supports vendor macros with the prefix `ms`. Microsoft vendor macros can only be used in Microsoft vendor maps. CMake can't use presets that have vendor macros outside of a vendor map.

|Macro  |Description  |
|---------|---------|
|`$ms{projectDirName}`|  Evaluates to the name of the open folder in Visual Studio. This macro is used to set the default value of `sourceDir` in remote copy scenarios. This macro is not supported by Visual Studio Code. Use `${sourceDirName}` instead. |

## Environment variables

|Macro  |Description  |
|---------|---------|
| `$env{<variable-name>}`<br>`$penv{<variable-name>}`| Reference environment variables using this syntax supported by CMake. For more information, see [cmake-presets Macro Expansion](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html#macro-expansion). |

## Deprecated macros

A few macros that were supported by *`CMakeSettings.json`* have been deprecated with the adoption of *`CMakePresets.json`*.

Use the macros supported by CMake to construct your file paths. When you use the macros, it ensures that the same *`CMakePresets.json`* file works inside Visual Studio and from the command line.

| Deprecated macro | Recommendation |
|--|--|
| `${projectFile}` | `${sourceDir}/CMakeLists.txt` |
| `${thisFile}` | `${sourceDir}/CMakePresets.json` |

## Accepted shell syntax

Use the `$env{HOME}` syntax to reference `$HOME` when constructing Linux paths in the Microsoft vendor maps.
