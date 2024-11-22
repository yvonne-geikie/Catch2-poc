// src/String.h
#ifndef STRING_H
#define STRING_H

#include <cstring> // For strcmp
#include <cstdlib> // For malloc/free

class String {
public:
    String(const char* str = "") {
        size_ = strlen(str);
        data_ = (char*)malloc(size_ + 1);
        strcpy(data_, str);
    }

    ~String() {
        free(data_);
    }

    const char* c_str() const {
        return data_;
    }

private:
    char* data_;
    size_t size_;
};

#endif // STRING_H