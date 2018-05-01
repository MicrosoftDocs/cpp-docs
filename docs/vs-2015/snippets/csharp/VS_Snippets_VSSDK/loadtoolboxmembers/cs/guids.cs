// Guids.cs
// MUST match guids.h
using System;

namespace Company.LoadToolboxMembersCS
{
    static class GuidList
    {
        public const string guidLoadToolboxMembersPkgString = "ef8fefaa-9cbe-4d74-87cb-b760026804d3";
        public const string guidLoadToolboxMembersCmdSetString = "60fa1fa4-8c2e-41b5-abdf-28dcc6a63774";

        public static readonly Guid guidLoadToolboxMembersCmdSet = new Guid(guidLoadToolboxMembersCmdSetString);
    };
}