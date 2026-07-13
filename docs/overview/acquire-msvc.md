---
title: "Install the Microsoft C++ (MSVC) Build Tools"
description: "Install the MSVC Build Tools using the Visual Studio Installer UI, command line, winget, or a .vsconfig file. Choose Preview, latest release, or an older in-support toolset, and target it from MSBuild, CMake, or the Visual Studio Command Prompt."
ms.date: 07/13/2026
ms.topic: how-to
ms.service: "visual-cpp"
ms.subservice: "tools"
ms.custom: intro-installation
#customer intent: As a C++ developer, I want to install a specific MSVC Build Tools version (Preview, latest release, or an older in-support release) and target it from my build system.
---
# Install the Microsoft C++ (MSVC) Build Tools

The Visual Studio Installer lets you install multiple Microsoft C++ (MSVC) Build Tools versions side by side:

- A preview version of the next MSVC Build Tools release.
- The latest released, in-support MSVC Build Tools version. This version is the default toolset used for C++ projects.
- Earlier MSVC Build Tools releases that are still in support.

Previews are updated regularly with new features and fixes. The latest release and in-support build tools receive servicing fixes, as needed, for the duration of their support lifecycle.

For details about the versioning scheme, servicing policy, and how often the latest released MSVC toolset changes, see [Microsoft C++ (MSVC) compiler versioning](compiler-versions.md). For a summary of features added in each release, see [What's new for MSVC Build Tools](what-s-new-for-msvc.md).

> [!NOTE]
> All MSVC Build Tools versions are available in both Visual Studio channels, but the Insiders channel receives updates sooner than the Stable channel. Changes applied in the MSVC development branches take one to two weeks to ship in the preview Build Tools on Visual Studio Insiders.

You can acquire MSVC through the Visual Studio Installer UI, through the Visual Studio Installer command line, or through `winget`.

## Install by using the Visual Studio Installer UI

Download the Visual Studio Installer from [visualstudio.microsoft.com/downloads](https://visualstudio.microsoft.com/downloads/) (Stable channel) or [visualstudio.microsoft.com/insiders](https://visualstudio.microsoft.com/insiders/) (Insiders channel).

In the installer, choose **Desktop development with C++** to install the latest released C++ toolset.

In the **Installation details** panel, the **MSVC Build Tools for x64/x86 (Preview)** option installs the preview tools. Similar options exist for ARM64 installs.

:::image type="content" source="media/acquire-msvc/installer-workload-desktop-cpp-msvc-preview.png" alt-text="Screenshot of the Visual Studio Installer with the Desktop development with C++ workload and the MSVC Build Tools for x64/x86 (Preview) component selected.":::

To install an older in-support toolset, select the **Individual components** tab, search for `MSVC`, and scroll to find the version you want to install. For example, **MSVC Build Tools v14.50 for x64/x86**. Out-of-support toolsets are marked as such.

:::image type="content" source="media/acquire-msvc/installer-individual-components-msvc-versions.png" alt-text="Screenshot of the Individual components tab in the Visual Studio Installer filtered to msvc, with MSVC Build Tools v14.50 for x64/x86 checked.":::

## Install by using the Visual Studio Installer from the command line

Use the Visual Studio Installer to perform a scripted, unattended install of MSVC.

**To install the latest Insiders build:**

1. Download [`vs_enterprise.exe`](https://aka.ms/vs/insiders/vs_enterprise.exe) (the same installer as above, sometimes named `VisualStudioSetup.exe`).
1. Create a `.vsconfig` file that lists the components to install. For more information, see [Create a .vsconfig file](#create-a-vsconfig-file).
1. Open an administrator Command Prompt.
1. Run the installer:

   ```cmd
   .\vs_enterprise.exe --passive --config .\.vsconfig --installPath <vs-install-dir>
   ```

1. If an earlier **Visual Studio Build Tools** installation exists on the machine, uninstall it first.

**Channel-specific installer links:**

| Channel | Command-line build tools only | Full Visual Studio |
|---|---|---|
| Insiders | [`vs_buildtools.exe`](https://aka.ms/vs/insiders/vs_buildtools.exe) | [`vs_enterprise.exe`](https://aka.ms/vs/insiders/vs_enterprise.exe) |
| Stable | [`vs_buildtools.exe`](https://aka.ms/vs/stable/vs_buildtools.exe) | [`vs_enterprise.exe`](https://aka.ms/vs/stable/vs_enterprise.exe) |

- Use the Visual Studio Installer to update or uninstall.
- For more information, see [Use command-line parameters to install, update, and manage Visual Studio](/visualstudio/install/use-command-line-parameters-to-install-visual-studio).

## Install MSVC by using winget

To install MSVC by using `winget`:

1. Create a `.vsconfig` file that lists the components to install. For more information, see [Create a .vsconfig file](#create-a-vsconfig-file).
1. Open an administrator Command Prompt.
1. Run the following script:

   ```cmd
   winget install -e --id Microsoft.VisualStudio.Enterprise.Insiders --override "--passive --config .\.vsconfig --installPath <vs-install-dir>"
   ```

**Winget install options:**

- Use `--id Microsoft.VisualStudio.BuildTools` to install the Build Tools on the Stable channel.
- Use `--id Microsoft.VisualStudio.Enterprise` to install Visual Studio Enterprise on the Stable channel.
- Use `-v <version>` to specify an exact version, for example, `-v 18.6.2`.
- Use `winget search Microsoft.VisualStudio.BuildTools --versions` to list all available versions.

## Create a .vsconfig file

A `.vsconfig` file specifies the component IDs to install. You can find component IDs in the [Visual Studio Enterprise component directory](/visualstudio/install/workload-component-id-vs-enterprise) and the [Visual Studio Build Tools component directory](/visualstudio/install/workload-component-id-vs-build-tools).

For example, in the Visual Studio Installer's **Individual components** tab, the **MSVC Build Tools v14.50 for x64/x86** component ID is `Microsoft.VisualStudio.Component.VC.14.50.18.0.x86.x64`.

The Visual Studio Installer also supports [importing or exporting installation configurations](/visualstudio/install/import-export-installation-configurations) from an existing Visual Studio installation.

The following `.vsconfig` file downloads the x86 and x64 tools for the preview toolset, the latest release, and the 14.50 release:

```json
{
  "version": "1.0",
  "components": [
    "Microsoft.VisualStudio.Component.VC.Preview.Tools.x86.x64",
    "Microsoft.VisualStudio.Component.VC.Tools.x86.x64",
    "Microsoft.VisualStudio.Component.VC.14.50.18.0.x86.x64"
  ]
}
```

This configuration installs very few dependencies. Just the compilers, runtimes, and command prompts.

A more complete installation with ARM64 tools, MFC/ATL, C++/CLI support, and a Windows SDK is:

```json
{
  "version": "1.0",
  "components": [
    "Microsoft.VisualStudio.Component.VC.Preview.Tools.x86.x64",
    "Microsoft.VisualStudio.Component.VC.Preview.ARM64",
    "Microsoft.VisualStudio.Component.VC.Preview.CLI.Support",
    "Microsoft.VisualStudio.Component.VC.Tools.x86.x64",
    "Microsoft.VisualStudio.Component.VC.Tools.ARM64",
    "Microsoft.VisualStudio.Component.VC.ATLMFC",
    "Microsoft.VisualStudio.Component.VC.CLI.Support",
    "Microsoft.VisualStudio.Component.VC.14.50.18.0.x86.x64",
    "Microsoft.VisualStudio.Component.VC.14.50.18.0.ARM64",
    "Microsoft.VisualStudio.Component.VC.14.50.18.0.CLI.Support",
    "Microsoft.VisualStudio.Component.Windows11SDK.26100"
  ]
}
```

## Use an installed MSVC toolset

Toolsets are installed under `<vs-install-dir>\VC\Tools\MSVC\<version>`.

The following files under `<vs-install-dir>\VC\Auxiliary\Build\` identify the default and preview toolsets:

- `Microsoft.VCToolsVersion.default.txt` contains the `<version>` folder of the latest in-support MSVC toolset.
- `Microsoft.VCToolsVersion.default.props` contains MSBuild properties for the in-support MSVC toolset.
- `Microsoft.VCToolsVersion.Preview.txt` contains the `<version>` folder of the MSVC preview toolset.
- `Microsoft.VCToolsVersion.Preview.props` contains MSBuild properties for the MSVC preview toolset.

After you install the toolsets, configure your projects to use the toolset you want.

### Visual Studio (MSBuild)

In the project properties, select **Configuration Properties** > **General** > **MSVC Build Tools Version** and choose a supported Build Tools version. The dropdown is populated from `<vs-install-dir>\VC\Tools\MSVC\<version>`.

:::image type="content" source="media/acquire-msvc/project-properties-msvc-build-tools-version.png" alt-text="Screenshot of C++ project property pages > General with the MSVC Build Tools Version dropdown expanded to show Latest supported, 14.50.35717, and 14.51.36231.":::

To use the MSVC Build Tools preview, set **Use MSVC Build Tools Preview** to **Yes**.

:::image type="content" source="media/acquire-msvc/project-properties-use-msvc-build-tools-preview.png" alt-text="Screenshot of C++ project property pages > General with the Use MSVC Build Tools Preview property set to Yes.":::

Save these property changes to your `.vcxproj` file. Later builds from the Visual Studio IDE or command line use the saved project settings.

### MSBuild command line

To build with a supported MSVC version from a Visual Studio Command Prompt, add `/p:VCToolsVersion=<version>`. For example:

```cmd
msbuild /p:Platform=<platform> /p:Configuration=<configuration> <your-vcxproj> /p:VCToolsVersion=14.50.35717
```

`<version>` matches the folder name under `<vs-install-dir>\VC\Tools\MSVC\<version>`.

To build with the MSVC preview tools, add `/p:MSVCPreviewEnabled=true`:

```cmd
msbuild /p:Platform=<platform> /p:Configuration=<configuration> <your-vcxproj> /p:MSVCPreviewEnabled=true
```

### CMake

Configure CMake with the `-T "version=<version-substring>"` toolset argument. For example:

```cmd
cmake -G "Visual Studio 18 2026" -T "version=14.50" ..\
cmake -G "Visual Studio 18 2026" -T "version=14.51" ..\
cmake -G "Visual Studio 18 2026" -T "version=14.52" ..\
```

### Visual Studio Command Prompt

Some build systems need the command prompt to have the `PATH`, `LIB`, `INCLUDE`, and related environment variables set before you run them.

To start a Visual Studio Command Prompt that targets a supported Build Tools version, add `-vcvars_ver=<version>` where `<version>` matches the folder name under `<vs-install-dir>\VC\Tools\MSVC\<version>`.

```cmd
<vs-install-dir>\VC\Auxiliary\Build\vcvars64.bat -vcvars_ver=14.50.35717
```

To start a Visual Studio Command Prompt targeting the MSVC preview tools, use `-vcvars_ver=preview`:

```cmd
<vs-install-dir>\VC\Auxiliary\Build\vcvars64.bat -vcvars_ver=preview
```

## Uninstall MSVC

To uninstall Visual Studio by using the Installer UI, select **More** > **Uninstall**.

:::image type="content" source="media/acquire-msvc/installer-more-menu-uninstall.png" alt-text="Screenshot of the Visual Studio Installer Installed tab showing the More menu expanded with the Uninstall command highlighted.":::

To uninstall Visual Studio from the command line, use any version of the Visual Studio installer:

```cmd
.\vs_enterprise.exe uninstall --passive --installPath <vs-install-dir>
```

## See also

- [What's new for MSVC Build Tools](what-s-new-for-msvc.md)
- [Microsoft C++ (MSVC) compiler versioning](compiler-versions.md)
- [Install C and C++ support in Visual Studio](../build/vscpp-step-0-installation.md)
- [Visual Studio Enterprise component directory](/visualstudio/install/workload-component-id-vs-enterprise)
- [Visual Studio Build Tools component directory](/visualstudio/install/workload-component-id-vs-build-tools)
- [Use command-line parameters to install, update, and manage Visual Studio](/visualstudio/install/use-command-line-parameters-to-install-visual-studio)
