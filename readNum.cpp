//
// Created by FanBig on 2023/3/18.
//

#include "readNum.h"

double readNum::readNUmber(std::string suffix) {
    int index;
    int dotIndex;
    int arr[10] = {1};
    double result = 0;
    std::string str;

    for (int i = 0; i < suffix.length(); ++i) {
        arr[i + 1] = arr[i] * 10;
    }

    for (int i = 0; i < suffix.length(); ++i) {
        if (std::isdigit(suffix[i])) {
            index = i;
            while (index < suffix.length() && (std::isdigit(suffix[index]) || suffix[index] == '.')) {
                if (suffix[i] == '.') {
                    dotIndex = i;
                }
                str += suffix[index];
                index++;
            }
        }
    }

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '.') {
            break;
        } else {
            result += arr[dotIndex - i - 1] * int(str[i] - '0');
        }
    }

    return result;
}