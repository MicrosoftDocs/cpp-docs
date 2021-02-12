#include <Windows.h>

int ExternalAlign = 5;

int main(){

    // this externally calculated alignment of 5 is not valid.

    void* ptr = _aligned_malloc(8,ExternalAlign); 
    return (ptr == nullptr && errno == EINVAL) ? 0 : -1;
}
