#include <stdio.h>

enum ExplicitValues {
    TEN = 10,
    ELEVEN,
    TWENTY = 20,
    TWENTY_ONE
};

int main() {
    printf("TEN: %d\n", TEN);
    printf("ELEVEN: %d\n", ELEVEN);
    printf("TWENTY: %d\n", TWENTY);
    printf("TWENTY_ONE: %d\n", TWENTY_ONE);
    return 0;
}