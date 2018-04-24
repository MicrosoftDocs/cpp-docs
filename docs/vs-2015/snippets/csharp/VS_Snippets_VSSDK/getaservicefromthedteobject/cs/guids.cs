// Guids.cs
// MUST match guids.h
using System;

namespace Company.GetAServiceFromTheDTEObject
{
    static class GuidList
    {
        public const string guidGetAServiceFromTheDTEObjectPkgString = "c62eef54-049f-4ff9-b350-a2dbae41780b";
        public const string guidGetAServiceFromTheDTEObjectCmdSetString = "1e83681a-7419-490a-8e84-090d85c65bfb";

        public static readonly Guid guidGetAServiceFromTheDTEObjectCmdSet = new Guid(guidGetAServiceFromTheDTEObjectCmdSetString);
    };
}