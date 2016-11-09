// Step Out Example.
using System.Diagnostics;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        ProcessAsync().Wait();
    }

    static async Task ProcessAsync()
    {
        var theTask = DoSomethingAsync();
        int z = 0;
        var result = await theTask;
    }

    static async Task<int> DoSomethingAsync()
    {
        Debug.WriteLine("before");  // Step Out from here
        await Task.Delay(1000);
        Debug.WriteLine("after");
        return 5;
    }
}