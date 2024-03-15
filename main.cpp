#include <iostream>

void TrimRight(char *s)
{
    char *temp = s;
    while (*s) {
        if (*s != ' ') {
            temp = s;
        }
        s++;
    }
    if (*temp != ' ') {
        temp++;
    }
    *temp = '\0';
}

int main() {
    char c[] = "Hello Wordl              ";
    TrimRight(c);
    std::cout << c << "\n";
}
