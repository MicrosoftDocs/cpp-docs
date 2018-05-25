// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.ButtonGroup
{
    static class GuidList
    {
        public const string guidButtonGroupPkgString = "54bd8472-ad28-4211-8dd0-250ead07ed41";
        public const string guidButtonGroupCmdSetString = "f69209e9-975a-4543-821d-1f4a2c52d737";

        public static readonly Guid guidButtonGroupCmdSet = new Guid(guidButtonGroupCmdSetString);
    };
}