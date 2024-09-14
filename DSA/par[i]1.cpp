#include <iostream>
using namespace std;

int main() {
    char ch[] = "hello world. its cpp. this is very good. i dont like it";
    char *p;
    p = ch;

    for (int j = 0; ch[j] != '\0'; j++) {
        cout << "Character: " << p[j] << " Address: " << &p[j] << endl;
    }

    return 0;
}
