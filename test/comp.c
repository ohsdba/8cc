#include "test/test.h"

void testmain() {
    print("comparison operators");

    expect(1, 1 < 2);
    expect(0, 2 < 1);
    expect(1, 1 == 1);
    expect(0, 1 == 2);

    expect(1, 1 <= 2);
    expect(1, 2 <= 2);
    expect(0, 2 <= 1);

    expect(0, 1 >= 2);
    expect(1, 2 >= 2);
    expect(1, 2 >= 1);
}
