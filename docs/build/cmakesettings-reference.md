---
title: "CMakeSettings.json schema reference"
ms.date: "05/16/2019"
helpviewer_keywords: ["CMake in Visual C++"]
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
---
# CMakeSettings.json schema reference

The **cmakesettings.json**` file contains information that specifies how Visual Studio should interact with CMake to build a project for a specified platform. The file stores information such as environment variables or arguments for the cmake.exe environment. You can edit directly or use the **CMake Settings editor** (Visual Studio 2019 and later). See [Customize CMake build settings in Visual Studio](customize-cmake-settings.md) for more information about the editor.

## Environments

The `environments` array contains a list of `items` of type `object` which define a compiler toolset "environment." An environment may be used to apply a set of variables to a `configuration`. Each item in the `environments` array consists of:

- `namespace`: names the environment so that its variables can be referenced from a configuration in the form `namespace.variable`. The default environment  object is called `env` and is populated with certain system environment variables including `%USERPROFILE%`.
- `environment`: uniquely identifies this group of variables. Allows the group to be inherited later in an `inheritEnvironments` entry.
- `groupPriority`: An integer that specifies the priority of these variables when evaluating them. Higher number items are evaluated first.
- `inheritEnvironments`: An array of values that specify the set of environments that are inherited by this group. This feature enables you to inherit default environments and create custom environment variables that are passed to CMake.exe when it runs.

   ```json
   "inheritEnvironments": [ "msvc_x64_x64" ]
   ```

   The example above is the same as running the **Developer Command Prompt for VS 2017** or **Developer Command Prompt for VS 2019** with the **-arch=amd64 -host_arch=amd64** arguments. Any custom environment can be used, or these predefined environments:
 
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

Because Ninja is designed for fast build speeds instead of flexibility and function, it is set as the default. However, some CMake projects may be unable to correctly build using Ninja. If this occurs, you can instruct CMake to generate a Visual Studio project instead.

To specify a Visual Studio generator in Visual Studio 2017, open the  `CMakeSettings.json` from the main menu by choosing **CMake | Change CMake Settings**. Delete “Ninja” and type “V”. This activates IntelliSense, which enables you to choose the generator you want.

To specify a Visual Studio generator in Visual Studio 2019, right-click on the CMakeLists.txt file in **Solution Explorer** and choose **CMake Settings for project** > **Show Advanced Settings** > **Cmake Generator**.

When the active configuration specifies a Visual Studio generator, by default MSBuild.exe is invoked with `-m -v:minimal` arguments. To customize the build, inside the  `CMakeSettings.json` file, you can specify additional [MSBuild command line arguments](../build/reference/msbuild-visual-cpp-overview.md) to be passed to the build system via the `buildCommandArgs` property:

   ```json
   "buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
   ```

- `configurationType`: specifies the build type configuration for the selected generator. May be one of:
 
  - Debug
  - Release
  - MinSizeRel
  - RelWithDebInfo
 
- `inheritEnvironments`: specifies one or more compiler environments that this configuration depends on. May be any custom environment or one of the predefined environments.
- `buildRoot`:  specifies the directory in which CMake generates build scripts for the chosen generator.  Maps to **-DCMAKE_BINARY_DIR** switch and specifies where the CMake cache will be created. If the folder does not exist, it is created.Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `installRoot`: specifies the directory in which CMake generates install targets for the chosen generator. Supported macros include `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `cmakeCommandArgs`: specifies additional command-line options passed to CMake when invoked to generate the cache.
- `cmakeToolchain`: specifies the toolchain file. This is passed to CMake using -DCMAKE_TOOLCHAIN_FILE."
- `buildCommandArgs`: specifies native build switches passed to CMake after --build --. For example, passing -v when using the Ninja generator forces Ninja to output command lines. See [Ninja command line arguments](#ninja) for more information on Ninja commands.
- `ctestCommandArgs`: specifies additional command-line options passed to CTest when running the tests."
- `codeAnalysisRuleset`: specifies the ruleset to use when running code analysis. This can be a full path or the file name of a ruleset file installed by Visual Studio.
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

### Additional settings for CMake Linux projects. 

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
- `variables`: contains a name-value pair of CMake variables that will get passed as **-D** *_name_=_value_* to CMake. If your CMake project build instructions specify the addition of any variables directly to the CMake cache file, it is recommended that you add them here instead. The following example shows how to specify the name-value pairs for the 14.14.26428 MSVC toolset:

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

Note that if you do not define the `"type"`, the "STRING" type will be assumed by default.

## Environment variables

`CMakeSettings.json` also supports consuming environment variables in any of its properties mentioned above. The syntax to use is `${env.FOO}` to expand the environment variable %FOO%.

You also have access to built-in macros inside this file:

- `${workspaceRoot}` – provides the full path of the workspace folder
- `${workspaceHash}` – hash of workspace location; useful for creating a unique identifier for the current workspace (for example, to use in folder paths)
- `${projectFile}` – the full path of the root CMakeLists.txt file
- `${projectDir}` – the full path of the folder of the root CMakeLists.txt file
- `${thisFile}` – the full path of the  `CMakeSettings.json` file
- `${name}` – the name of the configuration
- `${generator}` – the name of the CMake generator used in this configuration


### Custom environment variables

In  `CMakeSettings.json`, you can define custom environment variables globally or per-configuration in the **environments** property. The following example defines one global variable, **BuildDir**, which is inherited in both the x86-Debug and x64-Debug configurations. Each configuration uses the variable to specify the value for the **buildRoot** property for that configuration. Note also how each configuration uses the **inheritEnvironments** property to specify a variable that applies only to that configuration.

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
      // Since this configuration doesn’t modify BuildDir, it inherits
      // from the one defined globally.
      "buildRoot": "${env.BuildDir}\\${name}"
    }
  ]
}
```

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




