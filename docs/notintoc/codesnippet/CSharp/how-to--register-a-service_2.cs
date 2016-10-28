    [Guid("fafafdfb-60f3-47e4-b38c-1bae05b44240")]
    public interface SMyGlobalService { }

    [Guid("ba9fe7a3-e216-424e-87f9-dee001228d03")]
    [ComVisible(true)]
    public interface IMyGlobalService
    {
        void GlobalServiceFunction();
        int CallLocalService();
    }