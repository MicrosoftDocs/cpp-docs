// Step Into and Step Over Example.
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        ProcessAsync().Wait();
    }

    static async Task ProcessAsync()
    {
        var result = await DoSomethingAsync();  // Step Into or Step Over from here

        int y = 0;
    }

    static async Task<int> DoSomethingAsync()
    {
        await Task.Delay(1000);
        return 5;
    }
}