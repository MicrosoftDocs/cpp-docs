// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.MenuText
{
    static class GuidList
    {
        public const string guidMenuTextPkgString = "b1253bc6-d266-402b-89e7-5e3d3b22c746";
        public const string guidMenuTextCmdSetString = "a633d4e4-6c65-4436-a138-1abeba7c9a69";

        public static readonly Guid guidMenuTextCmdSet = new Guid(guidMenuTextCmdSetString);
    };
}