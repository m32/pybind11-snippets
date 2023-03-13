#include <stdlib.h>

class Test {
public:
    Test(){
        printf("constructor::foo()\n");
    }
    wchar_t *cproc(char *arg) {
        printf("foo:cproc(%s)\n", arg);
        return L"ola";
    }
};
