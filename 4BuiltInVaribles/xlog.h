//xlog.h

#ifndef XLOG_H
#define XLOG_H



#ifdef _WIN32 //WIN32环境
    #ifdef xlog_STATIC //如果是静态库 XLOG_STATIC为用户定义
        #define XCPP_API //不需要导出导入
    #else
        #ifdef xlog_EXPORTS //需要导出(动态库) -- 动态库时,CMake会自动生成xx_EXPORTS变量
            #define XCPP_API _declspec(dllexport)
        #else  //否则导入
            #define XCPP_API _declspec(dllimport)
        #endif
    #endif
#else  //linux mac环境
    #define XCPP_API //非WIN32环境则为空
#endif


class XCPP_API Xlog{
    public:
       Xlog();
};
#endif
