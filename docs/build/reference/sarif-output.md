---
description: "How to make the compiler output diagnostics as structured SARIF"
title: "Structured SARIF Diagnostics"
ms.date: "10/26/2023"
author: tartanllama
ms.author: sybrand
manager: mluparu
helpviewer_keywords: ["SARIF", "structured diagnostics"]
---

# Structured SARIF Diagnostics

The MSVC compiler can be made to output diagnostics as [SARIF](https://sarifweb.azurewebsites.net/) (Static Analysis Results Interchange Format). SARIF is a machine-readable JSON-based format.

There are two ways to make the MSVC compiler produce SARIF diagnostics:

- Pass the `/experimental:log` switch on the command line. See the [documentation for `/experimental:log`](experimental-log.md) for details.
- Launch `cl.exe` programmatically and set the `SARIF_OUTPUT_PIPE` environment variable to retrieve SARIF blocks through a pipe.

## Retrieving SARIF through a pipe

Tools that consume SARIF from the MSVC compiler while a compilation is in progress use a pipe. See the documentation for [`CreatePipe`](/windows/win32/api/namedpipeapi/nf-namedpipeapi-createpipe) for details about creating Windows pipes.

To retrieve SARIF through a pipe, set the `SARIF_OUTPUT_PIPE` environment variable to be the UTF-16-encoded integer representation of the `HANDLE` to the write end of the pipe, then launch `cl.exe`. SARIF is sent along the pipe as follows:

- When a new diagnostic is available, it is written to this pipe.
- Diagnostics are written to the pipe one-at-a-time rather than as an entire SARIF object. 
- Each diagnostic is represented by a [JSON-RPC 2.0](https://www.jsonrpc.org/) message of type [Notification](https://www.jsonrpc.org/specification#notification:~:text=as%20binary%20fractions.-,4.1%20Notification,-A%20Notification%20is). 
- The JSON-RPC message is prefixed with a `Content-Length` header with the form `Content-Length: <N>` followed by two newlines, where `<N>` is the length of the following JSON-RPC message in bytes. 
- The JSON-RPC message and header are both encoded in UTF-8. 
- This JSON-RPC-with-header format is compatible with [vs-streamjsonrpc](https://github.com/microsoft/vs-streamjsonrpc). 
- The method name for the JSON-RPC call is `OnSarifResult`. 
- The call has a single parameter that is encoded [by-name](https://www.jsonrpc.org/specification#parameter_structures) with the parameter name `result`. 
- The value of the argument is a single `result` object as specified by the [SARIF Version 2.1 standard](https://docs.oasis-open.org/sarif/sarif/v2.1.0/errata01/os/sarif-v2.1.0-errata01-os-complete.html#_Toc141790888).

### Example

Here's an example of a JSON-RPC SARIF result produced by `cl.exe`:

```json
Content-Length: 334

{"jsonrpc":"2.0","method":"OnSarifResult","params":{"result":{"ruleId":"C1034","level":"fatal","message":{"text":"iostream: no include path set"},"locations":[{"physicalLocation":{"artifactLocation":{"uri":"file:///C:/Users/sybrand/source/repos/cppcon-diag/cppcon-diag/cppcon-diag.cpp"},"region":{"startLine":1,"startColumn":10}}}]}}}{"jsonrpc":"2.0","method":"OnSarifResult","params":{"result":{"ruleId":"C1034","level":"fatal","message":{"text":"iostream: no include path set"},"locations":[{"physicalLocation":{"artifactLocation":{"uri":"file:///C:/Users/sybrand/source/repos/cppcon-diag/cppcon-diag/cppcon-diag.cpp"},"region":{"startLine":1,"startColumn":10}}}]}}}
```

## SARIF result data

The compiler outputs SARIF that may include additional information to represent the nested structure of some diagnostics. A diagnostic (represented by a `result` SARIF object) may contain a "diagnostic tree" of additional information in its `relatedLocations` field. This tree is encoded using a SARIF [property bag](https://docs.oasis-open.org/sarif/sarif/v2.1.0/errata01/os/sarif-v2.1.0-errata01-os-complete.html#_Toc141790698) as follows:

A `location` object's `properties` field may contain a `nestingLevel` property whose value is the depth of this location in the diagnostic tree. If a location doesn't have a `nestingLevel` specified, the depth is considered to be `0` and this location is a child of the root diagnostic represented by the `result` object containing it. Otherwise, if the value is greater than the depth of the location immediately preceding this location in the `relatedLocations` field, this location is a child of that location. Otherwise, this location is a sibling of the closest preceding `location` in the `relatedLocations` field with the same depth.

### Example

Consider the following code:

```cpp
struct dog {};
struct cat {};

void pet(dog);
void pet(cat);

struct lizard {};

int main() {
    pet(lizard{});
}
```

When this code is compiled, the compiler produces the following `result` object (`physicalLocation` properties have been removed for brevity):

```json
{
    "ruleId": "C2665",
    "level": "error",
    "message": {
        "text": "'pet': no overloaded function could convert all the argument types"
    },
    "relatedLocations": [
        {
            "id": 0,
            "message": {
                "text": "could be 'void pet(cat)'"
            }
        },
        {
            "id": 1,
            "message": {
                "text": "'void pet(cat)': cannot convert argument 1 from 'lizard' to 'cat'"
            },
            "properties": {
                "nestingLevel": 1
            }
        },
        {
            "id": 2,
            "message": {
                "text": "No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called"
            },
            "properties": {
                "nestingLevel": 2
            }
        },
        {
            "id": 3,
            "message": {
                "text": "or       'void pet(dog)'"
            }
        },
        {
            "id": 4,
            "message": {
                "text": "'void pet(dog)': cannot convert argument 1 from 'lizard' to 'dog'"
            },
            "properties": {
                "nestingLevel": 1
            }
        },
        {
            "id": 5,
            "message": {
                "text": "No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called"
            },
            "properties": {
                "nestingLevel": 2
            }
        },
        {
            "id": 6,
            "message": {
                "text": "while trying to match the argument list '(lizard)'"
            }
        }
    ]
}
```

The logical diagnostics tree produced from the messages in this `result` object is:

- 'pet': no overloaded function could convert all the argument types
    - could be 'void pet(cat)'
        - 'void pet(cat)': cannot convert argument 1 from 'lizard' to 'cat
            - No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called
    - or       'void pet(dog)'
        - 'void pet(dog)': cannot convert argument 1 from 'lizard' to 'dog'
            - No user-defined-conversion operator available that can perform this conversion, or the operator cannot be called
    - while trying to match the argument list '(lizard)'

## See also

[`/experimental:log` (Enable structured SARIF diagnostics)](experimental-log.md)