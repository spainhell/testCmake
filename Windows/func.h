//
// Created by spanhel on 2/1/24.
//

#ifndef TESTCMAKE_FUNC_H
#define TESTCMAKE_FUNC_H

#if defined _WIN32 || defined __CYGWIN__
#define API_EXPORT __declspec(dllexport)
#else
#define API_EXPORT __attribute__((visibility("default")))
#endif

API_EXPORT void myPrint();
API_EXPORT std::string getOsName();

#endif //TESTCMAKE_FUNC_H
