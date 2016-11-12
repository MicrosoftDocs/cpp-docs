// Breakpoints to show control flow.
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Task theTask = ProcessAsync();
        int x = 0;  // set breakpoint
        theTask.Wait();
    }

    static async Task ProcessAsync()
    {
        var result = await DoSomethingAsync();  // set breakpoint

        int y = 0;  // set breakpoint
    }

    static async Task<int> DoSomethingAsync()
    {
        await Task.Delay(1000);
        return 5;
    }
}