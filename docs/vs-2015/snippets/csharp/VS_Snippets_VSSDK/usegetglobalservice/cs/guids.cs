// Guids.cs
// MUST match guids.h
using System;

namespace Company.GetGlobalService
{
    static class GuidList
    {
        public const string guidGetGlobalServicePkgString = "250670fa-4fca-4bdf-9e43-9121346415a1";
        public const string guidGetGlobalServiceCmdSetString = "f1c8a491-2a73-4546-a956-63ef4b5b4141";

        public static readonly Guid guidGetGlobalServiceCmdSet = new Guid(guidGetGlobalServiceCmdSetString);
    };
}