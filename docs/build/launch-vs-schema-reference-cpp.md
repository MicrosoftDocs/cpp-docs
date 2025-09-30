---
title: "launch.vs.json schema reference (C++)"
description: "Describes the schema elements for the `launch.vs.json` file"
ms.date: 07/15/2021
helpviewer_keywords: ["launch.vs.json file [C++]"]
---
# `launch.vs.json` schema reference (C++)

In Visual Studio 2017 and later versions, you can open and build code from nearly any directory-based project without requiring a solution or project file. When there's no project or solution file, you can specify custom build tasks and launch parameters through JSON configuration files. This article describes the `launch.vs.json` file, which specifies debugging parameters. For more information about the "Open Folder" feature, see [Develop code in Visual Studio without projects or solutions](/visualstudio/ide/develop-code-in-visual-studio-without-projects-or-solutions).

To create the file, right-click on an executable file in **Solution Explorer** and choose **Debug and Launch Settings**. Choose the option that most closely matches your project and then use the following properties to modify the configuration as needed. For more information on debugging CMake projects, see [Configure CMake debugging sessions](./configure-cmake-debugging-sessions.md).

## Default properties

| Property | Type | Description |
|--|--|--|
| `args` | array | Specifies the command-line arguments passed to the launched program. |
| `buildConfigurations` | array | A key-value pair that specifies the name of the build mode to apply the configurations. For example, `Debug` or `Release` and the configurations to use according to the selected build mode. |
| `currentDir` | string | Specifies the full directory path to the Build Target. The directory is detected automatically unless this parameter is set. |
| `cwd` | string | Full path to the directory on the remote system where the program will run. Defaults to `"${debugInfo.defaultWorkingDirectory}"` |
| `debugType` | string | Specifies the debugging mode according to the type of code (native, managed, or mixed). The mode is automatically detected unless this parameter is set. Allowed values: `"native"`, `"managed"`, `"mixed"`. |
| `env` | array | Specifies a key-value list of custom environment variables. For example: `env:{"myEnv":"myVal"}`. |
| `inheritEnvironments` | array | Specifies a set of environment variables inherited from multiple sources. You can define some variables in files like *`CMakeSettings.json`* or *`CppProperties.json`* and make them available to debug context.  **Visual Studio 16.4:** Specify environment variables on a per-target basis using the `env.VARIABLE_NAME` syntax. To unset a variable, set it to `"null"`. |
| `name` | string | Specifies the name of the entry in the **Startup Item** dropdown. |
| `noDebug` | boolean | Specifies whether to debug the launched program. The default value for this parameter is **`false`** if not specified. |
| `portName` | string | Specifies the name of port when attaching to a running process. |
| `program` | string | The debug command to execute. Defaults to `"${debugInfo.fullTargetPath}"`. |
| `project` | string | Specifies the relative path to the project file. Normally, you don't need to change this value when debugging a CMake project. |
| `projectTarget` | string | Specifies the optional target invoked when building `project`. The target must match the name in the **Startup Item** dropdown. |
| `stopOnEntry` | boolean | Specifies whether to break a soon as the process is launched and the debugger attaches. The default value for this parameter is **`false`**. |
| `remoteMachine` | string | Specifies the name of the remote machine where the program is launched. |
| `type` | string | Specifies whether the project is a `dll` or `exe` Defaults to .exe |

## C++ Linux properties

| Property | Type | Description |
|--|--|--|
| `program` | string | Full path to program executable on the remote machine. When using CMake, the macro `${debugInfo.fullTargetPath}` can be used as the value of this field. |
| `processId` | integer | Optional process ID to attach the debugger to. |
| `sourceFileMap` | object | Optional source file mappings passed to the debug engine. Format: `{ "\<Compiler source location>": "\<Editor source location>" }` or `{ "\<Compiler source location>": { "editorPath": "\<Editor source location>", "useForBreakpoints": true } }`. Example: `{ "/home/user/foo": "C:\\foo" }` or `{ "/home/user/foo": { "editorPath": "c:\\foo", "useForBreakpoints": true } }`. For more information, see [Source file map options](#source_file_map_options). |
| `additionalProperties` | string | One of the sourceFileMapOptions. (See below.) |
| `MIMode` | string | Indicates the type of MI-enabled console debugger that the MIDebugEngine will connect to. Allowed values are `"gdb"`, `"lldb"`. |
| `args` | array | Command-line arguments passed to the program. |
| `environment` | array | Environment variables to add to the environment for the program. Example: `[ { "name": "squid", "value": "clam" } ]`. |
| `targetArchitecture` | string | The architecture of the debuggee. The architecture is detected automatically unless this parameter is set. Allowed values are `x86`, `arm`, `arm64`, `mips`, `x64`, `amd64`, `x86_64`. |
| `visualizerFile` | string | The .natvis file to be used when debugging this process. This option isn't compatible with GDB pretty printing. See `"showDisplayString"` if you use this setting. |
| `showDisplayString` | boolean | When a visualizerFile is specified, `showDisplayString` will enable the display string. Turning on this option can slow performance during debugging. |
| `remoteMachineName` | string | The remote Linux machine that hosts gdb and the program to debug. Use the Connection Manager for adding new Linux machines. When using CMake, the macro `${debugInfo.remoteMachineName}` can be used as the value of this field. |
| `miDebuggerPath` | string | The path to the MI-enabled debugger (such as gdb). When unspecified, it will search PATH first for the debugger. |
| `miDebuggerServerAddress` | string | Network address of the MI-enabled debugger server to connect to. Example: `"localhost:1234"`. |
| `setupCommands` | array | One or more GDB/LLDB commands to execute to set up the underlying debugger. Example: `"setupCommands": [ { "text": "-enable-pretty-printing", "description": "Enable GDB pretty printing", "ignoreFailures": true }]`. For more information, see [Launch setup commands](#launch_setup_commands). |
| `customLaunchSetupCommands` | array | If provided, this value replaces the default commands used to launch a target with some other commands. For example, use "-target-attach" to attach to a target process. An empty command list replaces the launch commands with nothing, which can be useful if the debugger is being provided launch options as command-line options. Example: `"customLaunchSetupCommands": [ { "text": "target-run", "description": "run target", "ignoreFailures": false }]`. |
| `launchCompleteCommand` | string | The command to execute after the debugger is fully set up, to cause the target process to run. Allowed values are "exec-run", "exec-continue", "None". The default value is "exec-run". |
| `debugServerPath` | string | Optional full path to debug server to launch. Defaults to null. |
| `debugServerArgs` | string | Optional debug server args. Defaults to null. |
| `filterStderr` | boolean | Search stderr stream for server-started pattern and log stderr to debug output. Defaults to **`false`**. |
| `coreDumpPath` | string | Optional full path to a core dump file for the specified program. Defaults to null. |
| `externalConsole` | boolean | If true, a console is launched for the debuggee. If **`false`**, no console is launched. The default for this setting is **`false`**. This option is ignored in some cases for technical reasons. |
| `pipeTransport` | string | When present, this value tells the debugger to connect to a remote computer using another executable as a pipe that will relay standard input/output between Visual Studio and the MI-enabled debugger (such as gdb). Allowed values: one or more [Pipe Transport Options](#pipe_transport_options). |

## debugInfo macros

The following macros provide information about the debugging environment. They're useful for customizing the launch of your app for debugging.

| Macro | Description | Example |
|--|--|--|
| `addressSanitizerRuntimeFlags` | Runtime flags used to customize behavior of the address sanitizer. Used to set the environment variable `"ASAN_OPTIONS"`. | `"env": {"ASAN_OPTIONS": "${addressSanitizerRuntimeFlags}:anotherFlag=true"`} |
| `defaultWorkingDirectory` | Set to the directory part of `"fullTargetPath"`. If the CMake variable `VS_DEBUGGER_WORKING_DIRECTORY` is defined, then `defaultWorkingDirectory` is set to that value, instead. | `"cwd":"${debugInfo.defaultWorkingDirectory}"` |
| `fullTargetPath` | The full path to the binary being debugged. | `"program": "${debugInfo.fullTargetPath}"` |
| `linuxNatvisPath` | The full windows path to the VS linux `.natvis` file. Usually appears as the value `"visualizerFile"`. | |
| `parentProcessId` | The process ID for the current Visual Studio instance. Used as a parameter to shellexec. | See pipeTransport example below. |
| `remoteMachineId` | A unique, numeric identifier for the connection to the remote machine. Used as a parameter to shellexec. | See pipeTransport example below. |
| `remoteWorkspaceRoot` | Linux path to the remote copy of the workspace. | Specify file locations on the remote machine. For example: `"args": ["${debugInfo.remoteWorkspaceRoot}/Data/MyInputFile.dat"]` |
| `resolvedRemoteMachineName` | The name of the target remote machine. | `"targetMachine"` value in a deployment directive |
| `shellexecPath` | The path to the shellexec program that Visual Studio is using to manage the remote machine connection. | See pipeTransport example below |
| `tty` | gdb will redirect input and output to this device for the program being debugged. Used as a parameter to gdb (-tty). | See pipeTransport example below. |
| `windowsSubsystemPath` | The full path to the Windows Subsystem for Linux instance. | |

The pipeTransport example below shows how to use some of the `debugInfo` macros defined above:

```json
"pipeTransport": {
    "pipeProgram": "${debugInfo.shellexecPath}",
    "pipeArgs": [
        "/s",
        "${debugInfo.remoteMachineId}",
        "/p",
        "${debugInfo.parentProcessId}",
        "/c",
        "${debuggerCommand}",
        "--tty=${debugInfo.tty}"
    ],
    "pipeCmd": [
        "/s",
        "${debugInfo.remoteMachineId}",
        "/p",
        "${debugInfo.parentProcessId}",
        "/c",
        "${debuggerCommand}"
    ]
    }
```

## <a name="remote_deploy_debug"></a> C++ Windows remote debug and deploy properties

Used when debugging and deploying an app on a remote machine.

| Property | Type | Description |
|--|--|--|
| `cwd` | string | The working directory of the target on the remote machine. When using CMake, the macro `${debugInfo.defaultWorkingDirectory}` can be used as the value of this field. The default value is the directory of the debug program/command. |
| `deploy` | string | Specifies extra files or directories to deploy. For example:<br> `"deploy": {"sourcePath":"<Full path to source file/directory on host machine>", "targetPath":"<Full destination path to file/directory on target machine>"}` |
| `deployDirectory` | string | The location on the remote machine where project outputs are automatically deployed to. Defaults to "`C:\Windows Default Deploy Directory\<name of app>` |
| `deployDebugRuntimeLibraries` | string | Specifies whether to deploy the debug runtime libraries for the active platform. Defaults to `"true"` if the active configurationType is `"Debug"` |
| `deployRuntimeLibraries` | string | Specifies whether to deploy the runtime libraries for the active platform. Defaults to `"true"` if the active configurationType is `"MinSizeRel"`, `"RelWithDebInfo"`, or `"Release"`. |
| `disableDeploy` | boolean | Specifies whether files should be deployed. |
| `remoteMachineName` | string | Specifies the name of the remote ARM64 Windows machine where the program is launched. May be the server name or the remote machine's IP address. |
| `authenticationType` | string | Specifies the type of remote connection. Possible values are `"windows"` and `"none"`. The default is `"windows"`. This value should match the authentication setting specified on the remote debugger that is running on the remote machine. |

## <a name="launch_setup_commands"></a> Launch setup commands

Used with the `setupCommands` property:

| Property | Type | Description |
|--|--|--|
| `text` | string | The debugger command to execute. |
| `description` | string | Optional description for the command. |
| `ignoreFailures` | boolean | If true, failures from the command should be ignored. Defaults to **`false`**. |

## <a name = "pipe_transport_options"></a> Pipe transport options

Used with the `pipeTransport` property:

| Property | Type | Description |
|--|--|--|
| `pipeCwd` | string | The fully qualified path to the working directory for the pipe program. |
| `pipeProgram` | string | The fully qualified pipe command to execute. |
| `pipeArgs` | array | Command-line arguments passed to the pipe program to configure the connection. |
| `debuggerPath` | string | The full path to the debugger on the target machine, for example /usr/bin/gdb. |
| `pipeEnv` | object | Environment variables passed to the pipe program. |
| `quoteArgs` | boolean | If individual arguments contain characters (such as spaces or tabs), should it be quoted? If **`false`**, the debugger command will no longer be automatically quoted. Default is **`true`**. |

## <a name="source_file_map_options"></a> Source file map options

Use with the `sourceFileMap` property:

| Property | Type | Description |
|--|--|--|
| `editorPath` | string | The location of the source code for the editor to locate. |
| `useForBreakpoints` | boolean | When setting breakpoints, this source mapping should be used. If **`false`**, only the filename and line number is used for setting breakpoints. If **`true`**, breakpoints will be set with the full path to the file and line number only when this source mapping is used. Otherwise just filename and line number will be used when setting breakpoints. Default is **`true`**. |
