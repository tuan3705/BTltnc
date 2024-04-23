#include<bits/stdc++.h>
using namespace std;
int strlen1(const char a[]) {
    int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    return length;
}

char* reverse(const char a[]) {
    int length = strlen(a);
    char* result = new char[length + 1];
    for (int i = 0; i < length; i++) {
        result[i] = a[length - i - 1];
    }
    result[length] = '\0';
    return result;
}

char* delete_char(const char a[], char c) {
    int length = strlen(a);
    char* result = new char[length + 1];
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (a[i] != c) {
            result[j++] = a[i];
        }
    }
    result[j] = '\0';
    return result;
}

char* pad_right(const char a[], int n) {
    int length = strlen(a);
    char* result = new char[n + 1];
    strcpy(result, a);
    if (length < n) {
        for (int i = length; i < n; i++) {
            result[i] = ' ';
        }
        result[n] = '\0';
    }
    return result;
}

char* pad_left(const char a[], int n) {
    int length = strlen(a);
    char* result = new char[n + 1];
    if (length < n) {
        int spaces = n - length;
        for (int i = 0; i < spaces; i++) {
            result[i] = ' ';
        }
        strcpy(result + spaces, a);
    } else {
        strcpy(result, a);
    }
    return result;
}

char* truncate(const char a[], int n) {
    int length = strlen(a);
    char* result = new char[n + 1];
    if (length > n) {
        strncpy(result, a, n);
        result[n] = '\0';
    } else {
        strcpy(result, a);
    }
    return result;
}
char* trim_left(const char a[]) {
    int length = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        i++;
    }
    return strdup(a + i);
}
char* trim_right(const char a[]) {
    int length = strlen(a);
    int i = length - 1;
    while (a[i] == ' ' && i >= 0) {
        i--;
    }
    char* result = new char[i + 2];
    strncpy(result, a, i + 1);
    result[i + 1] = '\0';
    return result;
}
int main() {
    const char str[] = " Hello, World! ";
    cout << str <<endl;
    char* reversed = reverse(str);
    cout << reversed << endl;
    char* deleted = delete_char(str, 'o');
    cout << deleted << endl;
    char* padded_right = pad_right(str, 20);
    cout <<padded_right <<endl;
    char* padded_left = pad_left(str, 25);
    cout <<padded_left << endl;
    char* truncated = truncate(str, 10);
    cout << truncated << endl;
    char* trimmed_left = trim_left(str);
    cout << trimmed_left << endl;
    char* trimmed_right = trim_right(str);
    cout <<trimmed_right << endl;
    return 0;
}

