// Guids.cs
// MUST match guids.h
using System;

namespace Company.ItemConfigurationCS
{
    static class GuidList
    {
        public const string guidItemConfigurationPkgString = "83f2a7cc-e797-49ca-b257-68e5c16c4326";
        public const string guidItemConfigurationCmdSetString = "890fc186-daf1-42b8-8906-85e22adfb533";

        public static readonly Guid guidItemConfigurationCmdSet = new Guid(guidItemConfigurationCmdSetString);
    };
}