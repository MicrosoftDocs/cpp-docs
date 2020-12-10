---
description: "Learn more about: Install and configure tools to build using iOS"
title: "Install and configure tools to build using iOS"
ms.date: "10/17/2019"
ms.assetid: d0c311c9-9eb9-42c5-ba07-25604362cd28
---
# Install and configure tools to build using iOS

You can use Visual Studio with the cross-platform **Mobile development with C++** tools to edit, debug, and deploy iOS code to the iOS Simulator or to an iOS device. But, because of licensing restrictions, the code must be built and run remotely on a Mac. To build and run iOS apps using Visual Studio, you need to set up and configure the remote agent, [vcremote](https://www.npmjs.com/package/vcremote), on your Mac. The remote agent handles build requests from Visual Studio and runs the app on an iOS device connected to the Mac, or in the iOS Simulator on the Mac.

> [!NOTE]
> For information on using cloud-hosted Mac services instead of a Mac, see [Configure Visual Studio to connect to your cloud hosted Mac](/visualstudio/cross-platform/tools-for-cordova/tips-workarounds/host-a-mac-in-the-cloud?view=toolsforcordova-2017&preserve-view=true#configure-visual-studio-to-connect-to-your-cloud-hosted-mac). The instructions are for building using Visual Studio Tools for Apache Cordova. To use the instructions to build using C++, substitute `vcremote` for `remotebuild`.

Once you have installed the tools to build using iOS, refer to this article for ways to quickly configure and update the remote agent for iOS development in Visual Studio and on your Mac.

## Prerequisites

To install and use the remote agent to develop code for iOS, you must first have these prerequisites:

- A Mac computer running macOS Mojave version 10.14 or later

- An [Apple ID](https://appleid.apple.com/)

- An active [Apple Developer Program](https://developer.apple.com/programs/) account

   You can get a free account that allows sideloading apps to an iOS device for testing only but not for distribution.

- [Xcode](https://developer.apple.com/xcode/downloads/) version 10.2.1 or later

   Xcode can be downloaded from the App Store.

- Xcode command-line tools

   To install the Xcode command-line tools, open the Terminal app on your Mac and enter the following command:

   `xcode-select --install`

- An Apple ID account configured in Xcode as a signing identity to sign apps

   To see or set your signing identity in Xcode, open the **Xcode** menu and choose **Preferences**. Select **Accounts** and choose your Apple ID, and then choose the **View Details** button. See [Add your Apple ID account](https://help.apple.com/xcode/mac/current/#/devaf282080a) for detailed instructions.

   For detailed information on signing requirements, see [What is app signing](https://help.apple.com/xcode/mac/current/#/dev3a05256b8).

- If you are using an iOS device for development, a provisioning Profile configured in Xcode for your device

   Xcode provides automatic signing where it creates signing certificates for you as needed. For detailed information about Xcode automatic signing see [automatic signing](https://help.apple.com/xcode/mac/current/#/dev80cc24546).

   If you want to do manual signing, you need to create a provisioning Profile for your app. For detailed information on creating provisioning Profiles, see [Create a development provisioning profile](https://help.apple.com/developer-account/#/devf2eb157f8).

- [Node.js](https://nodejs.org/) version 12.14.1 and npm version 6.13.4

   Install version 12.14.1 of Node.js on your Mac. If you install the Node.js package, it should come with npm version 6.13.4. Other versions of Node.js and npm may not support some modules used in the remote agent `vcremote`, which can cause `vcremote` installation to fail. We recommend you install Node.js by using a package manager such as [Node Version Manager](https://nodejs.org/en/download/package-manager/#nvm). Avoid using the command `sudo` to install Node.js, as some modules can fail to install when using `sudo`.

## <a name="Install"></a> Install the remote agent for iOS

When you install the Mobile development with C++ workload, Visual Studio can communicate with [vcremote](https://www.npmjs.com/package/vcremote), a remote agent running on your Mac to transfer files, build and run your iOS app, and send debugging commands.

Before you install the remote agent, make sure you have satisfied the [Prerequisites](#prerequisites) and completed the installation steps in [Install cross-platform mobile development with C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md#install-the-tools).

### <a name="DownloadInstall"></a> To download and install the remote agent

- From the Terminal app on your Mac, verify that the Node.js version currently in use is the required version 12.14.1. To verify the version, run the command:

  `node -v`
  
  If it's not the right version, you may need to follow the Node.js installation instructions in the prerequisites. Then, restart Node.js.

- After verifying the required Node.js is in use, run this command to install vcremote under that Node.js version:

   `npm install -g --unsafe-perm vcremote`

   The global installation (**-g**) switch is recommended, but not required. If you don't use the global installation switch, vcremote gets installed under the current active path in the Terminal app.

   During the installation, `vcremote` is installed and developer mode is activated on your Mac. [Homebrew](https://brew.sh/) and two npm packages, `vcremote-lib` and `vcremote-utils`, are also installed. When installation completes, it's safe to ignore any warnings about skipped optional dependencies.

   > [!NOTE]
   > To install Homebrew, you must have sudo (administrator) access. If you need to install `vcremote` without sudo, you can install Homebrew manually in a usr/local location and add its bin folder to your path. For more information, see the [Homebrew documentation](https://github.com/Homebrew/homebrew/wiki/Installation). To manually enable developer mode, enter this command in the Terminal app: `DevToolsSecurity -enable`

If you update to a new version of Visual Studio, you must update to the current version of the remote agent as well. To update the remote agent, repeat the steps to download and install the remote agent.

## <a name="Start"></a> Start the remote agent

The remote agent must be running for Visual Studio to build and run your iOS code. Visual Studio must be paired with the remote agent before it can communicate. By default, the remote agent runs in secured connection mode, which requires a PIN to pair with Visual Studio.

### <a name="RemoteAgentStartServer"></a> To start the remote agent

- From the Terminal app on your Mac, enter:

   `vcremote`

   This command starts the remote agent with a default build directory of `~/vcremote`. For additional configuration options, see [Configure the remote agent on the Mac](#ConfigureMac).

The first time you start the agent, and every time you create a new client certificate, you are provided with the required information to configure the agent in Visual Studio, including the host name, the port, and the PIN.

![Use vcremote to generate a secure PIN](../cross-platform/media/cppmdd-vcremote-generateclientcert.png "Use vcremote to generate a secure PIN")

If you intend to configure the remote agent in Visual Studio using the host name, ping the Mac from Windows using the host name to verify that it is reachable. Otherwise, you may need to use the IP address instead.

The generated PIN is for one time use, and is only valid for a limited time. If you do not pair Visual Studio with the remote agent before the time expires, you will need to generate a new PIN. For more information, see [Generate a new security PIN](#GeneratePIN).

You can use the remote agent in unsecured mode. In unsecured mode, the remote agent can be paired to Visual Studio without a PIN.

#### To disable secured connection mode

- To disable secured connection mode in `vcremote`, enter this command in the Terminal app on your Mac:

   `vcremote --secure false`

#### To enable secured connection mode

- To enable secured connection mode, enter this command:

   `vcremote --secure true`

Once you have started the remote agent, you can use it from Visual Studio until you stop it.

#### To stop the remote agent

- In the Terminal window `vcremote` is running in, enter **Control**+**C**.

## <a name="ConfigureVS"></a> Configure the remote agent in Visual Studio

To connect to the remote agent from Visual Studio, you must specify the remote configuration in the Visual Studio options.

### To configure the remote agent from Visual Studio

1. If the agent is not already running on your Mac, follow the steps in [Start the remote agent](#Start). Your Mac must be running `vcremote` for Visual Studio to successfully pair, connect, and build your project.

1. On your Mac, get the host name or IP address of your Mac.

   You can get the IP address by using the **ifconfig** command in a Terminal window. Use the inet address listed under the active network interface.

1. On the Visual Studio menu bar, choose **Tools**, **Options**.

1. In the **Options** dialog box, expand **Cross Platform**, **C++**, **iOS**.

1. In the **Host Name** and **Port** fields, enter the values specified by the remote agent when you started it. The host name can be the DNS name or IP address of your Mac. The default port is 3030.

   > [!NOTE]
   > If you cannot ping the Mac using the host name, you may need to use the IP address.

1. If you use the remote agent in the default secured connection mode, check the **Secure** checkbox, then enter the PIN value specified by the remote agent in the **Pin** field. If you use the remote agent in unsecured connection mode, clear the **Secure** checkbox and leave the **Pin** field blank.

1. Choose **Pair** to enable the pairing.

   ![Configure vcremote connection for iOS builds](../cross-platform/media/cppmdd-options-ios.png "Configure vcremote connection for iOS builds")

   The pairing persists until you change the host name or port. If you change the host name or port in the **Options** dialog box, to undo the change, choose the **Revert** button to revert to the previous pairing.

   If the pairing does not succeed, verify that the remote agent is running by following the steps in [Start the remote agent](#Start). If too much time has passed since the remote agent PIN was generated, follow the steps in [Generate a new security PIN](#GeneratePIN) on the Mac and then try again. If you are using the host name of your Mac, try using the IP address in the **Host Name** field instead.

1. Update the folder name in the **Remote Root** field to specify the folder used by the remote agent in your home (*~*) directory on the Mac. By default, the remote agent uses `/Users/<username>/vcremote` as the remote root.

1. Choose **OK** to save the remote pairing connection settings.

Visual Studio uses the same information to connect to the remote agent on your Mac each time you use it. You do not need to pair Visual Studio with the remote agent again unless you generate a new security certificate on your Mac, or its hostname or IP address changes.

## <a name="GeneratePIN"></a> Generate a new security PIN

When you start the remote agent the first time, the generated PIN is valid for a limited amount of time—by default, 10 minutes. If you don't pair Visual Studio to the remote agent before the time expires, you will need to generate a new PIN.

### To generate a new PIN

1. Stop the agent, or open a second Terminal app window on your Mac and use that to enter the command.

1. Enter this command in the Terminal app:

   `vcremote generateClientCert`

   The remote agent generates a new temporary PIN. To pair Visual Studio by using the new PIN, repeat the steps in [Configure the remote agent in Visual Studio](#ConfigureVS).

## <a name="GenerateCert"></a> Generate a new server certificate

For security purposes, the server certificates that pair Visual Studio with the remote agent are tied to the IP address or host name of your Mac. If these values change, you must generate a new server certificate, and then reconfigure Visual Studio with the new values.

### To generate a new server certificate

1. Stop the `vcremote` agent.

1. Enter this command in the Terminal app:

   `vcremote resetServerCert`

1. When prompted for confirmation, enter `Y`.

1. Enter this command in the Terminal app:

   `vcremote generateClientCert`

   This command generates a new temporary PIN.

1. To pair Visual Studio by using the new PIN, repeat the steps in [Configure the remote agent in Visual Studio](#ConfigureVS).

## <a name="ConfigureMac"></a> Configure the remote agent on the Mac

You can configure the remote agent using various command-line options. For example, you can specify the port to listen for build requests and specify the maximum number of builds to maintain on the file system. By default, the limit is 10 builds. The remote agent will remove builds that exceed the maximum on shutdown.

### To configure the remote agent

- To see a complete list of remote agent commands, in the Terminal app, enter:

   `vcremote --help`

- To disable secure mode and enable simple HTTP-based connections, enter:

   `vcremote --secure false`

   When you use this option, clear the **Secure** checkbox and leave the **Pin** field blank when configuring the agent in Visual Studio.

- To specify a location for remote agent files, enter:

   `vcremote --serverDir directory_path`

   where *directory_path* is the location on your Mac to place log files, builds, and server certificates. By default, this location is `/Users/<username>/vcremote`. Builds are organized by build number in this location.

- To use a background process to capture `stdout` and `stderr` to a file named server.log, enter:

   `vcremote > server.log 2>&1 &`

   The server.log file can assist in troubleshooting build issues.

- To run the agent by using a configuration file instead of command-line parameters, enter:

   `vcremote --config config_file_path`

   where *config_file_path* is the path to a configuration file in JSON format. The startup options and their values must not include dashes.

## Troubleshoot the remote agent

### Debugging on an iOS device

If debugging on an iOS device does not work, there could be issues with the tool [ideviceinstaller](https://github.com/libimobiledevice/ideviceinstaller), which is used to communicate with an iOS device. This tool is typically installed from Homebrew during the installation of `vcremote`. Follow the steps below as a workaround.

Open the Terminal app and update `ideviceinstaller` and its dependencies by running the following commands in order:

1. Ensure Homebrew is updated

   `brew update`

1. Uninstall `libimobiledevice` and `usbmuxd`

   `brew uninstall --ignore-dependencies libimobiledevice`

   `brew uninstall --ignore-dependencies usbmuxd`

1. Install the latest version of `libimobiledevice` and `usbmuxd`

   `brew install --HEAD usbmuxd`

   `brew unlink usbmuxd`

   `brew link usbmuxd`

   `brew install --HEAD libimobiledevice`

1. Uninstall and reinstall `ideviceinstaller`

   `brew uninstall ideviceinstaller`

   `brew install ideviceinstaller`

Verify that `ideviceinstaller` can communicate with the device by trying to list the apps installed on the device:

`ideviceinstaller -l`

If `ideviceinstaller` errors that it cannot access the folder `/var/db/lockdown`, change the privilege on the folder with:

`sudo chmod 777 /var/db/lockdown`

Then verify again if `ideviceinstaller` can communicate with the device.

## See also

- [Install cross-platform mobile development with C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md)
