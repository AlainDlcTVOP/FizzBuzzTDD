#include <unity.h>
#include "../lib/fizz.h"


void setUp(void) {}
void tearDown(void) {}

void fizzNumber_true(void)
{
    TEST_ASSERT_TRUE(fizzbuzz(22));
    TEST_ASSERT_FALSE(fizzbuzz(fizz));
}

void runAllTests()
{  
    RUN_TEST(fizzNumber_true);
}
int main()
{
    UNITY_BEGIN();
    runAllTests();
    return UNITY_END();
}