// main.c

double x[5];
 
int main() { 
    int rc = (int) x[5];  // Boom!
    return rc; 
}
