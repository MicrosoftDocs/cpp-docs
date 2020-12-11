---
description: "Learn more about: CMakeSettings.json schema reference"
title: "CMakeSettings.json schema reference"
ms.date: "11/22/2019"
helpviewer_keywords: ["CMake in Visual C++"]
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
---
# CMakeSettings.json schema reference

::: moniker range="msvc-140"

CMake projects are supported in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

The **CMakeSettings.json** file contains information that Visual Studio uses for IntelliSense and to construct the command-line arguments that it passes to cmake.exe for a specified *configuration* and compiler *environment*. A configuration specifies properties that apply to a specific platform and build-type, for example, `x86-Debug` or `Linux-Release`. Each configuration specifies an environment, which encapsulates information about the compiler toolset, for example MSVC, GCC, or Clang. CMake uses the command-line arguments to regenerate the root *CMakeCache.txt* file and other project files for the project. The values can be overridden in the *CMakeLists.txt* files.

You can add or remove configurations in the IDE and then edit them directly in the JSON file or use the **CMake Settings editor** (Visual Studio 2019 and later). You can switch between the configurations easily in the IDE to generate the various project files. See [Customize CMake build settings in Visual Studio](customize-cmake-settings.md) for more information.

## Configurations

The `configurations` array contains all the configurations for a CMake project. See [CMake predefined configuration reference](cmake-predefined-configuration-reference.md) for more information about the pre-defined configurations. You can add any number of pre-defined or custom configurations to the file.

A `configuration` has these properties:

- `addressSanitizerEnabled`: if **`true`** compiles the program with Address Sanitizer (Experimental on Windows). On Linux, compile with -fno-omit-frame-pointer and compiler optimization level -Os or -Oo for best results.
- `addressSanitizerRuntimeFlags`: runtime flags passed to AddressSanitizer via the ASAN_OPTIONS environment variable. Format: flag1=value:flag2=value2.
- `buildCommandArgs`: specifies native build switches passed to CMake after --build --. For example, passing -v when using the Ninja generator forces Ninja to output command lines. See [Ninja command line arguments](#ninja) for more information on Ninja commands.
- `buildRoot`:  specifies the directory in which CMake generates build scripts for the chosen generator.  Maps to **-DCMAKE_BINARY_DIR** switch and specifies where *CMakeCache.txt* will be created. If the folder does not exist, it is created. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `cacheGenerationCommand`: specifies a command line tool and arguments, for example *gencache.bat debug* to generate the cache. The command is run from the shell in the specified environment for the configuration when the user explicitly requests regeneration, or a CMakeLists.txt or CMakeSettings.json file is modified.
- `cacheRoot`: specifies the path to a CMake cache. This directory should contain an existing *CMakeCache.txt* file.
- `clangTidyChecks`: comma-separated list of warnings that will be passed to clang-tidy; wildcards are allowed and '-' prefix will remove checks.
- `cmakeCommandArgs`: specifies additional command-line options passed to CMake when invoked to generate the project files.
- `cmakeToolchain`: specifies the toolchain file. This is passed to CMake using -DCMAKE_TOOLCHAIN_FILE."
- `codeAnalysisRuleset`: specifies the ruleset to use when running code analysis. This can be a full path or the file name of a ruleset file installed by Visual Studio.
- `configurationType`: specifies the build type configuration for the selected generator. May be one of:

  - Debug
  - Release
  - MinSizeRel
  - RelWithDebInfo
  
- `ctestCommandArgs`: specifies additional command-line options passed to CTest when running the tests."
- `description`: description of this configuration that will appear in menus.
- `enableClangTidyCodeAnalysis`: use Clang-Tidy for code analysis.
- `enableMicrosoftCodeAnalysis`: use Microsoft code analysis tools for code analysis.
- `generator`: specifies CMake generator to use for this configuration. May be one of:
  
  **Visual Studio 2019 only:**
  - Visual Studio 16 2019
  - Visual Studio 16 2019 Win64
  - Visual Studio 16 2019 ARM

  **Visual Studio 2017 and later:**
  - Visual Studio 15 2017
  - Visual Studio 15 2017 Win64
  - Visual Studio 15 2017 ARM
  - Visual Studio 14 2015
  - Visual Studio 14 2015 Win64
  - Visual Studio 14 2015 ARM
  - Unix Makefiles
  - Ninja

Because Ninja is designed for fast build speeds instead of flexibility and function, it is set as the default. However, some CMake projects may be unable to correctly build using Ninja. If this occurs, you can instruct CMake to generate Visual Studio projects instead.

To specify a Visual Studio generator in Visual Studio 2017, open the settings editor from the main menu by choosing **CMake | Change CMake Settings**. Delete "Ninja" and type "V". This activates IntelliSense, which enables you to choose the generator you want.

To specify a Visual Studio generator in Visual Studio 2019, right-click on the *CMakeLists.txt* file in **Solution Explorer** and choose **CMake Settings for project** > **Show Advanced Settings** > **CMake Generator**.

When the active configuration specifies a Visual Studio generator, by default MSBuild.exe is invoked with `-m -v:minimal` arguments. To customize the build, inside the  *CMakeSettings.json* file, you can specify additional [MSBuild command line arguments](../build/reference/msbuild-visual-cpp-overview.md) to be passed to the build system via the `buildCommandArgs` property:

   ```json
   "buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
   ```

- `installRoot`: specifies the directory in which CMake generates install targets for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `inheritEnvironments`: specifies one or more compiler environments that this configuration depends on. May be any custom environment or one of the predefined environments. For more information, see [Environments](#environments).
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

- `name`: names the configuration.  See [CMake predefined configuration reference](cmake-predefined-configuration-reference.md) for more information about the pre-defined configurations.
- `wslPath`: the path to the launcher of an instance of Windows Subsystem for Linux.

### Additional settings for CMake Linux projects

- `remoteMachineName`: specifies the name of the remote Linux machine that hosts CMake, builds, and the debugger. Use the Connection Manager for adding new Linux machines. Supported macros include `${defaultRemoteMachineName}`.
- `remoteCopySourcesOutputVerbosity`: specifies the verbosity level of the source copying operation to the remote machine. May be one of ""Normal", "Verbose", or "Diagnostic".
- `remoteCopySourcesConcurrentCopies`: specifies the number of concurrent copies used during the synchronization of the sources to the remote machine (sftp only).
- `remoteCopySourcesMethod`: specifies the method to copy files to the remote machine. May be "rsync" or "sftp".
- `remoteCMakeListsRoot`: specifies the directory on the remote machine that contains the CMake project. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteBuildRoot`: specifies the directory on the remote machine in which CMake generates build scripts for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteInstallRoot`: specifies the directory on the remote machine in which CMake generates install targets for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, and `${env.VARIABLE}` where `VARIABLE` is an environment variable that has been defined at the system, user, or session level.
- `remoteCopySources`: A `boolean` that specifies whether Visual Studio should copy source files to the remote machine. The default is true. Set to false if you manage file synchronization yourself.
- `remoteCopyBuildOutput`: A `boolean` that specifies whether to copy the build outputs from the remote system.
- `remoteCopyAdditionalIncludeDirectories`: Additional include directories to be copied from the remote machine to support IntelliSense. Format as "/path1;/path2...".
- `remoteCopyExcludeDirectories`: Include directories NOT to copy from the remote machine. Format as "/path1;/path2...".
- `remoteCopyUseCompilerDefaults`: Specifies whether to use the compiler's default defines and include paths for IntelliSense. Should only be false if the compilers in use to not support gcc-style arguments.
- `rsyncCommandArgs`: specifies a set of additional command-line options passed to rsync.
- `remoteCopySourcesExclusionList`: A `array` that specifies a list of paths to be excluded when copying source files`: a path can be the name of a file/directory, or a path relative to root of the copy. Wildcards \\\"*\\\" and \\\"?\\\" can be used for glob pattern matching.
- `cmakeExecutable`: specifies the full path to the CMake program executable, including the file name and extension.
- `remotePreGenerateCommand`: specifies the command to run before running CMake to parse the *CMakeLists.txt* file.
- `remotePrebuildCommand`: specifies the command to run on the remote machine before building.
- `remotePostbuildCommand`: specifies the command to run on the remote machine after building.
- `variables`: contains a name-value pair of CMake variables that will get passed as **-D** *_name_=_value_* to CMake. If your CMake project build instructions specify the addition of any variables directly to the *CMakeCache.txt* file, it is recommended that you add them here instead. The following example shows how to specify the name-value pairs for the 14.14.26428 MSVC toolset:

```json
"variables": [
    {
      "name": "CMAKE_CXX_COMPILER",
      "value": "C:/Program Files (x86)/Microsoft Visual Studio/157/Enterprise/VC/Tools/MSVC/14.14.26428/bin/HostX86/x86/cl.exe",
      "type": "FILEPATH"
    },
    {
      "name": "CMAKE_C_COMPILER",
      "value": "C:/Program Files (x86)/Microsoft Visual Studio/157/Enterprise/VC/Tools/MSVC/14.14.26428/bin/HostX86/x86/cl.exe",
      "type": "FILEPATH"
    }
  ]
```

Note that if you do not define the `"type"`, the `"STRING"` type will be assumed by default.

- `remoteCopyOptimizations`: **Visual Studio 2019 version 16.5 or later** properties for controlling source copy to the remote target. Optimizations are enabled by default. Includes `remoteCopyUseOptimizations`, `rsyncSingleDirectoryCommandArgs`, and `remoteCopySourcesMaxSmallChange`.

## <a name="environments"></a> Environments

An *environment* encapsulates the environment variables that are set in the process that Visual Studio uses to invoke cmake.exe. For MSVC projects, the variables are those that are set in a [developer command prompt](building-on-the-command-line.md) for a specific platform. For example, the `msvc_x64_x64` environment is the same as running the **Developer Command Prompt for VS 2017** or **Developer Command Prompt for VS 2019** with the **-arch=amd64 -host_arch=amd64** arguments. You can use the `env.{<variable_name>}` syntax in *CMakeSettings.json* to reference the individual environment variables, for example to construct paths to folders.  The following predefined environments are provided:

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

### Accessing environment variables from CMakeLists.txt

From a CMakeLists.txt file, all environment variables are referenced by the syntax `$ENV{variable_name}`. To see the available variables for an environment, open the corresponding command prompt and type `SET`. Some of the information in environment variables is also available through CMake system introspection variables, but you may find it more convenient to use the environment variable. For example, the MSVC compiler version or Windows SDK version are easily retrieved through the environment variables.

### Custom environment variables

In  `CMakeSettings.json`, you can define custom environment variables globally or per-configuration in the `environments` array. A custom environment is a convenient way to group a set of properties that you can use in place of a predefined environment, or to extend or modify a predefined environment. Each item in the `environments` array consists of:

- `namespace`: names the environment so that its variables can be referenced from a configuration in the form `namespace.variable`. The default environment object is called `env` and is populated with certain system environment variables including `%USERPROFILE%`.
- `environment`: uniquely identifies this group of variables. Allows the group to be inherited later in an `inheritEnvironments` entry.
- `groupPriority`: An integer that specifies the priority of these variables when evaluating them. Higher number items are evaluated first.
- `inheritEnvironments`: An array of values that specify the set of environments that are inherited by this group. This feature enables you to inherit default environments and create custom environment variables that are passed to CMake.exe when it runs.

**Visual Studio 2019 version 16.4 and later:** Debug targets are automatically launched with the environment you specify in *CMakeSettings.json*. You can override or add environment variables on a per-target or per-task basis in [launch.vs.json](launch-vs-schema-reference-cpp.md) and [tasks.vs.json](tasks-vs-json-schema-reference-cpp.md).

The following example defines one global variable, **BuildDir**, which is inherited in both the x86-Debug and x64-Debug configurations. Each configuration uses the variable to specify the value for the **buildRoot** property for that configuration. Note also how each configuration uses the **inheritEnvironments** property to specify a variable that applies only to that configuration.

```json
{
  // The "environments" property is an array of key value pairs of the form
  // { "EnvVar1": "Value1", "EnvVar2": "Value2" }
  "environments": [
    {
      "BuildDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\build",
    }
  ],

  "configurations": [
    {
      "name": "x86-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      // Inherit the defaults for using the MSVC x86 compiler.
      "inheritEnvironments": [ "msvc_x86" ],
      "buildRoot": "${env.BuildDir}\\${name}"    },
    {
      "name": "x64-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      // Inherit the defaults for using the MSVC x64 compiler.
      "inheritEnvironments": [ "msvc_x64" ],
      "buildRoot": "${env.BuildDir}\\${name}"
    }
  ]
}
```

In the next example, the x86-Debug configuration defines its own value for the **BuildDir** property. This value overrides the value set by the global **BuildDir** property so that **BuildRoot** evaluates to `D:\custom-builddir\x86-Debug`.

```json
{
  "environments": [
    {
      "BuildDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}",
    }
  ],

  "configurations": [
    {
      "name": "x86-Debug",

      // The syntax for this property is the same as the global one above.
      "environments": [
        {
          // Replace the global property entirely.
          "BuildDir": "D:\\custom-builddir"
          // This environment does not specify a namespace, hence by default "env" will be assumed.
          // "namespace" : "name" would require that this variable be referenced with "${name.BuildDir}".
        }
      ],

      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x86" ],
      // Evaluates to "D:\custom-builddir\x86-Debug"
      "buildRoot": "${env.BuildDir}\\${name}"
    },
    {
      "name": "x64-Debug",

      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x64" ],
      // Since this configuration doesn't modify BuildDir, it inherits
      // from the one defined globally.
      "buildRoot": "${env.BuildDir}\\${name}"
    }
  ]
}
```

## Macros

The following macros can be used in *CMakeSettings.json*:

- `${workspaceRoot}` – the full path of the workspace folder
- `${workspaceHash}` – hash of workspace location; useful for creating a unique identifier for the current workspace (for example, to use in folder paths)
- `${projectFile}` – the full path of the root CMakeLists.txt file
- `${projectDir}` – the full path of the folder of the root CMakeLists.txt file
- `${thisFile}` – the full path of the  `CMakeSettings.json` file
- `${name}` – the name of the configuration
- `${generator}` – the name of the CMake generator used in this configuration

All references to macros and environment variables in *CMakeSettings.json* are expanded before being passed to the cmake.exe command line.

## <a name="ninja"></a> Ninja command line arguments

If targets are unspecified, builds the 'default' target.

```cmd
C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise>ninja -?
ninja: invalid option -- `-?'
usage: ninja [options] [targets...]
```

|Option|Description|
|--------------|------------|
| --version  | print ninja version ("1.7.1")|
|   -C DIR   | change to DIR before doing anything else|
|   -f FILE  | specify input build file (default=build.ninja)|
|   -j N     | run N jobs in parallel (default=14, derived from CPUs available)|
|   -k N     | keep going until N jobs fail (default=1)|
|   -l N     | do not start new jobs if the load average is greater than N|
|   -n       | dry run (don't run commands but act like they succeeded)|
|   -v       | show all command lines while building|
|   -d MODE  | enable debugging (use -d list to list modes)|
|   -t TOOL  | run a subtool (use -t list to list subtools). terminates top-level options; further flags are passed to the tool|
|   -w FLAG  | adjust warnings (use -w list to list warnings)|

::: moniker-end
