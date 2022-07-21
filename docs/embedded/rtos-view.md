---
title: "RTOS Object Views"
ms.date: "07/12/2022"
description: "RTOS View that allows users to view RTOS data of their application."
author: gcampbell-msft
ms.author: gcampbell
monikerRange: '>=msvc-170'
---
# RTOS (Real time operating system) Object View

## Overview

The RTOS Object View allows users to view various components of an RTOS while debugging their application.

# [Visual Studio](#tab/visual-studio)

![RTOS View in VS](media/rtos-threads.png)

# [Visual Studio Code](#tab/visual-studio-code)

![RTOS View in VSCode](media/rtos-threads-vscode.png)

---

## Supported RTOSes and their supported object types

- ThreadX
  - All of the types listed in **Available object types**
- FreeRTOS
  - Threads
  - Queues
- Zephyr
  - All of the types listed in **Available object types**

### Available object types

- Block Pools
- Byte Pools
- Event Flag Groups
- Mutexes
- Queues
- Semaphores
- Threads
- Timers

## Usage

Use the RTOS Object View to:

- Access memory locations of various objects.
- Access thread variables or various objects in the Watch view.

Use the arrow keys to select objects within the view. Use the **Enter** key to navigate to the linked content.
