---
description: "Learn more about: CMakeSettings.json schema reference"
title: "CMakeSettings.json schema reference"
ms.date: "11/22/2019"
helpviewer_keywords: ["CMake in Visual C++"]
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
---
# `CMakeSettings.json` schema reference

::: moniker range="msvc-140"

CMake projects are supported in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

The *`CMakeSettings.json`* file contains information that Visual Studio uses for IntelliSense and to construct the command-line arguments that it passes to CMake for a specified configuration and compiler environment. A *configuration* specifies properties that apply to a specific platform and build-type, for example, `x86-Debug` or `Linux-Release`. Each configuration specifies an *environment*, which encapsulates information about the compiler toolset, for example MSVC, GCC, or Clang. CMake uses the command-line arguments to regenerate the root *`CMakeCache.txt`* file and other project files for the project. The values can be overridden in the *`CMakeLists.txt`* files.

You can add or remove configurations in the IDE and then edit them directly in the JSON file or use the **CMake Settings editor** (Visual Studio 2019 and later). You can switch between the configurations easily in the IDE to generate the various project files. For more information, see [Customize CMake build settings in Visual Studio](customize-cmake-settings.md).

## Configurations

The `configurations` array contains all the configurations for a CMake project. For more information about the pre-defined configurations, see [CMake predefined configuration reference](cmake-predefined-configuration-reference.md). You can add any number of pre-defined or custom configurations to the file.

A `configuration` has these properties:

- `addressSanitizerEnabled`: If **`true`**, compiles the program using [AddressSanitizer](../sanitizers/asan.md). On Linux, compile with `-fno-omit-frame-pointer` and compiler optimization level `-Os` or `-Oo` for best results.
- `addressSanitizerRuntimeFlags`: The runtime flags passed to [AddressSanitizer](../sanitizers/asan.md) in the `ASAN_OPTIONS` environment variable. Format: flag1=value:flag2=value2.
- `buildCommandArgs`: Specifies native build switches passed to CMake after `--build --`. For example, passing `-v` when using the Ninja generator forces Ninja to output command lines. For more information on Ninja commands, see [Ninja command line arguments](#ninja).
- `buildRoot`: Specifies the directory in which CMake generates build scripts for the chosen generator.  Maps to **`-DCMAKE_BINARY_DIR`** switch and specifies where *`CMakeCache.txt`* is created. If the folder doesn't exist, it's created. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `cacheGenerationCommand`: Specifies a command-line tool and arguments, for example **`gencache.bat debug`** to generate the cache. The command is run from the shell in the specified environment for the configuration when the user explicitly requests regeneration, or a *`CMakeLists.txt`* or *`CMakeSettings.json`* file is modified.
- `cacheRoot`: Specifies the path to a CMake cache. This directory should contain an existing *`CMakeCache.txt`* file.
- `clangTidyChecks`: comma-separated list of warnings that's passed to clang-tidy; wildcards are allowed and a '-' prefix removes checks.
- `cmakeCommandArgs`: Specifies any extra command-line options to pass to CMake when invoked to generate the project files.
- `cmakeToolchain`: Specifies the toolchain file. It's passed to CMake using `-DCMAKE_TOOLCHAIN_FILE`.
- `codeAnalysisRuleset`: Specifies the ruleset to use when running code analysis. You can use a full path or the filename of a ruleset file installed by Visual Studio.
- `configurationType`: Specifies the build type configuration for the selected generator. May be one of:

  - `Debug`
  - `Release`
  - `MinSizeRel`
  - `RelWithDebInfo`
  
- `ctestCommandArgs`: Specifies any extra command-line options to pass to CTest when running the tests.
- `description`: The description of this configuration that appears in menus.
- `enableClangTidyCodeAnalysis`: Use Clang-Tidy for code analysis.
- `enableMicrosoftCodeAnalysis`: Use Microsoft code analysis tools for code analysis.
- `generator`: Specifies the CMake generator to use for this configuration. May be one of:
  
  **Visual Studio 2019 only:**
  - `Visual Studio 16 2019`
  - `Visual Studio 16 2019 Win64`
  - `Visual Studio 16 2019 ARM`

  **Visual Studio 2017 and later:**
  - `Visual Studio 15 2017`
  - `Visual Studio 15 2017 Win64`
  - `Visual Studio 15 2017 ARM`
  - `Visual Studio 14 2015`
  - `Visual Studio 14 2015 Win64`
  - `Visual Studio 14 2015 ARM`
  - `Unix Makefiles`
  - `Ninja`

Because Ninja is designed for fast build speeds instead of flexibility and function, it's set as the default. However, some CMake projects may be unable to correctly build using Ninja. If a build failure occurs, you can instruct CMake to generate Visual Studio projects instead.

To specify a Visual Studio generator in Visual Studio 2017, open the settings editor from the main menu by choosing **CMake | Change CMake Settings**. Delete "Ninja" and enter "V". This change activates IntelliSense, which lets you choose the generator you want.

To specify a Visual Studio generator in Visual Studio 2019, right-click on the *`CMakeLists.txt`* file in **Solution Explorer** and choose **CMake Settings for project** > **Show Advanced Settings** > **CMake Generator**.

By default, when the active configuration specifies a Visual Studio generator, it invokes MSBuild with `-m -v:minimal` arguments. To customize the build, use the `buildCommandArgs` property inside the  *`CMakeSettings.json`* file. Here, you can specify [MSBuild command line arguments](../build/reference/msbuild-visual-cpp-overview.md) to pass to the build system:

```json
"buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
```

- `installRoot`: Specifies the directory in which CMake generates install targets for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `inheritEnvironments`: Specifies one or more compiler environments that this configuration depends on. May be any custom environment or one of the predefined environments. For more information, see [Environments](#environments).
- `intelliSenseMode`: Specifies the mode used for computing intellisense information". The value may be one of:

  - `windows-msvc-x86`
  - `windows-msvc-x64`
  - `windows-msvc-arm`
  - `windows-msvc-arm64`
  - `android-clang-x86`
  - `android-clang-x64`
  - `android-clang-arm`
  - `android-clang-arm64`
  - `ios-clang-x86`
  - `ios-clang-x64`
  - `ios-clang-arm`
  - `ios-clang-arm64`
  - `windows-clang-x86`
  - `windows-clang-x64`
  - `windows-clang-arm`
  - `windows-clang-arm64`
  - `linux-gcc-x86`
  - `linux-gcc-x64`
  - `linux-gcc-arm`

- `name`: names the configuration. For more information about the pre-defined configurations, see [CMake predefined configuration reference](cmake-predefined-configuration-reference.md).
- `wslPath`: the path to the launcher of an instance of Windows Subsystem for Linux.

### <a name="settings-for-cmake-linux"></a> Settings for CMake Linux projects

- `remoteMachineName`: Specifies the name of the remote Linux machine that hosts CMake, builds, and the debugger. Use the Connection Manager for adding new Linux machines. Supported macros include `${defaultRemoteMachineName}`.
- `remoteCopySourcesOutputVerbosity`: Specifies the verbosity level of the source copying operation to the remote machine. May be one of `Normal`, `Verbose`, or `Diagnostic`.
- `remoteCopySourcesConcurrentCopies`: Specifies the concurrent copies to use during synchronization of the sources to the remote machine (sftp only).
- `remoteCopySourcesMethod`: Specifies the method to copy files to the remote machine. May be `rsync` or `sftp`.
- `remoteCMakeListsRoot`: Specifies the directory on the remote machine that contains the CMake project. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, and `${env.VARIABLE}`.
- `remoteBuildRoot`: Specifies the directory on the remote machine in which CMake generates build scripts for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteInstallRoot`: Specifies the directory on the remote machine in which CMake generates install targets for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, and `${env.VARIABLE}`, where `VARIABLE` is an environment variable that's been defined at the system, user, or session level.
- `remoteCopySources`: A `boolean` that specifies whether Visual Studio should copy source files to the remote machine. The default is true. Set to false if you manage file synchronization yourself.
- `remoteCopyBuildOutput`: A `boolean` that specifies whether to copy the build outputs from the remote system.
- `remoteCopyAdditionalIncludeDirectories`: Additional include directories to be copied from the remote machine to support IntelliSense. Format as "/path1;/path2...".
- `remoteCopyExcludeDirectories`: Include directories NOT to copy from the remote machine. Format as "/path1;/path2...".
- `remoteCopyUseCompilerDefaults`: Specifies whether to use the compiler's default defines and include paths for IntelliSense. Should only be false if the compilers in use to not support gcc-style arguments.
- `rsyncCommandArgs`: Specifies a set of command-line options passed to rsync.
- `remoteCopySourcesExclusionList`: An `array` that specifies a list of paths to be excluded when copying source files: a path can be the name of a file/directory, or a relative path from the root of the copy. Wildcards `*` and `?` can be used for glob pattern matching.
- `cmakeExecutable`: Specifies the full path to the CMake program executable, including the file name and extension.
- `remotePreGenerateCommand`: Specifies the command to run before running CMake to parse the *`CMakeLists.txt`* file.
- `remotePrebuildCommand`: Specifies the command to run on the remote machine before building.
- `remotePostbuildCommand`: Specifies the command to run on the remote machine after building.
- `variables`: Contains a name-value pair of CMake variables that get passed as **`-D name=value`** to CMake. If your CMake project build instructions specify the addition of any variables directly to the *`CMakeCache.txt`* file, we recommend you add them here instead. This example shows how to specify the name-value pairs to use the 14.14.26428 MSVC toolset:

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

If you don't define the `"type"`, the `"STRING"` type is assumed by default.

- `remoteCopyOptimizations`: **Visual Studio 2019 version 16.5 or later** properties for controlling source copy to the remote target. Optimizations are enabled by default. Includes `remoteCopyUseOptimizations`, `rsyncSingleDirectoryCommandArgs`, and `remoteCopySourcesMaxSmallChange`.

## <a name="environments"></a> Environments

An *environment* encapsulates the environment variables set in the process that Visual Studio uses to invoke CMake. For MSVC projects, it captures the variables set in a [developer command prompt](building-on-the-command-line.md) for a specific platform. For example, the `msvc_x64_x64` environment is the same as running the **Developer Command Prompt for VS {version}** with the **-arch=amd64 -host_arch=amd64** arguments. You can use the `env.{<variable_name>}` syntax in *`CMakeSettings.json`* to reference the individual environment variables, for example to construct paths to folders.  The following predefined environments are provided:

- `linux_arm`: Target ARM Linux remotely.
- `linux_x64`: Target x64 Linux remotely.
- `linux_x86`: Target x86 Linux remotely.
- `msvc_arm`: Target ARM Windows with the MSVC compiler.
- `msvc_arm_x64`: Target ARM Windows with the 64-bit MSVC compiler.
- `msvc_arm64`: Target ARM64 Windows with the MSVC compiler.
- `msvc_arm64_x64`: Target ARM64 Windows with the 64-bit MSVC compiler.
- `msvc_arm64ec`: Target ARM64EC Windows with the MSVC compiler.
- `msvc_arm64ec_x64`: Target ARM64EC Windows with the 64-bit MSVC compiler.
- `msvc_x64`: Target x64 Windows with the MSVC compiler.
- `msvc_x64_x64`: Target x64 Windows with the 64-bit MSVC compiler.
- `msvc_x86`: Target x86 Windows with the MSVC compiler.
- `msvc_x86_x64`: Target x86 Windows with the 64-bit MSVC compiler.

### Accessing environment variables from *`CMakeLists.txt`*

From a *`CMakeLists.txt`* file, all environment variables are referenced by the syntax `$ENV{variable_name}`. To see the available variables for an environment, open the corresponding command prompt and type `SET`. Some of the information in environment variables is also available through CMake system introspection variables, but you may find it more convenient to use the environment variable. For example, you can easily retrieve the MSVC compiler version or Windows SDK version through the environment variables.

### Custom environment variables

In  *`CMakeSettings.json`*, you can define custom environment variables globally or per-configuration in the `environments` array. A custom environment is a convenient way to group a set of properties. You can use it in place of a predefined environment, or to extend or modify a predefined environment. Each item in the `environments` array consists of:

- `namespace`: Names the environment so that its variables can be referenced from a configuration in the form `namespace.variable`. The default environment object is called `env` and is populated with certain system environment variables including `%USERPROFILE%`.
- `environment`: Uniquely identifies this group of variables. Allows the group to be inherited later in an `inheritEnvironments` entry.
- `groupPriority`: An integer that specifies the priority of these variables when evaluating them. Higher number items are evaluated first.
- `inheritEnvironments`: An array of values that specify the set of environments that are inherited by this group. This feature lets you inherit default environments and create custom environment variables to pass to CMake when it runs.

**Visual Studio 2019 version 16.4 and later:** Debug targets are automatically launched with the environment you specify in *`CMakeSettings.json`*. You can override or add environment variables on a per-target or per-task basis in [`launch.vs.json`](launch-vs-schema-reference-cpp.md) and [`tasks.vs.json`](tasks-vs-json-schema-reference-cpp.md).

The following example defines one global variable, `BuildDir`, which is inherited in both the x86-Debug and x64-Debug configurations. Each configuration uses the variable to specify the value for the `buildRoot` property for that configuration. Note also how each configuration uses the `inheritEnvironments` property to specify a variable that applies only to that configuration.

```json
{
  // The "environments" property is an array of key-value pairs of the form
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
          // This environment does not specify a namespace, hence by default "env" is assumed.
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

The following macros can be used in *`CMakeSettings.json`*:

- `${workspaceRoot}` – the full path of the workspace folder
- `${workspaceHash}` – hash of workspace location; useful for creating a unique identifier for the current workspace (for example, to use in folder paths)
- `${projectFile}` – the full path of the root *`CMakeLists.txt`* file
- `${projectDir}` – the full path of the folder containing the root *`CMakeLists.txt`* file
- `${projectDirName}` – the name of the folder containing the root *`CMakeLists.txt`* file
- `${thisFile}` – the full path of the  *`CMakeSettings.json`* file
- `${name}` – the name of the configuration
- `${generator}` – the name of the CMake generator used in this configuration

All references to macros and environment variables in *`CMakeSettings.json`* are expanded before being passed to the CMake command line.

## <a name="ninja"></a> Ninja command-line arguments

If targets are unspecified, Ninja builds the 'default' target.

```cmd
C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise>ninja -?
ninja: invalid option -- `-?'
usage: ninja [options] [targets...]
```

| Option | Description |
|--|--|
| `--version` | Print ninja version ("1.7.1") |
| `-C DIR` | Change to DIR before doing anything else |
| `-f FILE` | Specify input build file (default=*`build.ninja`*) |
| `-j N` | Run `N` jobs in parallel (default=14, derived from CPUs available) |
| `-k N` | Keep going until `N` jobs fail (default=1) |
| `-l N` | Don't start new jobs if the load average is greater than `N` |
| `-n` | Dry run (don't run commands but act like they succeeded) |
| `-v` | Show all command lines while building |
| `-d MODE` | Enable debugging (use `-d list` to list modes) |
| `-t TOOL` | Run a subtool (use `-t list` to list subtools). Ends any top-level options; further flags are passed to the tool |
| `-w FLAG` | Adjust warnings (use `-w list` to list warnings) |

::: moniker-end
