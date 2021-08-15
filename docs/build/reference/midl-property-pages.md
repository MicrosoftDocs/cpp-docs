---
description: "Learn more about: MIDL Property Pages"
title: "MIDL Compiler Property Pages"
ms.date: "07/24/2019"
ms.topic: "article"
ms.assetid: 57498a01-fccc-4a0e-a036-6ff702f83126
f1_keywords:
  - VC.Project.VCMidlTool.PreprocessorDefinitions
  - VC.Project.VCMidlTool.AdditionalIncludeDirectories
  - VC.Project.VCMidlTool.AdditionalMetadataDirectories
  - VC.Project.VCMidlTool.IgnoreStandardIncludePath
  - VC.Project.VCMidlTool.IgnoreStandardIncludePath
  - VC.Project.VCMidlTool.MkTypLibCompatible
  - VC.Project.VCMidlTool.WarningLevel
  - VC.Project.VCMidlTool.WarnAsError
  - VC.Project.VCMidlTool.SuppressStartupBanner
  - VC.Project.VCMidlTool.DefaultCharType
  - VC.Project.VCMidlTool.TargetEnvironment
  - VC.Project.VCMidlTool.GenerateStublessProxies
  - VC.Project.VCMidlTool.SuppressCompilerWarnings
  - VC.Project.VCMidlTool.ApplicationConfigurationMode
  - VC.Project.VCMidlTool.LocaleID
  - VC.Project.VCMidlTool.MultiProcMIDL
  - VC.Project.VCMidlTool.OutputDirectory
  - VC.Project.VCMidlTool.WinmdFileName
  - VC.Project.VCMidlTool.HeaderFileName
  - VC.Project.VCMidlTool.DLLDataFileName
  - VC.Project.VCMidlTool.InterfaceIdentifierFileName
  - VC.Project.VCMidlTool.ProxyFileName
  - VC.Project.VCMidlTool.GenerateTypeLibrary
  - VC.Project.VCMidlTool.TypeLibraryName
  - VC.Project.VCMidlTool.GenerateClientFiles
  - VC.Project.VCMidlTool.GenerateServerFiles
  - VC.Project.VCMidlTool.ClientStubFile
  - VC.Project.VCMidlTool.ServerStubFile
  - VC.Project.VCMidlTool.TypeLibFormat
  - VC.Project.VCMidlTool.CPreprocessOptions
  - VC.Project.VCMidlTool.UndefinePreprocessorDefinitions
  - VC.Project.VCMidlTool.EnableErrorChecks
  - VC.Project.VCMidlTool.ErrorCheckAllocations
  - VC.Project.VCMidlTool.ErrorCheckBounds
  - VC.Project.VCMidlTool.ErrorCheckEnumRange
  - VC.Project.VCMidlTool.ErrorCheckRefPointers
  - VC.Project.VCMidlTool.ErrorCheckStubData
  - VC.Project.VCMidlTool.PreendWithABINamepsace
  - VC.Project.VCMidlTool.ValidateParameters
  - VC.Project.VCMidlTool.StructMemberAlignment
  - VC.Project.VCMidlTool.RedirectOutputAndErrors
  - VC.Project.VCMidlTool.MinimumTargetSystem
  - vc.project.AdditionalOptionsPage
---
# MIDL Property Pages

The MIDL property pages are available as an item property on an .IDL file in a C++ project that uses COM. Use them to configure the [MIDL Compiler](/windows/win32/midl/using-the-midl-compiler-2). For information on how to programmatically access MIDL options for C++ projects, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCMidlTool> object. See also [General MIDL Command-line Syntax](/windows/win32/midl/general-midl-command-line-syntax).

## General Property Page

### Preprocessor Definitions

Specifies one or more defines, including MIDL macros ([/D](/windows/win32/midl/-d))\[macros\]).

### Additional Include Directories

Specifies one or more directories to add to the include path ([/I](/windows/win32/midl/-i)\[path\]).

### Additional Metadata Directories

Specify the directory containing the Windows.Foundation.WinMD file ([/metadata_dir](/windows/win32/midl/-metadata-dir) \[path\]).

### Enable Windows Runtime

Enable Windows Runtime semantics to create Windows metadata file ([/winrt](/windows/win32/midl/-winrt)).

### Ignore Standard Include Path

Ignore the current and the INCLUDE directories ([/no_def_idir](/windows/win32/midl/-no-def-idir)).

### MkTypLib Compatible

Forces compatibility with mktyplib.exe version 2.03 ([/mktyplib203](/windows/win32/midl/-mktyplib203)).

### Warning Level

Selects the strictness of the MIDL code errors ([/W](/windows/win32/midl/-w)).

**Choices**

- **1**
- **1**
- **2**
- **3**
- **4**

### Treat Warnings as Errors

Enables MIDL to treat all warnings as errors ([/WX](/windows/win32/midl/-wx)).

### Suppress Startup Banner

Suppress the display of the startup banner and information message ([/nologo](/windows/win32/midl/-nologo)).

### C Compiler Char Type

Specifies the default character type of the C compiler that will be used to compile the generated code. ([/char](/windows/win32/midl/-char) signed|unsigned|ascii7).

**Choices**

- **Signed** - Signed
- **Unsigned** - Unsigned
- **Ascii** - Ascii

### Target Environment

Specifies which environment to target ([/env](/windows/win32/midl/-env) arm32|win32|ia64|x64).

**Choices**

- **Not Set** - Win32
- **Microsoft Windows 32-bit** - Win32
- **Microsoft Windows 64-bit on Itanium** - IA64
- **Microsoft Windows ARM** - ARM
- **Microsoft Windows ARM64** - ARM64
- **Microsoft Windows 64-bit on x64** - X64

### Generate Stubless Proxies

Generate fully interpreted stubs with extensions and stubless proxies for object interfaces ([/Oicf](/windows/win32/midl/-oi), [/Oif](/windows/win32/midl/-oi) ).

### Suppress Compiler Warnings

Suppress compiler warning messages ([/no_warn](/windows/win32/midl/-no-warn)).

### Application Configuration Mode

Allow selected ACF attributes in the IDL file ([/app_config](/windows/win32/midl/-app-config)).

### Locale ID

Specifies the LCID for input files, file names and directory paths ([/lcid](/windows/win32/midl/-lcid) DECIMAL).

### Multi-Processor Compilation

Run multiple instances at the same time.

## Output Property Page

### Output Directory

Specifies the output directory ([/out](/windows/win32/midl/-out) [directory]).

### Metadata File

Specifies the name of the generated metadata file ([/winmd](/windows/win32/midl/-winmd) filename).

### Header File

Specifies the name of the generated header file ([/h](/windows/win32/midl/-h) filename).

### DllData File

Specifies the name of the DLLDATA file ([/dlldata](/windows/win32/midl/-dlldata) filename).

### IID File

Specifies the name for the Interface Identifier file ([/iid](/windows/win32/midl/-iid) filename).

### Proxy File

Specifies the name of the proxy file ([/proxy](/windows/win32/midl/-proxy) filename).

### Generate Type Library

Specify not to generate a type library ([/notlb] for no).

### Type Library

Specifies the name of the type library file ([/tlb](/windows/win32/midl/-tlb) filename).

### Generate Client Stub Files

Generate client stub file only ([/client](/windows/win32/midl/-client) [stub|none]).

**Choices**

- **Stub** - Stub
- **None** - None

### Generate Server Stub Files

Generate server stub file only ([/server](/windows/win32/midl/-server) [stub|none]).

**Choices**

- **Stub** - Stub
- **None** - None

### Client Stub File

Specify the client stub file ([/cstub](/windows/win32/midl/-cstub) [file]).

### Server Stub File

Specify the server stub file ([/sstub](/windows/win32/midl/-sstub) [file]).

### Type Library Format

Specifies the type library file format ([/oldtlb|/newtlb]).

**Choices**

- **NewFormat** - New Format
- **OldFormat** - Old Format

## Advanced Property Page

### C Preprocess Options

Specifies switches to pass to C compiler preprocessor ([/cpp_opt](/windows/win32/midl/-cpp-opt) switches).

### Undefine Preprocessor Definitions

Specifies one or more undefines, including MIDL macros ([/U](/windows/win32/midl/-U)  [macros]).

### Enable Error Checking

Select error checking option ([/error all|none]).

**Choices**

- **EnableCustom** - All
- **All** - All
- **None** - None

### Check Allocations

Check for out of memory errors ([/error](/windows/win32/midl/-error) allocation).

### Check Bounds

Check size vs transmission length specification ([/error](/windows/win32/midl/-error) bounds_check).

### Check Enum Range

Check enum values to be in allowable range ([/error](/windows/win32/midl/-error) enum).

### Check Reference Pointers

Check ref pointers to be non-null ([/error](/windows/win32/midl/-error) ref).

### Check Stub Data

Emit additional check for server side stub data validity ([/error](/windows/win32/midl/-error) stub_data).

### Prepend with 'ABI' namespace

Prepend the 'ABI' namespace to all types.  ([/ns_prefix](/windows/win32/midl/-ns-prefix)).

### Validate Parameters

Generate additional information to validate parameters ([/robust](/windows/win32/midl/-robust) | [/no_robust](/windows/win32/midl/-no-robust)).

### Struct Member Alignment

Specifies the packing level of structures in the target system (/ZpN).

**Choices**

- **Not Set** - Not Set
- **1 Byte** - Zp1
- **2 Byte** - Zp2
- **4 Byte** - Zp4
- **8 Byte** - Zp8

### Redirect Output

Redirects output from screen to a file ([/o](/windows/win32/midl/-o) file).

### Minimum Target System

Set the minimum target system ([/target](/windows/win32/midl/-target) STRING).
