---
description: "Learn more about: launch.vs.json schema reference (C++)"
title: "launch.vs.json schema reference (C++)"
ms.date: "08/20/2019"
helpviewer_keywords: ["launch.vs.json file [C++]"]
---
# launch.vs.json schema reference (C++)

Use the *launch.vs.json* file to configure debugging parameters. To create the file. right-click on an executable file in **Solution Explorer** and choose **Debug and Launch Settings**. Choose the option that most closely matches your project and then use the following properties to modify the configuration as needed. For more information on debugging CMake projects, see [Configure CMake debugging sessions](./configure-cmake-debugging-sessions.md).

## Default properties

|Property|Type|Description|
|-|-|-|
|`name`|string|Specifies the name of the entry in the Debug target dropdown.|
|`type`|string|Specifies whether the project is a dll or .exe (Defaults to .exe)|
|`project`|string|Specifies the relative path to the project file.|
|`projectTarget`|string|Specifies the optional target invoked when building `project`. This `projectTarget` must exist already and match the name in the **Debug Target** dropdown.|
|`debugType`|string|Specifies the debugging mode according to the type of code (native, managed, or mixed). This will automatically be detected unless this parameter is set. Allowed values: "native", "managed", "mixed".|
|`inheritEnvironments`|array|Specifies a set of environment variables inherited from multiple sources. You can define some variables in files like *CMakeSettings.json* or *CppProperties.json* and make them available to debug context.  **Visual Studio 16.4:**: Specify environment variables on a per-target basis using the `env.VARIABLE_NAME` syntax. To unset a variable, set it to "null".|
|`args`|array|Specifies the command-line arguments passed to the launched program.|
|`currentDir`|string|Specifies the full directory path to the Build Target. This will automatically be detected unless this parameter is set.|
|`noDebug`|boolean|Specifies whether to debug the launched program. The default value for this parameter is **`false`** if not specified.|
|`stopOnEntry`|boolean|Specifies whether to break a soon as the process is launched and the debugger attaches. The default value for this parameter is **`false`**.|
|`remoteMachine`|string|Specifies the name of the remote machine where the program is launched.|
|`env`|array| Specifies a key-value list of custom environment variables. env:{"myEnv":"myVal"}.|
|`portName`|string|Specifies the name of port when attaching to a running process.|
|`buildConfigurations`|array| A key-value pair that specifies the name of the build mode to apply the configurations. For example, `Debug` or `Release` and the configurations to use according to the selected build mode.

## C++ Linux properties

|Property|Type|Description|
|-|-|-|
|`program`|string|Full path to program executable on the remote machine. When using CMake, the macro `${debugInfo.fullTargetPath}` can be used as the value of this field.|
|`processId`|integer|Optional process ID to attach the debugger to.|
|`sourceFileMap`|object|Optional source file mappings passed to the debug engine. Format: `{ "\<Compiler source location>": "\<Editor source location>" }` or `{ "\<Compiler source location>": { "editorPath": "\<Editor source location>", "useForBreakpoints": true } }`. Example: `{ "/home/user/foo": "C:\\foo" }` or `{ "/home/user/foo": { "editorPath": "c:\\foo", "useForBreakpoints": true } }`. See [Source file map options](#source_file_map_options).|
|`additionalProperties`|string|One of the sourceFileMapOptions. (See below.)|
|`MIMode`|string|Indicates the type of MI-enabled console debugger that the MIDebugEngine will connect to. Allowed values are "gdb", "lldb".|
|`args`|array|Command-line arguments passed to the program.|
|`environment`|array|Environment variables to add to the environment for the program. Example: [ { "name": "squid", "value": "clam" } ].|
|`targetArchitecture`|string|The architecture of the debuggee. This will automatically be detected unless this parameter is set. Allowed values are x86, arm, arm64, mips, x64, amd64, x86_64.|
|`visualizerFile`|string|.natvis file to be used when debugging this process. This option is not compatible with GDB pretty printing. See "showDisplayString" if using this setting.|
|`showDisplayString`|boolean|When a visualizerFile is specified, showDisplayString will enable the display string. Turning on this option can cause slower performance during debugging.|
|`remoteMachineName`|string|The remote Linux machine that hosts gdb and the program to debug. Use the Connection Manager for adding new Linux machines. When using CMake, the macro `${debugInfo.remoteMachineName}` can be used as the value of this field.|
|`cwd`|string|The working directory of the target on the remote machine. When using CMake, the macro `${debugInfo.defaultWorkingDirectory}` can be used as the value of this field. Default value is the remote workspace root, unless overridden in the *CMakeLists.txt* file.|
|`miDebuggerPath`|string|The path to the MI-enabled debugger (such as gdb). When unspecified, it will search PATH first for the debugger.|
|`miDebuggerServerAddress`|string|Network address of the MI-enabled debugger server to connect to. Example: localhost:1234.|
|`setupCommands`|array|One or more GDB/LLDB commands to execute in order to set up the underlying debugger. Example: `"setupCommands": [ { "text": "-enable-pretty-printing", "description": "Enable GDB pretty printing", "ignoreFailures": true }]`. See [Launch setup commands](#launch_setup_commands).|
|`customLaunchSetupCommands`|array|If provided, this replaces the default commands used to launch a target with some other commands. For example, this can be "-target-attach" in order to attach to a target process. An empty command list replaces the launch commands with nothing, which can be useful if the debugger is being provided launch options as command-line options. Example: `"customLaunchSetupCommands": [ { "text": "target-run", "description": "run target", "ignoreFailures": false }]`.|
|`launchCompleteCommand`|string|The command to execute after the debugger is fully set up, to cause the target process to run. Allowed values are "exec-run", "exec-continue", "None". The default value is "exec-run".|
|`debugServerPath`|string|Optional full path to debug server to launch. Defaults to null.|
|`debugServerArgs`|string|Optional debug server args. Defaults to null.|
|`filterStderr`|boolean|Search stderr stream for server-started pattern and log stderr to debug output. Defaults to **`false`**.|
|`coreDumpPath`|string|Optional full path to a core dump file for the specified program. Defaults to null.|
externalConsole|boolean|If true, a console is launched for the debuggee. If **`false`**, no console is launched. Defaults to **`false`**. NOTE: This option is ignored in some cases for technical reasons.|
|`pipeTransport`|string|When present, this tells the debugger to connect to a remote computer using another executable as a pipe that will relay standard input/output between Visual Studio and the MI-enabled debugger (such as gdb). Allowed values: one or more [Pipe Transport Options](#pipe_transport_options).|

## <a name="launch_setup_commands"></a> Launch setup commands

Used with the `setupCommands` property:

|Property|Type|Description|
|-|-|-|
|`text`|string|The debugger command to execute.|
|`description`|string|Optional description for the command.|
|`ignoreFailures`|boolean|If true, failures from the command should be ignored. Defaults to **`false`**.|

## <a name = "pipe_transport_options"></a> Pipe transport options

Used with the `pipeTransport` property:

|Property|Type|Description|
|-|-|-|
|`pipeCwd`|string|The fully qualified path to the working directory for the pipe program.|
|`pipeProgram`|string|The fully qualified pipe command to execute.|
|`pipeArgs`|array|Command line arguments passed to the pipe program to configure the connection.|
|`debuggerPath`|string|The full path to the debugger on the target machine, for example /usr/bin/gdb.|
|`pipeEnv`|object|Environment variables passed to the pipe program.|
|`quoteArgs`|boolean|If individual arguments contain characters (such as spaces or tabs), should it be quoted? If **`false`**, the debugger command will no longer be automatically quoted. Default is **`true`**.|

## <a name="source_file_map_options"></a> Source file map options

Use with the `sourceFileMap` property:

|Property|Type|Description|
|-|-|-|
|`editorPath`|string|The location of the source code for the editor to locate.|
|`useForBreakpoints`|boolean|When setting breakpoints, this source mapping should be used. If **`false`**, only the filename and line number is used for setting breakpoints. If **`true`**, breakpoints will be set with the full path to the file and line number only when this source mapping is used. Otherwise just filename and line number will be used when setting breakpoints. Default is **`true`**.|
