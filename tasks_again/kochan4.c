int main(void)
{
    long int fact = 1;
    for ( int counter = 1; counter <= 10; ++counter) {
        fact = 1;
    for( int i = 1; i <= counter; ++i) {
        fact = i * fact;
    }
    printf ("factoreal %i = %li\n", counter, fact);
    }  
}
