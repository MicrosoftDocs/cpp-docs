---
title: "Serial Monitor"
ms.date: "07/12/2022"
description: "Serial Monitor allows users to configure, monitor, and communicate with serial ports."
author: gcampbell-msft
ms.author: gcampbell
monikerRange: '>=msvc-170'
---
# Serial Monitor

## Overview

The Serial Monitor allows users to configure, monitor, and communicate with serial ports.

# [Visual Studio](#tab/visual-studio)

![Serial Monitor in VS](media/serial-monitor.png)

# [Visual Studio Code](#tab/visual-studio-code)

![Serial Monitor in VSCode](media/serial-monitor-vscode.png)

---

## Capabilities

- **Monitor a serial port**: Choose the **Start Monitoring** or **Stop Monitoring** button to control whether to monitor data coming from the port.
- **Send data to a serial port**: Enter text into the text field at the bottom of the view. Use the **Enter** key or choose the **Send Message** button to send the data.
- **Clear the Serial Monitor output**: Choose the **Clear Output** button to clear the incoming data text field.
- **Configure Serial Monitor and port connection settings**: See the following table to learn about the settings that the Serial Monitor provides.

## Configurable settings

| Settings | Description | Usage | Available options |
|--|--|--|--|
| **Port** | Ports that are actively connected to a device | Use the **Port** dropdown | Serial port compatible devices connected to the machine |
| **Baud Rate** | Frequency at which the monitor attempts to communicate with the connected device | Use the **Baud Rate** dropdown | 300, 1200, 2400, 4800, 9600, 19200, 38400, 57600, 74880, 115200, 230000, 250000 |
| **Line ending** | The line ending to use in messages sent to the connected device | Use the **Line Ending** dropdown | None, LF, CR, CRLF |
| **Timestamp** | Adds timestamps to the output of data received from the connected port | Use the **timestamp** toggle button | On/Off |
| **Auto-scroll** | Whether to auto-scroll new content that comes from the connected port | Use the **auto-scroll** toggle button | On/Off |
